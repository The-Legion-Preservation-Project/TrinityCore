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

#include "QuestPackets.h"
#include "PacketOperators.h"

namespace WorldPackets::Quest
{
void QuestGiverStatusQuery::Read()
{
    _worldPacket >> QuestGiverGUID;
}

WorldPacket const* QuestGiverStatus::Write()
{
    _worldPacket << QuestGiver.Guid;
    _worldPacket << uint32(QuestGiver.Status);

    return &_worldPacket;
}

WorldPacket const* QuestGiverStatusMultiple::Write()
{
    _worldPacket << Size<int32>(QuestGiver);
    for (QuestGiverInfo const& questGiver : QuestGiver)
    {
        _worldPacket << questGiver.Guid;
        _worldPacket << uint32(questGiver.Status);
    }

    return &_worldPacket;
}

void QuestGiverHello::Read()
{
    _worldPacket >> QuestGiverGUID;
}

void QueryQuestInfo::Read()
{
    _worldPacket >> QuestID;
    _worldPacket >> QuestGiver;
}

WorldPacket const* QueryQuestInfoResponse::Write()
{
    _worldPacket << uint32(QuestID);

    _worldPacket << Bits<1>(Allow);
    _worldPacket.FlushBits();

    if (Allow)
    {
        _worldPacket << int32(Info.QuestID);
        _worldPacket << int32(Info.QuestType);
        _worldPacket << int32(Info.QuestLevel);
        _worldPacket << int32(Info.QuestMaxScalingLevel);
        _worldPacket << int32(Info.QuestPackageID);
        _worldPacket << int32(Info.QuestMinLevel);
        _worldPacket << int32(Info.QuestSortID);
        _worldPacket << int32(Info.QuestInfoID);
        _worldPacket << int32(Info.SuggestedGroupNum);
        _worldPacket << int32(Info.RewardNextQuest);
        _worldPacket << int32(Info.RewardXPDifficulty);
        _worldPacket << float(Info.RewardXPMultiplier);
        _worldPacket << int32(Info.RewardMoney);
        _worldPacket << int32(Info.RewardMoneyDifficulty);
        _worldPacket << float(Info.RewardMoneyMultiplier);
        _worldPacket << int32(Info.RewardBonusMoney);

        for (uint32 i = 0; i < QUEST_REWARD_DISPLAY_SPELL_COUNT; ++i)
            _worldPacket << Info.RewardDisplaySpell[i].SpellID;

        _worldPacket << int32(Info.RewardSpell);
        _worldPacket << int32(Info.RewardHonor);
        _worldPacket << float(Info.RewardKillHonor);
        _worldPacket << int32(Info.RewardArtifactXPDifficulty);
        _worldPacket << float(Info.RewardArtifactXPMultiplier);
        _worldPacket << int32(Info.RewardArtifactCategoryID);
        _worldPacket << int32(Info.StartItem);
        _worldPacket << uint32(Info.Flags);
        _worldPacket << uint32(Info.FlagsEx);

        for (uint32 i = 0; i < QUEST_REWARD_ITEM_COUNT; ++i)
        {
            _worldPacket << int32(Info.RewardItems[i]);
            _worldPacket << int32(Info.RewardAmount[i]);
            _worldPacket << int32(Info.ItemDrop[i]);
            _worldPacket << int32(Info.ItemDropQuantity[i]);
        }

        for (uint32 i = 0; i < QUEST_REWARD_CHOICES_COUNT; ++i)
        {
            _worldPacket << int32(Info.UnfilteredChoiceItems[i].ItemID);
            _worldPacket << int32(Info.UnfilteredChoiceItems[i].Quantity);
            _worldPacket << int32(Info.UnfilteredChoiceItems[i].DisplayID);
        }

        _worldPacket << int32(Info.POIContinent);
        _worldPacket << float(Info.POIx);
        _worldPacket << float(Info.POIy);
        _worldPacket << int32(Info.POIPriority);

        _worldPacket << int32(Info.RewardTitle);
        _worldPacket << int32(Info.RewardArenaPoints);
        _worldPacket << int32(Info.RewardSkillLineID);
        _worldPacket << int32(Info.RewardNumSkillUps);

        _worldPacket << int32(Info.PortraitGiver);
        _worldPacket << int32(Info.PortraitTurnIn);

        for (uint32 i = 0; i < QUEST_REWARD_REPUTATIONS_COUNT; ++i)
        {
            _worldPacket << int32(Info.RewardFactionID[i]);
            _worldPacket << int32(Info.RewardFactionValue[i]);
            _worldPacket << int32(Info.RewardFactionOverride[i]);
            _worldPacket << int32(Info.RewardFactionCapIn[i]);
        }

        _worldPacket << int32(Info.RewardFactionFlags);

        for (uint32 i = 0; i < QUEST_REWARD_CURRENCY_COUNT; ++i)
        {
            _worldPacket << int32(Info.RewardCurrencyID[i]);
            _worldPacket << int32(Info.RewardCurrencyQty[i]);
        }

        _worldPacket << int32(Info.AcceptedSoundKitID);
        _worldPacket << int32(Info.CompleteSoundKitID);

        _worldPacket << int32(Info.AreaGroupID);
        _worldPacket << int32(Info.TimeAllowed);

        _worldPacket << Size<uint32>(Info.Objectives);
        _worldPacket << uint64(Info.AllowableRaces.RawValue);
        _worldPacket << int32(Info.TreasurePickerID);
        _worldPacket << int32(Info.Expansion);

        _worldPacket << SizedString::BitsSize<9>(Info.LogTitle);
        _worldPacket << SizedString::BitsSize<12>(Info.LogDescription);
        _worldPacket << SizedString::BitsSize<12>(Info.QuestDescription);
        _worldPacket << SizedString::BitsSize<9>(Info.AreaDescription);
        _worldPacket << SizedString::BitsSize<10>(Info.PortraitGiverText);
        _worldPacket << SizedString::BitsSize<8>(Info.PortraitGiverName);
        _worldPacket << SizedString::BitsSize<10>(Info.PortraitTurnInText);
        _worldPacket << SizedString::BitsSize<8>(Info.PortraitTurnInName);
        _worldPacket << SizedString::BitsSize<11>(Info.QuestCompletionLog);
        _worldPacket.FlushBits();

        for (QuestObjective const& questObjective : Info.Objectives)
        {
            _worldPacket << uint32(questObjective.ID);
            _worldPacket << uint8(questObjective.Type);
            _worldPacket << int8(questObjective.StorageIndex);
            _worldPacket << int32(questObjective.ObjectID);
            _worldPacket << int32(questObjective.Amount);
            _worldPacket << uint32(questObjective.Flags);
            _worldPacket << uint32(questObjective.Flags2);
            _worldPacket << float(questObjective.ProgressBarWeight);

            _worldPacket << Size<int32>(questObjective.VisualEffects);
            for (int32 visualEffect : questObjective.VisualEffects)
                _worldPacket << int32(visualEffect);

            _worldPacket << SizedString::BitsSize<8>(questObjective.Description);
            _worldPacket.FlushBits();

            _worldPacket << SizedString::Data(questObjective.Description);
        }

        _worldPacket << SizedString::Data(Info.LogTitle);
        _worldPacket << SizedString::Data(Info.LogDescription);
        _worldPacket << SizedString::Data(Info.QuestDescription);
        _worldPacket << SizedString::Data(Info.AreaDescription);
        _worldPacket << SizedString::Data(Info.PortraitGiverText);
        _worldPacket << SizedString::Data(Info.PortraitGiverName);
        _worldPacket << SizedString::Data(Info.PortraitTurnInText);
        _worldPacket << SizedString::Data(Info.PortraitTurnInName);
        _worldPacket << SizedString::Data(Info.QuestCompletionLog);
    }

    return &_worldPacket;
}

WorldPacket const* QuestUpdateAddCredit::Write()
{
    _worldPacket << VictimGUID;
    _worldPacket << int32(QuestID);
    _worldPacket << int32(ObjectID);
    _worldPacket << uint16(Count);
    _worldPacket << uint16(Required);
    _worldPacket << uint8(ObjectiveType);

    return &_worldPacket;
};

WorldPacket const* QuestUpdateAddCreditSimple::Write()
{
    _worldPacket << int32(QuestID);
    _worldPacket << int32(ObjectID);
    _worldPacket << uint8(ObjectiveType);

    return &_worldPacket;
}

WorldPacket const* QuestUpdateAddPvPCredit::Write()
{
    _worldPacket << int32(QuestID);
    _worldPacket << uint16(Count);

    return &_worldPacket;
}

ByteBuffer& operator<<(ByteBuffer& data, QuestRewards const& questRewards)
{
    data << int32(questRewards.ChoiceItemCount);

    for (uint32 i = 0; i < QUEST_REWARD_CHOICES_COUNT; ++i)
    {
        data << int32(questRewards.ChoiceItems[i].Item.ItemID);
        data << int32(questRewards.ChoiceItems[i].Quantity);
    }

    data << int32(questRewards.ItemCount);

    for (uint32 i = 0; i < QUEST_REWARD_ITEM_COUNT; ++i)
    {
        data << int32(questRewards.Items[i].ItemID);
        data << int32(questRewards.Items[i].ItemQty);
    }

    data << int32(questRewards.Money);
    data << int32(questRewards.XP);
    data << int64(questRewards.ArtifactXP);
    data << int32(questRewards.ArtifactCategoryID);
    data << int32(questRewards.Honor);
    data << int32(questRewards.Title);
    data << int32(questRewards.FactionFlags);

    for (uint32 i = 0; i < QUEST_REWARD_REPUTATIONS_COUNT; ++i)
    {
        data << int32(questRewards.FactionID[i]);
        data << int32(questRewards.FactionValue[i]);
        data << int32(questRewards.FactionOverride[i]);
        data << int32(questRewards.FactionCapIn[i]);
    }

    for (uint32 i = 0; i < QUEST_REWARD_DISPLAY_SPELL_COUNT; ++i)
        data << int32(questRewards.SpellCompletionDisplayID[i]);

    data << int32(questRewards.SpellCompletionID);

    for (uint32 i = 0; i < QUEST_REWARD_CURRENCY_COUNT; ++i)
    {
        data << int32(questRewards.Currencies[i].CurrencyID);
        data << int32(questRewards.Currencies[i].CurrencyQty);
    }

    data << int32(questRewards.SkillLineID);
    data << int32(questRewards.NumSkillUps);
    data << int32(questRewards.TreasurePickerID);

    data << Bits<1>(questRewards.IsBoostSpell);
    data.FlushBits();

    return data;
}

ByteBuffer& operator<<(ByteBuffer& data, QuestGiverOfferReward const& offer)
{
    data << offer.QuestGiverGUID;
    data << int32(offer.QuestGiverCreatureID);
    data << int32(offer.QuestID);
    data << int32(offer.QuestFlags[0]); // Flags
    data << int32(offer.QuestFlags[1]); // FlagsEx
    data << int32(offer.SuggestedPartyMembers);
    data << Size<int32>(offer.Emotes);
    for (QuestDescEmote const& emote : offer.Emotes)
    {
        data << int32(emote.Type);
        data << uint32(emote.Delay);
    }

    data << Bits<1>(offer.AutoLaunched);
    data.FlushBits();

    data << offer.Rewards; // QuestRewards

    return data;
}

WorldPacket const* QuestGiverOfferRewardMessage::Write()
{
    _worldPacket << QuestData; // QuestGiverOfferReward
    _worldPacket << int32(QuestPackageID);
    _worldPacket << int32(PortraitGiver);
    _worldPacket << int32(PortraitTurnIn);

    _worldPacket << SizedString::BitsSize<9>(QuestTitle);
    _worldPacket << SizedString::BitsSize<12>(RewardText);
    _worldPacket << SizedString::BitsSize<10>(PortraitGiverText);
    _worldPacket << SizedString::BitsSize<8>(PortraitGiverName);
    _worldPacket << SizedString::BitsSize<10>(PortraitTurnInText);
    _worldPacket << SizedString::BitsSize<8>(PortraitTurnInName);
    _worldPacket.FlushBits();

    _worldPacket << SizedString::Data(QuestTitle);
    _worldPacket << SizedString::Data(RewardText);
    _worldPacket << SizedString::Data(PortraitGiverText);
    _worldPacket << SizedString::Data(PortraitGiverName);
    _worldPacket << SizedString::Data(PortraitTurnInText);
    _worldPacket << SizedString::Data(PortraitTurnInName);

    return &_worldPacket;
};

void QuestGiverChooseReward::Read()
{
    _worldPacket >> QuestGiverGUID;
    _worldPacket >> QuestID;
    _worldPacket >> ItemChoiceID;
}

WorldPacket const* QuestGiverQuestComplete::Write()
{
    _worldPacket << int32(QuestID);
    _worldPacket << int32(XPReward);
    _worldPacket << int64(MoneyReward);
    _worldPacket << int32(SkillLineIDReward);
    _worldPacket << int32(NumSkillUpsReward);
    _worldPacket << Bits<1>(UseQuestReward);
    _worldPacket << Bits<1>(LaunchGossip);
    _worldPacket << Bits<1>(LaunchQuest);
    _worldPacket << Bits<1>(HideChatMessage);

    _worldPacket << ItemReward;

    return &_worldPacket;
}

void QuestGiverCompleteQuest::Read()
{
    _worldPacket >> QuestGiverGUID;
    _worldPacket >> QuestID;
    _worldPacket >> Bits<1>(FromScript);
}

void QuestGiverCloseQuest::Read()
{
    _worldPacket >> QuestID;
}

WorldPacket const* QuestGiverQuestDetails::Write()
{
    _worldPacket << QuestGiverGUID;
    _worldPacket << InformUnit;
    _worldPacket << int32(QuestID);
    _worldPacket << int32(QuestPackageID);
    _worldPacket << int32(PortraitGiver);
    _worldPacket << int32(PortraitTurnIn);
    _worldPacket << uint32(QuestFlags[0]); // Flags
    _worldPacket << uint32(QuestFlags[1]); // FlagsEx
    _worldPacket << int32(SuggestedPartyMembers);
    _worldPacket << Size<uint32>(LearnSpells);
    _worldPacket << Size<uint32>(DescEmotes);
    _worldPacket << Size<uint32>(Objectives);
    _worldPacket << int32(QuestStartItemID);

    for (int32 spell : LearnSpells)
        _worldPacket << int32(spell);

    for (QuestDescEmote const& emote : DescEmotes)
    {
        _worldPacket << int32(emote.Type);
        _worldPacket << uint32(emote.Delay);
    }

    for (QuestObjectiveSimple const& obj : Objectives)
    {
        _worldPacket << int32(obj.ID);
        _worldPacket << int32(obj.ObjectID);
        _worldPacket << int32(obj.Amount);
        _worldPacket << uint8(obj.Type);
    }

    _worldPacket << SizedString::BitsSize<9>(QuestTitle);
    _worldPacket << SizedString::BitsSize<12>(DescriptionText);
    _worldPacket << SizedString::BitsSize<12>(LogDescription);
    _worldPacket << SizedString::BitsSize<10>(PortraitGiverText);
    _worldPacket << SizedString::BitsSize<8>(PortraitGiverName);
    _worldPacket << SizedString::BitsSize<10>(PortraitTurnInText);
    _worldPacket << SizedString::BitsSize<8>(PortraitTurnInName);
    _worldPacket << Bits<1>(AutoLaunched);
    _worldPacket << Bits<1>(StartCheat);
    _worldPacket << Bits<1>(DisplayPopup);
    _worldPacket.FlushBits();

    _worldPacket << Rewards; // QuestRewards
    _worldPacket << SizedString::Data(QuestTitle);
    _worldPacket << SizedString::Data(DescriptionText);
    _worldPacket << SizedString::Data(LogDescription);
    _worldPacket << SizedString::Data(PortraitGiverText);
    _worldPacket << SizedString::Data(PortraitGiverName);
    _worldPacket << SizedString::Data(PortraitTurnInText);
    _worldPacket << SizedString::Data(PortraitTurnInName);

    return &_worldPacket;
}

WorldPacket const* QuestGiverRequestItems::Write()
{
    _worldPacket << QuestGiverGUID;
    _worldPacket << int32(QuestGiverCreatureID);
    _worldPacket << int32(QuestID);
    _worldPacket << int32(CompEmoteDelay);
    _worldPacket << int32(CompEmoteType);
    _worldPacket << uint32(QuestFlags[0]);
    _worldPacket << uint32(QuestFlags[1]);
    _worldPacket << int32(SuggestPartyMembers);
    _worldPacket << int32(MoneyToGet);
    _worldPacket << Size<int32>(Collect);
    _worldPacket << Size<int32>(Currency);
    _worldPacket << int32(StatusFlags);

    for (QuestObjectiveCollect const& obj : Collect)
    {
        _worldPacket << int32(obj.ObjectID);
        _worldPacket << int32(obj.Amount);
        _worldPacket << uint32(obj.Flags);
    }

    for (QuestCurrency const& cur : Currency)
    {
        _worldPacket << int32(cur.CurrencyID);
        _worldPacket << int32(cur.Amount);
    }

    _worldPacket << Bits<1>(AutoLaunched);
    _worldPacket.FlushBits();

    _worldPacket << SizedString::BitsSize<9>(QuestTitle);
    _worldPacket << SizedString::BitsSize<12>(CompletionText);
    _worldPacket.FlushBits();

    _worldPacket << SizedString::Data(QuestTitle);
    _worldPacket << SizedString::Data(CompletionText);

    return &_worldPacket;
}

void QuestGiverRequestReward::Read()
{
    _worldPacket >> QuestGiverGUID;
    _worldPacket >> QuestID;
}

void QuestGiverQueryQuest::Read()
{
    _worldPacket >> QuestGiverGUID;
    _worldPacket >> QuestID;
    _worldPacket >> Bits<1>(RespondToGiver);
}

void QuestGiverAcceptQuest::Read()
{
    _worldPacket >> QuestGiverGUID;
    _worldPacket >> QuestID;
    _worldPacket >> Bits<1>(StartCheat);
}

void QuestLogRemoveQuest::Read()
{
    _worldPacket >> Entry;
}

WorldPacket const* QuestGiverQuestListMessage::Write()
{
    _worldPacket << QuestGiverGUID;
    _worldPacket << uint32(GreetEmoteDelay);
    _worldPacket << uint32(GreetEmoteType);
    _worldPacket << Size<uint32>(QuestDataText);
    _worldPacket << SizedString::BitsSize<11>(Greeting);
    _worldPacket.FlushBits();

    for (NPC::ClientGossipText const& gossip : QuestDataText)
        _worldPacket << gossip;

    _worldPacket << SizedString::Data(Greeting);

    return &_worldPacket;
}

WorldPacket const* QuestUpdateComplete::Write()
{
    _worldPacket << int32(QuestID);

    return &_worldPacket;
}

WorldPacket const* QuestConfirmAcceptResponse::Write()
{
    _worldPacket << uint32(QuestID);
    _worldPacket << InitiatedBy;

    _worldPacket << SizedString::BitsSize<10>(QuestTitle);
    _worldPacket.FlushBits();

    _worldPacket << SizedString::Data(QuestTitle);

    return &_worldPacket;
}

void QuestConfirmAccept::Read()
{
    _worldPacket >> QuestID;
}

WorldPacket const* QuestPushResultResponse::Write()
{
    _worldPacket << SenderGUID;
    _worldPacket << uint8(Result);

    return &_worldPacket;
}

void QuestPushResult::Read()
{
    _worldPacket >> SenderGUID;
    _worldPacket >> QuestID;
    _worldPacket >> Result;
}

WorldPacket const* QuestGiverInvalidQuest::Write()
{
    _worldPacket << uint32(Reason);
    _worldPacket << int32(ContributionRewardID);

    _worldPacket << Bits<1>(SendErrorMessage);
    _worldPacket << SizedString::BitsSize<9>(ReasonText);

    _worldPacket.FlushBits();

    _worldPacket << SizedString::Data(ReasonText);

    return &_worldPacket;
}

WorldPacket const* QuestUpdateFailedTimer::Write()
{
    _worldPacket << uint32(QuestID);

    return &_worldPacket;
}

WorldPacket const* QuestGiverQuestFailed::Write()
{
    _worldPacket << uint32(QuestID);
    _worldPacket << uint32(Reason);

    return &_worldPacket;
}

void PushQuestToParty::Read()
{
    _worldPacket >> QuestID;
}

WorldPacket const* DailyQuestsReset::Write()
{
    _worldPacket << int32(Count);

    return &_worldPacket;
}

WorldPacket const* QuestForceRemoved::Write()
{
    _worldPacket << int32(QuestID);

    return &_worldPacket;
}

WorldPacket const* WorldQuestUpdateResponse::Write()
{
    _worldPacket << Size<uint32>(WorldQuestUpdates);

    for (WorldQuestUpdateInfo const& worldQuestUpdate : WorldQuestUpdates)
    {
        _worldPacket << worldQuestUpdate.LastUpdate;
        _worldPacket << uint32(worldQuestUpdate.QuestID);
        _worldPacket << uint32(worldQuestUpdate.Timer);
        _worldPacket << int32(worldQuestUpdate.VariableID);
        _worldPacket << int32(worldQuestUpdate.Value);
    }

    return &_worldPacket;
}

ByteBuffer& operator<<(ByteBuffer& data, PlayerChoiceResponseRewardEntry const& playerChoiceResponseRewardEntry)
{
    data << playerChoiceResponseRewardEntry.Item;
    data << int32(playerChoiceResponseRewardEntry.Quantity);

    return data;
}

ByteBuffer& operator<<(ByteBuffer& data, PlayerChoiceResponseReward const& playerChoiceResponseReward)
{
    data << int32(playerChoiceResponseReward.TitleID);
    data << int32(playerChoiceResponseReward.PackageID);
    data << int32(playerChoiceResponseReward.SkillLineID);
    data << uint32(playerChoiceResponseReward.SkillPointCount);
    data << uint32(playerChoiceResponseReward.ArenaPointCount);
    data << uint32(playerChoiceResponseReward.HonorPointCount);
    data << uint64(playerChoiceResponseReward.Money);
    data << uint32(playerChoiceResponseReward.Xp);
    data << Size<uint32>(playerChoiceResponseReward.Items);
    data << Size<uint32>(playerChoiceResponseReward.Currencies);
    data << Size<uint32>(playerChoiceResponseReward.Factions);
    data << Size<uint32>(playerChoiceResponseReward.ItemChoices);

    for (PlayerChoiceResponseRewardEntry const& item : playerChoiceResponseReward.Items)
        data << item;

    for (PlayerChoiceResponseRewardEntry const& currency : playerChoiceResponseReward.Currencies)
        data << currency;

    for (PlayerChoiceResponseRewardEntry const& faction : playerChoiceResponseReward.Factions)
        data << faction;

    for (PlayerChoiceResponseRewardEntry const& itemChoice : playerChoiceResponseReward.ItemChoices)
        data << itemChoice;

    return data;
}

ByteBuffer& operator<<(ByteBuffer& data, PlayerChoiceResponse const& playerChoiceResponse)
{
    data << int32(playerChoiceResponse.ResponseID);
    data << int32(playerChoiceResponse.ChoiceArtFileID);

    data << SizedString::BitsSize<9>(playerChoiceResponse.Answer);
    data << SizedString::BitsSize<9>(playerChoiceResponse.Header);
    data << SizedString::BitsSize<11>(playerChoiceResponse.Description);
    data << SizedString::BitsSize<7>(playerChoiceResponse.Confirmation);
    data << OptionalInit(playerChoiceResponse.Reward);
    data.FlushBits();

    if (playerChoiceResponse.Reward)
        data << *playerChoiceResponse.Reward;

    data << SizedString::Data(playerChoiceResponse.Answer);
    data << SizedString::Data(playerChoiceResponse.Header);
    data << SizedString::Data(playerChoiceResponse.Description);
    data << SizedString::Data(playerChoiceResponse.Confirmation);
    return data;
}

WorldPacket const* DisplayPlayerChoice::Write()
{
    _worldPacket << int32(ChoiceID);
    _worldPacket << Size<uint32>(Responses);
    _worldPacket << SenderGUID;
    _worldPacket << int32(UiTextureKitID);
    _worldPacket << SizedString::BitsSize<8>(Question);
    _worldPacket << Bits<1>(InfiniteRange);
    _worldPacket << Bits<1>(HideWarboardHeader);
    _worldPacket.FlushBits();

    for (PlayerChoiceResponse const& response : Responses)
        _worldPacket << response;

    _worldPacket << SizedString::Data(Question);
    return &_worldPacket;
}

void ChoiceResponse::Read()
{
    _worldPacket >> ChoiceID;
    _worldPacket >> ResponseID;
}

ByteBuffer& operator>>(ByteBuffer& data, SpawnTrackingRequestInfo& spawnTrackingRequestInfo)
{
    data >> spawnTrackingRequestInfo.ObjectTypeMask;
    data >> spawnTrackingRequestInfo.ObjectID;
    data >> spawnTrackingRequestInfo.SpawnTrackingID;

    return data;
}

void SpawnTrackingUpdate::Read()
{
    uint32 requests = _worldPacket.read<uint32>();
    if (requests > 10000)
        OnInvalidArraySize(requests, 10000);

    SpawnTrackingRequests.resize(requests);
    for (SpawnTrackingRequestInfo& spawnTrackingRequestInfo : SpawnTrackingRequests)
        _worldPacket >> spawnTrackingRequestInfo;
}

ByteBuffer& operator<<(ByteBuffer& data, SpawnTrackingResponseInfo const& spawnTrackingResponseInfo)
{
    data << uint32(spawnTrackingResponseInfo.SpawnTrackingID);
    data << int32(spawnTrackingResponseInfo.ObjectID);
    data << int32(spawnTrackingResponseInfo.PhaseID);
    data << int32(spawnTrackingResponseInfo.PhaseGroupID);
    data << int32(spawnTrackingResponseInfo.PhaseUseFlags);

    data << Bits<1>(spawnTrackingResponseInfo.Visible);
    data.FlushBits();

    return data;
}

WorldPacket const* QuestPOIUpdateResponse::Write()
{
    _worldPacket << Size<uint32>(SpawnTrackingResponses);

    for (SpawnTrackingResponseInfo const& spawnTrackingResponseInfo : SpawnTrackingResponses)
        _worldPacket << spawnTrackingResponseInfo;

    return &_worldPacket;
}

WorldPacket const* ForceSpawnTrackingUpdate::Write()
{
    _worldPacket << int32(QuestID);

    return &_worldPacket;
}
}
