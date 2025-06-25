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

#ifndef TRINITYCORE_PLAYER_CHOICE_H
#define TRINITYCORE_PLAYER_CHOICE_H

#include "Define.h"
#include "Optional.h"
#include <string>
#include <vector>

struct PlayerChoiceResponseRewardItem
{
    PlayerChoiceResponseRewardItem() : Id(0), Quantity(0) { }
    PlayerChoiceResponseRewardItem(uint32 id, std::vector<int32> bonusListIDs, int32 quantity) : Id(id), BonusListIDs(std::move(bonusListIDs)), Quantity(quantity) { }

    uint32 Id;
    std::vector<int32> BonusListIDs;
    int32 Quantity;
};

struct PlayerChoiceResponseRewardEntry
{
    PlayerChoiceResponseRewardEntry() : Id(0), Quantity(0) { }
    PlayerChoiceResponseRewardEntry(uint32 id, int32 quantity) : Id(id), Quantity(quantity) { }

    uint32 Id;
    int32 Quantity;
};

struct PlayerChoiceResponseReward
{
    int32 TitleId;
    int32 PackageId;
    int32 SkillLineId;
    uint32 SkillPointCount;
    uint32 ArenaPointCount;
    uint32 HonorPointCount;
    uint64 Money;
    uint32 Xp;
    std::vector<PlayerChoiceResponseRewardItem> Items;
    std::vector<PlayerChoiceResponseRewardEntry> Currency;
    std::vector<PlayerChoiceResponseRewardEntry> Faction;
};

struct PlayerChoiceResponse
{
    int32 ResponseId = 0;
    int32 ChoiceArtFileId = 0;
    std::string Header;
    std::string Answer;
    std::string Description;
    std::string Confirmation;
    Optional<PlayerChoiceResponseReward> Reward;
};

struct PlayerChoice
{
    int32 ChoiceId = 0;
    int32 UiTextureKitId = 0;
    std::string Question;
    std::vector<PlayerChoiceResponse> Responses;
    bool InfiniteRange = false;
    bool HideWarboardHeader = false;

    Optional<uint32> MaxResponses;

    uint32 ScriptId = 0;

    PlayerChoiceResponse const* GetResponse(int32 responseId) const
    {
        auto itr = std::ranges::find(Responses, responseId, &PlayerChoiceResponse::ResponseId);
        return itr != Responses.end() ? &(*itr) : nullptr;
    }
};

#endif // TRINITYCORE_PLAYER_CHOICE_H