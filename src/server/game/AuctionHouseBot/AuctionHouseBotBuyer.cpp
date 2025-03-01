/*
 * This file is part of the TrinityCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "AuctionHouseBotBuyer.h"
#include "DatabaseEnv.h"
#include "GameTime.h"
#include "Item.h"
#include "ItemTemplate.h"
#include "Log.h"
#include "Random.h"

AuctionBotBuyer::AuctionBotBuyer(std::unordered_map<ObjectGuid::LowType, uint64> const& marketData) : _checkInterval(20 * MINUTE), _marketData(marketData)
{
    // Define faction for our main data class.
    for (int i = 0; i < MAX_AUCTION_HOUSE_TYPE; ++i)
        _houseConfig[i].Initialize(AuctionHouseType(i));
}

AuctionBotBuyer::~AuctionBotBuyer()
{
}

bool AuctionBotBuyer::Initialize()
{
    LoadConfig();

    bool activeHouse = false;
    for (int i = 0; i < MAX_AUCTION_HOUSE_TYPE; ++i)
    {
        if (_houseConfig[i].BuyerEnabled)
        {
            activeHouse = true;
            break;
        }
    }

    if (!activeHouse)
        return false;

    // load Check interval
    _checkInterval = sAuctionBotConfig->GetConfig(CONFIG_AHBOT_BUYER_RECHECK_INTERVAL) * MINUTE;
    TC_LOG_DEBUG("ahbot", "AHBot buyer interval is %u minutes", _checkInterval / MINUTE);
    return true;
}

void AuctionBotBuyer::LoadConfig()
{
    for (int i = 0; i < MAX_AUCTION_HOUSE_TYPE; ++i)
    {
        _houseConfig[i].BuyerEnabled = sAuctionBotConfig->GetConfigBuyerEnabled(AuctionHouseType(i));
        if (_houseConfig[i].BuyerEnabled)
            LoadBuyerValues(_houseConfig[i]);
    }
}

void AuctionBotBuyer::LoadBuyerValues(BuyerConfiguration& /* config */)
{

}

// Makes an AHbot buyer cycle for AH type if necessary
bool AuctionBotBuyer::Update(AuctionHouseType houseType)
{
    if (!sAuctionBotConfig->GetConfigBuyerEnabled(houseType))
        return false;

    TC_LOG_DEBUG("ahbot", "AHBot: %s buying ...", AuctionBotConfig::GetHouseTypeName(houseType));

    BuyerConfiguration& config = _houseConfig[houseType];
    uint32 eligibleItems = GetItemInformation(config);
    if (eligibleItems)
    {
        // Prepare list of items to bid or buy - remove old items
        PrepareListOfEntry(config);
        // Process buying and bidding items
        BuyAndBidItems(config);
    }

    return true;
}

// Collects information about item counts and minimum prices to SameItemInfo and updates EligibleItems - a list with new items eligible for bot to buy and bid
// Returns count of items in AH that were eligible for being bought or bidded on by ahbot buyer (EligibleItems size)
uint32 AuctionBotBuyer::GetItemInformation(BuyerConfiguration& config)
{
    config.SameItemInfo.clear();
    time_t now = GameTime::GetGameTime();
    uint32 count = 0;

    AuctionHouseObject* house = sAuctionMgr->GetAuctionsById(sAuctionBotConfig->GetAuctionHouseId(config.GetHouseType()));
    for (auto itr = house->GetAuctionsBegin(); itr != house->GetAuctionsEnd(); ++itr)
    {
        AuctionPosting* entry = &itr->second;

        if (entry->Owner.IsEmpty() || sAuctionBotConfig->IsBotChar(entry->Owner))
            continue; // Skip auctions owned by AHBot

        BuyerItemInfo& itemInfo = config.SameItemInfo[entry->Item->GetEntry()];

        // Update item entry's count and total bid prices
        // This can be used later to determine the prices and chances to bid
        if (entry->MinBid)
        {
            uint32 itemBidPrice = entry->MinBid / entry->Item->GetCount();
            itemInfo.TotalBidPrice = itemInfo.TotalBidPrice + itemBidPrice;
            itemInfo.BidItemCount++;

            // Set minimum bid price
            if (!itemInfo.MinBidPrice)
                itemInfo.MinBidPrice = itemBidPrice;
            else
                itemInfo.MinBidPrice = std::min(itemInfo.MinBidPrice, itemBidPrice);
        }

        // Set minimum buyout price if item has buyout
        if (entry->BuyoutPrice)
        {
            // Update item entry's count and total buyout prices
            // This can be used later to determine the prices and chances to buyout
            uint32 itemBuyPrice = entry->BuyoutPrice / entry->Item->GetCount();
            itemInfo.TotalBuyPrice = itemInfo.TotalBuyPrice + itemBuyPrice;
            itemInfo.BuyItemCount++;

            if (!itemInfo.MinBuyPrice)
                itemInfo.MinBuyPrice = itemBuyPrice;
            else
                itemInfo.MinBuyPrice = std::min(itemInfo.MinBuyPrice, itemBuyPrice);
        }

        // Add/update EligibleItems if:
        // * no bid
        // * bid from player
        if (!entry->BidAmount || !entry->Bidder.IsEmpty())
        {
            config.EligibleItems[entry->Id].LastExist = now;
            config.EligibleItems[entry->Id].AuctionId = entry->Id;
            ++count;
        }
    }

    TC_LOG_DEBUG("ahbot", "AHBot: %u items added to buyable/biddable vector for ah type: %u", count, config.GetHouseType());
    TC_LOG_DEBUG("ahbot", "AHBot: SameItemInfo size = %u", (uint32)config.SameItemInfo.size());
    return count;
}

// ahInfo can be NULL
bool AuctionBotBuyer::RollBuyChance(BuyerItemInfo const* ahInfo, AuctionPosting const* auction)
{
    if (!auction->BuyoutPrice)
        return false;

    float itemBuyPrice = float(auction->BuyoutPrice);
    float itemPrice;
    if (uint32 itemSellPrice = auction->Item->GetSellPrice(auction->Item->GetTemplate(), auction->Item->GetQuality(), auction->Item->GetItemLevel(auction->Item->GetTemplate(), *auction->Item->GetBonus(), 0, 0, 0, 0, 0, false, 0)))
        itemPrice = float(itemSellPrice);
    else
        itemPrice = float(GetVendorPrice(auction->Item->GetQuality()));

    // prefer market data when available
    auto marketData = _marketData.find(auction->Item->GetTemplate()->GetId());
    if (marketData != _marketData.end())
        itemPrice = marketData->second;

    // The AH cut needs to be added to the price, but we dont want a 100% chance to buy if the price is exactly AH default
    itemPrice *= 1.4f;

    // This value is between 0 and 100 and is used directly as the chance to buy or bid
    // Value equal or above 100 means 100% chance and value below 0 means 0% chance
    float chance = std::min(100.f, std::pow(100.f, 1.f + (1.f - itemBuyPrice / itemPrice) / sAuctionBotConfig->GetConfig(CONFIG_AHBOT_BUYER_CHANCE_FACTOR)));

    // If a player has bidded on item, have fifth of normal chance
    if (!auction->Bidder.IsEmpty())
        chance = chance / 5.f;

    if (ahInfo)
    {
        float avgBuyPrice = ahInfo->TotalBuyPrice / float(ahInfo->BuyItemCount);

        TC_LOG_DEBUG("ahbot", "AHBot: buyout average: %.1f items with buyout: %u", avgBuyPrice, ahInfo->BuyItemCount);

        // If there are more than 5 items on AH of this entry, try weigh in the average buyout price
        if (ahInfo->BuyItemCount > 5)
            chance *= 1.f / std::sqrt(itemBuyPrice / avgBuyPrice);
    }

    // Add config weigh in for quality
    chance *= GetChanceMultiplier(auction->Item->GetTemplate()->GetQuality()) / 100.0f;

    float rand = frand(0.f, 100.f);
    bool win = rand <= chance;
    TC_LOG_DEBUG("ahbot", "AHBot: %s BUY! chance = %.2f, price = %u, buyprice = %u.", win ? "WIN" : "LOSE", chance, uint32(itemPrice), uint32(itemBuyPrice));
    return win;
}

// ahInfo can be NULL
bool AuctionBotBuyer::RollBidChance(BuyerItemInfo const* ahInfo, AuctionPosting const* auction, uint32 bidPrice)
{
    if (!auction->MinBid)
        return false;

    float itemBidPrice = float(bidPrice);
    float itemPrice;
    if (uint32 itemSellPrice = auction->Item->GetSellPrice(auction->Item->GetTemplate(), auction->Item->GetQuality(), auction->Item->GetItemLevel(auction->Item->GetTemplate(), *auction->Item->GetBonus(), 0, 0, 0, 0, 0, false, 0)))
        itemPrice = float(itemSellPrice);
    else
        itemPrice = float(GetVendorPrice(auction->Item->GetQuality()));

    // The AH cut needs to be added to the price, but we dont want a 100% chance to buy if the price is exactly AH default
    itemPrice *= 1.4f;

    // This value is between 0 and 100 and is used directly as the chance to buy or bid
    // Value equal or above 100 means 100% chance and value below 0 means 0% chance
    float chance = std::min(100.f, std::pow(100.f, 1.f + (1.f - itemBidPrice / itemPrice) / sAuctionBotConfig->GetConfig(CONFIG_AHBOT_BUYER_CHANCE_FACTOR)));

    if (ahInfo)
    {
        float avgBidPrice = ahInfo->TotalBidPrice / float(ahInfo->BidItemCount);

        TC_LOG_DEBUG("ahbot", "AHBot: Bid average: %.1f biddable item count: %u", avgBidPrice, ahInfo->BidItemCount);

        // If there are more than 5 items on AH of this entry, try weigh in the average bid price
        if (ahInfo->BidItemCount >= 5)
            chance *= 1.f / std::sqrt(itemBidPrice / avgBidPrice);
    }

    // If a player has bidded on item, have fifth of normal chance
    if (!auction->Bidder.IsEmpty() && !sAuctionBotConfig->IsBotChar(auction->Bidder))
        chance = chance / 5.f;

    // Add config weigh in for quality
    chance *= GetChanceMultiplier(auction->Item->GetTemplate()->GetQuality()) / 100.0f;

    float rand = frand(0.f, 100.f);
    bool win = rand <= chance;
    TC_LOG_DEBUG("ahbot", "AHBot: %s BID! chance = %.2f, price = %u, bidprice = %u.", win ? "WIN" : "LOSE", chance, uint32(itemPrice), uint32(itemBidPrice));
    return win;
}

// Removes items from EligibleItems that we shouldnt buy or bid on
// The last existed time on them should be older than now
void AuctionBotBuyer::PrepareListOfEntry(BuyerConfiguration& config)
{
    // now - 5 seconds to leave out all old entries but keep the ones just updated a moment ago
    time_t now = GameTime::GetGameTime() - 5;

    for (CheckEntryMap::iterator itr = config.EligibleItems.begin(); itr != config.EligibleItems.end();)
    {
        if (itr->second.LastExist < now)
            config.EligibleItems.erase(itr++);
        else
            ++itr;
    }

    TC_LOG_DEBUG("ahbot", "AHBot: EligibleItems size = %u", (uint32)config.EligibleItems.size());
}

// Tries to bid and buy items based on their prices and chances set in configs
void AuctionBotBuyer::BuyAndBidItems(BuyerConfiguration& config)
{
    time_t now = GameTime::GetGameTime();
    AuctionHouseObject* auctionHouse = sAuctionMgr->GetAuctionsById(sAuctionBotConfig->GetAuctionHouseId(config.GetHouseType()));
    CheckEntryMap& items = config.EligibleItems;

    // Max amount of items to buy or bid
    uint32 cycles = sAuctionBotConfig->GetItemPerCycleNormal();
    if (items.size() > sAuctionBotConfig->GetItemPerCycleBoost())
    {
        // set more cycles if there is a huge influx of items
        cycles = sAuctionBotConfig->GetItemPerCycleBoost();
        TC_LOG_DEBUG("ahbot", "AHBot: Boost value used for Buyer! (if this happens often adjust both ItemsPerCycle in worldserver.conf)");
    }

    // Process items eligible to be bidded or bought
    CheckEntryMap::iterator itr = items.begin();
    while (cycles && itr != items.end())
    {
        AuctionPosting* auction = auctionHouse->GetAuction(itr->second.AuctionId);
        if (!auction)
        {
            TC_LOG_DEBUG("ahbot", "AHBot: Entry %u doesn't exists, perhaps bought already?", itr->second.AuctionId);
            items.erase(itr++);
            continue;
        }

        // Check if the item has been checked once before
        // If it has been checked and it was recently, skip it
        if (itr->second.LastChecked && (now - itr->second.LastChecked) <= _checkInterval)
        {
            TC_LOG_DEBUG("ahbot", "AHBot: In time interval wait for entry %u!", auction->Id);
            ++itr;
            continue;
        }

        // price to bid if bidding
        uint64 bidPrice;
        if (auction->BidAmount)
        {
            // get bid price to outbid previous bidder
            bidPrice = auction->BidAmount + auction->CalculateMinIncrement();
        }
        else
        {
            // no previous bidders - use starting bid
            bidPrice = auction->MinBid;
        }

        BuyerItemInfo const* ahInfo = nullptr;
        BuyerItemInfoMap::const_iterator sameItemItr = config.SameItemInfo.find(auction->Item->GetEntry());
        if (sameItemItr != config.SameItemInfo.end())
            ahInfo = &sameItemItr->second;

        TC_LOG_DEBUG("ahbot", "AHBot: Rolling for AHentry %u:", auction->Id);

        // Roll buy and bid chances
        bool successBuy = RollBuyChance(ahInfo, auction);
        bool successBid = RollBidChance(ahInfo, auction, bidPrice);

        // If roll bidding succesfully and bid price is above buyout -> buyout
        // If roll for buying was successful but not for bid, buyout directly
        // If roll bidding was also successful, buy the entry with 20% chance
        // - Better bid than buy since the item is bought by bot if no player bids after
        // Otherwise bid if roll for bid was successful
        if ((auction->BuyoutPrice && successBid && bidPrice >= auction->BuyoutPrice) ||
            (successBuy && (!successBid || urand(1, 5) == 1)))
            BuyEntry(auction, auctionHouse); // buyout
        else if (successBid)
            PlaceBidToEntry(auction, auctionHouse, bidPrice); // bid

        itr->second.LastChecked = now;
        --cycles;
        ++itr;
    }

    // Clear not needed entries
    config.SameItemInfo.clear();
}

uint32 AuctionBotBuyer::GetVendorPrice(uint32 quality)
{
    switch (quality)
    {
        case ITEM_QUALITY_POOR:
            return sAuctionBotConfig->GetConfig(CONFIG_AHBOT_BUYER_BASEPRICE_GRAY);
        case ITEM_QUALITY_NORMAL:
            return sAuctionBotConfig->GetConfig(CONFIG_AHBOT_BUYER_BASEPRICE_WHITE);
        case ITEM_QUALITY_UNCOMMON:
            return sAuctionBotConfig->GetConfig(CONFIG_AHBOT_BUYER_BASEPRICE_GREEN);
        case ITEM_QUALITY_RARE:
            return sAuctionBotConfig->GetConfig(CONFIG_AHBOT_BUYER_BASEPRICE_BLUE);
        case ITEM_QUALITY_EPIC:
            return sAuctionBotConfig->GetConfig(CONFIG_AHBOT_BUYER_BASEPRICE_PURPLE);
        case ITEM_QUALITY_LEGENDARY:
            return sAuctionBotConfig->GetConfig(CONFIG_AHBOT_BUYER_BASEPRICE_ORANGE);
        case ITEM_QUALITY_ARTIFACT:
            return sAuctionBotConfig->GetConfig(CONFIG_AHBOT_BUYER_BASEPRICE_YELLOW);
        default:
            return 1 * SILVER;
    }
}

uint32 AuctionBotBuyer::GetChanceMultiplier(uint32 quality)
{
    switch (quality)
    {
        case ITEM_QUALITY_POOR:
            return sAuctionBotConfig->GetConfig(CONFIG_AHBOT_BUYER_CHANCEMULTIPLIER_GRAY);
        case ITEM_QUALITY_NORMAL:
            return sAuctionBotConfig->GetConfig(CONFIG_AHBOT_BUYER_CHANCEMULTIPLIER_WHITE);
        case ITEM_QUALITY_UNCOMMON:
            return sAuctionBotConfig->GetConfig(CONFIG_AHBOT_BUYER_CHANCEMULTIPLIER_GREEN);
        case ITEM_QUALITY_RARE:
            return sAuctionBotConfig->GetConfig(CONFIG_AHBOT_BUYER_CHANCEMULTIPLIER_BLUE);
        case ITEM_QUALITY_EPIC:
            return sAuctionBotConfig->GetConfig(CONFIG_AHBOT_BUYER_CHANCEMULTIPLIER_PURPLE);
        case ITEM_QUALITY_LEGENDARY:
            return sAuctionBotConfig->GetConfig(CONFIG_AHBOT_BUYER_CHANCEMULTIPLIER_ORANGE);
        case ITEM_QUALITY_ARTIFACT:
            return sAuctionBotConfig->GetConfig(CONFIG_AHBOT_BUYER_CHANCEMULTIPLIER_YELLOW);
        default:
            return 100;
    }
}

// Buys the auction and does necessary actions to complete the buyout
void AuctionBotBuyer::BuyEntry(AuctionPosting* auction, AuctionHouseObject* auctionHouse)
{
    TC_LOG_DEBUG("ahbot", "AHBot: Entry %u bought at %.2fg", auction->Id, float(auction->BuyoutPrice) / GOLD);

    CharacterDatabaseTransaction trans = CharacterDatabase.BeginTransaction();

    ObjectGuid newBidder = sAuctionBotConfig->GetRandCharExclude(auction->Owner);

    // Send mail to previous bidder if any
    if (!auction->Bidder.IsEmpty() && !sAuctionBotConfig->IsBotChar(auction->Bidder))
        auctionHouse->SendAuctionOutbid(auction, newBidder, auction->BuyoutPrice, trans);

    // Set bot as bidder and set new bid amount
    auction->Bidder = newBidder;
    auction->BidAmount = auction->BuyoutPrice;

    // Mails must be under transaction control too to prevent data loss
    auctionHouse->SendAuctionWon(auction, nullptr, trans);
    auctionHouse->SendAuctionSold(auction, nullptr, trans);

    // Remove auction
    auctionHouse->RemoveAuction(trans, auction);

    // Run SQLs
    CharacterDatabase.CommitTransaction(trans);
}

// Bids on the auction and does the necessary actions for bidding
void AuctionBotBuyer::PlaceBidToEntry(AuctionPosting* auction, AuctionHouseObject* auctionHouse, uint32 bidPrice)
{
    TC_LOG_DEBUG("ahbot", "AHBot: Bid placed to entry %u, %.2fg", auction->Id, float(bidPrice) / GOLD);

    CharacterDatabaseTransaction trans = CharacterDatabase.BeginTransaction();

    ObjectGuid newBidder = sAuctionBotConfig->GetRandCharExclude(auction->Owner);

    // Send mail to previous bidder if any
    if (!auction->Bidder.IsEmpty() && !sAuctionBotConfig->IsBotChar(auction->Bidder))
        auctionHouse->SendAuctionOutbid(auction, newBidder, bidPrice, trans);

    // Set bot as bidder and set new bid amount
    auction->Bidder = newBidder;
    auction->BidAmount = bidPrice;
    auction->ServerFlags &= ~AuctionPostingServerFlag::GmLogBuyer;

    // Update auction to DB
    CharacterDatabasePreparedStatement* stmt = CharacterDatabase.GetPreparedStatement(CHAR_UPD_AUCTION_BID);
    stmt->setUInt64(0, auction->Bidder.GetCounter());
    stmt->setUInt64(1, auction->BidAmount);
    stmt->setUInt8(2, auction->ServerFlags.AsUnderlyingType());
    stmt->setUInt32(3, auction->Id);
    trans->Append(stmt);

    // Run SQLs
    CharacterDatabase.CommitTransaction(trans);
}
