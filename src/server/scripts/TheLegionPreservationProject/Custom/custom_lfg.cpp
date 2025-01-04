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

/*
** Made by Traesh https://github.com/Traesh
** Conan513 https://github.com/conan513
** Made into a module by Micrah https://github.com/milestorme/
** Converted to TrinityCore by LEO33 http://leo33.info
** Updated by qyh214 https://github.com/qyh214
*/

#include "Chat.h"
#include "Config.h"
#include "Group.h"
#include "LFGMgr.h"
#include "Map.h"
#include "Player.h"
#include "ScriptMgr.h"

class lfg_solo_announce : public PlayerScript
{
public:
    lfg_solo_announce() : PlayerScript("lfg_solo_announce") {}

    void OnLogin(Player* player, bool /*firstLogin*/) override
    {
        // Announce Module
        if (sConfigMgr->GetIntDefault("SoloLFG.Enable", false) &&
            sConfigMgr->GetBoolDefault("SoloLFG.Announce", true))
        {
            ChatHandler(player->GetSession()).SendSysMessage("This server is running |cff4CFF00Solo Dungeon Finder|r.");
        }
    }
};

class lfg_solo : public PlayerScript
{
public:
    lfg_solo() : PlayerScript("lfg_solo") { }

    void OnLogin(Player* /*player*/, bool /*firstLogin*/) override
    {
        if (sConfigMgr->GetIntDefault("SoloLFG.Enable", false))
        {
            if (!sLFGMgr->IsSoloLFG())
            {
                sLFGMgr->ToggleSoloLFG();
            }
        }
    }
};

class solocraft_player_instance_handler : public PlayerScript
{
public:
    solocraft_player_instance_handler() : PlayerScript("solocraft_player_instance_handler") { }

    void OnMapChanged(Player* player) override
    {
        if (sConfigMgr->GetIntDefault("SoloCraft.Enable", false))
        {
            Map* map = player->GetMap();
            int difficulty = CalculateDifficulty(map, player);
            int numInGroup = GetNumInGroup(player);
            ApplyBuffs(player, map, difficulty, numInGroup);
        }
    }

    void OnLogin(Player* player, bool /*firstLogin*/) override
    {
        if (sConfigMgr->GetIntDefault("SoloCraft.Enable", false))
        {
            Map* map = player->GetMap();
            int difficulty = CalculateDifficulty(map, player);
            int numInGroup = GetNumInGroup(player);
            ApplyBuffs(player, map, difficulty, numInGroup);
        }
    }

    void OnLogout(Player* player) override
    {
        _playerDifficultyMap.erase(player->GetGUID());
    }

private:
    int CalculateDifficulty(Map* map, Player* /*player*/)
    {
        int difficulty = 1;
        if (map)
        {
            if (map->Is25ManRaid())
            {
                difficulty = 25;
            }
            else if (map->GetDifficultyID() == Difficulty::DIFFICULTY_MYTHIC || map->GetDifficultyID() == Difficulty::DIFFICULTY_MYTHIC_RAID)
            {
                difficulty = 20;
            }
            else if (map->IsHeroic())
            {
                difficulty = 10;
            }
            else if (map->IsRaid())
            {
                difficulty = 40;
            }
            else if (map->IsDungeon())
            {
                difficulty = 5;
            }
        }

        return difficulty;
    }

    int GetNumInGroup(Player* player)
    {
        int numInGroup = 1;

        if (Group* group = player->GetGroup())
            numInGroup = group->GetMemberSlots().size();

        return numInGroup;
    }

    void ApplyBuffs(Player* player, Map* map, int difficulty, int /*numInGroup*/)
    {
        ClearBuffs(player, map);
        if (difficulty > 1)
        {
            _playerDifficultyMap[player->GetGUID()] = difficulty;

            float statsMultiplier = sConfigMgr->GetFloatDefault("SoloCraft.Stats.Mult", 55.0f);

            for (int32 i = STAT_STRENGTH; i < MAX_STATS; ++i)
                player->ApplyStatPctModifier(UnitMods(UNIT_MOD_STAT_START + i), TOTAL_PCT, float(difficulty * statsMultiplier));

            player->SetFullHealth();

            if (player->GetPowerType() == POWER_MANA)
                player->SetPower(POWER_MANA, player->GetMaxPower(POWER_MANA));
        }
    }

    void ClearBuffs(Player* player, Map* /*map*/)
    {
        if (_playerDifficultyMap.find(player->GetGUID()) != _playerDifficultyMap.end())
        {
            int difficulty = _playerDifficultyMap[player->GetGUID()];

            float statsMultiplier = sConfigMgr->GetFloatDefault("SoloCraft.Stats.Mult", 55.0f);

            for (int32 i = STAT_STRENGTH; i < MAX_STATS; ++i)
                player->ApplyStatPctModifier(UnitMods(UNIT_MOD_STAT_START + i), TOTAL_PCT, 100.f / (1.f + float(difficulty * statsMultiplier) / 100.f) - 100.f);

            _playerDifficultyMap.erase(player->GetGUID());
        }
    }

    std::map<ObjectGuid, int> _playerDifficultyMap;
};

void AddCustomLfgScripts()
{
    // lfg solo
    new lfg_solo_announce();
    new lfg_solo();

    // solocraft
    new solocraft_player_instance_handler();
}
