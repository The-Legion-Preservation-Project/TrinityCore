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

#ifndef TRINITYCORE_CORPSE_H
#define TRINITYCORE_CORPSE_H

#include "Object.h"
#include "GridObject.h"
#include "DatabaseEnvFwd.h"
#include "GridDefines.h"
#include "Loot.h"

enum CorpseType
{
    CORPSE_BONES             = 0,
    CORPSE_RESURRECTABLE_PVE = 1,
    CORPSE_RESURRECTABLE_PVP = 2
};
#define MAX_CORPSE_TYPE        3

// Value equal client resurrection dialog show radius.
#define CORPSE_RECLAIM_RADIUS 39

enum CorpseFlags
{
    CORPSE_FLAG_NONE        = 0x00,
    CORPSE_FLAG_BONES       = 0x01,
    CORPSE_FLAG_UNK1        = 0x02,
    CORPSE_FLAG_PVP         = 0x04,
    CORPSE_FLAG_HIDE_HELM   = 0x08,
    CORPSE_FLAG_HIDE_CLOAK  = 0x10,
    CORPSE_FLAG_SKINNABLE   = 0x20,
    CORPSE_FLAG_FFA_PVP     = 0x40
};

class TC_GAME_API Corpse : public WorldObject, public GridObject<Corpse>
{
    public:
        explicit Corpse(CorpseType type = CORPSE_BONES);
        ~Corpse();

        void AddToWorld() override;
        void RemoveFromWorld() override;

        bool Create(ObjectGuid::LowType guidlow, Map* map);
        bool Create(ObjectGuid::LowType guidlow, Player* owner);

        void SaveToDB();
        bool LoadCorpseFromDB(ObjectGuid::LowType guid, Field* fields);

        void DeleteFromDB(CharacterDatabaseTransaction trans);
        static void DeleteFromDB(ObjectGuid const& ownerGuid, CharacterDatabaseTransaction trans);

        CorpseDynFlags GetCorpseDynamicFlags() const { return CorpseDynFlags(GetUInt32Value(CORPSE_FIELD_DYNAMIC_FLAGS)); }
        void AddCorpseDynamicFlag(CorpseDynFlags dynamicFlags) { SetFlag(CORPSE_FIELD_DYNAMIC_FLAGS, dynamicFlags); }
        void RemoveCorpseDynamicFlag(CorpseDynFlags dynamicFlags) { RemoveFlag(CORPSE_FIELD_DYNAMIC_FLAGS, dynamicFlags); }
        void ReplaceAllCorpseDynamicFlags(CorpseDynFlags dynamicFlags) { SetUInt32Value(CORPSE_FIELD_DYNAMIC_FLAGS, dynamicFlags); }
        ObjectGuid GetOwnerGUID() const override { return GetGuidValue(CORPSE_FIELD_OWNER); }
        void SetOwnerGUID(ObjectGuid owner) { SetGuidValue(CORPSE_FIELD_OWNER, owner); }
        void SetDisplayId(uint32 displayId) { SetUInt32Value(CORPSE_FIELD_DISPLAY_ID, displayId); }
        void ReplaceAllFlags(uint32 flags) { SetUInt32Value(CORPSE_FIELD_FLAGS, flags); }
        void SetFactionTemplate(int32 factionTemplate) { SetUInt32Value(CORPSE_FIELD_FACTIONTEMPLATE, factionTemplate); }
        void SetItem(uint32 slot, uint32 item) { SetUInt32Value(CORPSE_FIELD_ITEM + slot, item); }
        uint32 GetFaction() const override { return GetUInt32Value(CORPSE_FIELD_FACTIONTEMPLATE); }
        void SetFaction(uint32 faction) override { SetFactionTemplate(faction); }

        time_t const& GetGhostTime() const { return m_time; }
        void ResetGhostTime();
        CorpseType GetType() const { return m_type; }

        CellCoord const& GetCellCoord() const { return _cellCoord; }
        void SetCellCoord(CellCoord const& cellCoord) { _cellCoord = cellCoord; }

        Loot loot;                                          // remove insignia ONLY at BG
        Player* lootRecipient;

        bool IsExpired(time_t t) const;

    private:
        CorpseType m_type;
        time_t m_time;
        CellCoord _cellCoord;
};
#endif
