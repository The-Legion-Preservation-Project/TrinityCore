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

#include "GarrisonPackets.h"
#include "DB2Structure.h"
#include "Errors.h"
#include "PacketOperators.h"

namespace WorldPackets::Garrison
{
WorldPacket const* GarrisonCreateResult::Write()
{
    _worldPacket << uint32(Result);
    _worldPacket << uint32(GarrSiteLevelID);

    return &_worldPacket;
}

WorldPacket const* GarrisonDeleteResult::Write()
{
    _worldPacket << uint32(Result);
    _worldPacket << uint32(GarrSiteID);

    return &_worldPacket;
}

ByteBuffer& operator<<(ByteBuffer& data, GarrisonPlotInfo const& plotInfo)
{
    data << uint32(plotInfo.GarrPlotInstanceID);
    data << plotInfo.PlotPos;
    data << uint32(plotInfo.PlotType);

    return data;
}

ByteBuffer& operator<<(ByteBuffer& data, GarrisonBuildingInfo const& buildingInfo)
{
    data << uint32(buildingInfo.GarrPlotInstanceID);
    data << uint32(buildingInfo.GarrBuildingID);
    data << buildingInfo.TimeBuilt;
    data << uint32(buildingInfo.CurrentGarSpecID);
    data << buildingInfo.TimeSpecCooldown;
    data << Bits<1>(buildingInfo.Active);
    data.FlushBits();

    return data;
}

ByteBuffer& operator<<(ByteBuffer& data, GarrisonFollower const& follower)
{
    data << uint64(follower.DbID);
    data << uint32(follower.GarrFollowerID);
    data << uint32(follower.Quality);
    data << uint32(follower.FollowerLevel);
    data << uint32(follower.ItemLevelWeapon);
    data << uint32(follower.ItemLevelArmor);
    data << uint32(follower.Xp);
    data << uint32(follower.Durability);
    data << uint32(follower.CurrentBuildingID);
    data << uint32(follower.CurrentMissionID);
    data << Size<uint32>(follower.AbilityID);
    data << uint32(follower.ZoneSupportSpellID);
    data << uint32(follower.FollowerStatus);
    for (GarrAbilityEntry const* ability : follower.AbilityID)
        data << uint32(ability->ID);

    data << SizedString::BitsSize<7>(follower.CustomName);
    data.FlushBits();

    data << SizedString::Data(follower.CustomName);

    return data;
}

ByteBuffer& operator<<(ByteBuffer& data, GarrisonMission const& mission)
{
    data << uint64(mission.DbID);
    data << uint32(mission.MissionRecID);
    data << mission.OfferTime;
    data << mission.OfferDuration;
    data << mission.StartTime;
    data << mission.TravelDuration;
    data << mission.MissionDuration;
    data << uint32(mission.MissionState);
    data << uint32(mission.SuccessChance);
    data << uint32(mission.Flags);

    return data;
}

ByteBuffer& operator<<(ByteBuffer& data, GarrisonMissionReward const& missionRewardItem)
{
    data << int32(missionRewardItem.ItemID);
    data << uint32(missionRewardItem.ItemQuantity);
    data << int32(missionRewardItem.CurrencyID);
    data << uint32(missionRewardItem.CurrencyQuantity);
    data << uint32(missionRewardItem.FollowerXP);
    data << uint32(missionRewardItem.GarrMssnBonusAbilityID);
    data << int32(missionRewardItem.ItemFileDataID);

    return data;
}

ByteBuffer& operator<<(ByteBuffer& data, GarrisonMissionBonusAbility const& areaBonus)
{
    data << uint32(areaBonus.GarrMssnBonusAbilityID);
    data << areaBonus.StartTime;

    return data;
}

ByteBuffer& operator<<(ByteBuffer& data, GarrisonTalent const& talent)
{
    data << int32(talent.GarrTalentID);
    data << talent.ResearchStartTime;
    data << int32(talent.Flags);

    return data;
}

ByteBuffer& operator<<(ByteBuffer& data, GarrisonInfo const& garrison)
{
    ASSERT(garrison.Missions.size() == garrison.MissionRewards.size());
    ASSERT(garrison.Missions.size() == garrison.MissionOvermaxRewards.size());
    ASSERT(garrison.Missions.size() == garrison.CanStartMission.size());

    data << int32(garrison.GarrTypeID);
    data << int32(garrison.GarrSiteID);
    data << int32(garrison.GarrSiteLevelID);
    data << Size<uint32>(garrison.Buildings);
    data << Size<uint32>(garrison.Plots);
    data << Size<uint32>(garrison.Followers);
    data << Size<uint32>(garrison.Missions);
    data << Size<uint32>(garrison.MissionRewards);
    data << Size<uint32>(garrison.MissionOvermaxRewards);
    data << Size<uint32>(garrison.MissionAreaBonuses);
    data << Size<uint32>(garrison.Talents);
    data << Size<uint32>(garrison.CanStartMission);
    data << Size<uint32>(garrison.ArchivedMissions);
    data << int32(garrison.NumFollowerActivationsRemaining);
    data << uint32(garrison.NumMissionsStartedToday);

    for (GarrisonPlotInfo const* plot : garrison.Plots)
        data << *plot;

    for (GarrisonMission const* mission : garrison.Missions)
        data << *mission;

    for (std::vector<GarrisonMissionReward> const& missionReward : garrison.MissionRewards)
        data << Size<uint32>(missionReward);

    for (std::vector<GarrisonMissionReward> const& missionReward : garrison.MissionRewards)
        for (GarrisonMissionReward const& missionRewardItem : missionReward)
            data << missionRewardItem;

    for (std::vector<GarrisonMissionReward> const& missionReward : garrison.MissionOvermaxRewards)
        data << Size<uint32>(missionReward);

    for (std::vector<GarrisonMissionReward> const& missionReward : garrison.MissionOvermaxRewards)
        for (GarrisonMissionReward const& missionRewardItem : missionReward)
            data << missionRewardItem;

    for (GarrisonMissionBonusAbility const* areaBonus : garrison.MissionAreaBonuses)
        data << *areaBonus;

    for (GarrisonTalent const& talent : garrison.Talents)
        data << talent;

    if (!garrison.ArchivedMissions.empty())
        data.append(garrison.ArchivedMissions.data(), garrison.ArchivedMissions.size());

    for (GarrisonBuildingInfo const* building : garrison.Buildings)
        data << *building;

    for (bool canStartMission : garrison.CanStartMission)
        data << Bits<1>(canStartMission);

    data.FlushBits();

    for (GarrisonFollower const* follower : garrison.Followers)
        data << *follower;

    return data;
}

ByteBuffer& operator<<(ByteBuffer& data, FollowerSoftCapInfo const& followerSoftCapInfo)
{
    data << int32(followerSoftCapInfo.GarrFollowerTypeID);
    data << uint32(followerSoftCapInfo.Count);
    return data;
}

WorldPacket const* GetGarrisonInfoResult::Write()
{
    _worldPacket << int32(FactionIndex);
    _worldPacket << Size<uint32>(Garrisons);
    _worldPacket << Size<uint32>(FollowerSoftCaps);
    for (FollowerSoftCapInfo const& followerSoftCapInfo : FollowerSoftCaps)
        _worldPacket << followerSoftCapInfo;

    for (GarrisonInfo const& garrison : Garrisons)
        _worldPacket << garrison;

    return &_worldPacket;
}

ByteBuffer& operator<<(ByteBuffer& data, GarrisonRemoteBuildingInfo const& building)
{
    data << uint32(building.GarrPlotInstanceID);
    data << uint32(building.GarrBuildingID);

    return data;
}

ByteBuffer& operator<<(ByteBuffer& data, GarrisonRemoteSiteInfo const& site)
{
    data << uint32(site.GarrSiteLevelID);
    data << Size<uint32>(site.Buildings);
    for (GarrisonRemoteBuildingInfo const& building : site.Buildings)
        data << building;

    return data;
}

WorldPacket const* GarrisonRemoteInfo::Write()
{
    _worldPacket << Size<uint32>(Sites);
    for (GarrisonRemoteSiteInfo const& site : Sites)
        _worldPacket << site;

    return &_worldPacket;
}

void GarrisonPurchaseBuilding::Read()
{
    _worldPacket >> NpcGUID;
    _worldPacket >> PlotInstanceID;
    _worldPacket >> BuildingID;
}

WorldPacket const* GarrisonPlaceBuildingResult::Write()
{
    _worldPacket << int32(GarrTypeID);
    _worldPacket << uint32(Result);
    _worldPacket << BuildingInfo;
    _worldPacket << Bits<1>(PlayActivationCinematic);
    _worldPacket.FlushBits();

    return &_worldPacket;
}

void GarrisonCancelConstruction::Read()
{
    _worldPacket >> NpcGUID;
    _worldPacket >> PlotInstanceID;
}

WorldPacket const* GarrisonBuildingRemoved::Write()
{
    _worldPacket << int32(GarrTypeID);
    _worldPacket << uint32(Result);
    _worldPacket << uint32(GarrPlotInstanceID);
    _worldPacket << uint32(GarrBuildingID);

    return &_worldPacket;
}

WorldPacket const* GarrisonLearnBlueprintResult::Write()
{
    _worldPacket << int32(GarrTypeID);
    _worldPacket << uint32(Result);
    _worldPacket << uint32(BuildingID);

    return &_worldPacket;
}

WorldPacket const* GarrisonUnlearnBlueprintResult::Write()
{
    _worldPacket << int32(GarrTypeID);
    _worldPacket << uint32(Result);
    _worldPacket << uint32(BuildingID);

    return &_worldPacket;
}

WorldPacket const* GarrisonRequestBlueprintAndSpecializationDataResult::Write()
{
    _worldPacket << int32(GarrTypeID);
    _worldPacket << uint32(BlueprintsKnown ? BlueprintsKnown->size() : 0);
    _worldPacket << uint32(SpecializationsKnown ? SpecializationsKnown->size() : 0);
    if (BlueprintsKnown)
        for (uint32 blueprint : *BlueprintsKnown)
            _worldPacket << uint32(blueprint);

    if (SpecializationsKnown)
        for (uint32 specialization : *SpecializationsKnown)
            _worldPacket << uint32(specialization);

    return &_worldPacket;
}

ByteBuffer& operator<<(ByteBuffer& data, GarrisonBuildingMapData& building)
{
    data << uint32(building.GarrBuildingPlotInstID);
    data << building.Pos;

    return data;
}

WorldPacket const* GarrisonMapDataResponse::Write()
{
    _worldPacket << Size<uint32>(Buildings);
    for (GarrisonBuildingMapData& building : Buildings)
        _worldPacket << building;

    return &_worldPacket;
}

WorldPacket const* GarrisonPlotPlaced::Write()
{
    _worldPacket << int32(GarrTypeID);
    _worldPacket << *PlotInfo;

    return &_worldPacket;
}

WorldPacket const* GarrisonPlotRemoved::Write()
{
    _worldPacket << uint32(GarrPlotInstanceID);

    return &_worldPacket;
}

WorldPacket const* GarrisonAddFollowerResult::Write()
{
    _worldPacket << int32(GarrTypeID);
    _worldPacket << uint32(Result);
    _worldPacket << Follower;

    return &_worldPacket;
}

WorldPacket const* GarrisonRemoveFollowerResult::Write()
{
    _worldPacket << uint64(FollowerDBID);
    _worldPacket << int32(GarrTypeID);
    _worldPacket << uint32(Result);
    _worldPacket << uint32(Destroyed);

    return &_worldPacket;
}

WorldPacket const* GarrisonBuildingActivated::Write()
{
    _worldPacket << uint32(GarrPlotInstanceID);

    return &_worldPacket;
}

WorldPacket const* GarrisonOpenTalentNpc::Write()
{
    _worldPacket << NpcGUID;
    _worldPacket << int32(GarrTalentTreeID);
    _worldPacket << int32(FriendshipFactionID);

    return &_worldPacket;
}
}
