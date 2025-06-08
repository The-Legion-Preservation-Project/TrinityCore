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

#include "AccountMgr.h"
#include "AuctionHouseBot.h"
#include "AuctionHouseMgr.h"
#include "AuctionHousePackets.h"
#include "Bag.h"
#include "CharacterCache.h"
#include "CollectionMgr.h"
#include "Common.h"
#include "DB2Stores.h"
#include "DatabaseEnv.h"
#include "GameTime.h"
#include "Language.h"
#include "Log.h"
#include "Mail.h"
#include "MapUtils.h"
#include "ObjectAccessor.h"
#include "ObjectMgr.h"
#include "Player.h"
#include "ScriptMgr.h"
#include "World.h"
#include "WorldSession.h"
#include "WowTime.h"
#include <boost/dynamic_bitset.hpp>
#include <numeric>
#include <sstream>
#include <vector>

enum eAuctionHouse
{
    AH_MINIMUM_DEPOSIT = 100
};

void AuctionPosting::BuildAuctionItem(WorldPackets::AuctionHouse::AuctionItem* auctionItem, bool censorServerInfo, bool censorBidInfo) const
{
    // SMSG_AUCTION_LIST_BIDDED_ITEMS_RESULT, SMSG_AUCTION_LIST_ITEMS_RESULT (if not commodity), SMSG_AUCTION_LIST_OWNER_ITEMS_RESULT, SMSG_AUCTION_REPLICATE_RESPONSE (if not commodity)
    //auctionItem->Item - here to unify comment

    // all (not optional<>)
    auctionItem->Count = int32(Item->GetCount());
    auctionItem->Flags = 0;
    auctionItem->AuctionID = Id;
    auctionItem->Owner = Owner;

    auctionItem->Item.Initialize(Item);
    auctionItem->Charges = Item->GetSpellCharges();
    for (uint8 i = 0; i < MAX_INSPECTED_ENCHANTMENT_SLOT; i++)
    {
        uint32 enchantId = Item->GetEnchantmentId(EnchantmentSlot(i));
        if (!enchantId)
            continue;

        auctionItem->Enchantments.emplace_back(enchantId, Item->GetEnchantmentDuration(EnchantmentSlot(i)), Item->GetEnchantmentCharges(EnchantmentSlot(i)), i);
    }

    uint8 i = 0;
    for (ItemDynamicFieldGems const& gemData : Item->GetGems())
    {
        if (gemData.ItemId)
        {
            WorldPackets::Item::ItemGemData gem;
            gem.Slot = i;
            gem.Item.Initialize(&gemData);
            auctionItem->Gems.push_back(gem);
        }
        ++i;
    }

    if (MinBid)
        auctionItem->MinBid = MinBid;

    if (uint64 minIncrement = CalculateMinIncrement())
        auctionItem->MinIncrement = minIncrement;

    if (BuyoutPrice)
        auctionItem->BuyoutPrice = BuyoutPrice;

    // all (not optional<>)
    auctionItem->DurationLeft = uint32(std::max(std::chrono::duration_cast<Milliseconds>(EndTime - GameTime::GetSystemTime()).count(), Milliseconds::zero().count()));
    auctionItem->DeleteReason = 0;

    // SMSG_AUCTION_LIST_ITEMS_RESULT (only if owned)
    auctionItem->CensorServerSideInfo = censorServerInfo;
    auctionItem->ItemGuid = Item->GetGUID();
    auctionItem->OwnerAccountID = OwnerAccount;
    auctionItem->EndTime = uint32(std::chrono::system_clock::to_time_t(EndTime));

    // SMSG_AUCTION_LIST_BIDDED_ITEMS_RESULT, SMSG_AUCTION_LIST_ITEMS_RESULT (if has bid), SMSG_AUCTION_LIST_OWNER_ITEMS_RESULT, SMSG_AUCTION_REPLICATE_RESPONSE (if has bid)
    auctionItem->CensorBidInfo = censorBidInfo;
    if (!Bidder.IsEmpty())
    {
        auctionItem->Bidder = Bidder;
        auctionItem->BidAmount = BidAmount;
    }
}

uint64 AuctionPosting::CalculateMinIncrement(uint64 bidAmount)
{
    return CalculatePct(bidAmount / SILVER /*ignore copper*/, 5) * SILVER;
}

class AuctionPosting::Sorter
{
public:
    Sorter(LocaleConstant locale, std::span<WorldPackets::AuctionHouse::AuctionSortDef const> sorts)
        : _locale(locale), _sorts(sorts) { }

    bool operator()(AuctionPosting const* left, AuctionPosting const* right) const
    {
        for (WorldPackets::AuctionHouse::AuctionSortDef const& sort : _sorts)
        {
            int64 ordering = CompareColumns(sort.SortOrder, left, right);
            if (ordering != 0)
                return (ordering < 0) == (sort.ReverseSort <= 0);
        }

        // Auctions are processed in LIFO order
        if (left->StartTime != right->StartTime)
            return left->StartTime > right->StartTime;

        return left->Id > right->Id;
    }

private:
    int64 CompareColumns(AuctionHouseSortOrder column, AuctionPosting const* left, AuctionPosting const* right) const
    {
        switch (column)
        {
            case AuctionHouseSortOrder::Level:
                return int32(left->SortLevel) - int32(right->SortLevel);
            case AuctionHouseSortOrder::Quality:
                return int32(left->Quality) - int32(right->Quality);
            case AuctionHouseSortOrder::TimeRemaining:
                return (left->EndTime - right->EndTime).count();
            case AuctionHouseSortOrder::Seller:
            {
                std::string leftName;
                std::string rightName;
                sCharacterCache->GetCharacterNameByGuid(left->Owner, leftName);
                sCharacterCache->GetCharacterNameByGuid(right->Owner, rightName);
                return leftName.compare(rightName);
            }
            case AuctionHouseSortOrder::Price:
            {
                // Price Per Item
                int64 leftPrice = int64(left->BuyoutPrice ? left->BuyoutPrice : (left->BidAmount ? left->BidAmount : left->MinBid)) / left->Item->GetCount();
                int64 rightPrice = int64(right->BuyoutPrice ? right->BuyoutPrice : (right->BidAmount ? right->BidAmount : right->MinBid)) / right->Item->GetCount();
                return leftPrice - rightPrice;
            }
            case AuctionHouseSortOrder::Name_Unconfirmed:
                return left->FullName[_locale].compare(right->FullName[_locale]);
            // case AuctionHouseSortOrder::Bid:
            //     return int64(left->BidAmount) - int64(right->BidAmount);
            // case AuctionHouseSortOrder::Buyout:
            //     return int64(left->BuyoutPrice) - int64(right->BuyoutPrice);
            default:
                break;
        }

        return 0;
    }

    LocaleConstant _locale;
    std::span<WorldPackets::AuctionHouse::AuctionSortDef const> _sorts;
};

template<typename T>
class AuctionsResultBuilder
{
public:
    using Sorter = typename T::Sorter;

    AuctionsResultBuilder(uint32 offset, LocaleConstant locale, std::span<WorldPackets::AuctionHouse::AuctionSortDef const> sorts, AuctionHouseResultLimits maxResults)
        : _offset(offset), _sorter(locale, sorts), _maxResults(AsUnderlyingType(maxResults)), _hasMoreResults(false)
    {
        _items.reserve(_maxResults + offset + 1);
    }

    void AddItem(T const* item)
    {
        auto where = std::lower_bound(_items.begin(), _items.end(), item, std::cref(_sorter));

        _items.insert(where, item);
        if (_items.size() > _maxResults + _offset)
        {
            _items.pop_back();
            _hasMoreResults = true;
        }
    }

    Trinity::IteratorPair<typename std::vector<T const*>::const_iterator> GetResultRange() const
    {
        return Trinity::Containers::MakeIteratorPair(_items.begin() + _offset, _items.end());
    }

    bool HasMoreResults() const
    {
        return _hasMoreResults;
    }

private:
    uint32 _offset;
    Sorter _sorter;
    std::size_t _maxResults;
    std::vector<T const*> _items;
    bool _hasMoreResults;
};

AuctionHouseMgr::AuctionHouseMgr() : mHordeAuctions(6), mAllianceAuctions(2), mNeutralAuctions(1), mGoblinAuctions(7), _replicateIdGenerator(0)
{
    _playerThrottleObjectsCleanupTime = GameTime::Now() + Hours(1);
}

AuctionHouseMgr::~AuctionHouseMgr()
{
    for (std::pair<ObjectGuid const, Item*>& itemPair : _itemsByGuid)
        delete itemPair.second;
}

AuctionHouseMgr* AuctionHouseMgr::instance()
{
    static AuctionHouseMgr instance;
    return &instance;
}

AuctionHouseObject* AuctionHouseMgr::GetAuctionsMap(uint32 factionTemplateId)
{
    if (sWorld->getBoolConfig(CONFIG_ALLOW_TWO_SIDE_INTERACTION_AUCTION))
        return &mNeutralAuctions;

    // teams have linked auction houses
    FactionTemplateEntry const* uEntry = sFactionTemplateStore.LookupEntry(factionTemplateId);
    if (!uEntry)
        return &mNeutralAuctions;
    else if (uEntry->FactionGroup & FACTION_MASK_ALLIANCE)
        return &mAllianceAuctions;
    else if (uEntry->FactionGroup & FACTION_MASK_HORDE)
        return &mHordeAuctions;
    else
        return &mNeutralAuctions;
}

AuctionHouseObject* AuctionHouseMgr::GetAuctionsById(uint32 auctionHouseId)
{
    switch (auctionHouseId)
    {
        case 1:
            return &mNeutralAuctions;
        case 2:
            return &mAllianceAuctions;
        case 6:
            return &mHordeAuctions;
        case 7:
            return &mGoblinAuctions;
        default:
            break;
    }
    return &mNeutralAuctions;
}

Item* AuctionHouseMgr::GetAItem(ObjectGuid itemGuid)
{
    return Trinity::Containers::MapGetValuePtr(_itemsByGuid, itemGuid);
}

uint64 AuctionHouseMgr::GetItemAuctionDeposit(Player const* player, Item const* item, Minutes time)
{
    uint32 sellPrice = item->GetSellPrice(player);
    return uint64(fmax(sellPrice * 0.15, 100.0)) * (time.count() / (MIN_AUCTION_TIME / MINUTE));
}

std::string AuctionHouseMgr::BuildItemAuctionMailSubject(AuctionMailType type, AuctionPosting const* auction)
{
    return BuildAuctionMailSubject(auction->Item->GetEntry(), type, auction->Id, auction->Item->GetCount(),
        auction->Item->GetModifier(ITEM_MODIFIER_BATTLE_PET_SPECIES_ID), auction->Item->GetContext(), auction->Item->GetBonusListIDs());
}

std::string AuctionHouseMgr::BuildAuctionMailSubject(uint32 itemId, AuctionMailType type, uint32 auctionId, uint32 itemCount, uint32 battlePetSpeciesId,
    ItemContext context, std::vector<uint32> const& bonusListIds)
{
    // TODO: AH - check random properties id stuff
    std::ostringstream strm;
    strm
        << itemId << ':'
        << "0:" // OLD: itemRandomPropertiesId
        << AsUnderlyingType(type) << ':'
        << auctionId << ':'
        << itemCount << ':'
        << battlePetSpeciesId << ':'
        << "0:"
        << "0:"
        << "0:"
        << "0:"
        << uint32(context) << ':'
        << bonusListIds.size();

    for (uint32 bonusListId : bonusListIds)
        strm << ':' << bonusListId;

    return strm.str();
}

std::string AuctionHouseMgr::BuildAuctionWonMailBody(ObjectGuid guid, uint64 bid, uint64 buyout)
{
    return Trinity::StringFormat("{}:{}:{}:0", guid.ToString(), bid, buyout);
}

std::string AuctionHouseMgr::BuildAuctionSoldMailBody(ObjectGuid guid, uint64 bid, uint64 buyout, uint32 deposit, uint64 consignment)
{
    return Trinity::StringFormat("{}:{}:{}:{}:{}:0", guid.ToString(), bid, buyout, deposit, consignment);
}

std::string AuctionHouseMgr::BuildAuctionInvoiceMailBody(ObjectGuid guid, uint64 bid, uint64 buyout, uint32 deposit, uint64 consignment, uint32 moneyDelay, uint32 eta)
{
    return Trinity::StringFormat("{}:{}:{}:{}:{}:{}:{}:0", guid.ToString(), bid, buyout, deposit, consignment, moneyDelay, eta);
}

void AuctionHouseMgr::LoadAuctions()
{
    uint32 oldMSTime = getMSTime();

    // need to clear in case we are reloading
    if (!_itemsByGuid.empty())
    {
        for (std::pair<ObjectGuid const, Item*>& itemPair : _itemsByGuid)
            delete itemPair.second;

        _itemsByGuid.clear();
    }

    // data needs to be at first place for Item::LoadFromDB
    uint32 count = 0;
    std::unordered_map<uint32, Item*> itemsByAuction;

    if (PreparedQueryResult result = CharacterDatabase.Query(CharacterDatabase.GetPreparedStatement(CHAR_SEL_AUCTION_ITEMS)))
    {
        do
        {
            Field* fields = result->Fetch();

            ObjectGuid::LowType itemGuid = fields[0].GetUInt64();
            uint32 itemEntry = fields[1].GetUInt32();

            ItemTemplate const* proto = sObjectMgr->GetItemTemplate(itemEntry);
            if (!proto)
            {
                TC_LOG_ERROR("misc", "AuctionHouseMgr::LoadAuctionItems: Unknown item (GUID: {} item entry: #{}) in auction, skipped.", itemGuid, itemEntry);
                continue;
            }

            Item* item = NewItemOrBag(proto);
            if (!item->LoadFromDB(itemGuid, ObjectGuid::Create<HighGuid::Player>(fields[45].GetUInt64()), fields, itemEntry))
            {
                delete item;
                continue;
            }
            uint32 auctionId = fields[46].GetUInt32();
            itemsByAuction[auctionId] = std::move(item);

            ++count;
        } while (result->NextRow());
    }

    TC_LOG_INFO("server.loading", ">> Loaded {} auction items in {} ms", count, GetMSTimeDiffToNow(oldMSTime));

    oldMSTime = getMSTime();

    count = 0;

    if (PreparedQueryResult result = CharacterDatabase.Query(CharacterDatabase.GetPreparedStatement(CHAR_SEL_AUCTIONS)))
    {
        CharacterDatabaseTransaction trans = CharacterDatabase.BeginTransaction();
        do
        {
            // 0   1               2         3          4      5      6       7       8            9        10         11         12
            // id, auctionHouseId, itemguid, itemEntry, count, owner, bidder, minBid, buyoutPrice, deposit, bidAmount, startTime, endTime
            Field* fields = result->Fetch();

            AuctionPosting auction;
            auction.Id = fields[0].GetUInt32();
            uint32 auctionHouseId = fields[1].GetUInt32();
            AuctionHouseObject* auctionHouse = GetAuctionsById(auctionHouseId);
            if (!auctionHouse)
            {
                TC_LOG_ERROR("misc", "Auction {} has wrong auctionHouseId {}", auction.Id, auctionHouseId);
                CharacterDatabasePreparedStatement* stmt = CharacterDatabase.GetPreparedStatement(CHAR_DEL_AUCTION);
                stmt->setUInt32(0, auction.Id);
                trans->Append(stmt);
                continue;
            }

            auto itemsItr = itemsByAuction.find(auction.Id);
            if (itemsItr == itemsByAuction.end())
            {
                TC_LOG_ERROR("misc", "Auction {} has no item", auction.Id);
                CharacterDatabasePreparedStatement* stmt = CharacterDatabase.GetPreparedStatement(CHAR_DEL_AUCTION);
                stmt->setUInt32(0, auction.Id);
                trans->Append(stmt);
                continue;
            }

            auction.Item = std::move(itemsItr->second);
            auction.Owner = ObjectGuid::Create<HighGuid::Player>(fields[5].GetUInt64());
            auction.OwnerAccount = ObjectGuid::Create<HighGuid::WowAccount>(sCharacterCache->GetCharacterAccountIdByGuid(auction.Owner));
            if (uint64 bidder = fields[6].GetUInt64())
                auction.Bidder = ObjectGuid::Create<HighGuid::Player>(bidder);

            auction.MinBid = fields[7].GetUInt64();
            auction.BuyoutPrice = fields[8].GetUInt64();
            auction.Deposit = fields[9].GetUInt64();
            auction.BidAmount = fields[10].GetUInt64();
            auction.StartTime = std::chrono::system_clock::from_time_t(fields[11].GetInt64());
            auction.EndTime = std::chrono::system_clock::from_time_t(fields[12].GetInt64());
            auction.ServerFlags = static_cast<AuctionPostingServerFlag>(fields[13].GetUInt8());

            auctionHouse->AddAuction(nullptr, std::move(auction));

            ++count;
        } while (result->NextRow());

        CharacterDatabase.CommitTransaction(trans);
    }

    TC_LOG_INFO("server.loading", ">> Loaded {} auctions in {} ms", count, GetMSTimeDiffToNow(oldMSTime));
}

void AuctionHouseMgr::AddAItem(Item* item)
{
    ASSERT(item);
    ASSERT_WITH_SIDE_EFFECTS(_itemsByGuid.emplace(item->GetGUID(), item).second);
}

bool AuctionHouseMgr::RemoveAItem(ObjectGuid itemGuid, bool deleteItem /*= false*/, CharacterDatabaseTransaction* trans /*= nullptr*/)
{
    auto i = _itemsByGuid.find(itemGuid);
    if (i == _itemsByGuid.end())
        return false;

    if (deleteItem)
    {
        ASSERT(trans);
        i->second->FSetState(ITEM_REMOVED);
        i->second->SaveToDB(*trans);
    }

    _itemsByGuid.erase(i);
    return true;
}

bool AuctionHouseMgr::PendingAuctionAdd(Player const* player, uint32 auctionHouseId, uint32 auctionId, uint64 deposit)
{
    auto itr = _pendingAuctionsByPlayer.find(player->GetGUID());
    if (itr != _pendingAuctionsByPlayer.end())
    {
        // Get deposit so far
        uint64 totalDeposit = 0;
        for (PendingAuctionInfo const& thisAuction : itr->second.Auctions)
            totalDeposit += thisAuction.Deposit;

        // Add this deposit
        totalDeposit += deposit;

        if (!player->HasEnoughMoney(totalDeposit))
            return false;
    }
    else
        itr = _pendingAuctionsByPlayer.emplace(std::piecewise_construct, std::forward_as_tuple(player->GetGUID()), std::forward_as_tuple()).first;

    itr->second.Auctions.push_back({ auctionId, auctionHouseId, deposit });
    return true;
}

std::size_t AuctionHouseMgr::PendingAuctionCount(Player const* player) const
{
    auto itr = _pendingAuctionsByPlayer.find(player->GetGUID());
    if (itr != _pendingAuctionsByPlayer.end())
        return itr->second.Auctions.size();

    return 0;
}

void AuctionHouseMgr::PendingAuctionProcess(Player* player)
{
    auto iterMap = _pendingAuctionsByPlayer.find(player->GetGUID());
    if (iterMap == _pendingAuctionsByPlayer.end())
        return;

    uint64 totaldeposit = 0;
    auto itrAH = iterMap->second.Auctions.begin();
    for (; itrAH != iterMap->second.Auctions.end(); ++itrAH)
    {
        if (!player->HasEnoughMoney(totaldeposit + itrAH->Deposit))
            break;

        totaldeposit += itrAH->Deposit;
    }

    // expire auctions we cannot afford
    if (itrAH != iterMap->second.Auctions.end())
    {
        CharacterDatabaseTransaction trans = CharacterDatabase.BeginTransaction();

        do
        {
            PendingAuctionInfo const& pendingAuction = *itrAH;
            if (AuctionPosting* auction = GetAuctionsById(pendingAuction.AuctionHouseId)->GetAuction(pendingAuction.AuctionId))
                auction->EndTime = GameTime::GetSystemTime();

            CharacterDatabasePreparedStatement* stmt = CharacterDatabase.GetPreparedStatement(CHAR_UPD_AUCTION_EXPIRATION);
            stmt->setUInt32(0, uint32(GameTime::GetGameTime()));
            stmt->setUInt32(1, pendingAuction.AuctionId);
            trans->Append(stmt);
            ++itrAH;
        } while (itrAH != iterMap->second.Auctions.end());
        CharacterDatabase.CommitTransaction(trans);
    }

    _pendingAuctionsByPlayer.erase(player->GetGUID());
    player->ModifyMoney(-int64(totaldeposit));
}

void AuctionHouseMgr::UpdatePendingAuctions()
{
    for (auto itr = _pendingAuctionsByPlayer.begin(); itr != _pendingAuctionsByPlayer.end();)
    {
        ObjectGuid playerGUID = itr->first;
        if (Player* player = ObjectAccessor::FindConnectedPlayer(playerGUID))
        {
            // Check if there were auctions since last update process if not
            if (PendingAuctionCount(player) == itr->second.LastAuctionsSize)
            {
                ++itr;
                PendingAuctionProcess(player);
            }
            else
            {
                ++itr;
                _pendingAuctionsByPlayer[playerGUID].LastAuctionsSize = PendingAuctionCount(player);
            }
        }
        else
        {
            // Expire any auctions that we couldn't get a deposit for
            TC_LOG_WARN("auctionHouse", "Player {} was offline, unable to retrieve deposit!", playerGUID.ToString());
            ++itr;
            CharacterDatabaseTransaction trans = CharacterDatabase.BeginTransaction();
            for (PendingAuctionInfo const& pendingAuction : itr->second.Auctions)
            {
                if (AuctionPosting* auction = GetAuctionsById(pendingAuction.AuctionHouseId)->GetAuction(pendingAuction.AuctionId))
                    auction->EndTime = GameTime::GetSystemTime();

                CharacterDatabasePreparedStatement* stmt = CharacterDatabase.GetPreparedStatement(CHAR_UPD_AUCTION_EXPIRATION);
                stmt->setUInt32(0, uint32(GameTime::GetGameTime()));
                stmt->setUInt32(1, pendingAuction.AuctionId);
                trans->Append(stmt);
            }
            CharacterDatabase.CommitTransaction(trans);
            _pendingAuctionsByPlayer.erase(playerGUID);
        }
    }
}

void AuctionHouseMgr::Update()
{
    mHordeAuctions.Update();
    mAllianceAuctions.Update();
    mNeutralAuctions.Update();
    mGoblinAuctions.Update();

    TimePoint now = GameTime::Now();
    if (now >= _playerThrottleObjectsCleanupTime)
    {
        for (auto itr = _playerThrottleObjects.begin(); itr != _playerThrottleObjects.end();)
        {
            if (itr->second.PeriodEnd < now)
                itr = _playerThrottleObjects.erase(itr);
            else
                ++itr;
        }

        _playerThrottleObjectsCleanupTime = now + 1h;
    }
}

uint32 AuctionHouseMgr::GenerateReplicationId()
{
    return ++_replicateIdGenerator;
}

AuctionThrottleResult AuctionHouseMgr::CheckThrottle(Player const* player, AuctionCommand command /*= AuctionCommand::SellItem*/)
{
    TimePoint now = GameTime::Now();
    auto itr = _playerThrottleObjects.emplace(std::piecewise_construct, std::forward_as_tuple(player->GetGUID()), std::forward_as_tuple());
    if (itr.second || now > itr.first->second.PeriodEnd)
    {
        itr.first->second.PeriodEnd = now + Minutes(1);
        itr.first->second.QueriesRemaining = 100;
    }

    if (!itr.first->second.QueriesRemaining)
    {
        player->GetSession()->SendAuctionCommandResult(nullptr, command, AuctionResult::AuctionHouseBusy); //, std::chrono::duration_cast<Milliseconds>(itr.first->second.PeriodEnd - now));
        return { {}, true };
    }

    if (!--itr.first->second.QueriesRemaining)
        return { std::chrono::duration_cast<Milliseconds>(itr.first->second.PeriodEnd - now), false };
    else
        return { Milliseconds(sWorld->getIntConfig(CONFIG_AUCTION_SEARCH_DELAY)), false };
}

AuctionHouseEntry const* AuctionHouseMgr::GetAuctionHouseEntry(uint32 factionTemplateId, uint32* houseId)
{
    uint32 houseid = 1; // Auction House

    if (!sWorld->getBoolConfig(CONFIG_ALLOW_TWO_SIDE_INTERACTION_AUCTION))
    {
        // FIXME: found way for proper auctionhouse selection by another way
        // AuctionHouse.dbc have faction field with _player_ factions associated with auction house races.
        // but no easy way convert creature faction to player race faction for specific city
        switch (factionTemplateId)
        {
            case  120: houseid = 7; break; // booty bay, Blackwater Auction House
            case  474: houseid = 7; break; // gadgetzan, Blackwater Auction House
            case  855: houseid = 7; break; // everlook, Blackwater Auction House
            default:                       // default
            {
                FactionTemplateEntry const* u_entry = sFactionTemplateStore.LookupEntry(factionTemplateId);
                if (!u_entry)
                    houseid = 1; // Auction House
                else if (u_entry->FactionGroup & FACTION_MASK_ALLIANCE)
                    houseid = 2; // Alliance Auction House
                else if (u_entry->FactionGroup & FACTION_MASK_HORDE)
                    houseid = 6; // Horde Auction House
                else
                    houseid = 1; // Auction House
                break;
            }
        }
    }

    if (houseId)
        *houseId = houseid;

    return sAuctionHouseStore.LookupEntry(houseid);
}

AuctionHouseObject::AuctionHouseObject(uint32 auctionHouseId) : _auctionHouse(sAuctionHouseStore.AssertEntry(auctionHouseId))
{
}

AuctionHouseObject::~AuctionHouseObject() = default;

uint32 AuctionHouseObject::GetAuctionHouseId() const
{
    return _auctionHouse->ID;
}

AuctionPosting* AuctionHouseObject::GetAuction(uint32 auctionId)
{
    return Trinity::Containers::MapGetValuePtr(_itemsByAuctionId, auctionId);
}

void AuctionHouseObject::AddAuction(CharacterDatabaseTransaction trans, AuctionPosting auction)
{
    ItemTemplate const* itemTemplate = auction.Item->GetTemplate();
    auction.ItemClass = itemTemplate->GetClass();
    auction.ItemSubClass = itemTemplate->GetSubClass();
    auction.InventoryType = itemTemplate->GetInventoryType();
    auction.Quality = itemTemplate->GetQuality();
    auction.RequiredLevel = auction.Item->GetRequiredLevel();
    switch (itemTemplate->GetClass())
    {
        case ITEM_CLASS_WEAPON:
        case ITEM_CLASS_ARMOR:
            auction.SortLevel = itemTemplate->GetBaseItemLevel();
            break;
        case ITEM_CLASS_CONTAINER:
            auction.SortLevel = itemTemplate->GetContainerSlots();
            break;
        case ITEM_CLASS_GEM:
        case ITEM_CLASS_ITEM_ENHANCEMENT:
            auction.SortLevel = itemTemplate->GetBaseItemLevel();
            break;
        case ITEM_CLASS_CONSUMABLE:
            auction.SortLevel = std::max<uint8>(1, itemTemplate->GetBaseRequiredLevel());
            break;
        case ITEM_CLASS_MISCELLANEOUS:
        case ITEM_CLASS_BATTLE_PETS:
            if (auction.Item->GetModifier(ITEM_MODIFIER_BATTLE_PET_SPECIES_ID))
                auction.SortLevel = auction.Item->GetModifier(ITEM_MODIFIER_BATTLE_PET_LEVEL);
            else
                auction.SortLevel = 1;
            break;
        case ITEM_CLASS_RECIPE:
            auction.SortLevel = itemTemplate->GetSubClass() != ITEM_SUBCLASS_BOOK ? itemTemplate->GetRequiredSkillRank() : itemTemplate->GetBaseRequiredLevel();
            break;
        default:
            break;
    }

    for (LocaleConstant locale = LOCALE_enUS; locale < TOTAL_LOCALES; locale = LocaleConstant(locale + 1))
    {
        if (locale == LOCALE_none)
            continue;

        std::wstring utf16name;
        if (!Utf8toWStr(auction.Item->GetNameForLocaleIdx(locale), utf16name))
            continue;

        auction.FullName[locale] = wstrCaseAccentInsensitiveParse(utf16name, locale);
    }

    if (trans)
    {
        CharacterDatabasePreparedStatement* stmt = CharacterDatabase.GetPreparedStatement(CHAR_INS_AUCTION);
        stmt->setUInt32(0, auction.Id);
        stmt->setUInt32(1, _auctionHouse->ID);
        stmt->setUInt64(2, auction.Item->GetGUID().GetCounter());
        stmt->setUInt64(3, auction.Owner.GetCounter());
        stmt->setUInt64(4, ObjectGuid::Empty.GetCounter());
        stmt->setUInt64(5, auction.MinBid);
        stmt->setUInt64(6, auction.BuyoutPrice);
        stmt->setUInt64(7, auction.Deposit);
        stmt->setUInt64(8, auction.BidAmount);
        stmt->setInt64(9, std::chrono::system_clock::to_time_t(auction.StartTime));
        stmt->setInt64(10, std::chrono::system_clock::to_time_t(auction.EndTime));
        stmt->setUInt8(11, auction.ServerFlags.AsUnderlyingType());
        trans->Append(stmt);
    }

    sAuctionMgr->AddAItem(auction.Item);

    _playerOwnedAuctions.emplace(auction.Owner, auction.Id);

    if (!auction.Bidder.IsEmpty())
        _playerBidderAuctions.emplace(auction.Bidder, auction.Id);

    AuctionPosting* addedAuction = &(_itemsByAuctionId[auction.Id] = std::move(auction));

    WorldPackets::AuctionHouse::AuctionSortDef priceSort{ AuctionHouseSortOrder::Price, false };
    AuctionPosting::Sorter insertSorter(LOCALE_enUS, std::span(&priceSort, 1));
    _auctions.insert(std::ranges::lower_bound(_auctions.begin(), _auctions.end(), addedAuction, std::cref(insertSorter)), addedAuction);

    sScriptMgr->OnAuctionAdd(this, addedAuction);
}

std::map<uint32, AuctionPosting>::node_type AuctionHouseObject::RemoveAuction(CharacterDatabaseTransaction trans, AuctionPosting* auction,
    std::map<uint32, AuctionPosting>::iterator* auctionItr /*= nullptr*/)
{
    std::erase(_auctions, auction);

    CharacterDatabasePreparedStatement* stmt = CharacterDatabase.GetPreparedStatement(CHAR_DEL_AUCTION);
    stmt->setUInt32(0, auction->Id);
    trans->Append(stmt);

    sAuctionMgr->RemoveAItem(auction->Item->GetGUID());

    sScriptMgr->OnAuctionRemove(this, auction);

    Trinity::Containers::MultimapErasePair(_playerOwnedAuctions, auction->Owner, auction->Id);

    if (!auction->Bidder.IsEmpty())
        Trinity::Containers::MultimapErasePair(_playerBidderAuctions, auction->Bidder, auction->Id);

    if (auctionItr)
        return _itemsByAuctionId.extract((*auctionItr)++);
    else
        return _itemsByAuctionId.extract(auction->Id);
}

void AuctionHouseObject::SetAuctionBidder(AuctionPosting* auction, ObjectGuid bidder, uint64 bidAmount)
{
    auction->Bidder = bidder;
    auction->BidAmount = bidAmount;
    _playerBidderAuctions.emplace(bidder, auction->Id);
}

void AuctionHouseObject::Update()
{
    SystemTimePoint curTime = GameTime::GetSystemTime();
    TimePoint curTimeSteady = GameTime::Now();
    ///- Handle expired auctions

    // Clear expired throttled players
    for (auto itr = _replicateThrottleMap.begin(); itr != _replicateThrottleMap.end();)
    {
        if (itr->second.NextAllowedReplication <= curTimeSteady)
            itr = _replicateThrottleMap.erase(itr);
        else
            ++itr;
    }

    if (_itemsByAuctionId.empty())
        return;

    CharacterDatabaseTransaction trans = CharacterDatabase.BeginTransaction();

    for (auto it = _itemsByAuctionId.begin(); it != _itemsByAuctionId.end();)
    {
        AuctionPosting* auction = &it->second;
        ///- filter auctions expired on next update
        if (auction->EndTime > curTime + 1min)
        {
            ++it;
            continue;
        }

        std::map<uint32, AuctionPosting>::node_type removedAuctionNode = RemoveAuction(trans, auction, &it);
        auction = &removedAuctionNode.mapped();

        ///- Either cancel the auction if there was no bidder
        if (auction->Bidder.IsEmpty())
        {
            sScriptMgr->OnAuctionExpire(this, auction);
            SendAuctionExpired(auction, trans);
        }
        ///- Or perform the transaction
        else
        {
            sScriptMgr->OnAuctionSuccessful(this, auction);
            //we should send an "item sold" message if the seller is online
            //we send the item to the winner
            //we send the money to the seller
            SendAuctionSold(auction, nullptr, trans);
            SendAuctionWon(auction, nullptr, trans);
        }
    }

    // Run DB changes
    CharacterDatabase.CommitTransaction(trans);
}

void AuctionHouseObject::BuildListBiddedItems(WorldPackets::AuctionHouse::AuctionListBiddedItemsResult& listBiddedItemsResult, Player const* player, uint32 /*offset*/) const
{
    // always full list
    std::vector<AuctionPosting const*> auctions;
    for (auto const& auctionId : Trinity::Containers::MapEqualRange(_playerBidderAuctions, player->GetGUID()))
        if (AuctionPosting const* auction = Trinity::Containers::MapGetValuePtr(_itemsByAuctionId, auctionId.second))
            auctions.push_back(auction);

    // AuctionPosting::Sorter sorter(player->GetSession()->GetSessionDbcLocale(), sorts, sortCount);
    // std::sort(auctions.begin(), auctions.end(), std::cref(sorter));

    for (AuctionPosting const* resultAuction : auctions)
    {
        listBiddedItemsResult.Items.emplace_back();
        WorldPackets::AuctionHouse::AuctionItem& auctionItem = listBiddedItemsResult.Items.back();
        resultAuction->BuildAuctionItem(&auctionItem, true, false);
    }

    //listBiddedItemsResult.HasMoreResults = false;
}

void AuctionHouseObject::BuildListOwnedItems(WorldPackets::AuctionHouse::AuctionListOwnedItemsResult& listOwnedItemsResult, Player const* player, uint32 /*offset*/) const
{
    // always full list
    std::vector<AuctionPosting const*> auctions;
    for (auto const& auctionId : Trinity::Containers::MapEqualRange(_playerOwnedAuctions, player->GetGUID()))
        if (AuctionPosting const* auction = Trinity::Containers::MapGetValuePtr(_itemsByAuctionId, auctionId.second))
            auctions.push_back(auction);

    // AuctionPosting::Sorter sorter(player->GetSession()->GetSessionDbcLocale(), sorts, sortCount);
    // std::sort(auctions.begin(), auctions.end(), std::cref(sorter));

    for (AuctionPosting const* resultAuction : auctions)
    {
        listOwnedItemsResult.Items.emplace_back();
        WorldPackets::AuctionHouse::AuctionItem& auctionItem = listOwnedItemsResult.Items.back();
        resultAuction->BuildAuctionItem(&auctionItem, false, false);
    }

    //listOwnerItemsResult.HasMoreResults = false;
}


void AuctionHouseObject::BuildListAuctionItems(WorldPackets::AuctionHouse::AuctionListItemsResult& listItemsResult, Player const* player,
    std::wstring const& searchedName, uint8 minLevel, uint8 maxLevel, bool exactMatch, bool onlyUsable, Optional<AuctionSearchClassFilters> const& filters, uint32 quality,
    uint32 offset, std::span<WorldPackets::AuctionHouse::AuctionSortDef const> sorts) const
{
    listItemsResult.TotalCount = 0;

    AuctionsResultBuilder<AuctionPosting> builder(offset, player->GetSession()->GetSessionDbcLocale(), sorts, AuctionHouseResultLimits::Items);

    std::chrono::system_clock::time_point curTime = GameTime::GetSystemTime();

    for (AuctionPosting const* auction : _auctions)
    {
        // Skip expired auctions
        if (auction->EndTime < curTime)
            continue;

        Item* item = auction->Item;
        if (!item)
            continue;

        if (filters)
        {
            // if we dont want any class filters, Optional is not initialized
            // if we dont want this class included, SubclassMask is set to FILTER_SKIP_CLASS
            // if we want this class and did not specify and subclasses, its set to FILTER_SKIP_SUBCLASS
            // otherwise full restrictions apply
            if (filters->Classes[auction->ItemClass].SubclassMask == AuctionSearchClassFilters::FILTER_SKIP_CLASS)
                continue;

            if (filters->Classes[auction->ItemClass].SubclassMask != AuctionSearchClassFilters::FILTER_SKIP_SUBCLASS)
            {
                if (!(filters->Classes[auction->ItemClass].SubclassMask & (1 << auction->ItemSubClass)))
                    continue;

                if (!(filters->Classes[auction->ItemClass].InvTypes[auction->ItemSubClass] & (1 << auction->InventoryType)))
                    continue;
            }
        }

        if (quality != 0xffffffff && auction->Quality != quality)
            continue;

        if (minLevel != 0 && auction->RequiredLevel < minLevel)
            continue;

        if (maxLevel != 0 && auction->RequiredLevel > maxLevel)
            continue;

        if (onlyUsable)
        {
            if (auction->RequiredLevel && player->GetLevel() < auction->RequiredLevel)
                continue;

            if (player->CanUseItem(item) != EQUIP_ERR_OK)
               continue;
        }

        // Allow search by suffix (ie: of the Monkey) or partial name (ie: Monkey)
        // No need to do any of this if no search term was entered
        if (!searchedName.empty())
        {
            if (exactMatch)
            {
                if (auction->FullName[player->GetSession()->GetSessionDbcLocale()] != searchedName)
                    continue;
            }

            if (auction->FullName[player->GetSession()->GetSessionDbcLocale()].find(searchedName) == std::wstring::npos)
                continue;
        }

        // Add the item if no search term or if entered search term was found
        builder.AddItem(auction);

        ++listItemsResult.TotalCount;
    }

    for (AuctionPosting const* resultAuction : builder.GetResultRange())
    {
        listItemsResult.Items.emplace_back();
        WorldPackets::AuctionHouse::AuctionItem& auctionItem = listItemsResult.Items.back();
        resultAuction->BuildAuctionItem(&auctionItem, resultAuction->OwnerAccount != player->GetSession()->GetAccountGUID(),
            resultAuction->Bidder.IsEmpty());
    }
}

void AuctionHouseObject::BuildReplicate(WorldPackets::AuctionHouse::AuctionReplicateResponse& replicateResponse, Player* player,
    uint32 global, uint32 cursor, uint32 tombstone, uint32 count)
{
    TimePoint curTime = GameTime::Now();

    auto throttleItr = _replicateThrottleMap.find(player->GetGUID());
    if (throttleItr != _replicateThrottleMap.end())
    {
        if (throttleItr->second.Global != global || throttleItr->second.Cursor != cursor || throttleItr->second.Tombstone != tombstone)
            return;

        if (!throttleItr->second.IsReplicationInProgress() && throttleItr->second.NextAllowedReplication > curTime)
            return;
    }
    else
    {
        throttleItr = _replicateThrottleMap.emplace(player->GetGUID(), PlayerReplicateThrottleData{}).first;
        throttleItr->second.NextAllowedReplication = curTime + Seconds(sWorld->getIntConfig(CONFIG_AUCTION_REPLICATE_DELAY));
        throttleItr->second.Global = sAuctionMgr->GenerateReplicationId();
    }

    if (_itemsByAuctionId.empty() || !count)
        return;

    auto itr = _itemsByAuctionId.upper_bound(cursor);
    for (; itr != _itemsByAuctionId.end(); ++itr)
    {
        AuctionPosting const& auction = itr->second;

        replicateResponse.Items.emplace_back();
        WorldPackets::AuctionHouse::AuctionItem& auctionItem = replicateResponse.Items.back();
        auction.BuildAuctionItem(&auctionItem, true, auction.Bidder.IsEmpty());
        if (!--count)
            break;
    }

    replicateResponse.ChangeNumberGlobal = throttleItr->second.Global;
    replicateResponse.ChangeNumberCursor = throttleItr->second.Cursor = !replicateResponse.Items.empty() ? replicateResponse.Items.back().AuctionID : 0;
    replicateResponse.ChangeNumberTombstone = throttleItr->second.Tombstone = !count ? _itemsByAuctionId.rbegin()->first : 0;
}

uint64 AuctionHouseObject::CalculateAuctionHouseCut(uint64 bidAmount) const
{
    return std::max(int64(CalculatePct(bidAmount, _auctionHouse->ConsignmentRate) * double(sWorld->getRate(RATE_AUCTION_CUT))), SI64LIT(0));
}

// this function notified old bidder that his bid is no longer highest
void AuctionHouseObject::SendAuctionOutbid(AuctionPosting const* auction, ObjectGuid newBidder, uint64 newBidAmount, CharacterDatabaseTransaction trans) const
{
    Player* oldBidder = ObjectAccessor::FindConnectedPlayer(auction->Bidder);

    // old bidder exist
    if ((oldBidder || sCharacterCache->HasCharacterCacheEntry(auction->Bidder)) && !sAuctionBotConfig->IsBotChar(auction->Bidder))
    {
        if (oldBidder)
        {
            WorldPackets::AuctionHouse::AuctionOutbidNotification packet;
            packet.BidAmount = newBidAmount;
            packet.MinIncrement = AuctionPosting::CalculateMinIncrement(newBidAmount);
            packet.Info.AuctionID = auction->Id;
            packet.Info.Bidder = newBidder;
            packet.Info.Item.Initialize(auction->Item);
            oldBidder->SendDirectMessage(packet.Write());
        }

        MailDraft(AuctionHouseMgr::BuildItemAuctionMailSubject(AuctionMailType::Outbid, auction), "")
            .AddMoney(auction->BidAmount)
            .SendMailTo(trans, MailReceiver(oldBidder, auction->Bidder), this, MAIL_CHECK_MASK_COPIED);
    }
}

void AuctionHouseObject::SendAuctionWon(AuctionPosting const* auction, Player* bidder, CharacterDatabaseTransaction trans) const
{
    uint32 bidderAccId = 0;
    if (!bidder)
        bidder = ObjectAccessor::FindConnectedPlayer(auction->Bidder); // try lookup bidder when called from ::Update

    // data for gm.log
    std::string bidderName;
    bool logGmTrade = auction->ServerFlags.HasFlag(AuctionPostingServerFlag::GmLogBuyer);

    if (bidder)
    {
        bidderAccId = bidder->GetSession()->GetAccountId();
        bidderName = bidder->GetName();
    }
    else
    {
        bidderAccId = sCharacterCache->GetCharacterAccountIdByGuid(auction->Bidder);

        if (logGmTrade && !sCharacterCache->GetCharacterNameByGuid(auction->Bidder, bidderName))
            bidderName = sObjectMgr->GetTrinityStringForDBCLocale(LANG_UNKNOWN);
    }

    if (logGmTrade)
    {
        std::string ownerName;
        if (!sCharacterCache->GetCharacterNameByGuid(auction->Owner, ownerName))
            ownerName = sObjectMgr->GetTrinityStringForDBCLocale(LANG_UNKNOWN);

        uint32 ownerAccId = sCharacterCache->GetCharacterAccountIdByGuid(auction->Owner);

        sLog->OutCommand(bidderAccId, "GM {} (Account: {}) won item in auction: {} (Entry: {} Count: {}) and pay money: {}. Original owner {} (Account: {})",
            bidderName, bidderAccId, auction->Item->GetNameForLocaleIdx(sWorld->GetDefaultDbcLocale()),
            auction->Item->GetEntry(), auction->Item->GetCount(), auction->BidAmount, ownerName, ownerAccId);
    }

    // receiver exist
    if ((bidder || bidderAccId) && !sAuctionBotConfig->IsBotChar(auction->Bidder))
    {
        MailDraft mail(AuctionHouseMgr::BuildItemAuctionMailSubject(AuctionMailType::Won, auction),
            AuctionHouseMgr::BuildAuctionWonMailBody(auction->Owner, auction->BidAmount, auction->BuyoutPrice));

        // set owner to bidder (to prevent delete item with sender char deleting)
        // owner in `data` will set at mail receive and item extracting
        if (Item* item = auction->Item)
        {
            CharacterDatabasePreparedStatement* stmt = CharacterDatabase.GetPreparedStatement(CHAR_UPD_ITEM_OWNER);
            stmt->setUInt64(0, auction->Bidder.GetCounter());
            stmt->setUInt64(1, item->GetGUID().GetCounter());
            trans->Append(stmt);

            mail.AddItem(item);
        }

        if (bidder)
        {
            WorldPackets::AuctionHouse::AuctionWonNotification packet;
            packet.Info.Initialize(auction);
            bidder->SendDirectMessage(packet.Write());

            // FIXME: for offline player need also
            bidder->UpdateCriteria(CriteriaType::AuctionsWon, 1);
        }

        mail.SendMailTo(trans, MailReceiver(bidder, auction->Bidder), this, MAIL_CHECK_MASK_COPIED);
    }
    else
    {
        // bidder doesn't exist, delete the item
        auction->Item->FSetState(ITEM_REMOVED);
        auction->Item->SaveToDB(trans);
    }
}

//call this method to send mail to auction owner, when auction is successful, it does not clear ram
void AuctionHouseObject::SendAuctionSold(AuctionPosting const* auction, Player* owner, CharacterDatabaseTransaction trans) const
{
    if (!owner)
        owner = ObjectAccessor::FindConnectedPlayer(auction->Owner);

    // owner exist
    if ((owner || sCharacterCache->HasCharacterCacheEntry(auction->Owner)) && !sAuctionBotConfig->IsBotChar(auction->Owner))
    {
        uint64 auctionHouseCut = CalculateAuctionHouseCut(auction->BidAmount);
        uint64 profit = auction->BidAmount + auction->Deposit - auctionHouseCut;

        //FIXME: what do if owner offline
        if (owner)
        {
            owner->UpdateCriteria(CriteriaType::MoneyEarnedFromAuctions, profit);
            owner->UpdateCriteria(CriteriaType::HighestAuctionSale, auction->BidAmount);
            //send auction owner notification, bidder must be current!
            owner->GetSession()->SendAuctionClosedNotification(auction, (float)sWorld->getIntConfig(CONFIG_MAIL_DELIVERY_DELAY), true);
        }

        MailDraft(AuctionHouseMgr::BuildItemAuctionMailSubject(AuctionMailType::Sold, auction),
            AuctionHouseMgr::BuildAuctionSoldMailBody(auction->Bidder, auction->BidAmount, auction->BuyoutPrice, auction->Deposit, auctionHouseCut))
            .AddMoney(profit)
            .SendMailTo(trans, MailReceiver(owner, auction->Owner), this, MAIL_CHECK_MASK_COPIED, sWorld->getIntConfig(CONFIG_MAIL_DELIVERY_DELAY));
    }
}

void AuctionHouseObject::SendAuctionExpired(AuctionPosting const* auction, CharacterDatabaseTransaction trans) const
{
    Player* owner = ObjectAccessor::FindConnectedPlayer(auction->Owner);
    // owner exist
    if ((owner || sCharacterCache->HasCharacterCacheEntry(auction->Owner)) && !sAuctionBotConfig->IsBotChar(auction->Owner))
    {
        if (owner)
            owner->GetSession()->SendAuctionClosedNotification(auction, 0.0f, false);

        MailDraft mail(AuctionHouseMgr::BuildItemAuctionMailSubject(AuctionMailType::Expired, auction), "");

        mail.AddItem(auction->Item);

        mail.SendMailTo(trans, MailReceiver(owner, auction->Owner), this, MAIL_CHECK_MASK_COPIED, 0);
    }
    else
    {
        // owner doesn't exist, delete the item
        auction->Item->FSetState(ITEM_REMOVED);
        auction->Item->SaveToDB(trans);
    }
}

void AuctionHouseObject::SendAuctionRemoved(AuctionPosting const* auction, Player* owner, CharacterDatabaseTransaction trans) const
{
    MailDraft draft(AuctionHouseMgr::BuildItemAuctionMailSubject(AuctionMailType::Cancelled, auction), "");

    draft.AddItem(auction->Item);

    draft.SendMailTo(trans, owner, this, MAIL_CHECK_MASK_COPIED);
}

//this function sends mail, when auction is cancelled to old bidder
void AuctionHouseObject::SendAuctionCancelledToBidder(AuctionPosting const* auction, CharacterDatabaseTransaction trans) const
{
    Player* bidder = ObjectAccessor::FindConnectedPlayer(auction->Bidder);

    // bidder exist
    if ((bidder || sCharacterCache->HasCharacterCacheEntry(auction->Bidder)) && !sAuctionBotConfig->IsBotChar(auction->Bidder))
        MailDraft(AuctionHouseMgr::BuildItemAuctionMailSubject(AuctionMailType::Removed, auction), "")
        .AddMoney(auction->BidAmount)
        .SendMailTo(trans, MailReceiver(bidder, auction->Bidder), this, MAIL_CHECK_MASK_COPIED);
}

void AuctionHouseObject::SendAuctionInvoice(AuctionPosting const* auction, Player* owner, CharacterDatabaseTransaction trans) const
{
    if (!owner)
        owner = ObjectAccessor::FindConnectedPlayer(auction->Owner);

    // owner exist (online or offline)
    if ((owner || sCharacterCache->HasCharacterCacheEntry(auction->Owner)) && !sAuctionBotConfig->IsBotChar(auction->Owner))
    {
        WowTime eta = *GameTime::GetUtcWowTime();
        eta += Seconds(sWorld->getIntConfig(CONFIG_MAIL_DELIVERY_DELAY));
        if (owner)
            eta += owner->GetSession()->GetTimezoneOffset();

        MailDraft(AuctionHouseMgr::BuildItemAuctionMailSubject(AuctionMailType::Invoice, auction),
            AuctionHouseMgr::BuildAuctionInvoiceMailBody(auction->Bidder, auction->BidAmount, auction->BuyoutPrice, auction->Deposit,
                CalculateAuctionHouseCut(auction->BidAmount), sWorld->getIntConfig(CONFIG_MAIL_DELIVERY_DELAY), eta.GetPackedTime()))
            .SendMailTo(trans, MailReceiver(owner, auction->Owner), this, MAIL_CHECK_MASK_COPIED);
    }
}
