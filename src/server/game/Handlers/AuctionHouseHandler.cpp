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

#include "WorldSession.h"
#include "AccountMgr.h"
#include "AuctionHouseMgr.h"
#include "AuctionHousePackets.h"
#include "CharacterCache.h"
#include "Creature.h"
#include "DatabaseEnv.h"
#include "GameTime.h"
#include "Item.h"
#include "Language.h"
#include "Log.h"
#include "Mail.h"
#include "ObjectAccessor.h"
#include "ObjectMgr.h"
#include "Player.h"
#include "Util.h"
#include "World.h"
#include <sstream>

//void called when player click on auctioneer npc
void WorldSession::HandleAuctionHelloOpcode(WorldPackets::AuctionHouse::AuctionHelloRequest& packet)
{
    Creature* unit = GetPlayer()->GetNPCIfCanInteractWith(packet.Guid, UNIT_NPC_FLAG_AUCTIONEER);
    if (!unit)
    {
        TC_LOG_DEBUG("network", "WORLD: HandleAuctionHelloOpcode - Unit (%s) not found or you can't interact with him.", packet.Guid.ToString().c_str());
        return;
    }

    // remove fake death
    if (GetPlayer()->HasUnitState(UNIT_STATE_DIED))
        GetPlayer()->RemoveAurasByType(SPELL_AURA_FEIGN_DEATH);

    SendAuctionHello(packet.Guid, unit);
}

//this void causes that auction window is opened
void WorldSession::SendAuctionHello(ObjectGuid guid, Creature* unit)
{
    if (GetPlayer()->getLevel() < sWorld->getIntConfig(CONFIG_AUCTION_LEVEL_REQ))
    {
        SendNotification(GetTrinityString(LANG_AUCTION_REQ), sWorld->getIntConfig(CONFIG_AUCTION_LEVEL_REQ));
        return;
    }

    AuctionHouseEntry const* ahEntry = AuctionHouseMgr::GetAuctionHouseEntry(unit->GetFaction(), nullptr);
    if (!ahEntry)
        return;

    WorldPackets::AuctionHouse::AuctionHelloResponse auctionHelloResponse;
    auctionHelloResponse.Guid = guid;
    auctionHelloResponse.OpenForBusiness = true;                         // 3.3.3: 1 - AH enabled, 0 - AH disabled
    SendPacket(auctionHelloResponse.Write());
}

void WorldSession::SendAuctionCommandResult(AuctionPosting const* auction, AuctionCommand command, AuctionResult errorCode, InventoryResult bagError)
{
    WorldPackets::AuctionHouse::AuctionCommandResult auctionCommandResult;
    auctionCommandResult.InitializeAuction(auction);
    auctionCommandResult.Command = AsUnderlyingType(command);
    auctionCommandResult.ErrorCode = AsUnderlyingType(errorCode);
    auctionCommandResult.BagResult = AsUnderlyingType(bagError);
    SendPacket(auctionCommandResult.Write());
}

void WorldSession::SendAuctionClosedNotification(AuctionPosting const* auction, float mailDelay, bool sold)
{
    WorldPackets::AuctionHouse::AuctionClosedNotification packet;
    packet.Info.Initialize(auction);
    packet.ProceedsMailDelay = mailDelay;
    packet.Sold = sold;
    SendPacket(packet.Write());
}

// void WorldSession::SendAuctionWonNotification(AuctionPosting const* auction, Item const* item)
// {
//     WorldPackets::AuctionHouse::AuctionWonNotification packet;
//     packet.Info.Initialize(auction, item);
//     SendPacket(packet.Write());
// }

void WorldSession::SendAuctionOwnerBidNotification(AuctionPosting const* auction)
{
    WorldPackets::AuctionHouse::AuctionOwnerBidNotification packet;
    packet.Info.Initialize(auction);
    packet.Bidder = auction->Bidder;
    packet.MinIncrement = auction->CalculateMinIncrement();
    SendPacket(packet.Write());
}

void WorldSession::HandleAuctionSellItem(WorldPackets::AuctionHouse::AuctionSellItem& sellItem)
{
    AuctionThrottleResult throttle = sAuctionMgr->CheckThrottle(_player, AuctionCommand::SellItem);
    if (throttle.Throttled)
        return;

    if (sellItem.Items.size() != 1 || sellItem.Items[0].UseCount != 1)
    {
        SendAuctionCommandResult(nullptr, AuctionCommand::SellItem, AuctionResult::ItemNotFound); //, throttle.DelayUntilNext);
        return;
    }

    if (!sellItem.MinBid && !sellItem.BuyoutPrice)
    {
        SendAuctionCommandResult(nullptr, AuctionCommand::SellItem, AuctionResult::NotEnoughMoney); //, throttle.DelayUntilNext);
        return;
    }

    if (sellItem.MinBid > MAX_MONEY_AMOUNT || sellItem.BuyoutPrice > MAX_MONEY_AMOUNT)
    {
        TC_LOG_DEBUG("network", "WORLD: HandleAuctionSellItem - Player %s (%s) attempted to sell item with higher price than max gold amount.", _player->GetName().c_str(), _player->GetGUID().ToString().c_str());
        SendAuctionCommandResult(nullptr, AuctionCommand::SellItem, AuctionResult::Inventory, EQUIP_ERR_TOO_MUCH_GOLD);
        return;
    }

    Creature* creature = GetPlayer()->GetNPCIfCanInteractWith(sellItem.Auctioneer, UNIT_NPC_FLAG_AUCTIONEER);
    if (!creature)
    {
        TC_LOG_DEBUG("network", "WORLD: HandleAuctionSellItem - Unit (%s) not found or you can't interact with him.", sellItem.Auctioneer.ToString().c_str());
        return;
    }

    uint32 houseId = 0;
    AuctionHouseEntry const* auctionHouseEntry = AuctionHouseMgr::GetAuctionHouseEntry(creature->GetFaction(), &houseId);
    if (!auctionHouseEntry)
    {
        TC_LOG_DEBUG("network", "WORLD: HandleAuctionSellItem - Unit (%s) has wrong faction.", sellItem.Auctioneer.ToString().c_str());
        return;
    }

    switch (sellItem.RunTime)
    {
        case 1 * MIN_AUCTION_TIME / MINUTE:
        case 2 * MIN_AUCTION_TIME / MINUTE:
        case 4 * MIN_AUCTION_TIME / MINUTE:
            break;
        default:
            SendAuctionCommandResult(nullptr, AuctionCommand::SellItem, AuctionResult::AuctionHouseBusy); //, throttle.DelayUntilNext);
            return;
    }

    if (GetPlayer()->HasUnitState(UNIT_STATE_DIED))
        GetPlayer()->RemoveAurasByType(SPELL_AURA_FEIGN_DEATH);

    Item* item = _player->GetItemByGuid(sellItem.Items[0].Guid);
    if (!item)
    {
        SendAuctionCommandResult(nullptr, AuctionCommand::SellItem, AuctionResult::ItemNotFound); //, throttle.DelayUntilNext);
        return;
    }

    if (sAuctionMgr->GetAItem(item->GetGUID()) || !item->CanBeTraded() || item->IsNotEmptyBag() ||
        item->GetTemplate()->GetFlags() & ITEM_FLAG_CONJURED || item->GetExpiration() ||
        item->GetCount() != 1)
    {
        SendAuctionCommandResult(nullptr, AuctionCommand::SellItem, AuctionResult::DatabaseError); //, throttle.DelayUntilNext);
        return;
    }

    Seconds auctionTime = Seconds(int64(std::chrono::duration_cast<Seconds>(Minutes(sellItem.RunTime)).count() * double(sWorld->getRate(RATE_AUCTION_TIME))));
    AuctionHouseObject* auctionHouse = sAuctionMgr->GetAuctionsMap(creature->GetFaction());

    uint64 deposit = AuctionHouseMgr::GetItemAuctionDeposit(_player, item, Minutes(sellItem.RunTime));
    if (!_player->HasEnoughMoney(deposit))
    {
        SendAuctionCommandResult(nullptr, AuctionCommand::SellItem, AuctionResult::NotEnoughMoney); //, throttle.DelayUntilNext);
        return;
    }

    uint32 auctionId = sObjectMgr->GenerateAuctionID();

    AuctionPosting auction;
    auction.Id = auctionId;
    auction.Owner = _player->GetGUID();
    auction.OwnerAccount = GetAccountGUID();
    auction.MinBid = sellItem.MinBid;
    auction.BuyoutPrice = sellItem.BuyoutPrice;
    auction.Deposit = deposit;
    auction.StartTime = GameTime::GetGameTimeSystemPoint();
    auction.EndTime = auction.StartTime + auctionTime;

    if (HasPermission(rbac::RBAC_PERM_LOG_GM_TRADE))
    {
        sLog->outCommand(GetAccountId(), "GM %s (Account: %u) create auction: %s (Entry: %u Count: %u)",
            GetPlayerName().c_str(), GetAccountId(), item->GetTemplate()->GetDefaultLocaleName(), item->GetEntry(), item->GetCount());
    }

    auction.Item = std::move(item);

    TC_LOG_INFO("network", "CMSG_AuctionAction::SellItem: %s %s is selling item %s %s to auctioneer %s with count %u with initial bid " UI64FMTD " with buyout " UI64FMTD " and with time %u (in sec) in auctionhouse %u",
        _player->GetGUID().ToString().c_str(), _player->GetName().c_str(), item->GetGUID().ToString().c_str(), item->GetTemplate()->GetDefaultLocaleName(),
        creature->GetGUID().ToString().c_str(), item->GetCount(), sellItem.MinBid, sellItem.BuyoutPrice, uint32(auctionTime.count()), auctionHouse->GetAuctionHouseId());

    // Add to pending auctions, or fail with insufficient funds error
    if (!sAuctionMgr->PendingAuctionAdd(_player, auctionHouse->GetAuctionHouseId(), auctionId, auction.Deposit))
    {
        SendAuctionCommandResult(nullptr, AuctionCommand::SellItem, AuctionResult::NotEnoughMoney); //, throttle.DelayUntilNext);
        return;
    }

    _player->MoveItemFromInventory(item->GetBagSlot(), item->GetSlot(), true);

    CharacterDatabaseTransaction trans = CharacterDatabase.BeginTransaction();
    item->DeleteFromInventoryDB(trans);
    item->SaveToDB(trans);

    auctionHouse->AddAuction(trans, std::move(auction));
    _player->SaveInventoryAndGoldToDB(trans);
    AddTransactionCallback(CharacterDatabase.AsyncCommitTransaction(trans)).AfterComplete([this, auction, auctionPlayerGuid = _player->GetGUID(), throttle](bool success)
    {
        if (GetPlayer() && GetPlayer()->GetGUID() == auctionPlayerGuid)
        {
            if (success)
            {
                GetPlayer()->UpdateCriteria(CRITERIA_TYPE_CREATE_AUCTION, 1);
                SendAuctionCommandResult(&auction, AuctionCommand::SellItem, AuctionResult::Ok);
            }
            else
                SendAuctionCommandResult(nullptr, AuctionCommand::SellItem, AuctionResult::DatabaseError); //, throttle.DelayUntilNext);
        }
    });
}

void WorldSession::HandleAuctionPlaceBid(WorldPackets::AuctionHouse::AuctionPlaceBid& placeBid)
{
    AuctionThrottleResult throttle = sAuctionMgr->CheckThrottle(_player, AuctionCommand::PlaceBid);
    if (throttle.Throttled)
        return;

    Creature* creature = GetPlayer()->GetNPCIfCanInteractWith(placeBid.Auctioneer, UNIT_NPC_FLAG_AUCTIONEER);
    if (!creature)
    {
        TC_LOG_DEBUG("network", "WORLD: HandleAuctionPlaceBid - %s not found or you can't interact with him.", placeBid.Auctioneer.ToString().c_str());
        return;
    }

    // remove fake death
    if (GetPlayer()->HasUnitState(UNIT_STATE_DIED))
        GetPlayer()->RemoveAurasByType(SPELL_AURA_FEIGN_DEATH);

    AuctionHouseObject* auctionHouse = sAuctionMgr->GetAuctionsMap(creature->GetFaction());

    AuctionPosting* auction = auctionHouse->GetAuction(placeBid.AuctionID);
    if (!auction)
    {
        SendAuctionCommandResult(nullptr, AuctionCommand::PlaceBid, AuctionResult::ItemNotFound); //, throttle.DelayUntilNext);
        return;
    }

    Player* player = GetPlayer();

    // check auction owner - cannot buy own auctions
    if (auction->Owner == player->GetGUID() || auction->OwnerAccount == GetAccountGUID())
    {
        SendAuctionCommandResult(auction, AuctionCommand::PlaceBid, AuctionResult::BidOwn); //, throttle.DelayUntilNext);
        return;
    }

    bool canBid = auction->MinBid != 0;
    bool canBuyout = auction->BuyoutPrice != 0;

    // buyout attempt with wrong amount
    if (!canBid && placeBid.BidAmount != auction->BuyoutPrice)
    {
        SendAuctionCommandResult(auction, AuctionCommand::PlaceBid, AuctionResult::BidIncrement); //, throttle.DelayUntilNext);
        return;
    }

    uint64 minBid = auction->BidAmount ? auction->BidAmount + auction->CalculateMinIncrement() : auction->MinBid;
    if (canBid && placeBid.BidAmount < minBid)
    {
        SendAuctionCommandResult(auction, AuctionCommand::PlaceBid, AuctionResult::HigherBid); //, throttle.DelayUntilNext);
        return;
    }

    CharacterDatabaseTransaction trans = CharacterDatabase.BeginTransaction();

    uint64 priceToPay = placeBid.BidAmount;
    if (!auction->Bidder.IsEmpty())
    {
        // return money to previous bidder
        if (auction->Bidder != player->GetGUID())
            auctionHouse->SendAuctionOutbid(auction, player->GetGUID(), placeBid.BidAmount, trans);
        else
            priceToPay = placeBid.BidAmount - auction->BidAmount;
    }

    // check money
    if (!player->HasEnoughMoney(priceToPay))
    {
        SendAuctionCommandResult(auction, AuctionCommand::PlaceBid, AuctionResult::NotEnoughMoney); //, throttle.DelayUntilNext);
        return;
    }

    player->ModifyMoney(-int64(priceToPay));
    auctionHouse->SetAuctionBidder(auction, _player->GetGUID(), placeBid.BidAmount);

    if (canBuyout && placeBid.BidAmount == auction->BuyoutPrice)
    {
        // buyout
        auctionHouse->SendAuctionWon(auction, player, trans);
        auctionHouse->SendAuctionSold(auction, nullptr, trans);

        auctionHouse->RemoveAuction(trans, auction);
    }
    else
    {
        // place bid
        CharacterDatabasePreparedStatement* stmt = CharacterDatabase.GetPreparedStatement(CHAR_UPD_AUCTION_BID);
        stmt->setUInt64(0, auction->Bidder.GetCounter());
        stmt->setUInt64(1, auction->BidAmount);
        stmt->setUInt32(2, auction->Id);
        trans->Append(stmt);

        // Not sure if we must send this now.
        if (Player* owner = ObjectAccessor::FindConnectedPlayer(auction->Owner))
            owner->GetSession()->SendAuctionOwnerBidNotification(auction);
    }

    player->SaveInventoryAndGoldToDB(trans);
    AddTransactionCallback(CharacterDatabase.AsyncCommitTransaction(trans)).AfterComplete(
        [this, auction, bidAmount = placeBid.BidAmount, auctionPlayerGuid = _player->GetGUID(), throttle](bool success)
    {
        if (GetPlayer() && GetPlayer()->GetGUID() == auctionPlayerGuid)
        {
            if (success)
            {
                GetPlayer()->UpdateCriteria(CRITERIA_TYPE_HIGHEST_AUCTION_BID, bidAmount);
                SendAuctionCommandResult(auction, AuctionCommand::PlaceBid, AuctionResult::Ok); //, throttle.DelayUntilNext);
            }
            else
                SendAuctionCommandResult(auction, AuctionCommand::PlaceBid, AuctionResult::DatabaseError); //, throttle.DelayUntilNext);
        }
    });
}

//this void is called when auction_owner cancels his auction
void WorldSession::HandleAuctionRemoveItem(WorldPackets::AuctionHouse::AuctionRemoveItem& removeItem)
{
    AuctionThrottleResult throttle = sAuctionMgr->CheckThrottle(_player, AuctionCommand::Cancel);
    if (throttle.Throttled)
        return;

    Creature* creature = GetPlayer()->GetNPCIfCanInteractWith(removeItem.Auctioneer, UNIT_NPC_FLAG_AUCTIONEER);
    if (!creature)
    {
        TC_LOG_DEBUG("network", "WORLD: HandleAuctionRemoveItem - %s not found or you can't interact with him.", removeItem.Auctioneer.ToString().c_str());
        return;
    }

    // remove fake death
    if (GetPlayer()->HasUnitState(UNIT_STATE_DIED))
        GetPlayer()->RemoveAurasByType(SPELL_AURA_FEIGN_DEATH);

    AuctionHouseObject* auctionHouse = sAuctionMgr->GetAuctionsMap(creature->GetFaction());

    AuctionPosting* auction = auctionHouse->GetAuction(removeItem.AuctionID);
    Player* player = GetPlayer();

    CharacterDatabaseTransaction trans = CharacterDatabase.BeginTransaction();
    if (auction && auction->Owner == player->GetGUID())
    {
        if (auction->Bidder.IsEmpty())                   // If we have a bidder, we have to send him the money he paid
        {
            uint64 cancelCost = CalculatePct(auction->BidAmount, 5u);
            if (!player->HasEnoughMoney(cancelCost))          //player doesn't have enough money
            {
                SendAuctionCommandResult(nullptr, AuctionCommand::Cancel, AuctionResult::NotEnoughMoney); //, throttle.DelayUntilNext);
                return;
            }
            auctionHouse->SendAuctionCancelledToBidder(auction, trans);
            player->ModifyMoney(-int64(cancelCost));
        }

        auctionHouse->SendAuctionRemoved(auction, player, trans);
    }
    else
    {
        SendAuctionCommandResult(nullptr, AuctionCommand::Cancel, AuctionResult::DatabaseError); //, throttle.DelayUntilNext);
        //this code isn't possible ... maybe there should be assert
        TC_LOG_ERROR("entities.player.cheat", "CHEATER: %s tried to cancel auction (id: %u) of another player or auction is NULL", player->GetGUID().ToString().c_str(), removeItem.AuctionID);
        return;
    }

    // Now remove the auction
    player->SaveInventoryAndGoldToDB(trans);
    auctionHouse->RemoveAuction(trans, auction);
    AddTransactionCallback(CharacterDatabase.AsyncCommitTransaction(trans)).AfterComplete(
        [this, auction, auctionPlayerGuid = _player->GetGUID(), throttle](bool success)
    {
        if (GetPlayer() && GetPlayer()->GetGUID() == auctionPlayerGuid)
        {
            if (success)
                SendAuctionCommandResult(auction, AuctionCommand::Cancel, AuctionResult::Ok); //, throttle.DelayUntilNext);        //inform player, that auction is removed
            else
                SendAuctionCommandResult(nullptr, AuctionCommand::Cancel, AuctionResult::DatabaseError); //, throttle.DelayUntilNext);
        }
    });
}

//called when player lists his bids
void WorldSession::HandleAuctionListBiddedItems(WorldPackets::AuctionHouse::AuctionListBiddedItems& listBiddedItems)
{
    AuctionThrottleResult throttle = sAuctionMgr->CheckThrottle(_player);
    if (throttle.Throttled)
        return;

    Creature* creature = GetPlayer()->GetNPCIfCanInteractWith(listBiddedItems.Auctioneer, UNIT_NPC_FLAG_AUCTIONEER);
    if (!creature)
    {
        TC_LOG_DEBUG("network", "WORLD: HandleAuctionListBiddedItems - %s not found or you can't interact with him.", listBiddedItems.Auctioneer.ToString().c_str());
        return;
    }

    // remove fake death
    if (GetPlayer()->HasUnitState(UNIT_STATE_DIED))
        GetPlayer()->RemoveAurasByType(SPELL_AURA_FEIGN_DEATH);

    AuctionHouseObject* auctionHouse = sAuctionMgr->GetAuctionsMap(creature->GetFaction());

    WorldPackets::AuctionHouse::AuctionListBiddedItemsResult result;

    Player* player = GetPlayer();
    auctionHouse->BuildListBiddedItems(result, player, listBiddedItems.Offset);
    result.DesiredDelay = uint32(throttle.DelayUntilNext.count());
    SendPacket(result.Write());
}

//this void sends player info about his auctions
void WorldSession::HandleAuctionListOwnerItems(WorldPackets::AuctionHouse::AuctionListOwnedItems& listOwnerItems)
{
    AuctionThrottleResult throttle = sAuctionMgr->CheckThrottle(_player);
    if (throttle.Throttled)
        return;

    Creature* creature = GetPlayer()->GetNPCIfCanInteractWith(listOwnerItems.Auctioneer, UNIT_NPC_FLAG_AUCTIONEER);
    if (!creature)
    {
        TC_LOG_DEBUG("network", "WORLD: HandleAuctionListOwnerItems - %s not found or you can't interact with him.", listOwnerItems.Auctioneer.ToString().c_str());
        return;
    }

    // remove fake death
    if (GetPlayer()->HasUnitState(UNIT_STATE_DIED))
        GetPlayer()->RemoveAurasByType(SPELL_AURA_FEIGN_DEATH);

    AuctionHouseObject* auctionHouse = sAuctionMgr->GetAuctionsMap(creature->GetFaction());

    WorldPackets::AuctionHouse::AuctionListOwnedItemsResult result;

    auctionHouse->BuildListOwnedItems(result, _player, listOwnerItems.Offset);
    result.DesiredDelay = uint32(throttle.DelayUntilNext.count());
    SendPacket(result.Write());
}

//this void is called when player clicks on search button
void WorldSession::HandleAuctionListItems(WorldPackets::AuctionHouse::AuctionListItems& listItems)
{
    AuctionThrottleResult throttle = sAuctionMgr->CheckThrottle(_player);
    if (throttle.Throttled)
        return;

    Creature* creature = GetPlayer()->GetNPCIfCanInteractWith(listItems.Auctioneer, UNIT_NPC_FLAG_AUCTIONEER);
    if (!creature)
    {
        TC_LOG_DEBUG("network", "WORLD: HandleAuctionListItems - %s not found or you can't interact with him.", listItems.Auctioneer.ToString().c_str());
        return;
    }

    // remove fake death
    if (GetPlayer()->HasUnitState(UNIT_STATE_DIED))
        GetPlayer()->RemoveAurasByType(SPELL_AURA_FEIGN_DEATH);

    AuctionHouseObject* auctionHouse = sAuctionMgr->GetAuctionsMap(creature->GetFaction());

    TC_LOG_DEBUG("auctionHouse", "Auctionhouse search (%s), searchedname: %s, levelmin: %u, levelmax: %u, quality: %u, usable: %u",
        listItems.Auctioneer.ToString().c_str(), listItems.Name.c_str(), listItems.MinLevel, listItems.MaxLevel , listItems.Quality, listItems.OnlyUsable);

    // converting string that we try to find to lower case
    std::wstring wsearchedname;
    if (!Utf8toWStr(listItems.Name, wsearchedname))
        return;

    wstrToLower(wsearchedname);

    Optional<AuctionSearchClassFilters> filters;

    WorldPackets::AuctionHouse::AuctionListItemsResult result;
    if (!listItems.ClassFilters.empty())
    {
        filters = boost::in_place();

        for (auto const& classFilter : listItems.ClassFilters)
        {
            if (!classFilter.SubClassFilters.empty())
            {
                for (auto const& subClassFilter : classFilter.SubClassFilters)
                {
                    if (classFilter.ItemClass < MAX_ITEM_CLASS)
                    {
                        filters->Classes[classFilter.ItemClass].SubclassMask |= 1 << subClassFilter.ItemSubclass;
                        if (subClassFilter.ItemSubclass < MAX_ITEM_SUBCLASS_TOTAL)
                            filters->Classes[classFilter.ItemClass].InvTypes[subClassFilter.ItemSubclass] = subClassFilter.InvTypeMask;
                    }
                }
            }
            else
                filters->Classes[classFilter.ItemClass].SubclassMask = AuctionSearchClassFilters::FILTER_SKIP_SUBCLASS;
        }
    }

    auctionHouse->BuildListAuctionItems(result, _player, wsearchedname, listItems.MinLevel, listItems.MaxLevel, listItems.OnlyUsable, filters, listItems.Quality, listItems.Offset, listItems.DataSort.data(), listItems.DataSort.size());

    result.DesiredDelay = uint32(throttle.DelayUntilNext.count());
    result.OnlyUsable = listItems.OnlyUsable;
    SendPacket(result.Write());
}

void WorldSession::HandleAuctionListPendingSales(WorldPackets::AuctionHouse::AuctionListPendingSales& /*packet*/)
{
    WorldPackets::AuctionHouse::AuctionListPendingSalesResult result;
    result.TotalNumRecords = 0;
    SendPacket(result.Write());
}

void WorldSession::HandleReplicateItems(WorldPackets::AuctionHouse::AuctionReplicateItems& packet)
{
    Creature* creature = GetPlayer()->GetNPCIfCanInteractWith(packet.Auctioneer, UNIT_NPC_FLAG_AUCTIONEER);
    if (!creature)
    {
        TC_LOG_DEBUG("network", "WORLD: HandleReplicateItems - %s not found or you can't interact with him.", packet.Auctioneer.ToString().c_str());
        return;
    }

    // remove fake death
    if (GetPlayer()->HasUnitState(UNIT_STATE_DIED))
        GetPlayer()->RemoveAurasByType(SPELL_AURA_FEIGN_DEATH);

    AuctionHouseObject* auctionHouse = sAuctionMgr->GetAuctionsMap(creature->GetFaction());

    WorldPackets::AuctionHouse::AuctionReplicateResponse response;

    auctionHouse->BuildReplicate(response, GetPlayer(), packet.ChangeNumberGlobal, packet.ChangeNumberCursor, packet.ChangeNumberTombstone, packet.Count);

    response.DesiredDelay = sWorld->getIntConfig(CONFIG_AUCTION_SEARCH_DELAY) * 5;
    response.Result = 0;
    SendPacket(response.Write());
}
