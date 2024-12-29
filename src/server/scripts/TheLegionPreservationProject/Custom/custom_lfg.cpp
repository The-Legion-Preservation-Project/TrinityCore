/*
** Made by Traesh https://github.com/Traesh
** Conan513 https://github.com/conan513
** Made into a module by Micrah https://github.com/milestorme/
** Converted to TrinityCore by LEO33 http://leo33.info
** Updated by qyh214 https://github.com/qyh214
*/

#include "Chat.h"
#include "Configuration/Config.h"
#include "Group.h"
#include "LFGMgr.h"
#include "Map.h"
#include "Opcodes.h"
#include "Player.h"
#include "ScriptMgr.h"
#include "World.h"

class lfg_solo_announce : public PlayerScript
{
public:
    lfg_solo_announce() : PlayerScript("lfg_solo_announce") {}

    void OnLogin(Player* player, bool /*firstLogin*/) override
    {
        // Announce Module
        if (sConfigMgr->GetBoolDefault("SoloLFG.Announce", true))
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
        if (sConfigMgr->GetIntDefault("SoloLFG.Enable", true))
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
        Map* map = player->GetMap();
        int difficulty = CalculateDifficulty(map, player);
        int numInGroup = GetNumInGroup(player);
        ApplyBuffs(player, map, difficulty, numInGroup);
    }

private:
    int CalculateDifficulty(Map *map, Player *player)
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

    int GetNumInGroup(Player *player)
    {
        int numInGroup = 1;

        if (Group* group = player->GetGroup())
            numInGroup = group->GetMemberSlots().size();

        return numInGroup;
    }

    void ApplyBuffs(Player* player, Map* map, int difficulty, int numInGroup)
    {
        ClearBuffs(player, map);
        if (difficulty > 1)
        {
            _playerDifficultyMap[player->GetGUID()] = difficulty;

            for (int32 i = STAT_STRENGTH; i < MAX_STATS; ++i)
                player->HandleStatModifier(UnitMods(UNIT_MOD_STAT_START + i), TOTAL_PCT, float(difficulty * 100), true);

            player->SetFullHealth();

            if (player->GetPowerType() == POWER_MANA)
                player->SetPower(POWER_MANA, player->GetMaxPower(POWER_MANA));
        }
    }

    void ClearBuffs(Player* player, Map* map)
    {
        if (_playerDifficultyMap.find(player->GetGUID()) != _playerDifficultyMap.end())
        {
            int difficulty = _playerDifficultyMap[player->GetGUID()];
            for (int32 i = STAT_STRENGTH; i < MAX_STATS; ++i)
                player->HandleStatModifier(UnitMods(UNIT_MOD_STAT_START + i), TOTAL_PCT, float(difficulty * 100), false);
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
