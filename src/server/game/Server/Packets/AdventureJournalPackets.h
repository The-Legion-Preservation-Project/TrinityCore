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

#ifndef AdventureJournalPackets_h__
#define AdventureJournalPackets_h__

#include "Packet.h"

namespace WorldPackets
{
    namespace AdventureJournal
    {
        class AdventureJournalOpenQuest final : public ClientPacket
        {
        public:
            AdventureJournalOpenQuest(WorldPacket&& packet) : ClientPacket(CMSG_ADVENTURE_JOURNAL_OPEN_QUEST, std::move(packet)) { }

            void Read() override;

            int32 AdventureJournalID = 0;
        };
    }
}

#endif // AdventureJournalPackets_h__
