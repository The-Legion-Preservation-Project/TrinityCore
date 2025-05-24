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

#include "ReputationPackets.h"
#include "PacketOperators.h"

namespace WorldPackets::Reputation
{
ByteBuffer& operator<<(ByteBuffer& data, FactionData const& factionData)
{
    data << uint8(factionData.Flags);
    data << int32(factionData.Standing);

    return data;
}

ByteBuffer& operator<<(ByteBuffer& data, FactionBonusData const& factionBonusData)
{
    data << Bits<1>(factionBonusData.FactionHasBonus);
    return data;
}

WorldPacket const* InitializeFactions::Write()
{
    for (FactionData const& faction : Factions)
        _worldPacket << faction;

    for (FactionBonusData const& bonus : Bonuses)
        _worldPacket << bonus;

    _worldPacket.FlushBits();

    return &_worldPacket;
}

ByteBuffer& operator<<(ByteBuffer& data, ForcedReaction const& forcedReaction)
{
    data << int32(forcedReaction.Faction);
    data << int32(forcedReaction.Reaction);
    return data;
}

WorldPacket const* SetForcedReactions::Write()
{
    _worldPacket << Size<uint32>(Reactions);
    for (ForcedReaction const& reaction : Reactions)
        _worldPacket << reaction;

    return &_worldPacket;
}

ByteBuffer& operator<<(ByteBuffer& data, FactionStandingData const& factionStanding)
{
    data << int32(factionStanding.Index);
    data << int32(factionStanding.Standing);

    return data;
}

WorldPacket const* SetFactionStanding::Write()
{
    _worldPacket << float(ReferAFriendBonus);
    _worldPacket << float(BonusFromAchievementSystem);
    _worldPacket << Size<uint32>(Faction);
    for (FactionStandingData const& factionStanding : Faction)
        _worldPacket << factionStanding;

    _worldPacket << Bits<1>(ShowVisual);
    _worldPacket.FlushBits();

    return &_worldPacket;
}
}
