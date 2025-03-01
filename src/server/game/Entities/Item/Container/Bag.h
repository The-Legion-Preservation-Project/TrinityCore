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

#ifndef TRINITY_BAG_H
#define TRINITY_BAG_H

// Maximum 36 Slots ((CONTAINER_END - CONTAINER_FIELD_SLOT_1)/2
#define MAX_BAG_SIZE 36                                     // 2.0.12

#include "Item.h"

class TC_GAME_API Bag : public Item
{
    public:
        Bag();
        ~Bag();

        void AddToWorld() override;
        void RemoveFromWorld() override;

        bool Create(ObjectGuid::LowType guidlow, uint32 itemid, ItemContext context, Player const* owner) override;

        void StoreItem(uint8 slot, Item* pItem, bool update);
        void RemoveItem(uint8 slot, bool update);

        Item* GetItemByPos(uint8 slot) const;

        uint8 GetSlotByItemGUID(ObjectGuid guid) const;
        bool IsEmpty() const;
        uint32 GetFreeSlots() const;
        uint32 GetBagSize() const { return GetUInt32Value(CONTAINER_FIELD_NUM_SLOTS); }

        // DB operations
        // overwrite virtual Item::SaveToDB
        void SaveToDB(CharacterDatabaseTransaction trans) override;
        // overwrite virtual Item::LoadFromDB
        bool LoadFromDB(ObjectGuid::LowType guid, ObjectGuid owner_guid, Field* fields, uint32 entry) override;
        // overwrite virtual Item::DeleteFromDB
        void DeleteFromDB(CharacterDatabaseTransaction trans) override;

        std::string GetDebugInfo() const override;

    protected:
        void BuildCreateUpdateBlockForPlayer(UpdateData* data, Player* target) const override;

        void SetBagSize(uint32 numSlots) { SetUInt32Value(CONTAINER_FIELD_NUM_SLOTS, numSlots); }
        void SetSlot(uint32 slot, ObjectGuid guid) { SetGuidValue(CONTAINER_FIELD_SLOT_1 + (slot * 4), guid); }

        // Bag Storage space
        Item* m_bagslot[MAX_BAG_SIZE];
};

inline Item* NewItemOrBag(ItemTemplate const* proto)
{
    return (proto->GetInventoryType() == INVTYPE_BAG) ? new Bag : new Item;
}

#endif
