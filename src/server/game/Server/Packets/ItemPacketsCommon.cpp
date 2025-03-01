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

#include "ItemPacketsCommon.h"
#include "Item.h"
#include "Player.h"

namespace WorldPackets
{
namespace Item
{
bool ItemBonuses::operator==(ItemBonuses const& r) const
{
    if (Context != r.Context)
        return false;

    if (BonusListIDs.size() != r.BonusListIDs.size())
        return false;

    return std::is_permutation(BonusListIDs.begin(), BonusListIDs.end(), r.BonusListIDs.begin());
}

void ItemInstance::Initialize(::Item const* item)
{
    ItemID               = item->GetEntry();
    RandomPropertiesSeed = item->GetItemSuffixFactor();
    RandomPropertiesID   = item->GetItemRandomPropertyId();
    std::vector<uint32> const& bonusListIds = item->GetDynamicValues(ITEM_DYNAMIC_FIELD_BONUSLIST_IDS);
    if (!bonusListIds.empty())
    {
        ItemBonus.emplace();
        ItemBonus->BonusListIDs.insert(ItemBonus->BonusListIDs.end(), bonusListIds.begin(), bonusListIds.end());
        ItemBonus->Context = item->GetContext();
    }

    if (uint32 mask = item->GetUInt32Value(ITEM_FIELD_MODIFIERS_MASK))
    {
        Modifications.emplace();

        for (size_t i = 0; mask != 0; mask >>= 1, ++i)
            if ((mask & 1) != 0)
                Modifications->Insert(i, item->GetModifier(ItemModifier(i)));
    }
}

void ItemInstance::Initialize(::ItemDynamicFieldGems const* gem)
{
    ItemID = gem->ItemId;

    ItemBonuses bonus;
    bonus.Context = ItemContext(gem->Context);
    for (uint16 bonusListId : gem->BonusListIDs)
        if (bonusListId)
            bonus.BonusListIDs.push_back(bonusListId);

    if (bonus.Context != ItemContext::NONE || !bonus.BonusListIDs.empty())
        ItemBonus = bonus;
}

void ItemInstance::Initialize(::LootItem const& lootItem)
{
    ItemID = lootItem.itemid;
    RandomPropertiesSeed = lootItem.randomSuffix;
    if (lootItem.randomPropertyId.Type != ItemRandomEnchantmentType::BonusList)
        RandomPropertiesID = lootItem.randomPropertyId.Id;

    if (!lootItem.BonusListIDs.empty())
    {
        ItemBonus.emplace();
        ItemBonus->BonusListIDs = lootItem.BonusListIDs;
        ItemBonus->Context = lootItem.context;
    }

    if (lootItem.upgradeId)
    {
        Modifications.emplace();
        Modifications->Insert(ITEM_MODIFIER_UPGRADE_ID, lootItem.upgradeId);
    }
}

void ItemInstance::Initialize(::VoidStorageItem const* voidItem)
{
    ItemID = voidItem->ItemEntry;
    RandomPropertiesSeed = voidItem->ItemSuffixFactor;
    if (voidItem->ItemRandomPropertyId.Type != ItemRandomEnchantmentType::BonusList)
        RandomPropertiesID = voidItem->ItemRandomPropertyId.Id;

    if (voidItem->ItemUpgradeId || voidItem->FixedScalingLevel || voidItem->ArtifactKnowledgeLevel)
    {
        Modifications.emplace();
        if (voidItem->ItemUpgradeId)
            Modifications->Insert(ITEM_MODIFIER_UPGRADE_ID, voidItem->ItemUpgradeId);
        if (voidItem->FixedScalingLevel)
            Modifications->Insert(ITEM_MODIFIER_SCALING_STAT_DISTRIBUTION_FIXED_LEVEL, voidItem->FixedScalingLevel);
        if (voidItem->ArtifactKnowledgeLevel)
            Modifications->Insert(ITEM_MODIFIER_ARTIFACT_KNOWLEDGE_LEVEL, voidItem->ArtifactKnowledgeLevel);
    }

    if (!voidItem->BonusListIDs.empty())
    {
        ItemBonus.emplace();
        ItemBonus->Context = voidItem->Context;
        ItemBonus->BonusListIDs = voidItem->BonusListIDs;
    }
}

bool ItemInstance::operator==(ItemInstance const& r) const
{
    if (ItemID != r.ItemID || RandomPropertiesID != r.RandomPropertiesID || RandomPropertiesSeed != r.RandomPropertiesSeed)
        return false;

    if (ItemBonus.has_value() != r.ItemBonus.has_value() || Modifications.has_value() != r.Modifications.has_value())
        return false;

    if (Modifications.has_value() && *Modifications != *r.Modifications)
        return false;

    if (ItemBonus.has_value() && *ItemBonus != *r.ItemBonus)
        return false;

    return true;
}

ByteBuffer& operator<<(ByteBuffer& data, ItemBonuses const& itemBonusInstanceData)
{
    data << uint8(itemBonusInstanceData.Context);
    data << uint32(itemBonusInstanceData.BonusListIDs.size());
    for (uint32 bonusID : itemBonusInstanceData.BonusListIDs)
        data << uint32(bonusID);

    return data;
}

ByteBuffer& operator>>(ByteBuffer& data, ItemBonuses& itemBonusInstanceData)
{
    uint32 bonusListIdSize;

    itemBonusInstanceData.Context = data.read<ItemContext>();
    data >> bonusListIdSize;

    for (uint32 i = 0u; i < bonusListIdSize; ++i)
    {
        uint32 bonusId;
        data >> bonusId;
        itemBonusInstanceData.BonusListIDs.push_back(bonusId);
    }

    return data;
}

ByteBuffer& operator<<(ByteBuffer& data, ItemInstance const& itemInstance)
{
    data << int32(itemInstance.ItemID);
    data << int32(itemInstance.RandomPropertiesSeed);
    data << int32(itemInstance.RandomPropertiesID);

    data.WriteBit(itemInstance.ItemBonus.has_value());
    data.WriteBit(itemInstance.Modifications.has_value());
    data.FlushBits();

    if (itemInstance.ItemBonus)
        data << *itemInstance.ItemBonus;

    if (itemInstance.Modifications)
        data << *itemInstance.Modifications;

    return data;
}

ByteBuffer& operator>>(ByteBuffer& data, ItemInstance& itemInstance)
{
    data >> itemInstance.ItemID;
    data >> itemInstance.RandomPropertiesSeed;
    data >> itemInstance.RandomPropertiesID;

    bool hasItemBonus = data.ReadBit();
    bool hasModifications = data.ReadBit();
    data.ResetBitPos();

    if (hasItemBonus)
    {
        itemInstance.ItemBonus.emplace();
        data >> *itemInstance.ItemBonus;
    }

    if (hasModifications)
    {
        itemInstance.Modifications.emplace();
        data >> *itemInstance.Modifications;
    }

    return data;
}

ByteBuffer& operator<<(ByteBuffer& data, ItemEnchantData const& itemEnchantData)
{
    data << int32(itemEnchantData.ID);
    data << uint32(itemEnchantData.Expiration);
    data << int32(itemEnchantData.Charges);
    data << uint8(itemEnchantData.Slot);
    return data;
}

ByteBuffer& operator<<(ByteBuffer& data, ItemGemData const& itemGemData)
{
    data << uint8(itemGemData.Slot);
    data << itemGemData.Item;
    return data;
}

ByteBuffer& operator>>(ByteBuffer& data, ItemGemData& itemGemData)
{
    data >> itemGemData.Slot;
    data >> itemGemData.Item;
    return data;
}

ByteBuffer& operator>>(ByteBuffer& data, InvUpdate& invUpdate)
{
    invUpdate.Items.resize(data.ReadBits(2));
    data.ResetBitPos();
    for (InvUpdate::InvItem& item : invUpdate.Items)
    {
        data >> item.ContainerSlot;
        data >> item.Slot;
    }

    return data;
}
}
}
