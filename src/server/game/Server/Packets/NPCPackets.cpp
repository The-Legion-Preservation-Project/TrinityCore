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

#include "NPCPackets.h"
#include "PacketOperators.h"

namespace WorldPackets::NPC
{
ByteBuffer& operator<<(ByteBuffer& data, ClientGossipOptions const& gossipOption)
{
    data << int32(gossipOption.OptionID);
    data << uint8(gossipOption.OptionNPC);
    data << int8(gossipOption.OptionFlags);
    data << int32(gossipOption.OptionCost);
    data << SizedString::BitsSize<12>(gossipOption.Text);
    data << SizedString::BitsSize<12>(gossipOption.Confirm);
    data.FlushBits();

    data << SizedString::Data(gossipOption.Text);
    data << SizedString::Data(gossipOption.Confirm);

    return data;
}

ByteBuffer& operator<<(ByteBuffer& data, ClientGossipText const& gossipText)
{
    data << int32(gossipText.QuestID);
    data << int32(gossipText.QuestType);
    data << int32(gossipText.QuestLevel);
    data << int32(gossipText.QuestMaxScalingLevel);
    data << int32(gossipText.QuestFlags[0]);
    data << int32(gossipText.QuestFlags[1]);

    data << Bits<1>(gossipText.Repeatable);
    data << SizedString::BitsSize<9>(gossipText.QuestTitle);
    data.FlushBits();

    data << SizedString::Data(gossipText.QuestTitle);

    return data;
}

void Hello::Read()
{
    _worldPacket >> Unit;
}

WorldPacket const* GossipMessage::Write()
{
    _worldPacket << GossipGUID;
    _worldPacket << int32(GossipID);
    _worldPacket << int32(FriendshipFactionID);
    _worldPacket << int32(TextID);
    _worldPacket << Size<uint32>(GossipOptions);
    _worldPacket << Size<uint32>(GossipText);

    for (ClientGossipOptions const& options : GossipOptions)
        _worldPacket << options;

    for (ClientGossipText const& text : GossipText)
        _worldPacket << text;

    return &_worldPacket;
}

ByteBuffer& operator<<(ByteBuffer& data, VendorItem const &item)
{
    data << uint32(item.MuID);
    data << int32(item.Type);
    data << int32(item.Quantity);
    data << uint64(item.Price);
    data << int32(item.Durability);
    data << int32(item.StackCount);
    data << int32(item.ExtendedCostID);
    data << int32(item.PlayerConditionFailed);
    data << item.Item;
    data << Bits<1>(item.DoNotFilterOnVendor);
    data.FlushBits();

    return data;
}

WorldPacket const* VendorInventory::Write()
{
    _worldPacket << Vendor;
    _worldPacket << uint8(Reason);
    _worldPacket << Size<uint32>(Items);
    for (VendorItem const& item : Items)
        _worldPacket << item;

    return &_worldPacket;
}

WorldPacket const* TrainerList::Write()
{
    _worldPacket << TrainerGUID;
    _worldPacket << uint32(TrainerType);
    _worldPacket << uint32(TrainerID);

    _worldPacket << Size<uint32>(Spells);
    for (TrainerListSpell const& spell : Spells)
    {
        _worldPacket << int32(spell.SpellID);
        _worldPacket << uint32(spell.MoneyCost);
        _worldPacket << uint32(spell.ReqSkillLine);
        _worldPacket << uint32(spell.ReqSkillRank);
        _worldPacket.append(spell.ReqAbility.data(), spell.ReqAbility.size());
        _worldPacket << uint8(spell.Usable);
        _worldPacket << uint8(spell.ReqLevel);
    }

    _worldPacket << SizedString::BitsSize<11>(Greeting);
    _worldPacket.FlushBits();

    _worldPacket << SizedString::Data(Greeting);

    return &_worldPacket;
}

WorldPacket const* ShowBank::Write()
{
    _worldPacket << Guid;

    return &_worldPacket;
}

void GossipSelectOption::Read()
{
    _worldPacket >> GossipUnit;
    _worldPacket >> GossipID;
    _worldPacket >> GossipIndex;

    _worldPacket >> SizedString::BitsSize<8>(PromotionCode);
    _worldPacket >> SizedString::Data(PromotionCode);
}

WorldPacket const* PlayerTabardVendorActivate::Write()
{
    _worldPacket << Vendor;

    return &_worldPacket;
}

WorldPacket const* GossipPOI::Write()
{
    _worldPacket << Bits<14>(Flags);
    _worldPacket << SizedString::BitsSize<6>(Name);
    _worldPacket << Pos;
    _worldPacket << int32(Icon);
    _worldPacket << int32(Importance);
    _worldPacket << SizedString::Data(Name);

    return &_worldPacket;
}

void SpiritHealerActivate::Read()
{
    _worldPacket >> Healer;
}

WorldPacket const* SpiritHealerConfirm::Write()
{
    _worldPacket << Unit;

    return &_worldPacket;
}

void TrainerBuySpell::Read()
{
    _worldPacket >> TrainerGUID;
    _worldPacket >> TrainerID;
    _worldPacket >> SpellID;
}

WorldPacket const* TrainerBuyFailed::Write()
{
    _worldPacket << TrainerGUID;
    _worldPacket << SpellID;
    _worldPacket << TrainerFailedReason;

    return &_worldPacket;
}

void RequestStabledPets::Read()
{
    _worldPacket >> StableMaster;
}

void SetPetSlot::Read()
{
    _worldPacket >> PetNumber;
    _worldPacket >> DestSlot;
    _worldPacket >> StableMaster;
}
}
