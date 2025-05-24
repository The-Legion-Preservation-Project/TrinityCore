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

#include "GameObjectPackets.h"
#include "PacketOperators.h"

namespace WorldPackets::GameObject
{
void GameObjUse::Read()
{
    _worldPacket >> Guid;
}

void GameObjReportUse::Read()
{
    _worldPacket >> Guid;
}

WorldPacket const* GameObjectDespawn::Write()
{
    _worldPacket << ObjectGUID;

    return &_worldPacket;
}

WorldPacket const* PageText::Write()
{
    _worldPacket << GameObjectGUID;

    return &_worldPacket;
}

WorldPacket const* GameObjectActivateAnimKit::Write()
{
    _worldPacket << ObjectGUID;
    _worldPacket << uint32(AnimKitID);
    _worldPacket << Bits<1>(Maintain);
    _worldPacket.FlushBits();

    return &_worldPacket;
}

WorldPacket const * DestructibleBuildingDamage::Write()
{
    _worldPacket << Target;
    _worldPacket << Owner;
    _worldPacket << Caster;
    _worldPacket << int32(Damage);
    _worldPacket << int32(SpellID);

    return &_worldPacket;
}

WorldPacket const* GameObjectCustomAnim::Write()
{
    _worldPacket << ObjectGUID;
    _worldPacket << uint32(CustomAnim);
    _worldPacket << Bits<1>(PlayAsDespawn);
    _worldPacket.FlushBits();

    return &_worldPacket;
}

WorldPacket const* GameObjectUILink::Write()
{
    _worldPacket << ObjectGUID;
    _worldPacket << int32(UILink);

    return &_worldPacket;
}

WorldPacket const* GameObjectPlaySpellVisual::Write()
{
    _worldPacket << ObjectGUID;
    _worldPacket << ActivatorGUID;
    _worldPacket << int32(SpellVisualID);

    return &_worldPacket;
}

WorldPacket const* GameObjectSetStateLocal::Write()
{
    _worldPacket << ObjectGUID;
    _worldPacket << uint8(State);

    return &_worldPacket;
}
}
