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

#ifndef _AUCTION_HOUSE_MGR_H
#define _AUCTION_HOUSE_MGR_H

#include "Define.h"
#include "DatabaseEnvFwd.h"
#include "Duration.h"
#include "ItemTemplate.h"
#include "ObjectGuid.h"
#include "Optional.h"
#include <map>
#include <set>
#include <unordered_map>

class Item;
class Player;
class WorldPacket;

namespace WorldPackets
{
    namespace AuctionHouse
    {
        struct AuctionItem;
        struct AuctionSortDef;
        class AuctionListBidderItemsResult;
        class AuctionListOwnerItemsResult;
        class AuctionListItemsResult;
        class AuctionReplicateResponse;
    }
}

uint32 constexpr MIN_AUCTION_TIME = 12 * HOUR;

enum class AuctionResult : int8
{
    Ok                      = 0,
    Inventory               = 1,
    DatabaseError           = 2,
    NotEnoughMoney          = 3,
    ItemNotFound            = 4,
    HigherBid               = 5,
    BidIncrement            = 7,
    BidOwn                  = 10,
    RestrictedAccountTrial  = 13,
    HasRestriction          = 17,
    AuctionHouseBusy        = 18,
    AuctionHouseUnavailable = 19,
    CommodityPurchaseFailed = 21,
    ItemHasQuote            = 23
};

enum class AuctionCommand : int8
{
    SellItem    = 0,
    Cancel      = 1,
    PlaceBid    = 2
};

enum class AuctionMailType : int32
{
    Outbid      = 0,
    Won         = 1,
    Sold        = 2,
    Expired     = 3,
    Removed     = 4, // for bidder
    Cancelled   = 5, // for seller
    Invoice     = 6
};

// TODO: AH - is this used?
enum class AuctionHouseResultLimits : std::size_t
{
    Browse = 500,
    Items = 50
};

enum class AuctionHouseSortOrder : uint8
{
    Level     = 0,
    Quality   = 1,
    Unknown2  = 2,
    Duration  = 3,
    Unknown4  = 4,
    Unknown5  = 5,
    Unknown6  = 6,
    Seller    = 7,
    Unknown8  = 8,
    Unknown9  = 9,
    Unknown10 = 10,
    Unknown11 = 11,
    Price     = 12
};

struct AuctionSearchClassFilters
{
    enum FilterType : uint32
    {
        FILTER_SKIP_CLASS = 0,
        FILTER_SKIP_SUBCLASS = 0xFFFFFFFF,
        FILTER_SKIP_INVTYPE = 0xFFFFFFFF
    };

    struct SubclassFilter
    {
        uint32 SubclassMask = FILTER_SKIP_CLASS;
        std::array<uint32, MAX_ITEM_SUBCLASS_TOTAL> InvTypes = { };
    };

    std::array<SubclassFilter, MAX_ITEM_CLASS> Classes = { };
};

struct AuctionPosting
{
    uint32 Id = 0;

    ::Item* Item;
    ObjectGuid Owner;
    ObjectGuid OwnerAccount;
    ObjectGuid Bidder;
    uint64 MinBid = 0;
    uint64 BuyoutPrice = 0;
    uint64 Deposit = 0;
    uint64 BidAmount = 0;
    std::chrono::system_clock::time_point StartTime = std::chrono::system_clock::time_point::min();
    std::chrono::system_clock::time_point EndTime = std::chrono::system_clock::time_point::min();

    void BuildAuctionItem(WorldPackets::AuctionHouse::AuctionItem* auctionItem, bool alwaysSendItem, bool sendKey, bool censorServerInfo, bool censorBidInfo) const;
    static uint64 CalculateMinIncrement(uint64 currentBid);
    uint64 CalculateMinIncrement() const { return CalculateMinIncrement(BidAmount); }

    class Sorter;
};

struct AuctionThrottleResult
{
    Milliseconds DelayUntilNext;
    bool Throttled;
};

//this class is used as auctionhouse instance
class TC_GAME_API AuctionHouseObject
{
public:
    explicit AuctionHouseObject(uint32 auctionHouseId);

    ~AuctionHouseObject();

    struct PlayerReplicateThrottleData
    {
        uint32 Global = 0;
        uint32 Cursor = 0;
        uint32 Tombstone = 0;
        std::chrono::steady_clock::time_point NextAllowedReplication = std::chrono::steady_clock::time_point::min();

        bool IsReplicationInProgress() const { return Cursor != Tombstone && Global != 0; }
    };

    uint32 GetAuctionHouseId() const;

    std::map<uint32, AuctionPosting>::iterator GetAuctionsBegin() { return _itemsByAuctionId.begin(); }
    std::map<uint32, AuctionPosting>::iterator GetAuctionsEnd() { return _itemsByAuctionId.end(); }

    AuctionPosting* GetAuction(uint32 auctionId);

    void AddAuction(CharacterDatabaseTransaction trans, AuctionPosting auction);

    void RemoveAuction(CharacterDatabaseTransaction trans, AuctionPosting* auction, std::map<uint32, AuctionPosting>::iterator* auctionItr = nullptr);

    void SetAuctionBidder(AuctionPosting* auction, ObjectGuid bidder, uint64 bidAmount);

    void Update();

    void BuildListBidderItems(WorldPackets::AuctionHouse::AuctionListBidderItemsResult& listBidderItemsResult, Player* player, uint32 /*offset*/) const;
    void BuildListOwnerItems(WorldPackets::AuctionHouse::AuctionListOwnerItemsResult& listOwnerItemsResult, Player* player, uint32 /*offset*/);
    void BuildListAuctionItems(WorldPackets::AuctionHouse::AuctionListItemsResult& listItemsResult, Player* player,
        std::wstring const& searchedName, uint8 minLevel, uint8 maxLevel, bool onlyUsable, Optional<AuctionSearchClassFilters> const& filters, uint32 quality, uint32 offset, WorldPackets::AuctionHouse::AuctionSortDef const* sorts, std::size_t sortCount);
    void BuildReplicate(WorldPackets::AuctionHouse::AuctionReplicateResponse& auctionReplicateResult, Player* player,
        uint32 global, uint32 cursor, uint32 tombstone, uint32 count);

    uint64 CalculateAuctionHouseCut(uint64 bidAmount) const;

    void SendAuctionOutbid(AuctionPosting const* auction, ObjectGuid newBidder, uint64 newBidAmount, CharacterDatabaseTransaction trans);
    void SendAuctionWon(AuctionPosting const* auction, Player* player, CharacterDatabaseTransaction trans);
    void SendAuctionSold(AuctionPosting const* auction, Player* owner, CharacterDatabaseTransaction trans);
    void SendAuctionExpired(AuctionPosting const* auction, CharacterDatabaseTransaction trans);
    void SendAuctionRemoved(AuctionPosting const* auction, Player* owner, CharacterDatabaseTransaction trans);
    void SendAuctionCancelledToBidder(AuctionPosting const* auction, CharacterDatabaseTransaction trans);
    void SendAuctionInvoice(AuctionPosting const* auction, Player* owner, CharacterDatabaseTransaction trans);

private:
    AuctionHouseEntry const* _auctionHouse;

    std::map<uint32, AuctionPosting> _itemsByAuctionId; // ordered for replicate
    std::unordered_map<uint32, AuctionPosting> _soldItemsById;

    std::unordered_multimap<ObjectGuid, uint32> _playerOwnedAuctions;
    std::unordered_multimap<ObjectGuid, uint32> _playerBidderAuctions;

    std::vector<AuctionPosting*> _auctions;

    // Map of throttled players for GetAll, and throttle expiry time
    // Stored here, rather than player object to maintain persistence after logout
    std::unordered_map<ObjectGuid, PlayerReplicateThrottleData> _replicateThrottleMap;
};

class TC_GAME_API AuctionHouseMgr
{
    private:
        AuctionHouseMgr();
        ~AuctionHouseMgr();

    public:
        static AuctionHouseMgr* instance();

        AuctionHouseObject* GetAuctionsMap(uint32 factionTemplateId);
        AuctionHouseObject* GetAuctionsById(uint32 auctionHouseId);

        Item* GetAItem(ObjectGuid itemGuid);

        static std::string BuildItemAuctionMailSubject(AuctionMailType type, AuctionPosting const* auction);
        static std::string BuildAuctionMailSubject(uint32 itemId, AuctionMailType type, uint32 auctionId, uint32 itemCount, uint32 battlePetSpeciesId,
            ItemContext context, std::vector<uint32> const& bonusListIds);
        static std::string BuildAuctionWonMailBody(ObjectGuid guid, uint64 bid, uint64 buyout);
        static std::string BuildAuctionSoldMailBody(ObjectGuid guid, uint64 bid, uint64 buyout, uint32 deposit, uint64 consignment);
        static std::string BuildAuctionInvoiceMailBody(ObjectGuid guid, uint64 bid, uint64 buyout, uint32 deposit, uint64 consignment, uint32 moneyDelay, uint32 eta);

        static uint64 GetItemAuctionDeposit(Player* player, Item* item, Minutes time);
        static AuctionHouseEntry const* GetAuctionHouseEntry(uint32 factionTemplateId, uint32* houseId);

    public:

        void LoadAuctions();

        void AddAItem(Item* item);
        bool RemoveAItem(ObjectGuid itemGuid, bool deleteItem = false, CharacterDatabaseTransaction* trans = nullptr);
        bool PendingAuctionAdd(Player* player, uint32 auctionHouseId, uint32 auctionId, uint64 deposit);
        std::size_t PendingAuctionCount(Player const* player) const;
        void PendingAuctionProcess(Player* player);
        void UpdatePendingAuctions();
        void Update();

        uint32 GenerateReplicationId();

        AuctionThrottleResult CheckThrottle(Player* player, AuctionCommand command = AuctionCommand::SellItem);

    private:

        AuctionHouseObject mHordeAuctions;
        AuctionHouseObject mAllianceAuctions;
        AuctionHouseObject mNeutralAuctions;
        AuctionHouseObject mGoblinAuctions;

        struct PendingAuctionInfo
        {
            uint32 AuctionId = 0;
            uint32 AuctionHouseId = 0;
            uint64 Deposit = 0;
        };

        struct PlayerPendingAuctions
        {
            std::vector<PendingAuctionInfo> Auctions;
            std::size_t LastAuctionsSize = 0;
        };

        struct PlayerThrottleObject
        {
            std::chrono::steady_clock::time_point PeriodEnd;
            uint8 QueriesRemaining = 100;
        };

        std::unordered_map<ObjectGuid, PlayerPendingAuctions> _pendingAuctionsByPlayer;

        std::unordered_map<ObjectGuid, Item*> _itemsByGuid;

        uint32 _replicateIdGenerator;

        std::unordered_map<ObjectGuid, PlayerThrottleObject> _playerThrottleObjects;
        std::chrono::steady_clock::time_point _playerThrottleObjectsCleanupTime;
};

#define sAuctionMgr AuctionHouseMgr::instance()

#endif
