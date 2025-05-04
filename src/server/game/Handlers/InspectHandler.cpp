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
#include "AchievementMgr.h"
#include "Guild.h"
#include "GuildMgr.h"
#include "InspectPackets.h"
#include "Log.h"
#include "ObjectAccessor.h"
#include "Player.h"
#include "World.h"

void WorldSession::HandleInspectOpcode(WorldPackets::Inspect::Inspect& inspect)
{
    Player* player = ObjectAccessor::GetPlayer(*_player, inspect.Target);
    if (!player)
    {
        TC_LOG_DEBUG("network", "WorldSession::HandleInspectOpcode: Target {} not found.", inspect.Target.ToString());
        return;
    }

    TC_LOG_DEBUG("network", "WorldSession::HandleInspectOpcode: Target {}.", inspect.Target.ToString());

    if (!GetPlayer()->IsWithinDistInMap(player, INSPECT_DISTANCE, false))
        return;

    if (GetPlayer()->IsValidAttackTarget(player))
        return;

    WorldPackets::Inspect::InspectResult inspectResult;
    inspectResult.InspecteeGUID = inspect.Target;

    for (uint8 i = 0; i < EQUIPMENT_SLOT_END; ++i)
    {
        if (Item* item = player->GetItemByPos(INVENTORY_SLOT_BAG_0, i))
            inspectResult.Items.emplace_back(item, i);
    }

    inspectResult.ClassID = player->GetClass();
    inspectResult.GenderID = player->GetNativeGender();

    if (GetPlayer()->CanBeGameMaster() || sWorld->getIntConfig(CONFIG_TALENTS_INSPECTING) + (GetPlayer()->GetEffectiveTeam() == player->GetEffectiveTeam()) > 1)
    {
        PlayerTalentMap const* talents = player->GetTalentMap(player->GetActiveTalentGroup());
        for (PlayerTalentMap::value_type const& v : *talents)
        {
            if (v.second != PLAYERSPELL_REMOVED)
                inspectResult.Talents.push_back(v.first);
        }
    }

    if (Guild* guild = sGuildMgr->GetGuildById(player->GetGuildId()))
    {
        inspectResult.GuildData.emplace();
        inspectResult.GuildData->GuildGUID = guild->GetGUID();
        inspectResult.GuildData->NumGuildMembers = guild->GetMembersCount();
        inspectResult.GuildData->AchievementPoints = guild->GetAchievementMgr().GetAchievementPoints();
    }

    inspectResult.InspecteeGUID = inspect.Target;
    inspectResult.SpecializationID = AsUnderlyingType(player->GetPrimarySpecialization());

    SendPacket(inspectResult.Write());
}

void WorldSession::HandleRequestHonorStatsOpcode(WorldPackets::Inspect::RequestHonorStats& request)
{
    Player* player = ObjectAccessor::FindPlayer(request.TargetGUID);
    if (!player)
    {
        TC_LOG_DEBUG("network", "WorldSession::HandleRequestHonorStatsOpcode: Target {} not found.", request.TargetGUID.ToString());
        return;
    }

    TC_LOG_DEBUG("network", "WorldSession::HandleRequestHonorStatsOpcode: Target {}.", request.TargetGUID.ToString());

    if (!GetPlayer()->IsWithinDistInMap(player, INSPECT_DISTANCE, false))
        return;

    if (GetPlayer()->IsValidAttackTarget(player))
        return;

    WorldPackets::Inspect::InspectHonorStats honorStats;
    honorStats.PlayerGUID  = request.TargetGUID;
    honorStats.LifetimeHK  = player->GetUInt32Value(PLAYER_FIELD_LIFETIME_HONORABLE_KILLS);
    honorStats.YesterdayHK = player->GetUInt16Value(PLAYER_FIELD_KILLS, PLAYER_FIELD_KILLS_OFFSET_YESTERDAY_KILLS);
    honorStats.TodayHK     = player->GetUInt16Value(PLAYER_FIELD_KILLS, PLAYER_FIELD_KILLS_OFFSET_TODAY_KILLS);
    honorStats.LifetimeMaxRank = 0; /// @todo

    SendPacket(honorStats.Write());
}

void WorldSession::HandleInspectPVP(WorldPackets::Inspect::InspectPVPRequest& request)
{
    /// @todo: deal with request.InspectRealmAddress

    Player* player = ObjectAccessor::FindPlayer(request.InspectTarget);
    if (!player)
    {
        TC_LOG_DEBUG("network", "WorldSession::HandleInspectPVP: Target {} not found.", request.InspectTarget.ToString());
        return;
    }

    TC_LOG_DEBUG("network", "WorldSession::HandleInspectPVP: Target {}, InspectRealmAddress {}.", request.InspectTarget.ToString(), request.InspectRealmAddress);

    if (!GetPlayer()->IsWithinDistInMap(player, INSPECT_DISTANCE, false))
        return;

    if (GetPlayer()->IsValidAttackTarget(player))
        return;

    WorldPackets::Inspect::InspectPVPResponse response;
    response.ClientGUID = request.InspectTarget;
    /// @todo: fill brackets

    SendPacket(response.Write());
}

void WorldSession::HandleQueryInspectAchievements(WorldPackets::Inspect::QueryInspectAchievements& inspect)
{
    Player* player = ObjectAccessor::GetPlayer(*_player, inspect.Guid);
    if (!player)
    {
        TC_LOG_DEBUG("network", "WorldSession::HandleQueryInspectAchievements: [{}] inspected unknown Player [{}]", GetPlayer()->GetGUID().ToString(), inspect.Guid.ToString());
        return;
    }

    TC_LOG_DEBUG("network", "WorldSession::HandleQueryInspectAchievements: [{}] inspected Player [{}]", GetPlayer()->GetGUID().ToString(), inspect.Guid.ToString());

    if (!GetPlayer()->IsWithinDistInMap(player, INSPECT_DISTANCE, false))
        return;

    if (GetPlayer()->IsValidAttackTarget(player))
        return;

    player->SendRespondInspectAchievements(GetPlayer());
}
