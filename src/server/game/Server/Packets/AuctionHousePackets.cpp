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

#include "AuctionHousePackets.h"
#include "AuctionHouseMgr.h"
#include "ObjectGuid.h"
#include "MailPackets.h"

namespace WorldPackets
{
namespace AuctionHouse
{
ByteBuffer& operator>>(ByteBuffer& data, AuctionListFilterSubClass& filterSubClass)
{
    data >> filterSubClass.ItemSubclass;
    data >> filterSubClass.InvTypeMask;

    return data;
}

ByteBuffer& operator>>(ByteBuffer& data, AuctionListFilterClass& filterClass)
{
    data >> filterClass.ItemClass;
    filterClass.SubClassFilters.resize(data.ReadBits(5));
    for (AuctionListFilterSubClass& filterSubClass : filterClass.SubClassFilters)
        data >> filterSubClass;

    return data;
}

ByteBuffer& operator>>(ByteBuffer& data, AuctionSortDef& sortDef)
{
    sortDef.SortOrder = static_cast<AuctionHouseSortOrder>(data.read<uint8>());
    sortDef.ReverseSort = data.read<uint8>() > 0;

    return data;
}

ByteBuffer& operator<<(ByteBuffer& data, AuctionItem const& auctionItem)
{
    data << auctionItem.Item; // ItemInstance
    data << int32(auctionItem.Count);
    data << int32(auctionItem.Charges);
    data << int32(auctionItem.Flags);
    data << int32(auctionItem.AuctionID);
    data << auctionItem.Owner;
    data << uint64(auctionItem.MinBid);
    data << uint64(auctionItem.MinIncrement);
    data << uint64(auctionItem.BuyoutPrice);
    data << int32(auctionItem.DurationLeft);
    data << uint8(auctionItem.DeleteReason);
    data.WriteBits(auctionItem.Enchantments.size(), 4);
    data.WriteBits(auctionItem.Gems.size(), 2);
    data.WriteBit(auctionItem.CensorServerSideInfo);
    data.WriteBit(auctionItem.CensorBidInfo);
    data.FlushBits();

    for (WorldPackets::Item::ItemGemData const& gem : auctionItem.Gems)
        data << gem;

    for (WorldPackets::Item::ItemEnchantData const& enchant : auctionItem.Enchantments)
        data << enchant;

    if (!auctionItem.CensorServerSideInfo)
    {
        data << auctionItem.ItemGuid;
        data << auctionItem.OwnerAccountID;
        data << int32(auctionItem.EndTime);
    }

    if (!auctionItem.CensorBidInfo)
    {
        data << auctionItem.Bidder;
        data << uint64(auctionItem.BidAmount);
    }

    return data;
}

ByteBuffer& operator<<(ByteBuffer& data, AuctionOwnerNotification const& ownerNotification)
{
    data << int32(ownerNotification.AuctionID);
    data << uint64(ownerNotification.BidAmount);
    data << ownerNotification.Item;
    return data;
}

ByteBuffer& operator<<(ByteBuffer& data, AuctionBidderNotification const& bidderNotification)
{
    data << int32(bidderNotification.AuctionID);
    data << bidderNotification.Bidder;
    data << bidderNotification.Item;
    return data;
}

void AuctionOwnerNotification::Initialize(::AuctionPosting const* auction)
{
    AuctionID = auction->Id;
    Item.Initialize(auction->Item);
    BidAmount = auction->BidAmount;
}

void AuctionBidderNotification::Initialize(::AuctionPosting const* auction)
{
    AuctionID = auction->Id;
    Item.Initialize(auction->Item);
    Bidder = auction->Bidder;
}

void AuctionHelloRequest::Read()
{
    _worldPacket >> Guid;
}

WorldPacket const* AuctionHelloResponse::Write()
{
    _worldPacket << Guid;
    _worldPacket.WriteBit(OpenForBusiness);
    _worldPacket.FlushBits();

    return &_worldPacket;
}

AuctionCommandResult::AuctionCommandResult()
    : ServerPacket(SMSG_AUCTION_COMMAND_RESULT, 4 + 4 + 4 + 8 + 4 + 8 + 8 + 8) { }

void AuctionCommandResult::InitializeAuction(::AuctionPosting const* auction)
{
    if (auction)
    {
        AuctionID       = auction->Id;
        Money           = auction->BidAmount == auction->BuyoutPrice ? 0 : auction->BidAmount;
        MinIncrement    = auction->BidAmount == auction->BuyoutPrice ? 0 : auction->CalculateMinIncrement();
        Guid            = auction->Bidder;
    }
}

WorldPacket const* AuctionCommandResult::Write()
{
    _worldPacket << uint32(AuctionID);
    _worldPacket << int32(Command);
    _worldPacket << int32(ErrorCode);
    _worldPacket << int32(BagResult);
    _worldPacket << Guid;
    _worldPacket << uint64(MinIncrement);
    _worldPacket << uint64(Money);

    return &_worldPacket;
}

void AuctionSellItem::Read()
{
    _worldPacket >> Auctioneer;
    _worldPacket >> MinBid;
    _worldPacket >> BuyoutPrice;
    _worldPacket >> RunTime;

    Items.resize(_worldPacket.ReadBits(5));
    _worldPacket.ResetBitPos();

    for (AuctionSellItem::AuctionItemForSale& item : Items)
    {
        _worldPacket >> item.Guid;
        _worldPacket >> item.UseCount;
    }
}

void AuctionPlaceBid::Read()
{
    _worldPacket >> Auctioneer;
    _worldPacket >> AuctionID;
    _worldPacket >> BidAmount;
}

void AuctionListBidderItems::Read()
{
    _worldPacket >> Auctioneer;
    _worldPacket >> Offset;
    uint8 AuctionIDsCount = _worldPacket.ReadBits(7);
    _worldPacket.ResetBitPos();

    for (uint8 i = 0; i < AuctionIDsCount; i++)
    {
        uint32 AuctionID = 0;
        _worldPacket >> AuctionID;
        AuctionIDs.emplace_back(AuctionID);
    }
}

void AuctionRemoveItem::Read()
{
    _worldPacket >> Auctioneer;
    _worldPacket >> AuctionID;
}

void AuctionReplicateItems::Read()
{
    _worldPacket >> Auctioneer;
    _worldPacket >> ChangeNumberGlobal;
    _worldPacket >> ChangeNumberCursor;
    _worldPacket >> ChangeNumberTombstone;
    _worldPacket >> Count;
}

WorldPacket const* AuctionListItemsResult::Write()
{
    _worldPacket << int32(Items.size());
    _worldPacket << int32(TotalCount);
    _worldPacket << int32(DesiredDelay);
    _worldPacket.WriteBit(OnlyUsable);
    _worldPacket.FlushBits();

    for (AuctionItem const& item : Items)
        _worldPacket << item;

    return &_worldPacket;
}

WorldPacket const* AuctionListOwnerItemsResult::Write()
{
    _worldPacket << int32(Items.size());
    _worldPacket << uint32(TotalCount);
    _worldPacket << uint32(DesiredDelay);

    for (AuctionItem const& item : Items)
        _worldPacket << item;

    return &_worldPacket;
}

WorldPacket const* AuctionListBidderItemsResult::Write()
{
    _worldPacket << int32(Items.size());
    _worldPacket << uint32(TotalCount);
    _worldPacket << uint32(DesiredDelay);

    for (AuctionItem const& item : Items)
        _worldPacket << item;

    return &_worldPacket;
}

void AuctionListItems::Read()
{
    _worldPacket >> Offset;
    _worldPacket >> Auctioneer;
    _worldPacket >> MinLevel;
    _worldPacket >> MaxLevel;
    _worldPacket >> Quality;
    DataSort.resize(_worldPacket.read<uint8>());
    KnownPets.resize(_worldPacket.read<uint32>());
    _worldPacket >> MaxPetLevel;
    for (std::size_t i = 0; i < KnownPets.size(); ++i)
        _worldPacket >> KnownPets[i];

    Name = _worldPacket.ReadString(_worldPacket.ReadBits(8));
    ClassFilters.resize(_worldPacket.ReadBits(3));
    OnlyUsable = _worldPacket.ReadBit();
    ExactMatch = _worldPacket.ReadBit();

    for (AuctionListFilterClass& filterClass : ClassFilters)
        _worldPacket >> filterClass;

    _worldPacket.read_skip<uint32>(); // DataSize = (SortCount * 2)
    for (AuctionSortDef& sort : DataSort)
        _worldPacket >> sort;
}

void AuctionListOwnerItems::Read()
{
    _worldPacket >> Auctioneer;
    _worldPacket >> Offset;
}

AuctionListPendingSalesResult::AuctionListPendingSalesResult() : ServerPacket(SMSG_AUCTION_LIST_PENDING_SALES_RESULT, 140)
{
}

AuctionListPendingSalesResult::~AuctionListPendingSalesResult()
{
}

WorldPacket const* AuctionListPendingSalesResult::Write()
{
    _worldPacket << uint32(Mails.size());
    _worldPacket << int32(TotalNumRecords);

    for (auto const& mail : Mails)
        _worldPacket << mail;

    return &_worldPacket;
}

WorldPacket const* AuctionClosedNotification::Write()
{
    _worldPacket << Info;
    _worldPacket << float(ProceedsMailDelay);
    _worldPacket.WriteBit(Sold);
    _worldPacket.FlushBits();

    return &_worldPacket;
}

WorldPacket const* AuctionOwnerBidNotification::Write()
{
    _worldPacket << Info;
    _worldPacket << uint64(MinIncrement);
    _worldPacket << Bidder;

    return &_worldPacket;
}

WorldPacket const* AuctionWonNotification::Write()
{
    _worldPacket << Info;

    return &_worldPacket;
}

WorldPacket const* AuctionOutbidNotification::Write()
{
    _worldPacket << Info;
    _worldPacket << uint64(BidAmount);
    _worldPacket << uint64(MinIncrement);

    return &_worldPacket;
}

WorldPacket const* AuctionReplicateResponse::Write()
{
    _worldPacket << uint32(Result);
    _worldPacket << uint32(DesiredDelay);
    _worldPacket << uint32(ChangeNumberGlobal);
    _worldPacket << uint32(ChangeNumberCursor);
    _worldPacket << uint32(ChangeNumberTombstone);
    _worldPacket << uint32(Items.size());

    for (auto const& item : Items)
        _worldPacket << item;

    return &_worldPacket;
}
}
}
