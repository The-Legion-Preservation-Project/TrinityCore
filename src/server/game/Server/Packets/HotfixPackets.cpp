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

#include "HotfixPackets.h"
#include "PacketOperators.h"
#include "PacketUtilities.h"

namespace WorldPackets::Hotfix
{
void DBQueryBulk::Read()
{
    _worldPacket >> TableHash;
    _worldPacket >> BitsSize<13>(Queries);

    for (DBQueryRecord& record : Queries)
    {
        _worldPacket >> record.GUID;
        _worldPacket >> record.RecordID;
    }
}

WorldPacket const* DBReply::Write()
{
    _worldPacket << uint32(TableHash);
    _worldPacket << uint32(RecordID);
    _worldPacket << uint32(Timestamp);
    _worldPacket << Bits<1>(Allow);
    _worldPacket << uint32(Data.size());
    _worldPacket.append(Data);

    return &_worldPacket;
}

WorldPacket const* AvailableHotfixes::Write()
{
    _worldPacket << int32(HotfixCacheVersion);
    _worldPacket << Size<uint32>(Hotfixes);
    for (auto const& hotfixEntry : Hotfixes)
        _worldPacket << uint64(hotfixEntry.first);

    return &_worldPacket;
}

void HotfixRequest::Read()
{
    _worldPacket >> Size<uint32>(Hotfixes);
    if (Hotfixes.size() > sDB2Manager.GetHotfixData().size())
        OnInvalidArraySize(Hotfixes.size(), sDB2Manager.GetHotfixData().size());

    for (uint64& hotfixId : Hotfixes)
        _worldPacket >> hotfixId;
}

ByteBuffer& operator<<(ByteBuffer& data, HotfixConnect::HotfixData const& hotfixData)
{
    data << uint64(hotfixData.ID);
    data << int32(hotfixData.RecordID);
    data << OptionalInit(hotfixData.Data);
    if (hotfixData.Data)
    {
        data << uint32(hotfixData.Data->size());
        data.append(*hotfixData.Data);
    }
    else
        data << uint32(0);

    return data;
}

WorldPacket const* HotfixConnect::Write()
{
    _worldPacket << Size<uint32>(Hotfixes);
    for (HotfixData const& hotfix : Hotfixes)
        _worldPacket << hotfix;

    return &_worldPacket;
}
}
