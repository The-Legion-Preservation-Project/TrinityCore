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

#ifndef TRINITYCORE_NPC_PACKETS_H
#define TRINITYCORE_NPC_PACKETS_H

#include "Packet.h"
#include "ItemPacketsCommon.h"
#include "ObjectGuid.h"
#include "Position.h"
#include <array>

enum class GossipOptionNpc : uint8;

namespace WorldPackets
{
    namespace NPC
    {
        // CMSG_BINDER_ACTIVATE
        // CMSG_BINDER_CONFIRM
        // CMSG_GOSSIP_HELLO
        // CMSG_LIST_INVENTORY
        // CMSG_TRAINER_LIST
        // CMSG_BATTLEMASTER_HELLO
        class Hello final : public ClientPacket
        {
        public:
            explicit Hello(WorldPacket&& packet) : ClientPacket(std::move(packet)) { }

            void Read() override;

            ObjectGuid Unit;
        };

        struct ClientGossipOptions
        {
            int32 OptionID      = 0;
            GossipOptionNpc OptionNPC = {};
            uint8 OptionFlags   = 0;
            int32 OptionCost    = 0;
            std::string_view Text;
            std::string_view Confirm;
        };

        struct ClientGossipText
        {
            int32 QuestID = 0;
            int32 QuestType = 0;
            int32 QuestLevel = 0;
            int32 QuestMaxScalingLevel = 0;
            bool Repeatable = false;
            std::string QuestTitle;
            std::array<int32, 2> QuestFlags = { };
        };

        ByteBuffer& operator<<(ByteBuffer& data, ClientGossipText const& gossipText);

        class GossipMessage final : public ServerPacket
        {
        public:
            explicit GossipMessage() : ServerPacket(SMSG_GOSSIP_MESSAGE, 200) { }

            WorldPacket const* Write() override;

            std::vector<ClientGossipOptions> GossipOptions;
            int32 FriendshipFactionID = 0;
            ObjectGuid GossipGUID;
            std::vector<ClientGossipText> GossipText;
            int32 TextID = 0;
            int32 GossipID = 0;
        };

        class GossipSelectOption final : public ClientPacket
        {
        public:
            explicit GossipSelectOption(WorldPacket&& packet) : ClientPacket(CMSG_GOSSIP_SELECT_OPTION, std::move(packet)) { }

            void Read() override;

            ObjectGuid GossipUnit;
            int32 GossipIndex = 0;
            int32 GossipID = 0;
            std::string PromotionCode;
        };

        class GossipComplete final : public ServerPacket
        {
        public:
            explicit GossipComplete() : ServerPacket(SMSG_GOSSIP_COMPLETE, 0) { }

            WorldPacket const* Write() override { return &_worldPacket; }
        };

        struct VendorItem
        {
            int32 MuID                      = 0;
            int32 Type                      = 0;
            WorldPackets::Item::ItemInstance Item;
            int32 Quantity                  = -1;
            uint64 Price                    = 0;
            int32 Durability                = 0;
            int32 StackCount                = 0;
            int32 ExtendedCostID            = 0;
            int32 PlayerConditionFailed     = 0;
            bool DoNotFilterOnVendor        = false;
        };

        class VendorInventory final : public ServerPacket
        {
        public:
            explicit VendorInventory() : ServerPacket(SMSG_VENDOR_INVENTORY, 600) { }

            WorldPacket const* Write() override;

            uint8 Reason = 0;
            std::vector<VendorItem> Items;
            ObjectGuid Vendor;
        };

        struct TrainerListSpell
        {
            int32 SpellID       = 0;
            uint32 MoneyCost    = 0;
            uint32 ReqSkillLine = 0;
            uint32 ReqSkillRank = 0;
            std::array<int32, 3> ReqAbility = { };
            uint8 Usable        = 0;
            uint8 ReqLevel      = 0;
        };

        class TrainerList final : public ServerPacket
        {
        public:
            explicit TrainerList() : ServerPacket(SMSG_TRAINER_LIST, 150) { }

            WorldPacket const* Write() override;

            ObjectGuid TrainerGUID;
            int32 TrainerType   = 0;
            int32 TrainerID     = 1;
            std::vector<TrainerListSpell> Spells;
            std::string Greeting;
        };

        class ShowBank final : public ServerPacket
        {
        public:
            explicit ShowBank() : ServerPacket(SMSG_SHOW_BANK, 16) { }

            WorldPacket const* Write() override;

            ObjectGuid Guid;
        };

        class PlayerTabardVendorActivate final : public ServerPacket
        {
        public:
            explicit PlayerTabardVendorActivate() : ServerPacket(SMSG_PLAYER_TABARD_VENDOR_ACTIVATE, 16) { }

            WorldPacket const* Write() override;

            ObjectGuid Vendor;
        };

        class GossipPOI final : public ServerPacket
        {
        public:
            explicit GossipPOI() : ServerPacket(SMSG_GOSSIP_POI, 2 + 4 + 4 + 4 + 4) { }

            WorldPacket const* Write() override;

            uint32 Flags        = 0;
            TaggedPosition<Position::XY> Pos;
            int32 Icon          = 0;
            int32 Importance    = 0;
            std::string Name;
        };

        class SpiritHealerActivate final : public ClientPacket
        {
        public:
            explicit SpiritHealerActivate(WorldPacket&& packet) : ClientPacket(CMSG_SPIRIT_HEALER_ACTIVATE, std::move(packet)) { }

            void Read() override;

            ObjectGuid Healer;
        };

        class TC_GAME_API SpiritHealerConfirm final : public ServerPacket
        {
        public:
            explicit SpiritHealerConfirm() : ServerPacket(SMSG_SPIRIT_HEALER_CONFIRM, 16) { }

            WorldPacket const* Write() override;

            ObjectGuid Unit;
        };

        class TrainerBuySpell final : public ClientPacket
        {
        public:
            explicit TrainerBuySpell(WorldPacket&& packet) : ClientPacket(CMSG_TRAINER_BUY_SPELL, std::move(packet)) { }

            void Read() override;

            ObjectGuid TrainerGUID;
            int32 TrainerID     = 0;
            int32 SpellID       = 0;
        };

        class TrainerBuyFailed final : public ServerPacket
        {
        public:
            explicit TrainerBuyFailed() : ServerPacket(SMSG_TRAINER_BUY_FAILED, 16 + 4 + 4) { }

            WorldPacket const* Write() override;

            ObjectGuid TrainerGUID;
            int32 SpellID               = 0;
            int32 TrainerFailedReason   = 0;
        };

        class RequestStabledPets final : public ClientPacket
        {
        public:
            explicit RequestStabledPets(WorldPacket&& packet) : ClientPacket(CMSG_REQUEST_STABLED_PETS, std::move(packet)) { }

            void Read() override;

            ObjectGuid StableMaster;
        };

        class SetPetSlot final : public ClientPacket
        {
        public:
            explicit SetPetSlot(WorldPacket&& packet) : ClientPacket(CMSG_SET_PET_SLOT, std::move(packet)) { }

            void Read() override;

            ObjectGuid StableMaster;
            uint32 PetNumber = 0;
            uint8 DestSlot = 0;
        };
    }
}

#endif // TRINITYCORE_NPC_PACKETS_H
