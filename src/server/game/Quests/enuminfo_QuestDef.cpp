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

#include "QuestDef.h"
#include "Define.h"
#include "SmartEnum.h"
#include <stdexcept>

namespace Trinity::Impl::EnumUtilsImpl
{

/********************************************************************\
|* data for enum 'QuestFailedReason' in 'QuestDef.h' auto-generated *|
\********************************************************************/
template <>
TC_API_EXPORT EnumText EnumUtils<QuestFailedReason>::ToString(QuestFailedReason value)
{
    switch (value)
    {
        case QUEST_ERR_NONE: return { "QUEST_ERR_NONE", "QUEST_ERR_NONE", "" };
        case QUEST_ERR_FAILED_LOW_LEVEL: return { "QUEST_ERR_FAILED_LOW_LEVEL", "QUEST_ERR_FAILED_LOW_LEVEL", "\042You are not high enough level for that quest.\042\042" };
        case QUEST_ERR_FAILED_WRONG_RACE: return { "QUEST_ERR_FAILED_WRONG_RACE", "QUEST_ERR_FAILED_WRONG_RACE", "\042That quest is not available to your race.\042" };
        case QUEST_ERR_ALREADY_DONE: return { "QUEST_ERR_ALREADY_DONE", "QUEST_ERR_ALREADY_DONE", "\042You have completed that daily quest today.\042" };
        case QUEST_ERR_ONLY_ONE_TIMED: return { "QUEST_ERR_ONLY_ONE_TIMED", "QUEST_ERR_ONLY_ONE_TIMED", "\042You can only be on one timed quest at a time\042" };
        case QUEST_ERR_ALREADY_ON1: return { "QUEST_ERR_ALREADY_ON1", "QUEST_ERR_ALREADY_ON1", "\042You are already on that quest\042" };
        case QUEST_ERR_FAILED_EXPANSION: return { "QUEST_ERR_FAILED_EXPANSION", "QUEST_ERR_FAILED_EXPANSION", "\042This quest requires an expansion enabled account.\042" };
        case QUEST_ERR_ALREADY_ON2: return { "QUEST_ERR_ALREADY_ON2", "QUEST_ERR_ALREADY_ON2", "\042You are already on that quest\042" };
        case QUEST_ERR_FAILED_MISSING_ITEMS: return { "QUEST_ERR_FAILED_MISSING_ITEMS", "QUEST_ERR_FAILED_MISSING_ITEMS", "\042You don't have the required items with you.  Check storage.\042" };
        case QUEST_ERR_FAILED_NOT_ENOUGH_MONEY: return { "QUEST_ERR_FAILED_NOT_ENOUGH_MONEY", "QUEST_ERR_FAILED_NOT_ENOUGH_MONEY", "\042You don't have enough money for that quest\042" };
        case QUEST_ERR_FAILED_CAIS: return { "QUEST_ERR_FAILED_CAIS", "QUEST_ERR_FAILED_CAIS", "\042You cannot complete quests once you have reached tired time\042" };
        case QUEST_ERR_ALREADY_DONE_DAILY: return { "QUEST_ERR_ALREADY_DONE_DAILY", "QUEST_ERR_ALREADY_DONE_DAILY", "\042You have completed that daily quest today.\042" };
        case QUEST_ERR_FAILED_SPELL: return { "QUEST_ERR_FAILED_SPELL", "QUEST_ERR_FAILED_SPELL", "\042You haven't learned the required spell.\042" };
        case QUEST_ERR_HAS_IN_PROGRESS: return { "QUEST_ERR_HAS_IN_PROGRESS", "QUEST_ERR_HAS_IN_PROGRESS", "\042Progress Bar objective not completed\042" };
        default: throw std::out_of_range("value");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<QuestFailedReason>::Count() { return 14; }

template <>
TC_API_EXPORT QuestFailedReason EnumUtils<QuestFailedReason>::FromIndex(size_t index)
{
    switch (index)
    {
        case 0: return QUEST_ERR_NONE;
        case 1: return QUEST_ERR_FAILED_LOW_LEVEL;
        case 2: return QUEST_ERR_FAILED_WRONG_RACE;
        case 3: return QUEST_ERR_ALREADY_DONE;
        case 4: return QUEST_ERR_ONLY_ONE_TIMED;
        case 5: return QUEST_ERR_ALREADY_ON1;
        case 6: return QUEST_ERR_FAILED_EXPANSION;
        case 7: return QUEST_ERR_ALREADY_ON2;
        case 8: return QUEST_ERR_FAILED_MISSING_ITEMS;
        case 9: return QUEST_ERR_FAILED_NOT_ENOUGH_MONEY;
        case 10: return QUEST_ERR_FAILED_CAIS;
        case 11: return QUEST_ERR_ALREADY_DONE_DAILY;
        case 12: return QUEST_ERR_FAILED_SPELL;
        case 13: return QUEST_ERR_HAS_IN_PROGRESS;
        default: throw std::out_of_range("index");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<QuestFailedReason>::ToIndex(QuestFailedReason value)
{
    switch (value)
    {
        case QUEST_ERR_NONE: return 0;
        case QUEST_ERR_FAILED_LOW_LEVEL: return 1;
        case QUEST_ERR_FAILED_WRONG_RACE: return 2;
        case QUEST_ERR_ALREADY_DONE: return 3;
        case QUEST_ERR_ONLY_ONE_TIMED: return 4;
        case QUEST_ERR_ALREADY_ON1: return 5;
        case QUEST_ERR_FAILED_EXPANSION: return 6;
        case QUEST_ERR_ALREADY_ON2: return 7;
        case QUEST_ERR_FAILED_MISSING_ITEMS: return 8;
        case QUEST_ERR_FAILED_NOT_ENOUGH_MONEY: return 9;
        case QUEST_ERR_FAILED_CAIS: return 10;
        case QUEST_ERR_ALREADY_DONE_DAILY: return 11;
        case QUEST_ERR_FAILED_SPELL: return 12;
        case QUEST_ERR_HAS_IN_PROGRESS: return 13;
        default: throw std::out_of_range("value");
    }
}

/********************************************************\
|* data for enum 'class' in 'QuestDef.h' auto-generated *|
\********************************************************/
template <>
TC_API_EXPORT EnumText EnumUtils<class>::ToString(class value)
{
    switch (value)
    {
        case Success: return { "Success", "Success", "\042Sharing quest with %s...\042" };
        case Invalid: return { "Invalid", "Invalid", "\042%s is not eligible for that quest\042" };
        case Accepted: return { "Accepted", "Accepted", "\042%s has accepted your quest\042" };
        case Declined: return { "Declined", "Declined", "\042%s has declined your quest\042" };
        case Busy: return { "Busy", "Busy", "\042%s is busy\042" };
        case Dead: return { "Dead", "Dead", "\042%s is dead.\042" };
        case LogFull: return { "LogFull", "LogFull", "\042%s's quest log is full\042" };
        case OnQuest: return { "OnQuest", "OnQuest", "\042%s is already on that quest\042" };
        case AlreadyDone: return { "AlreadyDone", "AlreadyDone", "\042%s has completed that quest\042" };
        case NotDaily: return { "NotDaily", "NotDaily", "\042That quest cannot be shared today\042" };
        case TimerExpired: return { "TimerExpired", "TimerExpired", "\042Quest sharing timer has expired\042" };
        case NotInParty: return { "NotInParty", "NotInParty", "\042You are not in a party\042" };
        case DifferentServerDaily: return { "DifferentServerDaily", "DifferentServerDaily", "\042%s is not eligible for that quest today\042" };
        case NotAllowed: return { "NotAllowed", "NotAllowed", "\042That quest cannot be shared\042" };
        default: throw std::out_of_range("value");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<class>::Count() { return 14; }

template <>
TC_API_EXPORT class EnumUtils<class>::FromIndex(size_t index)
{
    switch (index)
    {
        case 0: return Success;
        case 1: return Invalid;
        case 2: return Accepted;
        case 3: return Declined;
        case 4: return Busy;
        case 5: return Dead;
        case 6: return LogFull;
        case 7: return OnQuest;
        case 8: return AlreadyDone;
        case 9: return NotDaily;
        case 10: return TimerExpired;
        case 11: return NotInParty;
        case 12: return DifferentServerDaily;
        case 13: return NotAllowed;
        default: throw std::out_of_range("index");
    }
}

template <>
TC_API_EXPORT size_t EnumUtils<class>::ToIndex(class value)
{
    switch (value)
    {
        case Success: return 0;
        case Invalid: return 1;
        case Accepted: return 2;
        case Declined: return 3;
        case Busy: return 4;
        case Dead: return 5;
        case LogFull: return 6;
        case OnQuest: return 7;
        case AlreadyDone: return 8;
        case NotDaily: return 9;
        case TimerExpired: return 10;
        case NotInParty: return 11;
        case DifferentServerDaily: return 12;
        case NotAllowed: return 13;
        default: throw std::out_of_range("value");
    }
}
}
