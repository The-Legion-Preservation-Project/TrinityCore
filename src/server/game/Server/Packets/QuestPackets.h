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

#ifndef QuestPackets_h__
#define QuestPackets_h__

#include "Packet.h"
#include "ItemPacketsCommon.h"
#include "LootItemType.h"
#include "NPCPackets.h"
#include "ObjectGuid.h"
#include "QuestDef.h"
#include <array>

namespace WorldPackets
{
    namespace Quest
    {
        class QuestGiverStatusQuery final : public ClientPacket
        {
        public:
            QuestGiverStatusQuery(WorldPacket&& packet) : ClientPacket(CMSG_QUEST_GIVER_STATUS_QUERY, std::move(packet)) { }

            void Read() override;

            ObjectGuid QuestGiverGUID;
        };

        // Empty packet, server replies with quest giver status of visible creatures
        class QuestGiverStatusMultipleQuery final : public ClientPacket
        {
        public:
            QuestGiverStatusMultipleQuery(WorldPacket&& packet) : ClientPacket(CMSG_QUEST_GIVER_STATUS_MULTIPLE_QUERY, std::move(packet)) { }

            void Read() override { }
        };

        struct QuestGiverInfo
        {
            QuestGiverInfo() { }
            QuestGiverInfo(ObjectGuid const& guid, ::QuestGiverStatus status)
                : Guid(guid), Status(status) { }

            ObjectGuid Guid;
            ::QuestGiverStatus Status = ::QuestGiverStatus::None;
        };

        class QuestGiverStatus final : public ServerPacket
        {
        public:
            QuestGiverStatus() : ServerPacket(SMSG_QUEST_GIVER_STATUS, 22) { }

            WorldPacket const* Write() override;

            QuestGiverInfo QuestGiver;
        };

        class QuestGiverStatusMultiple final : public ServerPacket
        {
        public:
            QuestGiverStatusMultiple() : ServerPacket(SMSG_QUEST_GIVER_STATUS_MULTIPLE, 24) { }

            WorldPacket const* Write() override;

            std::vector<QuestGiverInfo> QuestGiver;
        };

        class QuestGiverHello final : public ClientPacket
        {
        public:
            QuestGiverHello(WorldPacket&& packet) : ClientPacket(CMSG_QUEST_GIVER_HELLO, std::move(packet)) { }

            void Read() override;

            ObjectGuid QuestGiverGUID;
        };

        class QueryQuestInfo final : public ClientPacket
        {
        public:
            QueryQuestInfo(WorldPacket&& packet) : ClientPacket(CMSG_QUERY_QUEST_INFO, std::move(packet)) { }

            void Read() override;

            ObjectGuid QuestGiver;
            int32 QuestID = 0;
        };

        struct QuestInfoChoiceItem
        {
            int32 ItemID = 0;
            int32 Quantity = 0;
            int32 DisplayID = 0;
        };

        struct QuestCompleteDisplaySpell
        {
            int32 SpellID = 0;
            //int32 PlayerConditionID = 0;
        };

        struct QuestInfo
        {
            int32 QuestID                   = 0;
            int32 QuestType                 = 0; // Accepted values: 0, 1 or 2. 0 == IsAutoComplete() (skip objectives/details)
            int32 QuestLevel                = 0; // may be -1, static data, in other cases must be used dynamic level: Player::GetQuestLevel (0 is not known, but assuming this is no longer valid for quest intended for client)
            int32 QuestMaxScalingLevel      = 255;
            int32 QuestPackageID            = 0;
            int32 QuestMinLevel             = 0;
            int32 QuestSortID               = 0; // zone or sort to display in quest log
            int32 QuestInfoID               = 0;
            int32 SuggestedGroupNum         = 0;
            int32 RewardNextQuest           = 0; // client will request this quest from NPC, if not 0
            int32 RewardXPDifficulty        = 0; // used for calculating rewarded experience
            float RewardXPMultiplier        = 1.0f;
            int32 RewardMoney               = 0; // reward money (below max lvl)
            int32 RewardMoneyDifficulty     = 0;
            float RewardMoneyMultiplier     = 1.0f;
            int32 RewardBonusMoney          = 0;
            std::array<QuestCompleteDisplaySpell, QUEST_REWARD_DISPLAY_SPELL_COUNT> RewardDisplaySpell; // reward spell, this spell will be displayed (icon)
            int32 RewardSpell               = 0;
            int32 RewardHonor               = 0;
            float RewardKillHonor           = 0.0f;
            int32 RewardArtifactXPDifficulty = 0;
            float RewardArtifactXPMultiplier = 0.0f;
            int32 RewardArtifactCategoryID  = 0;
            int32 StartItem                 = 0;
            uint32 Flags                    = 0;
            uint32 FlagsEx                  = 0;
            int32 POIContinent              = 0;
            float POIx                      = 0.0f;
            float POIy                      = 0.0f;
            int32 POIPriority               = 0;
            Trinity::RaceMask<uint64> AllowableRaces = { UI64LIT(0xFFFFFFFFFFFFFFFF) };
            std::string LogTitle;
            std::string LogDescription;
            std::string QuestDescription;
            std::string AreaDescription;
            int32 RewardTitle               = 0; // new 2.4.0, player gets this title (id from CharTitles)
            int32 RewardArenaPoints         = 0;
            int32 RewardSkillLineID         = 0; // reward skill id
            int32 RewardNumSkillUps         = 0; // reward skill points
            int32 PortraitGiver             = 0; // quest giver entry ?
            int32 PortraitTurnIn            = 0; // quest turn in entry ?
            std::string PortraitGiverText;
            std::string PortraitGiverName;
            std::string PortraitTurnInText;
            std::string PortraitTurnInName;
            std::string QuestCompletionLog;
            int32 RewardFactionFlags        = 0; // rep mask (unsure on what it does)
            int32 AcceptedSoundKitID        = 0;
            int32 CompleteSoundKitID        = 0;
            int32 AreaGroupID               = 0;
            int32 TimeAllowed               = 0;
            int32 TreasurePickerID          = 0;
            int32 Expansion                 = 0;
            std::vector<QuestObjective> Objectives;
            int32 RewardItems[QUEST_REWARD_ITEM_COUNT] = { };
            int32 RewardAmount[QUEST_REWARD_ITEM_COUNT] = { };
            int32 ItemDrop[QUEST_ITEM_DROP_COUNT] = { };
            int32 ItemDropQuantity[QUEST_ITEM_DROP_COUNT] = { };
            QuestInfoChoiceItem UnfilteredChoiceItems[QUEST_REWARD_CHOICES_COUNT];
            int32 RewardFactionID[QUEST_REWARD_REPUTATIONS_COUNT] = { };
            int32 RewardFactionValue[QUEST_REWARD_REPUTATIONS_COUNT] = { };
            int32 RewardFactionOverride[QUEST_REWARD_REPUTATIONS_COUNT] = { };
            int32 RewardFactionCapIn[QUEST_REWARD_REPUTATIONS_COUNT] = { };
            int32 RewardCurrencyID[QUEST_REWARD_CURRENCY_COUNT] = { };
            int32 RewardCurrencyQty[QUEST_REWARD_CURRENCY_COUNT] = { };
        };

        class QueryQuestInfoResponse final : public ServerPacket
        {
        public:
            QueryQuestInfoResponse() : ServerPacket(SMSG_QUERY_QUEST_INFO_RESPONSE, 1200) { }

            WorldPacket const* Write() override;

            bool Allow = false;
            QuestInfo Info;
            uint32 QuestID = 0;
        };

        class QuestUpdateAddCredit final : public ServerPacket
        {
        public:
            QuestUpdateAddCredit() : ServerPacket(SMSG_QUEST_UPDATE_ADD_CREDIT, 16 + 4 + 4 + 2 + 2 + 1) { }

            WorldPacket const* Write() override;

            ObjectGuid VictimGUID;
            int32 ObjectID      = 0;
            int32 QuestID       = 0;
            uint16 Count        = 0;
            uint16 Required     = 0;
            uint8 ObjectiveType = 0;
        };

        class QuestUpdateAddCreditSimple final : public ServerPacket
        {
        public:
            QuestUpdateAddCreditSimple() : ServerPacket(SMSG_QUEST_UPDATE_ADD_CREDIT_SIMPLE, 4 + 4 + 1) { }

            WorldPacket const* Write() override;

            int32 QuestID = 0;
            int32 ObjectID = 0;
            uint8 ObjectiveType = 0;
        };

        class QuestUpdateAddPvPCredit final : public ServerPacket
        {
        public:
            QuestUpdateAddPvPCredit() : ServerPacket(SMSG_QUEST_UPDATE_ADD_PVP_CREDIT, 4 + 2) { }

            WorldPacket const* Write() override;

            int32 QuestID = 0;
            uint16 Count = 0;
        };

        struct QuestChoiceItem
        {
            Item::ItemInstance Item;
            int32 Quantity  = 0;
        };

        struct QuestRewards
        {
            int32 ChoiceItemCount           = 0;
            int32 ItemCount                 = 0;
            int32 Money                     = 0;
            int32 XP                        = 0;
            int32 ArtifactXP                = 0;
            int32 ArtifactCategoryID        = 0;
            int32 Honor                     = 0;
            int32 Title                     = 0;
            int32 FactionFlags              = 0;
            std::array<int32, QUEST_REWARD_DISPLAY_SPELL_COUNT> SpellCompletionDisplayID = { };
            int32 SpellCompletionID         = 0;
            int32 SkillLineID               = 0;
            int32 NumSkillUps               = 0;
            int32 TreasurePickerID          = 0;
            std::array<QuestChoiceItem, QUEST_REWARD_CHOICES_COUNT> ChoiceItems;
            std::array<int32, QUEST_REWARD_ITEM_COUNT> ItemID = { };
            std::array<int32, QUEST_REWARD_ITEM_COUNT> ItemQty = { };
            std::array<int32, QUEST_REWARD_REPUTATIONS_COUNT> FactionID = { };
            std::array<int32, QUEST_REWARD_REPUTATIONS_COUNT> FactionValue = { };
            std::array<int32, QUEST_REWARD_REPUTATIONS_COUNT> FactionOverride = { };
            std::array<int32, QUEST_REWARD_REPUTATIONS_COUNT> FactionCapIn = { };
            std::array<int32, QUEST_REWARD_CURRENCY_COUNT> CurrencyID = { };
            std::array<int32, QUEST_REWARD_CURRENCY_COUNT> CurrencyQty = { };
            bool IsBoostSpell = false;
        };

        struct QuestDescEmote
        {
            QuestDescEmote(int32 type = 0, uint32 delay = 0) : Type(type), Delay(delay) {}
            int32 Type;
            uint32 Delay;
        };

        struct QuestGiverOfferReward
        {
            ObjectGuid QuestGiverGUID;
            int32 QuestGiverCreatureID      = 0;
            int32 QuestID                   = 0;
            bool AutoLaunched               = false;
            int32 SuggestedPartyMembers     = 0;
            QuestRewards Rewards;
            std::vector<QuestDescEmote> Emotes;
            int32 QuestFlags[2]             = { }; // Flags and FlagsEx
        };

        class QuestGiverOfferRewardMessage final : public ServerPacket
        {
        public:
            QuestGiverOfferRewardMessage() : ServerPacket(SMSG_QUEST_GIVER_OFFER_REWARD_MESSAGE, 600) { }

            WorldPacket const* Write() override;

            int32 PortraitTurnIn = 0;
            int32 PortraitGiver = 0;
            std::string QuestTitle;
            std::string RewardText;
            std::string PortraitGiverText;
            std::string PortraitGiverName;
            std::string PortraitTurnInText;
            std::string PortraitTurnInName;
            QuestGiverOfferReward QuestData;
            int32 QuestPackageID = 0;
        };

        class QuestGiverChooseReward final : public ClientPacket
        {
        public:
            QuestGiverChooseReward(WorldPacket&& packet) : ClientPacket(CMSG_QUEST_GIVER_CHOOSE_REWARD, std::move(packet)) { }

            void Read() override;

            ObjectGuid QuestGiverGUID;
            int32 QuestID = 0;
            int32 ItemChoiceID = 0;
            LootItemType ChoiceLootItemType = LootItemType(0);
        };

        class QuestGiverQuestComplete final : public ServerPacket
        {
        public:
            QuestGiverQuestComplete() : ServerPacket(SMSG_QUEST_GIVER_QUEST_COMPLETE, 40) { }

            WorldPacket const* Write() override;

            int32 QuestID           = 0;
            int32 XPReward          = 0;
            int64 MoneyReward       = 0;
            int32 SkillLineIDReward = 0;
            int32 NumSkillUpsReward = 0;
            bool UseQuestReward     = false;
            bool LaunchGossip       = false;
            bool LaunchQuest        = false;
            bool HideChatMessage    = false;
            Item::ItemInstance ItemReward;
        };

        class QuestGiverCompleteQuest final : public ClientPacket
        {
        public:
            QuestGiverCompleteQuest(WorldPacket&& packet) : ClientPacket(CMSG_QUEST_GIVER_COMPLETE_QUEST, std::move(packet)) { }

            void Read() override;

            ObjectGuid QuestGiverGUID; // NPC / GameObject guid for normal quest completion. Player guid for self-completed quests
            int32 QuestID = 0;
            bool FromScript = false; // 0 - standart complete quest mode with npc, 1 - auto-complete mode
        };

        class QuestGiverCloseQuest final : public ClientPacket
        {
        public:
            QuestGiverCloseQuest(WorldPacket&& packet) : ClientPacket(CMSG_QUEST_GIVER_CLOSE_QUEST, std::move(packet)) { }

            void Read() override;

            int32 QuestID = 0;
        };

        struct QuestObjectiveSimple
        {
            int32 ID        = 0;
            int32 ObjectID  = 0;
            int32 Amount    = 0;
            uint8 Type      = 0;
        };

        class QuestGiverQuestDetails final : public ServerPacket
        {
        public:
            QuestGiverQuestDetails() : ServerPacket(SMSG_QUEST_GIVER_QUEST_DETAILS, 1000) { }

            WorldPacket const* Write() override;

            ObjectGuid QuestGiverGUID;
            ObjectGuid InformUnit;
            int32 QuestID           = 0;
            int32 QuestPackageID    = 0;
            uint32 QuestFlags[2]    = { };
            int32 SuggestedPartyMembers = 0;
            QuestRewards Rewards;
            std::vector<QuestObjectiveSimple> Objectives;
            std::vector<QuestDescEmote> DescEmotes;
            std::vector<int32> LearnSpells;
            int32 PortraitTurnIn = 0;
            int32 PortraitGiver = 0;
            int32 QuestStartItemID = 0;
            std::string PortraitGiverText;
            std::string PortraitGiverName;
            std::string PortraitTurnInText;
            std::string PortraitTurnInName;
            std::string QuestTitle;
            std::string LogDescription;
            std::string DescriptionText;
            bool DisplayPopup = false;
            bool StartCheat = false;
            bool AutoLaunched = false;
        };

        struct QuestObjectiveCollect
        {
            QuestObjectiveCollect(int32 objectID = 0, int32 amount = 0, uint32 flags = 0) : ObjectID(objectID), Amount(amount), Flags(flags) { }
            int32 ObjectID;
            int32 Amount;
            uint32 Flags;
        };

        struct QuestCurrency
        {
            QuestCurrency(int32 currencyID = 0, int32 amount = 0) : CurrencyID(currencyID), Amount(amount) { }
            int32 CurrencyID;
            int32 Amount;
        };

        class QuestGiverRequestItems final : public ServerPacket
        {
        public:
            QuestGiverRequestItems() : ServerPacket(SMSG_QUEST_GIVER_REQUEST_ITEMS, 300) { }

            WorldPacket const* Write() override;

            ObjectGuid QuestGiverGUID;
            int32 QuestGiverCreatureID  = 0;
            int32 QuestID               = 0;
            int32 CompEmoteDelay        = 0;
            int32 CompEmoteType         = 0;
            bool AutoLaunched           = false;
            int32 SuggestPartyMembers   = 0;
            int32 MoneyToGet            = 0;
            std::vector<QuestObjectiveCollect> Collect;
            std::vector<QuestCurrency> Currency;
            int32 StatusFlags           = 0;
            uint32 QuestFlags[2]        = { };
            std::string QuestTitle;
            std::string CompletionText;
        };

        class QuestGiverRequestReward final : public ClientPacket
        {
        public:
            QuestGiverRequestReward(WorldPacket&& packet) : ClientPacket(CMSG_QUEST_GIVER_REQUEST_REWARD, std::move(packet)) { }

            void Read() override;

            ObjectGuid QuestGiverGUID;
            int32 QuestID = 0;
        };

        class QuestGiverQueryQuest final : public ClientPacket
        {
        public:
            QuestGiverQueryQuest(WorldPacket&& packet) : ClientPacket(CMSG_QUEST_GIVER_QUERY_QUEST, std::move(packet)) { }

            void Read() override;

            ObjectGuid QuestGiverGUID;
            int32 QuestID = 0;
            bool RespondToGiver = false;
        };

        class QuestGiverAcceptQuest final : public ClientPacket
        {
        public:
            QuestGiverAcceptQuest(WorldPacket&& packet) : ClientPacket(CMSG_QUEST_GIVER_ACCEPT_QUEST, std::move(packet)) { }

            void Read() override;

            ObjectGuid QuestGiverGUID;
            int32 QuestID = 0;
            bool StartCheat = false;
        };

        class QuestLogRemoveQuest final : public ClientPacket
        {
        public:
            QuestLogRemoveQuest(WorldPacket&& packet) : ClientPacket(CMSG_QUEST_LOG_REMOVE_QUEST, std::move(packet)) { }

            void Read() override;

            uint8 Entry = 0;
        };

        class QuestGiverQuestListMessage final : public ServerPacket
        {
        public:
            QuestGiverQuestListMessage() : ServerPacket(SMSG_QUEST_GIVER_QUEST_LIST_MESSAGE, 100) { }

            WorldPacket const* Write() override;

            ObjectGuid QuestGiverGUID;
            uint32 GreetEmoteDelay      = 0;
            uint32 GreetEmoteType       = 0;
            std::vector<NPC::ClientGossipText> QuestDataText;
            std::string Greeting;
        };

        class QuestUpdateComplete final : public ServerPacket
        {
        public:
            QuestUpdateComplete() : ServerPacket(SMSG_QUEST_UPDATE_COMPLETE, 4) { }

            WorldPacket const* Write() override;

            int32 QuestID = 0;
        };

        class QuestConfirmAcceptResponse final : public ServerPacket
        {
        public:
            QuestConfirmAcceptResponse() : ServerPacket(SMSG_QUEST_CONFIRM_ACCEPT, 21) { }

            WorldPacket const* Write() override;

            ObjectGuid InitiatedBy;
            int32 QuestID = 0;
            std::string QuestTitle;
        };

        class QuestConfirmAccept final : public ClientPacket
        {
        public:
            QuestConfirmAccept(WorldPacket&& packet) : ClientPacket(CMSG_QUEST_CONFIRM_ACCEPT, std::move(packet)) { }

            void Read() override;

            int32 QuestID = 0;
        };

        class QuestPushResultResponse final : public ServerPacket
        {
        public:
            QuestPushResultResponse() : ServerPacket(SMSG_QUEST_PUSH_RESULT, 16 + 1) { }

            WorldPacket const* Write() override;

            ObjectGuid SenderGUID;
            uint8 Result = 0;
        };

        class QuestLogFull final : public ServerPacket
        {
        public:
            QuestLogFull() : ServerPacket(SMSG_QUEST_LOG_FULL, 0) { }

            WorldPacket const* Write() override { return &_worldPacket; }
        };

        class QuestPushResult final : public ClientPacket
        {
        public:
            QuestPushResult(WorldPacket&& packet) : ClientPacket(CMSG_QUEST_PUSH_RESULT, std::move(packet)) { }

            void Read() override;

            ObjectGuid SenderGUID;
            uint32 QuestID = 0;
            uint8 Result = 0;
        };

        class QuestGiverInvalidQuest final : public ServerPacket
        {
        public:
            QuestGiverInvalidQuest() : ServerPacket(SMSG_QUEST_GIVER_INVALID_QUEST, 6) { }

            WorldPacket const* Write() override;

            uint32 Reason = 0;
            int32 ContributionRewardID = 0;
            bool SendErrorMessage = false;
            std::string ReasonText;
        };

        class QuestUpdateFailedTimer final : public ServerPacket
        {
        public:
            QuestUpdateFailedTimer() : ServerPacket(SMSG_QUEST_UPDATE_FAILED_TIMER, 4) { }

            WorldPacket const* Write() override;

            uint32 QuestID = 0;
        };

        class QuestGiverQuestFailed final : public ServerPacket
        {
        public:
            QuestGiverQuestFailed() : ServerPacket(SMSG_QUEST_GIVER_QUEST_FAILED, 8) { }

            WorldPacket const* Write() override;

            uint32 QuestID = 0;
            uint32 Reason  = 0;
        };

        class PushQuestToParty final : public ClientPacket
        {
        public:
            PushQuestToParty(WorldPacket&& packet) : ClientPacket(CMSG_PUSH_QUEST_TO_PARTY, std::move(packet)) { }

            void Read() override;

            uint32 QuestID = 0;
        };

        class DailyQuestsReset final : public ServerPacket
        {
        public:
            DailyQuestsReset() : ServerPacket(SMSG_DAILY_QUESTS_RESET, 4) { }

            WorldPacket const* Write() override;

            int32 Count = 0;
        };

        class RequestWorldQuestUpdate final : public ClientPacket
        {
        public:
            RequestWorldQuestUpdate(WorldPacket&& packet) : ClientPacket(CMSG_REQUEST_WORLD_QUEST_UPDATE, std::move(packet)) { }

            void Read() override { }
        };

        struct WorldQuestUpdateInfo
        {
            WorldQuestUpdateInfo(time_t lastUpdate, uint32 questID, uint32 timer, int32 variableID, int32 value) :
                LastUpdate(lastUpdate), QuestID(questID), Timer(timer), VariableID(variableID), Value(value) { }
            Timestamp<> LastUpdate;
            uint32 QuestID;
            uint32 Timer;
            // WorldState
            int32 VariableID;
            int32 Value;
        };

        class WorldQuestUpdateResponse final : public ServerPacket
        {
        public:
            WorldQuestUpdateResponse() : ServerPacket(SMSG_WORLD_QUEST_UPDATE_RESPONSE, 100) { }

            WorldPacket const* Write() override;

            std::vector<WorldQuestUpdateInfo> WorldQuestUpdates;
        };

        struct PlayerChoiceResponseRewardEntry
        {
            WorldPackets::Item::ItemInstance Item;
            int32 Quantity = 0;
        };

        struct PlayerChoiceResponseReward
        {
            int32 TitleID = 0;
            int32 PackageID = 0;
            int32 SkillLineID = 0;
            uint32 SkillPointCount = 0;
            uint32 ArenaPointCount = 0;
            uint32 HonorPointCount = 0;
            uint64 Money = 0;
            uint32 Xp = 0;
            std::vector<PlayerChoiceResponseRewardEntry> Items;
            std::vector<PlayerChoiceResponseRewardEntry> Currencies;
            std::vector<PlayerChoiceResponseRewardEntry> Factions;
            std::vector<PlayerChoiceResponseRewardEntry> ItemChoices;
        };

        struct PlayerChoiceResponse
        {
            int32 ResponseID = 0;
            int32 ChoiceArtFileID = 0;
            std::string_view Answer;
            std::string_view Header;
            std::string_view Description;
            std::string_view Confirmation;
            Optional<PlayerChoiceResponseReward> Reward;
        };

        class DisplayPlayerChoice final : public ServerPacket
        {
        public:
            DisplayPlayerChoice() : ServerPacket(SMSG_DISPLAY_PLAYER_CHOICE) { }

            WorldPacket const* Write() override;

            ObjectGuid SenderGUID;
            int32 ChoiceID = 0;
            int32 UiTextureKitID = 0;
            std::string_view Question;
            std::vector<PlayerChoiceResponse> Responses;
            bool CloseChoiceFrame = false;
            bool HideWarboardHeader = false;
        };

        class ChoiceResponse final : public ClientPacket
        {
        public:
            ChoiceResponse(WorldPacket&& packet) : ClientPacket(CMSG_CHOICE_RESPONSE, std::move(packet)) { }

            void Read() override;

            int32 ChoiceID = 0;
            int32 ResponseID = 0;
        };
    }
}

#endif // QuestPackets_h__
