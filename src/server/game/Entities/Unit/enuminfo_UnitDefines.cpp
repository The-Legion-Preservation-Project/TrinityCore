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

#include "UnitDefines.h"
#include "Define.h"
#include "SmartEnum.h"
#include <stdexcept>

namespace Trinity::Impl::EnumUtilsImpl
{

/***************************************************************\
|* data for enum 'UnitFlags' in 'UnitDefines.h' auto-generated *|
\***************************************************************/
template <>
TC_API_EXPORT EnumText EnumUtils<UnitFlags>::ToString(UnitFlags value)
{
    switch (value)
    {
        case UNIT_FLAG_SERVER_CONTROLLED: return { "UNIT_FLAG_SERVER_CONTROLLED", "UNIT_FLAG_SERVER_CONTROLLED", "set only when unit movement is controlled by server - by SPLINE/MONSTER_MOVE packets, together with UNIT_FLAG_STUNNED; only set to units controlled by client; client function CGUnit_C::IsClientControlled returns false when set for owner" };
        case UNIT_FLAG_NON_ATTACKABLE: return { "UNIT_FLAG_NON_ATTACKABLE", "UNIT_FLAG_NON_ATTACKABLE", "not attackable, set when creature starts to cast spells with SPELL_EFFECT_SPAWN and cast time, removed when spell hits caster, original name is UNIT_FLAG_SPAWNING. Rename when it will be removed from all scripts" };
        case UNIT_FLAG_REMOVE_CLIENT_CONTROL: return { "UNIT_FLAG_REMOVE_CLIENT_CONTROL", "UNIT_FLAG_REMOVE_CLIENT_CONTROL", "This is a legacy flag used to disable movement player's movement while controlling other units, SMSG_CLIENT_CONTROL replaces this functionality clientside now. CONFUSED and FLEEING flags have the same effect on client movement asDISABLE_MOVE_CONTROL in addition to preventing spell casts/autoattack (they all allow climbing steeper hills and emotes while moving)" };
        case UNIT_FLAG_PLAYER_CONTROLLED: return { "UNIT_FLAG_PLAYER_CONTROLLED", "UNIT_FLAG_PLAYER_CONTROLLED", "controlled by player, use _IMMUNE_TO_PC instead of _IMMUNE_TO_NPC" };
        case UNIT_FLAG_RENAME: return { "UNIT_FLAG_RENAME", "UNIT_FLAG_RENAME", "" };
        case UNIT_FLAG_PREPARATION: return { "UNIT_FLAG_PREPARATION", "UNIT_FLAG_PREPARATION", "don't take reagents for spells with SPELL_ATTR5_NO_REAGENT_WHILE_PREP" };
        case UNIT_FLAG_UNK_6: return { "UNIT_FLAG_UNK_6", "UNIT_FLAG_UNK_6", "" };
        case UNIT_FLAG_NOT_ATTACKABLE_1: return { "UNIT_FLAG_NOT_ATTACKABLE_1", "UNIT_FLAG_NOT_ATTACKABLE_1", "?? (UNIT_FLAG_PLAYER_CONTROLLED | UNIT_FLAG_NOT_ATTACKABLE_1) is NON_PVP_ATTACKABLE" };
        case UNIT_FLAG_IMMUNE_TO_PC: return { "UNIT_FLAG_IMMUNE_TO_PC", "UNIT_FLAG_IMMUNE_TO_PC", "disables combat/assistance with PlayerCharacters (PC) - see Unit::IsValidAttackTarget, Unit::IsValidAssistTarget" };
        case UNIT_FLAG_IMMUNE_TO_NPC: return { "UNIT_FLAG_IMMUNE_TO_NPC", "UNIT_FLAG_IMMUNE_TO_NPC", "disables combat/assistance with NonPlayerCharacters (NPC) - see Unit::IsValidAttackTarget, Unit::IsValidAssistTarget" };
        case UNIT_FLAG_LOOTING: return { "UNIT_FLAG_LOOTING", "UNIT_FLAG_LOOTING", "loot animation" };
        case UNIT_FLAG_PET_IN_COMBAT: return { "UNIT_FLAG_PET_IN_COMBAT", "UNIT_FLAG_PET_IN_COMBAT", "on player pets: whether the pet is chasing a target to attack || on other units: whether any of the unit's minions is in combat" };
        case UNIT_FLAG_PVP_ENABLING: return { "UNIT_FLAG_PVP_ENABLING", "UNIT_FLAG_PVP_ENABLING", "changed in 3.0.3, now UNIT_BYTES_2_OFFSET_PVP_FLAG from UNIT_FIELD_BYTES_2" };
        case UNIT_FLAG_SILENCED: return { "UNIT_FLAG_SILENCED", "UNIT_FLAG_SILENCED", "silenced, 2.1.1" };
        case UNIT_FLAG_CANT_SWIM: return { "UNIT_FLAG_CANT_SWIM", "Can't Swim", "" };
        case UNIT_FLAG_CAN_SWIM: return { "UNIT_FLAG_CAN_SWIM", "Can Swim", "shows swim animation in water" };
        case UNIT_FLAG_NON_ATTACKABLE_2: return { "UNIT_FLAG_NON_ATTACKABLE_2", "UNIT_FLAG_NON_ATTACKABLE_2", "removes attackable icon, if on yourself, cannot assist self but can cast TARGET_SELF spells - added by SPELL_AURA_MOD_UNATTACKABLE" };
        case UNIT_FLAG_PACIFIED: return { "UNIT_FLAG_PACIFIED", "UNIT_FLAG_PACIFIED", "3.0.3 ok" };
        case UNIT_FLAG_STUNNED: return { "UNIT_FLAG_STUNNED", "UNIT_FLAG_STUNNED", "3.0.3 ok" };
        case UNIT_FLAG_IN_COMBAT: return { "UNIT_FLAG_IN_COMBAT", "UNIT_FLAG_IN_COMBAT", "" };
        case UNIT_FLAG_ON_TAXI: return { "UNIT_FLAG_ON_TAXI", "UNIT_FLAG_ON_TAXI", "disable casting at client side spell not allowed by taxi flight (mounted?), probably used with 0x4 flag" };
        case UNIT_FLAG_DISARMED: return { "UNIT_FLAG_DISARMED", "UNIT_FLAG_DISARMED", "3.0.3, disable melee spells casting..., \042Required melee weapon\042 added to melee spells tooltip." };
        case UNIT_FLAG_CONFUSED: return { "UNIT_FLAG_CONFUSED", "UNIT_FLAG_CONFUSED", "" };
        case UNIT_FLAG_FLEEING: return { "UNIT_FLAG_FLEEING", "UNIT_FLAG_FLEEING", "" };
        case UNIT_FLAG_POSSESSED: return { "UNIT_FLAG_POSSESSED", "UNIT_FLAG_POSSESSED", "under direct client control by a player (possess or vehicle)" };
        case UNIT_FLAG_UNINTERACTIBLE: return { "UNIT_FLAG_UNINTERACTIBLE", "UNIT_FLAG_UNINTERACTIBLE", "" };
        case UNIT_FLAG_SKINNABLE: return { "UNIT_FLAG_SKINNABLE", "UNIT_FLAG_SKINNABLE", "" };
        case UNIT_FLAG_MOUNT: return { "UNIT_FLAG_MOUNT", "UNIT_FLAG_MOUNT", "" };
        case UNIT_FLAG_UNK_28: return { "UNIT_FLAG_UNK_28", "UNIT_FLAG_UNK_28", "" };
        case UNIT_FLAG_PREVENT_EMOTES_FROM_CHAT_TEXT: return { "UNIT_FLAG_PREVENT_EMOTES_FROM_CHAT_TEXT", "UNIT_FLAG_PREVENT_EMOTES_FROM_CHAT_TEXT", "Prevent automatically playing emotes from parsing chat text, for example \042lol\042 in /say, ending message with ? or !, or using /yell" };
        case UNIT_FLAG_SHEATHE: return { "UNIT_FLAG_SHEATHE", "UNIT_FLAG_SHEATHE", "" };
        case UNIT_FLAG_IMMUNE: return { "UNIT_FLAG_IMMUNE", "UNIT_FLAG_IMMUNE", "Immune to damage" };
        default: throw std::out_of_range("value");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<UnitFlags>::Count() { return 32; }

template <>
TC_API_EXPORT UnitFlags EnumUtils<UnitFlags>::FromIndex(size_t index)
{
    switch (index)
    {
        case 0: return UNIT_FLAG_SERVER_CONTROLLED;
        case 1: return UNIT_FLAG_NON_ATTACKABLE;
        case 2: return UNIT_FLAG_REMOVE_CLIENT_CONTROL;
        case 3: return UNIT_FLAG_PLAYER_CONTROLLED;
        case 4: return UNIT_FLAG_RENAME;
        case 5: return UNIT_FLAG_PREPARATION;
        case 6: return UNIT_FLAG_UNK_6;
        case 7: return UNIT_FLAG_NOT_ATTACKABLE_1;
        case 8: return UNIT_FLAG_IMMUNE_TO_PC;
        case 9: return UNIT_FLAG_IMMUNE_TO_NPC;
        case 10: return UNIT_FLAG_LOOTING;
        case 11: return UNIT_FLAG_PET_IN_COMBAT;
        case 12: return UNIT_FLAG_PVP_ENABLING;
        case 13: return UNIT_FLAG_SILENCED;
        case 14: return UNIT_FLAG_CANT_SWIM;
        case 15: return UNIT_FLAG_CAN_SWIM;
        case 16: return UNIT_FLAG_NON_ATTACKABLE_2;
        case 17: return UNIT_FLAG_PACIFIED;
        case 18: return UNIT_FLAG_STUNNED;
        case 19: return UNIT_FLAG_IN_COMBAT;
        case 20: return UNIT_FLAG_ON_TAXI;
        case 21: return UNIT_FLAG_DISARMED;
        case 22: return UNIT_FLAG_CONFUSED;
        case 23: return UNIT_FLAG_FLEEING;
        case 24: return UNIT_FLAG_POSSESSED;
        case 25: return UNIT_FLAG_UNINTERACTIBLE;
        case 26: return UNIT_FLAG_SKINNABLE;
        case 27: return UNIT_FLAG_MOUNT;
        case 28: return UNIT_FLAG_UNK_28;
        case 29: return UNIT_FLAG_PREVENT_EMOTES_FROM_CHAT_TEXT;
        case 30: return UNIT_FLAG_SHEATHE;
        case 31: return UNIT_FLAG_IMMUNE;
        default: throw std::out_of_range("index");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<UnitFlags>::ToIndex(UnitFlags value)
{
    switch (value)
    {
        case UNIT_FLAG_SERVER_CONTROLLED: return 0;
        case UNIT_FLAG_NON_ATTACKABLE: return 1;
        case UNIT_FLAG_REMOVE_CLIENT_CONTROL: return 2;
        case UNIT_FLAG_PLAYER_CONTROLLED: return 3;
        case UNIT_FLAG_RENAME: return 4;
        case UNIT_FLAG_PREPARATION: return 5;
        case UNIT_FLAG_UNK_6: return 6;
        case UNIT_FLAG_NOT_ATTACKABLE_1: return 7;
        case UNIT_FLAG_IMMUNE_TO_PC: return 8;
        case UNIT_FLAG_IMMUNE_TO_NPC: return 9;
        case UNIT_FLAG_LOOTING: return 10;
        case UNIT_FLAG_PET_IN_COMBAT: return 11;
        case UNIT_FLAG_PVP_ENABLING: return 12;
        case UNIT_FLAG_SILENCED: return 13;
        case UNIT_FLAG_CANT_SWIM: return 14;
        case UNIT_FLAG_CAN_SWIM: return 15;
        case UNIT_FLAG_NON_ATTACKABLE_2: return 16;
        case UNIT_FLAG_PACIFIED: return 17;
        case UNIT_FLAG_STUNNED: return 18;
        case UNIT_FLAG_IN_COMBAT: return 19;
        case UNIT_FLAG_ON_TAXI: return 20;
        case UNIT_FLAG_DISARMED: return 21;
        case UNIT_FLAG_CONFUSED: return 22;
        case UNIT_FLAG_FLEEING: return 23;
        case UNIT_FLAG_POSSESSED: return 24;
        case UNIT_FLAG_UNINTERACTIBLE: return 25;
        case UNIT_FLAG_SKINNABLE: return 26;
        case UNIT_FLAG_MOUNT: return 27;
        case UNIT_FLAG_UNK_28: return 28;
        case UNIT_FLAG_PREVENT_EMOTES_FROM_CHAT_TEXT: return 29;
        case UNIT_FLAG_SHEATHE: return 30;
        case UNIT_FLAG_IMMUNE: return 31;
        default: throw std::out_of_range("value");
    }
}

/****************************************************************\
|* data for enum 'UnitFlags2' in 'UnitDefines.h' auto-generated *|
\****************************************************************/
template <>
TC_API_EXPORT EnumText EnumUtils<UnitFlags2>::ToString(UnitFlags2 value)
{
    switch (value)
    {
        case UNIT_FLAG2_FEIGN_DEATH: return { "UNIT_FLAG2_FEIGN_DEATH", "UNIT_FLAG2_FEIGN_DEATH", "" };
        case UNIT_FLAG2_HIDE_BODY: return { "UNIT_FLAG2_HIDE_BODY", "Hide Body", "Hide unit model (show only player equip)" };
        case UNIT_FLAG2_IGNORE_REPUTATION: return { "UNIT_FLAG2_IGNORE_REPUTATION", "UNIT_FLAG2_IGNORE_REPUTATION", "" };
        case UNIT_FLAG2_COMPREHEND_LANG: return { "UNIT_FLAG2_COMPREHEND_LANG", "UNIT_FLAG2_COMPREHEND_LANG", "" };
        case UNIT_FLAG2_MIRROR_IMAGE: return { "UNIT_FLAG2_MIRROR_IMAGE", "UNIT_FLAG2_MIRROR_IMAGE", "" };
        case UNIT_FLAG2_DONT_FADE_IN: return { "UNIT_FLAG2_DONT_FADE_IN", "Don't Fade In", "Unit model instantly appears when summoned (does not fade in)" };
        case UNIT_FLAG2_FORCE_MOVEMENT: return { "UNIT_FLAG2_FORCE_MOVEMENT", "UNIT_FLAG2_FORCE_MOVEMENT", "" };
        case UNIT_FLAG2_DISARM_OFFHAND: return { "UNIT_FLAG2_DISARM_OFFHAND", "UNIT_FLAG2_DISARM_OFFHAND", "" };
        case UNIT_FLAG2_DISABLE_PRED_STATS: return { "UNIT_FLAG2_DISABLE_PRED_STATS", "UNIT_FLAG2_DISABLE_PRED_STATS", "Player has disabled predicted stats (Used by raid frames)" };
        case UNIT_FLAG2_ALLOW_CHANGING_TALENTS: return { "UNIT_FLAG2_ALLOW_CHANGING_TALENTS", "UNIT_FLAG2_ALLOW_CHANGING_TALENTS", "Allows changing talents outside rest area" };
        case UNIT_FLAG2_DISARM_RANGED: return { "UNIT_FLAG2_DISARM_RANGED", "UNIT_FLAG2_DISARM_RANGED", "this does not disable ranged weapon display (maybe additional flag needed?)" };
        case UNIT_FLAG2_REGENERATE_POWER: return { "UNIT_FLAG2_REGENERATE_POWER", "UNIT_FLAG2_REGENERATE_POWER", "" };
        case UNIT_FLAG2_RESTRICT_PARTY_INTERACTION: return { "UNIT_FLAG2_RESTRICT_PARTY_INTERACTION", "UNIT_FLAG2_RESTRICT_PARTY_INTERACTION", "Restrict interaction to party or raid" };
        case UNIT_FLAG2_PREVENT_SPELL_CLICK: return { "UNIT_FLAG2_PREVENT_SPELL_CLICK", "UNIT_FLAG2_PREVENT_SPELL_CLICK", "Prevent spellclick" };
        case UNIT_FLAG2_INTERACT_WHILE_HOSTILE: return { "UNIT_FLAG2_INTERACT_WHILE_HOSTILE", "Interact while Hostile", "" };
        case UNIT_FLAG2_CANNOT_TURN: return { "UNIT_FLAG2_CANNOT_TURN", "Cannot Turn", "" };
        case UNIT_FLAG2_UNK2: return { "UNIT_FLAG2_UNK2", "UNIT_FLAG2_UNK2", "" };
        case UNIT_FLAG2_PLAY_DEATH_ANIM: return { "UNIT_FLAG2_PLAY_DEATH_ANIM", "UNIT_FLAG2_PLAY_DEATH_ANIM", "Plays special death animation upon death" };
        case UNIT_FLAG2_ALLOW_CHEAT_SPELLS: return { "UNIT_FLAG2_ALLOW_CHEAT_SPELLS", "UNIT_FLAG2_ALLOW_CHEAT_SPELLS", "Allows casting spells with AttributesEx7 & SPELL_ATTR7_IS_CHEAT_SPELL" };
        case UNIT_FLAG2_SUPPRESS_HIGHLIGHT_WHEN_TARGETED_OR_MOUSED_OVER: return { "UNIT_FLAG2_SUPPRESS_HIGHLIGHT_WHEN_TARGETED_OR_MOUSED_OVER", "Suppress highlight when targeted or moused over", "" };
        case UNIT_FLAG2_TREAT_AS_RAID_UNIT_FOR_HELPFUL_SPELLS: return { "UNIT_FLAG2_TREAT_AS_RAID_UNIT_FOR_HELPFUL_SPELLS", "Treat as Raid Unit For Helpful Spells (Instances ONLY)", "" };
        case UNIT_FLAG2_LARGE_AOI: return { "UNIT_FLAG2_LARGE_AOI", "Large (AOI)", "" };
        case UNIT_FLAG2_GIGANTIC_AOI: return { "UNIT_FLAG2_GIGANTIC_AOI", "Gigantic (AOI)", "" };
        case UNIT_FLAG2_NO_ACTIONS: return { "UNIT_FLAG2_NO_ACTIONS", "UNIT_FLAG2_NO_ACTIONS", "" };
        case UNIT_FLAG2_AI_WILL_ONLY_SWIM_IF_TARGET_SWIMS: return { "UNIT_FLAG2_AI_WILL_ONLY_SWIM_IF_TARGET_SWIMS", "AI will only swim if target swims", "" };
        case UNIT_FLAG2_DONT_GENERATE_COMBAT_LOG_WHEN_ENGAGED_WITH_NPCS: return { "UNIT_FLAG2_DONT_GENERATE_COMBAT_LOG_WHEN_ENGAGED_WITH_NPCS", "Don't generate combat log when engaged with NPC's", "" };
        case UNIT_FLAG2_UNTARGETABLE_BY_CLIENT: return { "UNIT_FLAG2_UNTARGETABLE_BY_CLIENT", "Untargetable By Client", "" };
        case UNIT_FLAG2_ATTACKER_IGNORES_MINIMUM_RANGES: return { "UNIT_FLAG2_ATTACKER_IGNORES_MINIMUM_RANGES", "Attacker Ignores Minimum Ranges", "" };
        case UNIT_FLAG2_UNINTERACTIBLE_IF_HOSTILE: return { "UNIT_FLAG2_UNINTERACTIBLE_IF_HOSTILE", "Uninteractible If Hostile", "" };
        case UNIT_FLAG2_UNUSED_11: return { "UNIT_FLAG2_UNUSED_11", "UNIT_FLAG2_UNUSED_11", "" };
        case UNIT_FLAG2_INFINITE_AOI: return { "UNIT_FLAG2_INFINITE_AOI", "Infinite (AOI)", "" };
        case UNIT_FLAG2_UNUSED_13: return { "UNIT_FLAG2_UNUSED_13", "UNIT_FLAG2_UNUSED_13", "" };
        default: throw std::out_of_range("value");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<UnitFlags2>::Count() { return 32; }

template <>
TC_API_EXPORT UnitFlags2 EnumUtils<UnitFlags2>::FromIndex(size_t index)
{
    switch (index)
    {
        case 0: return UNIT_FLAG2_FEIGN_DEATH;
        case 1: return UNIT_FLAG2_HIDE_BODY;
        case 2: return UNIT_FLAG2_IGNORE_REPUTATION;
        case 3: return UNIT_FLAG2_COMPREHEND_LANG;
        case 4: return UNIT_FLAG2_MIRROR_IMAGE;
        case 5: return UNIT_FLAG2_DONT_FADE_IN;
        case 6: return UNIT_FLAG2_FORCE_MOVEMENT;
        case 7: return UNIT_FLAG2_DISARM_OFFHAND;
        case 8: return UNIT_FLAG2_DISABLE_PRED_STATS;
        case 9: return UNIT_FLAG2_ALLOW_CHANGING_TALENTS;
        case 10: return UNIT_FLAG2_DISARM_RANGED;
        case 11: return UNIT_FLAG2_REGENERATE_POWER;
        case 12: return UNIT_FLAG2_RESTRICT_PARTY_INTERACTION;
        case 13: return UNIT_FLAG2_PREVENT_SPELL_CLICK;
        case 14: return UNIT_FLAG2_INTERACT_WHILE_HOSTILE;
        case 15: return UNIT_FLAG2_CANNOT_TURN;
        case 16: return UNIT_FLAG2_UNK2;
        case 17: return UNIT_FLAG2_PLAY_DEATH_ANIM;
        case 18: return UNIT_FLAG2_ALLOW_CHEAT_SPELLS;
        case 19: return UNIT_FLAG2_SUPPRESS_HIGHLIGHT_WHEN_TARGETED_OR_MOUSED_OVER;
        case 20: return UNIT_FLAG2_TREAT_AS_RAID_UNIT_FOR_HELPFUL_SPELLS;
        case 21: return UNIT_FLAG2_LARGE_AOI;
        case 22: return UNIT_FLAG2_GIGANTIC_AOI;
        case 23: return UNIT_FLAG2_NO_ACTIONS;
        case 24: return UNIT_FLAG2_AI_WILL_ONLY_SWIM_IF_TARGET_SWIMS;
        case 25: return UNIT_FLAG2_DONT_GENERATE_COMBAT_LOG_WHEN_ENGAGED_WITH_NPCS;
        case 26: return UNIT_FLAG2_UNTARGETABLE_BY_CLIENT;
        case 27: return UNIT_FLAG2_ATTACKER_IGNORES_MINIMUM_RANGES;
        case 28: return UNIT_FLAG2_UNINTERACTIBLE_IF_HOSTILE;
        case 29: return UNIT_FLAG2_UNUSED_11;
        case 30: return UNIT_FLAG2_INFINITE_AOI;
        case 31: return UNIT_FLAG2_UNUSED_13;
        default: throw std::out_of_range("index");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<UnitFlags2>::ToIndex(UnitFlags2 value)
{
    switch (value)
    {
        case UNIT_FLAG2_FEIGN_DEATH: return 0;
        case UNIT_FLAG2_HIDE_BODY: return 1;
        case UNIT_FLAG2_IGNORE_REPUTATION: return 2;
        case UNIT_FLAG2_COMPREHEND_LANG: return 3;
        case UNIT_FLAG2_MIRROR_IMAGE: return 4;
        case UNIT_FLAG2_DONT_FADE_IN: return 5;
        case UNIT_FLAG2_FORCE_MOVEMENT: return 6;
        case UNIT_FLAG2_DISARM_OFFHAND: return 7;
        case UNIT_FLAG2_DISABLE_PRED_STATS: return 8;
        case UNIT_FLAG2_ALLOW_CHANGING_TALENTS: return 9;
        case UNIT_FLAG2_DISARM_RANGED: return 10;
        case UNIT_FLAG2_REGENERATE_POWER: return 11;
        case UNIT_FLAG2_RESTRICT_PARTY_INTERACTION: return 12;
        case UNIT_FLAG2_PREVENT_SPELL_CLICK: return 13;
        case UNIT_FLAG2_INTERACT_WHILE_HOSTILE: return 14;
        case UNIT_FLAG2_CANNOT_TURN: return 15;
        case UNIT_FLAG2_UNK2: return 16;
        case UNIT_FLAG2_PLAY_DEATH_ANIM: return 17;
        case UNIT_FLAG2_ALLOW_CHEAT_SPELLS: return 18;
        case UNIT_FLAG2_SUPPRESS_HIGHLIGHT_WHEN_TARGETED_OR_MOUSED_OVER: return 19;
        case UNIT_FLAG2_TREAT_AS_RAID_UNIT_FOR_HELPFUL_SPELLS: return 20;
        case UNIT_FLAG2_LARGE_AOI: return 21;
        case UNIT_FLAG2_GIGANTIC_AOI: return 22;
        case UNIT_FLAG2_NO_ACTIONS: return 23;
        case UNIT_FLAG2_AI_WILL_ONLY_SWIM_IF_TARGET_SWIMS: return 24;
        case UNIT_FLAG2_DONT_GENERATE_COMBAT_LOG_WHEN_ENGAGED_WITH_NPCS: return 25;
        case UNIT_FLAG2_UNTARGETABLE_BY_CLIENT: return 26;
        case UNIT_FLAG2_ATTACKER_IGNORES_MINIMUM_RANGES: return 27;
        case UNIT_FLAG2_UNINTERACTIBLE_IF_HOSTILE: return 28;
        case UNIT_FLAG2_UNUSED_11: return 29;
        case UNIT_FLAG2_INFINITE_AOI: return 30;
        case UNIT_FLAG2_UNUSED_13: return 31;
        default: throw std::out_of_range("value");
    }
}

/****************************************************************\
|* data for enum 'UnitFlags3' in 'UnitDefines.h' auto-generated *|
\****************************************************************/
template <>
TC_API_EXPORT EnumText EnumUtils<UnitFlags3>::ToString(UnitFlags3 value)
{
    switch (value)
    {
        case UNIT_FLAG3_UNK1: return { "UNIT_FLAG3_UNK1", "UNIT_FLAG3_UNK1", "" };
        default: throw std::out_of_range("value");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<UnitFlags3>::Count() { return 1; }

template <>
TC_API_EXPORT UnitFlags3 EnumUtils<UnitFlags3>::FromIndex(size_t index)
{
    switch (index)
    {
        case 0: return UNIT_FLAG3_UNK1;
        default: throw std::out_of_range("index");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<UnitFlags3>::ToIndex(UnitFlags3 value)
{
    switch (value)
    {
        case UNIT_FLAG3_UNK1: return 0;
        default: throw std::out_of_range("value");
    }
}

/**************************************************************\
|* data for enum 'NPCFlags' in 'UnitDefines.h' auto-generated *|
\**************************************************************/
template <>
TC_API_EXPORT EnumText EnumUtils<NPCFlags>::ToString(NPCFlags value)
{
    switch (value)
    {
        case UNIT_NPC_FLAG_NONE: return { "UNIT_NPC_FLAG_NONE", "UNIT_NPC_FLAG_NONE", "" };
        case UNIT_NPC_FLAG_GOSSIP: return { "UNIT_NPC_FLAG_GOSSIP", "has gossip menu", "100%" };
        case UNIT_NPC_FLAG_QUESTGIVER: return { "UNIT_NPC_FLAG_QUESTGIVER", "is quest giver", "100%" };
        case UNIT_NPC_FLAG_UNK1: return { "UNIT_NPC_FLAG_UNK1", "UNIT_NPC_FLAG_UNK1", "" };
        case UNIT_NPC_FLAG_UNK2: return { "UNIT_NPC_FLAG_UNK2", "UNIT_NPC_FLAG_UNK2", "" };
        case UNIT_NPC_FLAG_TRAINER: return { "UNIT_NPC_FLAG_TRAINER", "is trainer", "100%" };
        case UNIT_NPC_FLAG_TRAINER_CLASS: return { "UNIT_NPC_FLAG_TRAINER_CLASS", "is class trainer", "100%" };
        case UNIT_NPC_FLAG_TRAINER_PROFESSION: return { "UNIT_NPC_FLAG_TRAINER_PROFESSION", "is profession trainer", "100%" };
        case UNIT_NPC_FLAG_VENDOR: return { "UNIT_NPC_FLAG_VENDOR", "is vendor (generic)", "100%" };
        case UNIT_NPC_FLAG_VENDOR_AMMO: return { "UNIT_NPC_FLAG_VENDOR_AMMO", "is vendor (ammo)", "100%, general goods vendor" };
        case UNIT_NPC_FLAG_VENDOR_FOOD: return { "UNIT_NPC_FLAG_VENDOR_FOOD", "is vendor (food)", "100%" };
        case UNIT_NPC_FLAG_VENDOR_POISON: return { "UNIT_NPC_FLAG_VENDOR_POISON", "is vendor (poison)", "guessed" };
        case UNIT_NPC_FLAG_VENDOR_REAGENT: return { "UNIT_NPC_FLAG_VENDOR_REAGENT", "is vendor (reagents)", "100%" };
        case UNIT_NPC_FLAG_REPAIR: return { "UNIT_NPC_FLAG_REPAIR", "can repair", "100%" };
        case UNIT_NPC_FLAG_FLIGHTMASTER: return { "UNIT_NPC_FLAG_FLIGHTMASTER", "is flight master", "100%" };
        case UNIT_NPC_FLAG_SPIRITHEALER: return { "UNIT_NPC_FLAG_SPIRITHEALER", "is spirit healer", "guessed" };
        case UNIT_NPC_FLAG_SPIRITGUIDE: return { "UNIT_NPC_FLAG_SPIRITGUIDE", "is spirit guide", "guessed" };
        case UNIT_NPC_FLAG_INNKEEPER: return { "UNIT_NPC_FLAG_INNKEEPER", "is innkeeper", "" };
        case UNIT_NPC_FLAG_BANKER: return { "UNIT_NPC_FLAG_BANKER", "is banker", "100%" };
        case UNIT_NPC_FLAG_PETITIONER: return { "UNIT_NPC_FLAG_PETITIONER", "handles guild/arena petitions", "100% 0xC0000 = guild petitions, 0x40000 = arena team petitions" };
        case UNIT_NPC_FLAG_TABARDDESIGNER: return { "UNIT_NPC_FLAG_TABARDDESIGNER", "is guild tabard designer", "100%" };
        case UNIT_NPC_FLAG_BATTLEMASTER: return { "UNIT_NPC_FLAG_BATTLEMASTER", "is battlemaster", "100%" };
        case UNIT_NPC_FLAG_AUCTIONEER: return { "UNIT_NPC_FLAG_AUCTIONEER", "is auctioneer", "100%" };
        case UNIT_NPC_FLAG_STABLEMASTER: return { "UNIT_NPC_FLAG_STABLEMASTER", "is stable master", "100%" };
        case UNIT_NPC_FLAG_GUILD_BANKER: return { "UNIT_NPC_FLAG_GUILD_BANKER", "is guild banker DESCRIPTION", "" };
        case UNIT_NPC_FLAG_SPELLCLICK: return { "UNIT_NPC_FLAG_SPELLCLICK", "has spell click enabled", "" };
        case UNIT_NPC_FLAG_PLAYER_VEHICLE: return { "UNIT_NPC_FLAG_PLAYER_VEHICLE", "is player vehicle", "players with mounts that have vehicle data should have it set" };
        case UNIT_NPC_FLAG_MAILBOX: return { "UNIT_NPC_FLAG_MAILBOX", "is mailbox", "" };
        case UNIT_NPC_FLAG_ARTIFACT_POWER_RESPEC: return { "UNIT_NPC_FLAG_ARTIFACT_POWER_RESPEC", "can reset artifact powers", "" };
        case UNIT_NPC_FLAG_TRANSMOGRIFIER: return { "UNIT_NPC_FLAG_TRANSMOGRIFIER", "transmogrification", "" };
        case UNIT_NPC_FLAG_VAULTKEEPER: return { "UNIT_NPC_FLAG_VAULTKEEPER", "is void storage", "" };
        case UNIT_NPC_FLAG_WILD_BATTLE_PET: return { "UNIT_NPC_FLAG_WILD_BATTLE_PET", "is wild battle pet", "Pet that player can fight (Battle Pet)" };
        case UNIT_NPC_FLAG_BLACK_MARKET: return { "UNIT_NPC_FLAG_BLACK_MARKET", "is black market", "" };
        case UNIT_NPC_FLAG_ITEM_UPGRADE_MASTER: return { "UNIT_NPC_FLAG_ITEM_UPGRADE_MASTER", "is item upgrade", "" };
        case UNIT_NPC_FLAG_GARRISON_ARCHITECT: return { "UNIT_NPC_FLAG_GARRISON_ARCHITECT", "is garrison architect", "garrison building placement UI" };
        case UNIT_NPC_FLAG_STEERING: return { "UNIT_NPC_FLAG_STEERING", "is avoiding obstacles", "clientside pathfinding" };
        case UNIT_NPC_FLAG_SHIPMENT_CRAFTER: return { "UNIT_NPC_FLAG_SHIPMENT_CRAFTER", "is shipment crafter", "garrison work orders" };
        case UNIT_NPC_FLAG_GARRISON_MISSION_NPC: return { "UNIT_NPC_FLAG_GARRISON_MISSION_NPC", "is garrison mission", "" };
        case UNIT_NPC_FLAG_TRADESKILL_NPC: return { "UNIT_NPC_FLAG_TRADESKILL_NPC", "is tradeskill", "crafting at npc" };
        case UNIT_NPC_FLAG_BLACK_MARKET_VIEW: return { "UNIT_NPC_FLAG_BLACK_MARKET_VIEW", "is black market view", "only allows viewing black market auctions, no bidding" };
        case UNIT_NPC_FLAG_CONTRIBUTION_COLLECTOR: return { "UNIT_NPC_FLAG_CONTRIBUTION_COLLECTOR", "is contribution collector", "" };
        default: throw std::out_of_range("value");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<NPCFlags>::Count() { return 41; }

template <>
TC_API_EXPORT NPCFlags EnumUtils<NPCFlags>::FromIndex(size_t index)
{
    switch (index)
    {
        case 0: return UNIT_NPC_FLAG_NONE;
        case 1: return UNIT_NPC_FLAG_GOSSIP;
        case 2: return UNIT_NPC_FLAG_QUESTGIVER;
        case 3: return UNIT_NPC_FLAG_UNK1;
        case 4: return UNIT_NPC_FLAG_UNK2;
        case 5: return UNIT_NPC_FLAG_TRAINER;
        case 6: return UNIT_NPC_FLAG_TRAINER_CLASS;
        case 7: return UNIT_NPC_FLAG_TRAINER_PROFESSION;
        case 8: return UNIT_NPC_FLAG_VENDOR;
        case 9: return UNIT_NPC_FLAG_VENDOR_AMMO;
        case 10: return UNIT_NPC_FLAG_VENDOR_FOOD;
        case 11: return UNIT_NPC_FLAG_VENDOR_POISON;
        case 12: return UNIT_NPC_FLAG_VENDOR_REAGENT;
        case 13: return UNIT_NPC_FLAG_REPAIR;
        case 14: return UNIT_NPC_FLAG_FLIGHTMASTER;
        case 15: return UNIT_NPC_FLAG_SPIRITHEALER;
        case 16: return UNIT_NPC_FLAG_SPIRITGUIDE;
        case 17: return UNIT_NPC_FLAG_INNKEEPER;
        case 18: return UNIT_NPC_FLAG_BANKER;
        case 19: return UNIT_NPC_FLAG_PETITIONER;
        case 20: return UNIT_NPC_FLAG_TABARDDESIGNER;
        case 21: return UNIT_NPC_FLAG_BATTLEMASTER;
        case 22: return UNIT_NPC_FLAG_AUCTIONEER;
        case 23: return UNIT_NPC_FLAG_STABLEMASTER;
        case 24: return UNIT_NPC_FLAG_GUILD_BANKER;
        case 25: return UNIT_NPC_FLAG_SPELLCLICK;
        case 26: return UNIT_NPC_FLAG_PLAYER_VEHICLE;
        case 27: return UNIT_NPC_FLAG_MAILBOX;
        case 28: return UNIT_NPC_FLAG_ARTIFACT_POWER_RESPEC;
        case 29: return UNIT_NPC_FLAG_TRANSMOGRIFIER;
        case 30: return UNIT_NPC_FLAG_VAULTKEEPER;
        case 31: return UNIT_NPC_FLAG_WILD_BATTLE_PET;
        case 32: return UNIT_NPC_FLAG_BLACK_MARKET;
        case 33: return UNIT_NPC_FLAG_ITEM_UPGRADE_MASTER;
        case 34: return UNIT_NPC_FLAG_GARRISON_ARCHITECT;
        case 35: return UNIT_NPC_FLAG_STEERING;
        case 36: return UNIT_NPC_FLAG_SHIPMENT_CRAFTER;
        case 37: return UNIT_NPC_FLAG_GARRISON_MISSION_NPC;
        case 38: return UNIT_NPC_FLAG_TRADESKILL_NPC;
        case 39: return UNIT_NPC_FLAG_BLACK_MARKET_VIEW;
        case 40: return UNIT_NPC_FLAG_CONTRIBUTION_COLLECTOR;
        default: throw std::out_of_range("index");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<NPCFlags>::ToIndex(NPCFlags value)
{
    switch (value)
    {
        case UNIT_NPC_FLAG_NONE: return 0;
        case UNIT_NPC_FLAG_GOSSIP: return 1;
        case UNIT_NPC_FLAG_QUESTGIVER: return 2;
        case UNIT_NPC_FLAG_UNK1: return 3;
        case UNIT_NPC_FLAG_UNK2: return 4;
        case UNIT_NPC_FLAG_TRAINER: return 5;
        case UNIT_NPC_FLAG_TRAINER_CLASS: return 6;
        case UNIT_NPC_FLAG_TRAINER_PROFESSION: return 7;
        case UNIT_NPC_FLAG_VENDOR: return 8;
        case UNIT_NPC_FLAG_VENDOR_AMMO: return 9;
        case UNIT_NPC_FLAG_VENDOR_FOOD: return 10;
        case UNIT_NPC_FLAG_VENDOR_POISON: return 11;
        case UNIT_NPC_FLAG_VENDOR_REAGENT: return 12;
        case UNIT_NPC_FLAG_REPAIR: return 13;
        case UNIT_NPC_FLAG_FLIGHTMASTER: return 14;
        case UNIT_NPC_FLAG_SPIRITHEALER: return 15;
        case UNIT_NPC_FLAG_SPIRITGUIDE: return 16;
        case UNIT_NPC_FLAG_INNKEEPER: return 17;
        case UNIT_NPC_FLAG_BANKER: return 18;
        case UNIT_NPC_FLAG_PETITIONER: return 19;
        case UNIT_NPC_FLAG_TABARDDESIGNER: return 20;
        case UNIT_NPC_FLAG_BATTLEMASTER: return 21;
        case UNIT_NPC_FLAG_AUCTIONEER: return 22;
        case UNIT_NPC_FLAG_STABLEMASTER: return 23;
        case UNIT_NPC_FLAG_GUILD_BANKER: return 24;
        case UNIT_NPC_FLAG_SPELLCLICK: return 25;
        case UNIT_NPC_FLAG_PLAYER_VEHICLE: return 26;
        case UNIT_NPC_FLAG_MAILBOX: return 27;
        case UNIT_NPC_FLAG_ARTIFACT_POWER_RESPEC: return 28;
        case UNIT_NPC_FLAG_TRANSMOGRIFIER: return 29;
        case UNIT_NPC_FLAG_VAULTKEEPER: return 30;
        case UNIT_NPC_FLAG_WILD_BATTLE_PET: return 31;
        case UNIT_NPC_FLAG_BLACK_MARKET: return 32;
        case UNIT_NPC_FLAG_ITEM_UPGRADE_MASTER: return 33;
        case UNIT_NPC_FLAG_GARRISON_ARCHITECT: return 34;
        case UNIT_NPC_FLAG_STEERING: return 35;
        case UNIT_NPC_FLAG_SHIPMENT_CRAFTER: return 36;
        case UNIT_NPC_FLAG_GARRISON_MISSION_NPC: return 37;
        case UNIT_NPC_FLAG_TRADESKILL_NPC: return 38;
        case UNIT_NPC_FLAG_BLACK_MARKET_VIEW: return 39;
        case UNIT_NPC_FLAG_CONTRIBUTION_COLLECTOR: return 40;
        default: throw std::out_of_range("value");
    }
}
}
