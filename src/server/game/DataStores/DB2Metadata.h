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

#ifndef DB2Metadata_h__
#define DB2Metadata_h__

#include "DB2Meta.h"

struct AchievementMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[15] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1260179, 12, 15, 0x2C4BE18C, fields, 7);
        return &instance;
    }
};

struct Achievement_CategoryMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_STRING, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1324299, 3, 4, 0xED226BC9, fields, 2);
        return &instance;
    }
};

struct AdventureJournalMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[22] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 2, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 2, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1115949, -1, 22, 0xB2FFA8DD, fields, -1);
        return &instance;
    }
};

struct AdventureMapPOIMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[13] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_FLOAT, 2, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1267070, -1, 13, 0x0C288A82, fields, -1);
        return &instance;
    }
};

struct AlliedRaceMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[8] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1710672, 1, 8, 0xB13ABE04, fields, -1);
        return &instance;
    }
};

struct AlliedRaceRacialAbilityMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1720145, -1, 5, 0x9EBF9B09, fields, 4);
        return &instance;
    }
};

struct AnimKitMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1304323, -1, 3, 0x81D6D250, fields, -1);
        return &instance;
    }
};

struct AnimKitBoneSetMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_STRING, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1375433, -1, 5, 0xFE4B9B1F, fields, -1);
        return &instance;
    }
};

struct AnimKitBoneSetAliasMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1266937, -1, 2, 0xEA8B67BC, fields, -1);
        return &instance;
    }
};

struct AnimKitConfigMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1300872, -1, 1, 0x8A70ED4C, fields, -1);
        return &instance;
    }
};

struct AnimKitConfigBoneSetMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1300873, -1, 3, 0x3D9B3BA7, fields, 2);
        return &instance;
    }
};

struct AnimKitPriorityMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1266540, -1, 1, 0x5E93C107, fields, -1);
        return &instance;
    }
};

struct AnimKitReplacementMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1559807, 3, 5, 0x0735DB83, fields, 4);
        return &instance;
    }
};

struct AnimKitSegmentMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[18] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1304324, -1, 18, 0x08F09B89, fields, 5);
        return &instance;
    }
};

struct AnimReplacementMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1301100, 3, 5, 0x2C8B0F35, fields, 4);
        return &instance;
    }
};

struct AnimReplacementSetMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1284817, -1, 1, 0x3761247A, fields, -1);
        return &instance;
    }
};

struct AnimationDataMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1375431, -1, 4, 0x03182786, fields, -1);
        return &instance;
    }
};

struct AreaFarClipOverrideMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_INT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1537162, 4, 5, 0xEB5921CC, fields, -1);
        return &instance;
    }
};

struct AreaGroupMemberMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1093406, -1, 2, 0x50AA43EE, fields, 1);
        return &instance;
    }
};

struct AreaPOIMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[16] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 3, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1000630, -1, 16, 0xB161EE90, fields, -1);
        return &instance;
    }
};

struct AreaPOIStateMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_STRING, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1000631, -1, 5, 0x673BDA80, fields, 4);
        return &instance;
    }
};

struct AreaTableMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[23] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 2, true },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 4, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1353545, -1, 23, 0x0CA01129, fields, -1);
        return &instance;
    }
};

struct AreaTriggerMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[15] =
        {
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1354401, 14, 15, 0x378573E8, fields, 6);
        return &instance;
    }
};

struct AreaTriggerActionSetMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1352378, -1, 1, 0x5DA480BD, fields, -1);
        return &instance;
    }
};

struct AreaTriggerBoxMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_FLOAT, 3, false },
        };

        static DB2Meta instance(1332554, -1, 1, 0x602CFDA6, fields, -1);
        return &instance;
    }
};

struct AreaTriggerCylinderMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
        };

        static DB2Meta instance(1121943, -1, 3, 0x26D4052D, fields, -1);
        return &instance;
    }
};

struct AreaTriggerSphereMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_FLOAT, 1, false },
        };

        static DB2Meta instance(1315630, -1, 1, 0x9141AC7F, fields, -1);
        return &instance;
    }
};

struct ArmorLocationMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
        };

        static DB2Meta instance(1284818, -1, 5, 0xCCFBD16E, fields, -1);
        return &instance;
    }
};

struct ArtifactMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[10] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1007934, -1, 10, 0x76CF31A8, fields, -1);
        return &instance;
    }
};

struct ArtifactAppearanceMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[15] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1116407, 11, 15, 0xAEED7395, fields, 5);
        return &instance;
    }
};

struct ArtifactAppearanceSetMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[9] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1116408, 7, 9, 0x53DFED74, fields, 8);
        return &instance;
    }
};

struct ArtifactCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
        };

        static DB2Meta instance(1376210, -1, 2, 0x21328475, fields, -1);
        return &instance;
    }
};

struct ArtifactPowerMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[7] =
        {
            { FT_FLOAT, 2, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1007937, 5, 7, 0x45240818, fields, 1);
        return &instance;
    }
};

struct ArtifactPowerLinkMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1133731, -1, 2, 0xE179618C, fields, -1);
        return &instance;
    }
};

struct ArtifactPowerPickerMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1597467, -1, 1, 0x2D6AF006, fields, -1);
        return &instance;
    }
};

struct ArtifactPowerRankMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_INT, 1, true },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1261405, -1, 5, 0xA87EACC4, fields, 4);
        return &instance;
    }
};

struct ArtifactQuestXPMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_INT, 10, false },
        };

        static DB2Meta instance(1036203, -1, 1, 0x86397302, fields, -1);
        return &instance;
    }
};

struct ArtifactTierMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1600114, -1, 5, 0x1A5A50B9, fields, -1);
        return &instance;
    }
};

struct ArtifactUnlockMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1094540, -1, 5, 0x52839A77, fields, 4);
        return &instance;
    }
};

struct AuctionHouseMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_STRING, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1237439, -1, 4, 0x51CFEEFF, fields, -1);
        return &instance;
    }
};

struct BankBagSlotPricesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1284819, -1, 1, 0xEA0AC2AA, fields, -1);
        return &instance;
    }
};

struct BannedAddonsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, false },
            { FT_STRING_NOT_LOCALIZED, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1373459, -1, 3, 0xF779B6E5, fields, -1);
        return &instance;
    }
};

struct BarberShopStyleMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[8] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_FLOAT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1237437, 7, 8, 0x670C71AE, fields, -1);
        return &instance;
    }
};

struct BattlePetAbilityMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[7] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(841610, -1, 7, 0x0F29944D, fields, -1);
        return &instance;
    }
};

struct BattlePetAbilityEffectMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[7] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 6, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(801575, 6, 7, 0x5D30EBC5, fields, 0);
        return &instance;
    }
};

struct BattlePetAbilityStateMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(801576, -1, 3, 0x0E40A884, fields, 2);
        return &instance;
    }
};

struct BattlePetAbilityTurnMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[6] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(801577, 5, 6, 0xCB063F4F, fields, 0);
        return &instance;
    }
};

struct BattlePetBreedQualityMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_FLOAT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(801578, -1, 2, 0xBDE74E1D, fields, -1);
        return &instance;
    }
};

struct BattlePetBreedStateMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(801579, -1, 3, 0x68D5C999, fields, 2);
        return &instance;
    }
};

struct BattlePetDisplayOverrideMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1802988, -1, 4, 0xDE5129EA, fields, -1);
        return &instance;
    }
};

struct BattlePetEffectPropertiesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_STRING, 6, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 6, false },
        };

        static DB2Meta instance(801580, -1, 3, 0x56070751, fields, -1);
        return &instance;
    }
};

struct BattlePetNPCTeamMemberMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_STRING, 1, false },
        };

        static DB2Meta instance(841648, -1, 1, 0x4423F004, fields, -1);
        return &instance;
    }
};

struct BattlePetSpeciesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[11] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(841622, 8, 11, 0x8A3D97A4, fields, -1);
        return &instance;
    }
};

struct BattlePetSpeciesStateMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(801581, -1, 3, 0x8F958D5C, fields, 2);
        return &instance;
    }
};

struct BattlePetSpeciesXAbilityMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(801582, -1, 4, 0x9EE27D6A, fields, 3);
        return &instance;
    }
};

struct BattlePetStateMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_STRING, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(801583, -1, 3, 0x1797AB4A, fields, -1);
        return &instance;
    }
};

struct BattlePetVisualMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[7] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(801584, -1, 7, 0x097E0F6C, fields, -1);
        return &instance;
    }
};

struct BattlemasterListMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[17] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 16, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
        };

        static DB2Meta instance(1360265, -1, 17, 0xD8AAA088, fields, -1);
        return &instance;
    }
};

struct BeamEffectMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[10] =
        {
            { FT_INT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1525607, -1, 10, 0x42C18603, fields, -1);
        return &instance;
    }
};

struct BoneWindModifierModelMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1467254, -1, 2, 0x577A0772, fields, 0);
        return &instance;
    }
};

struct BoneWindModifiersMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 1, false },
        };

        static DB2Meta instance(1416756, -1, 2, 0xB4E7449E, fields, -1);
        return &instance;
    }
};

struct BountyMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1367866, -1, 5, 0xE76E716C, fields, 4);
        return &instance;
    }
};

struct BountySetMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1367865, -1, 2, 0x96B908A5, fields, -1);
        return &instance;
    }
};

struct BroadcastTextMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[9] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_SHORT, 3, false },
            { FT_SHORT, 3, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 2, false },
        };

        static DB2Meta instance(841604, -1, 9, 0x51BF0C33, fields, -1);
        return &instance;
    }
};

struct CameraEffectMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1117695, -1, 1, 0xF6AB4622, fields, -1);
        return &instance;
    }
};

struct CameraEffectEntryMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[16] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1117696, -1, 16, 0xC5105557, fields, 15);
        return &instance;
    }
};

struct CameraModeMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[11] =
        {
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1343308, -1, 11, 0xCDB6BC2F, fields, -1);
        return &instance;
    }
};

struct CastableRaidBuffsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1283018, -1, 2, 0x5BDD4028, fields, 1);
        return &instance;
    }
};

struct CelestialBodyMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[15] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 2, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 2, false },
            { FT_FLOAT, 2, false },
            { FT_FLOAT, 2, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 2, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1592470, 14, 15, 0xD09BE31C, fields, -1);
        return &instance;
    }
};

struct Cfg_CategoriesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_STRING, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1068162, -1, 5, 0x705B82C8, fields, -1);
        return &instance;
    }
};

struct Cfg_ConfigsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1080949, -1, 4, 0xC618392F, fields, -1);
        return &instance;
    }
};

struct Cfg_RegionsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1082876, -1, 5, 0x9F4272BF, fields, -1);
        return &instance;
    }
};

struct CharBaseInfoMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1343386, -1, 2, 0x9E9939B8, fields, -1);
        return &instance;
    }
};

struct CharBaseSectionMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1375798, -1, 3, 0x4F08B5F3, fields, -1);
        return &instance;
    }
};

struct CharComponentTextureLayoutsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1360262, -1, 2, 0x0F515E34, fields, -1);
        return &instance;
    }
};

struct CharComponentTextureSectionsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[7] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1360263, -1, 7, 0xCE76000F, fields, -1);
        return &instance;
    }
};

struct CharHairGeosetsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[10] =
        {
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1256914, -1, 10, 0x33EB32D2, fields, 1);
        return &instance;
    }
};

struct CharSectionsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[7] =
        {
            { FT_INT, 3, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
        };

        static DB2Meta instance(1365366, -1, 7, 0xE349E55B, fields, -1);
        return &instance;
    }
};

struct CharShipmentMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[9] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(972425, -1, 9, 0xE6D3C7C1, fields, 5);
        return &instance;
    }
};

struct CharShipmentContainerMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[16] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(972405, -1, 16, 0x194896E3, fields, -1);
        return &instance;
    }
};

struct CharStartOutfitMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[7] =
        {
            { FT_INT, 24, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1237591, -1, 7, 0x0EEBEE24, fields, 6);
        return &instance;
    }
};

struct CharTitlesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
        };

        static DB2Meta instance(1349054, -1, 4, 0x7A58AA5F, fields, -1);
        return &instance;
    }
};

struct CharacterFaceBoneSetMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1028733, -1, 5, 0x1C634076, fields, 4);
        return &instance;
    }
};

struct CharacterFacialHairStylesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_INT, 5, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1369752, -1, 4, 0x47D79688, fields, -1);
        return &instance;
    }
};

struct CharacterLoadoutMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_LONG, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1344281, -1, 3, 0x87B51673, fields, -1);
        return &instance;
    }
};

struct CharacterLoadoutItemMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1302846, -1, 2, 0x3C3D40B9, fields, 1);
        return &instance;
    }
};

struct CharacterServiceInfoMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[11] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1815417, -1, 11, 0xADE120EF, fields, -1);
        return &instance;
    }
};

struct ChatChannelsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
        };

        static DB2Meta instance(1345278, -1, 4, 0x1A325E80, fields, -1);
        return &instance;
    }
};

struct ChatProfanityMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_STRING, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1117084, -1, 2, 0x328E1FE6, fields, -1);
        return &instance;
    }
};

struct ChrClassRaceSexMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[6] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1306188, -1, 6, 0x5E29DFA1, fields, -1);
        return &instance;
    }
};

struct ChrClassTitleMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1267497, -1, 3, 0xC155DB2C, fields, -1);
        return &instance;
    }
};

struct ChrClassUIDisplayMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1316515, -1, 3, 0x59A95A73, fields, -1);
        return &instance;
    }
};

struct ChrClassVillainMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_STRING, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1267498, -1, 3, 0xA6AC18CD, fields, -1);
        return &instance;
    }
};

struct ChrClassesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[20] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING_NOT_LOCALIZED, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1361031, 19, 20, 0x6F7AB8E7, fields, -1);
        return &instance;
    }
};

struct ChrClassesXPowerTypesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1121420, -1, 2, 0xAF977B23, fields, 1);
        return &instance;
    }
};

struct ChrCustomizationMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[6] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 3, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1611874, -1, 6, 0x71833CE5, fields, 5);
        return &instance;
    }
};

struct ChrRacesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[38] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, false },
            { FT_STRING_NOT_LOCALIZED, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 3, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 3, false },
            { FT_INT, 3, false },
        };

        static DB2Meta instance(1305311, 30, 38, 0x51C511F9, fields, -1);
        return &instance;
    }
};

struct ChrSpecializationMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[13] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 2, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1343390, 9, 13, 0x3D86B8F7, fields, 4);
        return &instance;
    }
};

struct ChrUpgradeBucketMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(984529, 1, 3, 0xACF64A80, fields, 2);
        return &instance;
    }
};

struct ChrUpgradeBucketSpellMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(984528, -1, 2, 0xDF939031, fields, 1);
        return &instance;
    }
};

struct ChrUpgradeTierMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_STRING, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(984530, 3, 4, 0x2C87937D, fields, -1);
        return &instance;
    }
};

struct CinematicCameraMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_INT, 1, false },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1294214, -1, 4, 0x0062B0F4, fields, -1);
        return &instance;
    }
};

struct CinematicSequencesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 8, false },
        };

        static DB2Meta instance(1134583, -1, 2, 0x470FDA8C, fields, -1);
        return &instance;
    }
};

struct CloakDampeningMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[7] =
        {
            { FT_FLOAT, 5, false },
            { FT_FLOAT, 5, false },
            { FT_FLOAT, 2, false },
            { FT_FLOAT, 2, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
        };

        static DB2Meta instance(1465903, -1, 7, 0xB2DF7F2A, fields, -1);
        return &instance;
    }
};

struct CombatConditionMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[11] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 2, false },
            { FT_SHORT, 2, false },
            { FT_BYTE, 2, false },
            { FT_BYTE, 2, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 2, false },
            { FT_BYTE, 2, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1120958, -1, 11, 0x28D253C6, fields, -1);
        return &instance;
    }
};

struct CommentatorStartLocationMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_FLOAT, 3, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1664251, -1, 2, 0xEFD540EF, fields, -1);
        return &instance;
    }
};

struct CommentatorTrackedCooldownMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1661584, -1, 4, 0x84985168, fields, 3);
        return &instance;
    }
};

struct ComponentModelFileDataMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1349053, -1, 4, 0x25BB55A7, fields, -1);
        return &instance;
    }
};

struct ComponentTextureFileDataMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1278239, -1, 3, 0x50C58D4F, fields, -1);
        return &instance;
    }
};

struct ConfigurationWarningMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1709409, -1, 2, 0x0B350390, fields, -1);
        return &instance;
    }
};

struct ContributionMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[6] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 4, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1587153, 2, 6, 0x8EDF6090, fields, 3);
        return &instance;
    }
};

struct ConversationLineMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[8] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1260801, -1, 8, 0x032B137B, fields, -1);
        return &instance;
    }
};

struct CreatureMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[12] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 3, false },
            { FT_INT, 1, false },
            { FT_INT, 4, false },
            { FT_FLOAT, 4, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(841631, -1, 12, 0xCFB508A9, fields, -1);
        return &instance;
    }
};

struct CreatureDifficultyMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[6] =
        {
            { FT_INT, 7, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(879282, -1, 6, 0x4291EEC6, fields, 5);
        return &instance;
    }
};

struct CreatureDispXUiCameraMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1146692, -1, 2, 0x6E0E7C15, fields, -1);
        return &instance;
    }
};

struct CreatureDisplayInfoMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[23] =
        {
            { FT_INT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 3, true },
        };

        static DB2Meta instance(1108759, 0, 23, 0x406268DF, fields, -1);
        return &instance;
    }
};

struct CreatureDisplayInfoCondMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[15] =
        {
            { FT_LONG, 1, false },
            { FT_INT, 2, false },
            { FT_INT, 2, false },
            { FT_INT, 2, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 3, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1332686, -1, 15, 0x26CD44AB, fields, 14);
        return &instance;
    }
};

struct CreatureDisplayInfoEvtMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1586882, -1, 4, 0x3FEF69BB, fields, 3);
        return &instance;
    }
};

struct CreatureDisplayInfoExtraMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[12] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 3, false },
            { FT_BYTE, 1, true },
        };

        static DB2Meta instance(1264997, -1, 12, 0x6DF98EF6, fields, -1);
        return &instance;
    }
};

struct CreatureDisplayInfoTrnMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[6] =
        {
            { FT_INT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1146698, -1, 6, 0x8E687740, fields, 5);
        return &instance;
    }
};

struct CreatureFamilyMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[9] =
        {
            { FT_STRING, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 2, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
        };

        static DB2Meta instance(1351351, -1, 9, 0xE2DC5126, fields, -1);
        return &instance;
    }
};

struct CreatureImmunitiesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[9] =
        {
            { FT_INT, 2, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 8, false },
            { FT_INT, 16, false },
        };

        static DB2Meta instance(1131322, -1, 9, 0x2D20050B, fields, -1);
        return &instance;
    }
};

struct CreatureModelDataMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[28] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 6, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1365368, -1, 28, 0x983BD312, fields, -1);
        return &instance;
    }
};

struct CreatureMovementInfoMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_FLOAT, 1, false },
        };

        static DB2Meta instance(1125666, -1, 1, 0x39F710E3, fields, -1);
        return &instance;
    }
};

struct CreatureSoundDataMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[37] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 5, false },
            { FT_INT, 4, false },
        };

        static DB2Meta instance(1344466, -1, 37, 0x7C3C39B9, fields, -1);
        return &instance;
    }
};

struct CreatureTypeMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_STRING, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1131315, -1, 2, 0x7BA9D2F8, fields, -1);
        return &instance;
    }
};

struct CreatureXContributionMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1587158, 0, 3, 0x3448DF58, fields, 2);
        return &instance;
    }
};

struct CriteriaMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[11] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
        };

        static DB2Meta instance(1263817, -1, 11, 0xA87A5BB9, fields, -1);
        return &instance;
    }
};

struct CriteriaTreeMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[7] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1263818, -1, 7, 0x0A1B99C2, fields, -1);
        return &instance;
    }
};

struct CriteriaTreeXEffectMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1345969, -1, 2, 0x929D9B0C, fields, 1);
        return &instance;
    }
};

struct CurrencyCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_STRING, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1125667, -1, 3, 0xC3735D76, fields, -1);
        return &instance;
    }
};

struct CurrencyTypesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[10] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1095531, -1, 10, 0x6CC25CBF, fields, -1);
        return &instance;
    }
};

struct CurveMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(892585, -1, 2, 0x17EA5154, fields, -1);
        return &instance;
    }
};

struct CurvePointMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_FLOAT, 2, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(892586, -1, 3, 0xF36752EB, fields, -1);
        return &instance;
    }
};

struct DeathThudLookupsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1279415, -1, 4, 0xD469085C, fields, -1);
        return &instance;
    }
};

struct DecalPropertiesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[17] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1278176, 0, 17, 0xDD48C72A, fields, -1);
        return &instance;
    }
};

struct DeclinedWordMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1279100, 1, 2, 0x3FF5EC3E, fields, -1);
        return &instance;
    }
};

struct DeclinedWordCasesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_STRING, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1279099, -1, 3, 0x821A20A9, fields, 2);
        return &instance;
    }
};

struct DestructibleModelDataMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[22] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1122116, -1, 22, 0x1092C9AF, fields, -1);
        return &instance;
    }
};

struct DeviceBlacklistMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(922722, -1, 2, 0xD956413D, fields, -1);
        return &instance;
    }
};

struct DeviceDefaultSettingsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(925422, -1, 3, 0x90CFEC8C, fields, -1);
        return &instance;
    }
};

struct DifficultyMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[13] =
        {
            { FT_STRING, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1352127, -1, 13, 0x92302BB8, fields, -1);
        return &instance;
    }
};

struct DissolveEffectMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[14] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1304325, -1, 14, 0x566413E7, fields, -1);
        return &instance;
    }
};

struct DriverBlacklistMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[7] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(922720, -1, 7, 0x1466ACAD, fields, -1);
        return &instance;
    }
};

struct DungeonEncounterMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[9] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1347279, 6, 9, 0xB04A2596, fields, 2);
        return &instance;
    }
};

struct DungeonMapMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[8] =
        {
            { FT_FLOAT, 2, false },
            { FT_FLOAT, 2, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1347271, 7, 8, 0xB5A245F4, fields, 2);
        return &instance;
    }
};

struct DungeonMapChunkMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1294215, -1, 5, 0x7927A3A7, fields, 2);
        return &instance;
    }
};

struct DurabilityCostsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_SHORT, 21, false },
            { FT_SHORT, 8, false },
        };

        static DB2Meta instance(1283019, -1, 2, 0x8447966A, fields, -1);
        return &instance;
    }
};

struct DurabilityQualityMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_FLOAT, 1, false },
        };

        static DB2Meta instance(1130268, -1, 1, 0x6F64793D, fields, -1);
        return &instance;
    }
};

struct EdgeGlowEffectMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[13] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1387381, -1, 13, 0x083BF2C4, fields, -1);
        return &instance;
    }
};

struct EmotesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[9] =
        {
            { FT_LONG, 1, true },
            { FT_STRING_NOT_LOCALIZED, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1343602, -1, 9, 0x14467F27, fields, -1);
        return &instance;
    }
};

struct EmotesTextMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1347273, -1, 2, 0xE85AFA10, fields, -1);
        return &instance;
    }
};

struct EmotesTextDataMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_STRING, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1283024, -1, 3, 0x0E19BCF1, fields, 2);
        return &instance;
    }
};

struct EmotesTextSoundMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1286524, -1, 5, 0x6DFAF9BC, fields, 4);
        return &instance;
    }
};

struct EnvironmentalDamageMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1278398, -1, 2, 0xC4552C14, fields, -1);
        return &instance;
    }
};

struct ExhaustionMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[8] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1343313, 7, 8, 0xE6E16045, fields, -1);
        return &instance;
    }
};

struct FactionMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[16] =
        {
            { FT_LONG, 4, true },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 4, true },
            { FT_FLOAT, 2, false },
            { FT_INT, 4, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 4, true },
            { FT_SHORT, 4, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 2, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1361972, 3, 16, 0x6BFE8737, fields, -1);
        return &instance;
    }
};

struct FactionGroupMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[6] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1343595, 2, 6, 0x7A7F9A51, fields, -1);
        return &instance;
    }
};

struct FactionTemplateMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[7] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 4, false },
            { FT_SHORT, 4, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1361579, -1, 7, 0x6F1D2135, fields, -1);
        return &instance;
    }
};

struct FootprintTexturesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1308056, -1, 3, 0xFD6FF285, fields, -1);
        return &instance;
    }
};

struct FootstepTerrainLookupMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1267647, -1, 4, 0x454895AE, fields, -1);
        return &instance;
    }
};

struct FriendshipRepReactionMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_STRING, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1237638, -1, 3, 0x9C412E5B, fields, 2);
        return &instance;
    }
};

struct FriendshipReputationMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1237639, 3, 4, 0x406EE0AB, fields, -1);
        return &instance;
    }
};

struct FullScreenEffectMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[27] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1348282, -1, 27, 0x5CBF1D1B, fields, -1);
        return &instance;
    }
};

struct GMSurveyAnswersMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_STRING, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1283025, -1, 3, 0x422747F6, fields, 2);
        return &instance;
    }
};

struct GMSurveyCurrentSurveyMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1278177, -1, 1, 0x617205BF, fields, -1);
        return &instance;
    }
};

struct GMSurveyQuestionsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_STRING, 1, false },
        };

        static DB2Meta instance(1278178, -1, 1, 0x9D852FDC, fields, -1);
        return &instance;
    }
};

struct GMSurveySurveysMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_BYTE, 15, false },
        };

        static DB2Meta instance(1283020, -1, 1, 0x17FEF812, fields, -1);
        return &instance;
    }
};

struct GameObjectArtKitMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_INT, 1, false },
            { FT_INT, 3, false },
        };

        static DB2Meta instance(1266737, -1, 2, 0x6F65BC41, fields, -1);
        return &instance;
    }
};

struct GameObjectDiffAnimMapMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1302847, -1, 4, 0x89A617CF, fields, 3);
        return &instance;
    }
};

struct GameObjectDisplayInfoMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_INT, 1, true },
            { FT_FLOAT, 6, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, true },
        };

        static DB2Meta instance(1266277, -1, 5, 0x9F2098D1, fields, -1);
        return &instance;
    }
};

struct GameObjectDisplayInfoXSoundKitMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1345272, -1, 3, 0x4BBA66F2, fields, 2);
        return &instance;
    }
};

struct GameObjectsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[12] =
        {
            { FT_STRING, 1, false },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 4, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 8, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(841620, 11, 12, 0x597E8643, fields, 5);
        return &instance;
    }
};

struct GameTipsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_STRING, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1368021, -1, 4, 0x547E3F0F, fields, -1);
        return &instance;
    }
};

struct GarrAbilityMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[8] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(966238, 7, 8, 0x5DF95DBD, fields, -1);
        return &instance;
    }
};

struct GarrAbilityCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_STRING, 1, false },
        };

        static DB2Meta instance(1020248, -1, 1, 0x96663ABF, fields, -1);
        return &instance;
    }
};

struct GarrAbilityEffectMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[12] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(966241, 11, 12, 0xE6A6CB99, fields, 4);
        return &instance;
    }
};

struct GarrBuildingMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[24] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(929747, -1, 24, 0x200F9858, fields, -1);
        return &instance;
    }
};

struct GarrBuildingDoodadSetMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(943937, -1, 5, 0x2A861C7F, fields, -1);
        return &instance;
    }
};

struct GarrBuildingPlotInstMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_FLOAT, 2, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(983298, 4, 5, 0xF45B6227, fields, 3);
        return &instance;
    }
};

struct GarrClassSpecMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[8] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(981570, 7, 8, 0x194CD478, fields, -1);
        return &instance;
    }
};

struct GarrClassSpecPlayerCondMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[6] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1380674, -1, 6, 0x06936172, fields, -1);
        return &instance;
    }
};

struct GarrEncounterMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[7] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(975304, 5, 7, 0x63EF121A, fields, -1);
        return &instance;
    }
};

struct GarrEncounterSetXEncounterMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1354772, 0, 3, 0x3AA64423, fields, 2);
        return &instance;
    }
};

struct GarrEncounterXMechanicMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(967961, -1, 3, 0x97080E17, fields, 2);
        return &instance;
    }
};

struct GarrFollItemSetMemberMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(981569, -1, 4, 0xCA1C4CBF, fields, 3);
        return &instance;
    }
};

struct GarrFollSupportSpellMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1345970, -1, 4, 0xB7DBA2D1, fields, 3);
        return &instance;
    }
};

struct GarrFollowerMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[32] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(949906, 31, 32, 0xAAB75E04, fields, -1);
        return &instance;
    }
};

struct GarrFollowerLevelXPMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(970979, -1, 4, 0x1ED485E2, fields, -1);
        return &instance;
    }
};

struct GarrFollowerQualityMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[7] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1027793, -1, 7, 0xAFF4CF7E, fields, -1);
        return &instance;
    }
};

struct GarrFollowerSetXFollowerMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1361029, -1, 2, 0xDB0E0A17, fields, 1);
        return &instance;
    }
};

struct GarrFollowerTypeMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[7] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1118784, -1, 7, 0xD676FBC0, fields, -1);
        return &instance;
    }
};

struct GarrFollowerUICreatureMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[6] =
        {
            { FT_INT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1412636, -1, 6, 0x7E275E96, fields, 5);
        return &instance;
    }
};

struct GarrFollowerXAbilityMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(968468, -1, 3, 0x996447F1, fields, 2);
        return &instance;
    }
};

struct GarrItemLevelUpgradeDataMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1572314, 0, 5, 0x069F44E5, fields, -1);
        return &instance;
    }
};

struct GarrMechanicMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_FLOAT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(967963, -1, 3, 0xAB49DA61, fields, -1);
        return &instance;
    }
};

struct GarrMechanicSetXMechanicMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1391531, 1, 3, 0x59514F7B, fields, 2);
        return &instance;
    }
};

struct GarrMechanicTypeMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(967964, 4, 5, 0x6FEA569F, fields, -1);
        return &instance;
    }
};

struct GarrMissionMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[29] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 2, false },
            { FT_FLOAT, 2, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(967962, 19, 29, 0xDDD70490, fields, 28);
        return &instance;
    }
};

struct GarrMissionTextureMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_FLOAT, 2, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1125220, -1, 2, 0x3071301C, fields, -1);
        return &instance;
    }
};

struct GarrMissionTypeMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_STRING, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(984174, -1, 3, 0xA289655E, fields, -1);
        return &instance;
    }
};

struct GarrMissionXEncounterMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(967960, 1, 5, 0xBCB016C6, fields, 4);
        return &instance;
    }
};

struct GarrMissionXFollowerMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1359096, -1, 3, 0x1EBABA29, fields, 2);
        return &instance;
    }
};

struct GarrMssnBonusAbilityMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1138458, -1, 5, 0x35F5AE92, fields, -1);
        return &instance;
    }
};

struct GarrPlotMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[7] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 2, false },
        };

        static DB2Meta instance(937634, -1, 7, 0xE12049E0, fields, -1);
        return &instance;
    }
};

struct GarrPlotBuildingMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(929743, -1, 2, 0x3F77A6FA, fields, -1);
        return &instance;
    }
};

struct GarrPlotInstanceMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(929742, -1, 2, 0xB708BB37, fields, -1);
        return &instance;
    }
};

struct GarrPlotUICategoryMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_STRING, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(937635, -1, 2, 0xA94645EE, fields, -1);
        return &instance;
    }
};

struct GarrSiteLevelMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[9] =
        {
            { FT_FLOAT, 2, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(939295, -1, 9, 0xD3979C38, fields, -1);
        return &instance;
    }
};

struct GarrSiteLevelPlotInstMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_FLOAT, 2, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(940404, -1, 4, 0xC4E74201, fields, 1);
        return &instance;
    }
};

struct GarrSpecializationMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[7] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 2, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(937647, -1, 7, 0x797A0F2F, fields, -1);
        return &instance;
    }
};

struct GarrStringMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_STRING, 1, false },
        };

        static DB2Meta instance(1416758, -1, 1, 0xE1C08C0C, fields, -1);
        return &instance;
    }
};

struct GarrTalentMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[20] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1361032, 7, 20, 0x53D5FD16, fields, 8);
        return &instance;
    }
};

struct GarrTalentTreeMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1361030, -1, 5, 0x676CBC04, fields, -1);
        return &instance;
    }
};

struct GarrTypeMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 2, false },
        };

        static DB2Meta instance(1333161, -1, 5, 0x7C52F3B7, fields, -1);
        return &instance;
    }
};

struct GarrUiAnimClassInfoMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[6] =
        {
            { FT_FLOAT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(976037, -1, 6, 0xDBF4633D, fields, -1);
        return &instance;
    }
};

struct GarrUiAnimRaceInfoMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[13] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(976035, -1, 13, 0x44B9C1DE, fields, -1);
        return &instance;
    }
};

struct GemPropertiesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1343604, -1, 3, 0x84558CAB, fields, -1);
        return &instance;
    }
};

struct GlobalStringsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1394440, -1, 3, 0x2CA3EA1E, fields, -1);
        return &instance;
    }
};

struct GlyphBindableSpellMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
        };

        static DB2Meta instance(1270147, -1, 2, 0xEA228DFA, fields, 1);
        return &instance;
    }
};

struct GlyphExclusiveCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_STRING, 1, false },
        };

        static DB2Meta instance(948546, -1, 1, 0xFE598FCD, fields, -1);
        return &instance;
    }
};

struct GlyphPropertiesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1345274, -1, 4, 0xD0046829, fields, -1);
        return &instance;
    }
};

struct GlyphRequiredSpecMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(948496, -1, 2, 0xDD6481CE, fields, 1);
        return &instance;
    }
};

struct GroundEffectDoodadMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1308057, -1, 4, 0x0376B2D6, fields, -1);
        return &instance;
    }
};

struct GroundEffectTextureMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_SHORT, 4, false },
            { FT_BYTE, 4, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1308499, -1, 4, 0x84549F0A, fields, -1);
        return &instance;
    }
};

struct GroupFinderActivityMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[14] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(974813, -1, 14, 0x3EF2F3BD, fields, -1);
        return &instance;
    }
};

struct GroupFinderActivityGrpMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_STRING, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(974814, -1, 2, 0xC9458196, fields, -1);
        return &instance;
    }
};

struct GroupFinderCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_STRING, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(974812, -1, 3, 0x9213552F, fields, -1);
        return &instance;
    }
};

struct GuildColorBackgroundMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1286526, -1, 3, 0xCC0CEFF1, fields, -1);
        return &instance;
    }
};

struct GuildColorBorderMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1286527, -1, 3, 0xCC0CEFF1, fields, -1);
        return &instance;
    }
};

struct GuildColorEmblemMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1286525, -1, 3, 0xCC0CEFF1, fields, -1);
        return &instance;
    }
};

struct GuildPerkSpellsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1135238, -1, 1, 0xC15D6E9F, fields, -1);
        return &instance;
    }
};

struct HeirloomMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[10] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 3, true },
            { FT_SHORT, 3, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1097696, 9, 10, 0x36887C6F, fields, -1);
        return &instance;
    }
};

struct HelmetAnimScalingMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1348283, -1, 3, 0xB9EC1058, fields, 2);
        return &instance;
    }
};

struct HelmetGeosetVisDataMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_INT, 9, false },
        };

        static DB2Meta instance(1294216, -1, 1, 0x3B38D999, fields, -1);
        return &instance;
    }
};

struct HighlightColorMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(996358, -1, 5, 0x5FADC5D3, fields, -1);
        return &instance;
    }
};

struct HolidayDescriptionsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_STRING, 1, false },
        };

        static DB2Meta instance(996360, -1, 1, 0x92A95550, fields, -1);
        return &instance;
    }
};

struct HolidayNamesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_STRING, 1, false },
        };

        static DB2Meta instance(996359, -1, 1, 0x96663ABF, fields, -1);
        return &instance;
    }
};

struct HolidaysMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[12] =
        {
            { FT_INT, 1, false },
            { FT_INT, 16, false },
            { FT_SHORT, 10, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 10, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 3, true },
        };

        static DB2Meta instance(996357, 0, 12, 0x7C3E60FC, fields, -1);
        return &instance;
    }
};

struct HotfixMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1590224, -1, 3, 0x3747930B, fields, -1);
        return &instance;
    }
};

struct ImportPriceArmorMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
        };

        static DB2Meta instance(1121229, -1, 4, 0x1F7A850F, fields, -1);
        return &instance;
    }
};

struct ImportPriceQualityMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_FLOAT, 1, false },
        };

        static DB2Meta instance(1121228, -1, 1, 0x6F64793D, fields, -1);
        return &instance;
    }
};

struct ImportPriceShieldMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_FLOAT, 1, false },
        };

        static DB2Meta instance(1121227, -1, 1, 0x6F64793D, fields, -1);
        return &instance;
    }
};

struct ImportPriceWeaponMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_FLOAT, 1, false },
        };

        static DB2Meta instance(1121230, -1, 1, 0x6F64793D, fields, -1);
        return &instance;
    }
};

struct InvasionClientDataMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[10] =
        {
            { FT_STRING, 1, false },
            { FT_FLOAT, 2, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1336651, 2, 10, 0x4C93379F, fields, 9);
        return &instance;
    }
};

struct ItemMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[8] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(841626, -1, 8, 0x0DFCC83D, fields, -1);
        return &instance;
    }
};

struct ItemAppearanceMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(982462, -1, 4, 0x06D35A59, fields, -1);
        return &instance;
    }
};

struct ItemAppearanceXUiCameraMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1248126, -1, 2, 0x67747E15, fields, -1);
        return &instance;
    }
};

struct ItemArmorQualityMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_FLOAT, 7, false },
            { FT_SHORT, 1, true },
        };

        static DB2Meta instance(1283021, -1, 2, 0x85642CC0, fields, -1);
        return &instance;
    }
};

struct ItemArmorShieldMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_FLOAT, 7, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1277741, -1, 2, 0xC2186F95, fields, -1);
        return &instance;
    }
};

struct ItemArmorTotalMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, true },
        };

        static DB2Meta instance(1283022, -1, 5, 0x45C396DD, fields, -1);
        return &instance;
    }
};

struct ItemBagFamilyMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_STRING, 1, false },
        };

        static DB2Meta instance(1278179, -1, 1, 0x96663ABF, fields, -1);
        return &instance;
    }
};

struct ItemBonusMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_INT, 3, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(959070, -1, 4, 0xE12FB1A0, fields, 1);
        return &instance;
    }
};

struct ItemBonusListLevelDeltaMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_SHORT, 1, true },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1320358, 1, 2, 0xDFBF5AC9, fields, -1);
        return &instance;
    }
};

struct ItemBonusTreeNodeMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(987134, -1, 5, 0x84FE93B7, fields, 4);
        return &instance;
    }
};

struct ItemChildEquipmentMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1247926, -1, 3, 0xB6940674, fields, 2);
        return &instance;
    }
};

struct ItemClassMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_STRING, 1, false },
            { FT_FLOAT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1140189, -1, 4, 0xA1E4663C, fields, -1);
        return &instance;
    }
};

struct ItemContextPickerEntryMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[6] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1405665, -1, 6, 0x4A6DF90B, fields, 5);
        return &instance;
    }
};

struct ItemCurrencyCostMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_INT, 1, true },
        };

        static DB2Meta instance(801670, -1, 1, 0xE2FF5688, fields, 0);
        return &instance;
    }
};

struct ItemDamageAmmoMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_FLOAT, 7, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1277740, -1, 2, 0xC2186F95, fields, -1);
        return &instance;
    }
};

struct ItemDamageOneHandMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_FLOAT, 7, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1277743, -1, 2, 0xC2186F95, fields, -1);
        return &instance;
    }
};

struct ItemDamageOneHandCasterMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_FLOAT, 7, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1277739, -1, 2, 0xC2186F95, fields, -1);
        return &instance;
    }
};

struct ItemDamageTwoHandMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_FLOAT, 7, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1277738, -1, 2, 0xC2186F95, fields, -1);
        return &instance;
    }
};

struct ItemDamageTwoHandCasterMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_FLOAT, 7, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1277742, -1, 2, 0xC2186F95, fields, -1);
        return &instance;
    }
};

struct ItemDisenchantLootMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[7] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1134087, -1, 7, 0xC0D926CC, fields, 6);
        return &instance;
    }
};

struct ItemDisplayInfoMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[15] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 2, false },
            { FT_INT, 2, false },
            { FT_INT, 4, false },
            { FT_INT, 4, false },
            { FT_INT, 2, false },
        };

        static DB2Meta instance(1266429, -1, 15, 0x99606089, fields, -1);
        return &instance;
    }
};

struct ItemDisplayInfoMaterialResMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1280614, -1, 3, 0xDEE4ED7B, fields, 2);
        return &instance;
    }
};

struct ItemDisplayXUiCameraMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1146690, -1, 2, 0xE57737B2, fields, -1);
        return &instance;
    }
};

struct ItemEffectMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[9] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(969941, -1, 9, 0xA390FA40, fields, 8);
        return &instance;
    }
};

struct ItemExtendedCostMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[10] =
        {
            { FT_INT, 5, true },
            { FT_INT, 5, false },
            { FT_SHORT, 5, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 5, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(801681, -1, 10, 0xC31F4DEF, fields, -1);
        return &instance;
    }
};

struct ItemGroupSoundsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_INT, 4, false },
        };

        static DB2Meta instance(1283023, -1, 1, 0xDC2EE466, fields, -1);
        return &instance;
    }
};

struct ItemLevelSelectorMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1588911, -1, 2, 0x8143060E, fields, -1);
        return &instance;
    }
};

struct ItemLevelSelectorQualityMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, true },
        };

        static DB2Meta instance(1624937, -1, 3, 0xB7174A51, fields, 2);
        return &instance;
    }
};

struct ItemLevelSelectorQualitySetMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
        };

        static DB2Meta instance(1624933, -1, 2, 0x20055BA8, fields, -1);
        return &instance;
    }
};

struct ItemLimitCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_STRING, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1237440, -1, 3, 0xB6BB188D, fields, -1);
        return &instance;
    }
};

struct ItemLimitCategoryConditionMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1378590, -1, 3, 0xDE8EAD49, fields, 2);
        return &instance;
    }
};

struct ItemModifiedAppearanceMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[6] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
        };

        static DB2Meta instance(982457, 1, 6, 0xE64FD18B, fields, 0);
        return &instance;
    }
};

struct ItemModifiedAppearanceExtraMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1278399, -1, 5, 0x77212236, fields, -1);
        return &instance;
    }
};

struct ItemNameDescriptionMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1332559, -1, 2, 0x16760BD4, fields, -1);
        return &instance;
    }
};

struct ItemPetFoodMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_STRING, 1, false },
        };

        static DB2Meta instance(1302240, -1, 1, 0xE4923C1F, fields, -1);
        return &instance;
    }
};

struct ItemPriceBaseMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1121231, -1, 3, 0x4BD234D7, fields, -1);
        return &instance;
    }
};

struct ItemRandomPropertiesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_STRING, 1, false },
            { FT_SHORT, 5, false },
        };

        static DB2Meta instance(1237441, -1, 2, 0xB67375F8, fields, -1);
        return &instance;
    }
};

struct ItemRandomSuffixMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_STRING, 1, false },
            { FT_SHORT, 5, false },
            { FT_SHORT, 5, false },
        };

        static DB2Meta instance(1237592, -1, 3, 0x95CAB825, fields, -1);
        return &instance;
    }
};

struct ItemRangedDisplayInfoMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1270315, -1, 4, 0x687A28D1, fields, -1);
        return &instance;
    }
};

struct ItemSearchNameMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[14] =
        {
            { FT_LONG, 1, true },
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 3, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1273408, 2, 14, 0x2D4B72FA, fields, -1);
        return &instance;
    }
};

struct ItemSetMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 17, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1343609, -1, 5, 0x847FF58A, fields, -1);
        return &instance;
    }
};

struct ItemSetSpellMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1314689, -1, 4, 0xF65D0AF8, fields, 3);
        return &instance;
    }
};

struct ItemSparseMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[64] =
        {
            { FT_LONG, 1, true },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 4, true },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 10, true },
            { FT_FLOAT, 10, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 10, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 10, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 3, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1572924, -1, 64, 0x4007DE16, fields, -1);
        return &instance;
    }
};

struct ItemSpecMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[6] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1135120, -1, 6, 0xB17B7986, fields, 3);
        return &instance;
    }
};

struct ItemSpecOverrideMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1134576, -1, 2, 0xE499CD2A, fields, 1);
        return &instance;
    }
};

struct ItemSubClassMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[10] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1261604, -1, 10, 0xDAD92A67, fields, 3);
        return &instance;
    }
};

struct ItemSubClassMaskMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1302852, -1, 3, 0xFC1DA850, fields, -1);
        return &instance;
    }
};

struct ItemUpgradeMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(801687, -1, 5, 0x8F3A4137, fields, -1);
        return &instance;
    }
};

struct ItemVisualsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_INT, 5, false },
        };

        static DB2Meta instance(1343605, -1, 1, 0x485EA782, fields, -1);
        return &instance;
    }
};

struct ItemXBonusTreeMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(987133, -1, 2, 0x87C4B605, fields, 1);
        return &instance;
    }
};

struct JournalEncounterMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[11] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_FLOAT, 2, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1240336, -1, 11, 0x2935A0FD, fields, -1);
        return &instance;
    }
};

struct JournalEncounterCreatureMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[8] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1301155, 7, 8, 0x22C79A42, fields, 5);
        return &instance;
    }
};

struct JournalEncounterItemMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[6] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1344467, 5, 6, 0x39230FF9, fields, 1);
        return &instance;
    }
};

struct JournalEncounterSectionMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[15] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1134413, -1, 15, 0x13E56B12, fields, -1);
        return &instance;
    }
};

struct JournalEncounterXDifficultyMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1121901, -1, 2, 0x321FD542, fields, 1);
        return &instance;
    }
};

struct JournalEncounterXMapLocMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[6] =
        {
            { FT_FLOAT, 2, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1722928, -1, 6, 0x430540E4, fields, 5);
        return &instance;
    }
};

struct JournalInstanceMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[11] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1237438, 10, 11, 0x1691CC3D, fields, -1);
        return &instance;
    }
};

struct JournalItemXDifficultyMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1277744, -1, 2, 0x60D9CA15, fields, 1);
        return &instance;
    }
};

struct JournalSectionXDifficultyMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1121900, -1, 2, 0x243822A7, fields, 1);
        return &instance;
    }
};

struct JournalTierMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_STRING, 1, false },
        };

        static DB2Meta instance(1349056, -1, 1, 0x8046B23F, fields, -1);
        return &instance;
    }
};

struct JournalTierXInstanceMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1285009, -1, 2, 0x9C4F4D2A, fields, 0);
        return &instance;
    }
};

struct KeychainMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_BYTE, 32, false },
        };

        static DB2Meta instance(801693, -1, 1, 0x5B214E82, fields, -1);
        return &instance;
    }
};

struct KeystoneAffixMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1344761, -1, 3, 0x1BCB46AA, fields, -1);
        return &instance;
    }
};

struct LFGDungeonExpansionMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[7] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1343606, -1, 7, 0xB41DEA61, fields, 6);
        return &instance;
    }
};

struct LFGDungeonGroupMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_STRING, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1135058, -1, 4, 0x724D58E7, fields, -1);
        return &instance;
    }
};

struct LFGDungeonsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[33] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1361033, -1, 33, 0xF02081A0, fields, -1);
        return &instance;
    }
};

struct LFGRoleRequirementMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(982805, -1, 3, 0x7EB8A359, fields, 2);
        return &instance;
    }
};

struct LanguageWordsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_STRING, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(984702, -1, 2, 0xC15912BD, fields, -1);
        return &instance;
    }
};

struct LanguagesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1135325, 1, 2, 0x6FA5D0C4, fields, -1);
        return &instance;
    }
};

struct LfgDungeonsGroupingMapMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1339818, -1, 3, 0x8CB35C50, fields, 2);
        return &instance;
    }
};

struct LightMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, true },
            { FT_SHORT, 8, false },
        };

        static DB2Meta instance(1375579, -1, 5, 0x25025A13, fields, -1);
        return &instance;
    }
};

struct LightDataMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[35] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1375580, -1, 35, 0x2D2BA7FA, fields, 34);
        return &instance;
    }
};

struct LightParamsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[11] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 3, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1334669, 10, 11, 0xF67DE2AF, fields, -1);
        return &instance;
    }
};

struct LightSkyboxMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1308501, -1, 4, 0x8817C02C, fields, -1);
        return &instance;
    }
};

struct LiquidMaterialMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1132538, -1, 2, 0x62BE0340, fields, -1);
        return &instance;
    }
};

struct LiquidObjectMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1308058, -1, 5, 0xACC168A6, fields, -1);
        return &instance;
    }
};

struct LiquidTypeMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[19] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, false },
            { FT_STRING_NOT_LOCALIZED, 6, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 2, true },
            { FT_FLOAT, 18, false },
            { FT_INT, 4, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 6, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1371380, -1, 19, 0x3313BBF3, fields, -1);
        return &instance;
    }
};

struct LoadingScreenTaxiSplinesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_FLOAT, 10, false },
            { FT_FLOAT, 10, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1302239, -1, 5, 0x4D6292C3, fields, -1);
        return &instance;
    }
};

struct LoadingScreensMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1266541, -1, 3, 0x99C0EB78, fields, -1);
        return &instance;
    }
};

struct LocaleMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(801706, -1, 4, 0x592AE13B, fields, -1);
        return &instance;
    }
};

struct LocationMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 3, false },
        };

        static DB2Meta instance(801707, -1, 2, 0xBBC1BE7A, fields, -1);
        return &instance;
    }
};

struct LockMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_INT, 8, true },
            { FT_SHORT, 8, false },
            { FT_BYTE, 8, false },
            { FT_BYTE, 8, false },
        };

        static DB2Meta instance(1343608, -1, 4, 0xDAC7F42F, fields, -1);
        return &instance;
    }
};

struct LockTypeMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1284823, 4, 5, 0xCD5E1D2F, fields, -1);
        return &instance;
    }
};

struct LookAtControllerMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[18] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1098785, -1, 18, 0x543C0D56, fields, -1);
        return &instance;
    }
};

struct MailTemplateMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_STRING, 1, false },
        };

        static DB2Meta instance(1240344, -1, 1, 0x25C8D6CC, fields, -1);
        return &instance;
    }
};

struct ManagedWorldStateMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[10] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1587159, 9, 10, 0xBA06FC33, fields, -1);
        return &instance;
    }
};

struct ManagedWorldStateBuffMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1587155, -1, 4, 0x6D201DC7, fields, 3);
        return &instance;
    }
};

struct ManagedWorldStateInputMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1587151, -1, 3, 0x0FC1A9B0, fields, -1);
        return &instance;
    }
};

struct ManifestInterfaceActionIconMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1375803, 0, 1, 0x6A529F37, fields, -1);
        return &instance;
    }
};

struct ManifestInterfaceDataMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
        };

        static DB2Meta instance(1375801, -1, 2, 0x9E5F4C99, fields, -1);
        return &instance;
    }
};

struct ManifestInterfaceItemIconMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1375804, 0, 1, 0x6A529F37, fields, -1);
        return &instance;
    }
};

struct ManifestInterfaceTOCDataMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_STRING, 1, false },
        };

        static DB2Meta instance(1267335, -1, 1, 0x6F7D397D, fields, -1);
        return &instance;
    }
};

struct ManifestMP3Meta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1375802, 0, 1, 0x6A529F37, fields, -1);
        return &instance;
    }
};

struct MapMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[21] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 2, true },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 2, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1349477, -1, 21, 0xF568DF12, fields, -1);
        return &instance;
    }
};

struct MapCelestialBodyMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1597466, -1, 3, 0xBDE1C11C, fields, 2);
        return &instance;
    }
};

struct MapChallengeModeMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 3, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(801709, 1, 5, 0xC5261662, fields, 2);
        return &instance;
    }
};

struct MapDifficultyMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[9] =
        {
            { FT_STRING, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1367868, -1, 9, 0x2B3B759E, fields, 8);
        return &instance;
    }
};

struct MapDifficultyXConditionMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1375435, -1, 4, 0x5F5D7102, fields, 3);
        return &instance;
    }
};

struct MapLoadingScreenMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_FLOAT, 2, false },
            { FT_FLOAT, 2, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1719707, -1, 5, 0xBBE57FE4, fields, 4);
        return &instance;
    }
};

struct MarketingPromotionsXLocaleMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[7] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(801710, -1, 7, 0x80362F57, fields, -1);
        return &instance;
    }
};

struct MaterialMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1294217, -1, 4, 0x0BC8C134, fields, -1);
        return &instance;
    }
};

struct MinorTalentMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1347274, -1, 3, 0xAAEF0DF8, fields, 2);
        return &instance;
    }
};

struct MissileTargetingMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[12] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 2, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 2, false },
        };

        static DB2Meta instance(1710117, -1, 12, 0x2305491E, fields, -1);
        return &instance;
    }
};

struct ModelAnimCloakDampeningMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1465904, -1, 3, 0x839B4263, fields, 2);
        return &instance;
    }
};

struct ModelFileDataMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1337833, 1, 3, 0xA395EB50, fields, 2);
        return &instance;
    }
};

struct ModelRibbonQualityMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1399953, -1, 2, 0x38F764D9, fields, 1);
        return &instance;
    }
};

struct ModifierTreeMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[7] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
        };

        static DB2Meta instance(1267645, -1, 7, 0x7718AFC2, fields, -1);
        return &instance;
    }
};

struct MountMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[11] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(921760, 8, 11, 0x4D812F19, fields, -1);
        return &instance;
    }
};

struct MountCapabilityMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[8] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1114709, 6, 8, 0xB0D11D52, fields, -1);
        return &instance;
    }
};

struct MountTypeXCapabilityMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1114715, -1, 3, 0xA34A8445, fields, 0);
        return &instance;
    }
};

struct MountXDisplayMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1576117, -1, 3, 0xD59B9FE4, fields, 2);
        return &instance;
    }
};

struct MovieMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1332556, -1, 4, 0xF3E9AE3B, fields, -1);
        return &instance;
    }
};

struct MovieFileDataMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1301154, -1, 1, 0xAA16D59F, fields, -1);
        return &instance;
    }
};

struct MovieVariationMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1339819, -1, 3, 0x3BFD250E, fields, 2);
        return &instance;
    }
};

struct NPCModelItemSlotDisplayInfoMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1340661, -1, 3, 0x11D16204, fields, 2);
        return &instance;
    }
};

struct NPCSoundsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_INT, 4, false },
        };

        static DB2Meta instance(1282621, -1, 1, 0x672E1A6B, fields, -1);
        return &instance;
    }
};

struct NameGenMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1122117, -1, 3, 0x2EF936CD, fields, -1);
        return &instance;
    }
};

struct NamesProfanityMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, false },
            { FT_BYTE, 1, true },
        };

        static DB2Meta instance(1117086, -1, 2, 0xDFB56E0E, fields, -1);
        return &instance;
    }
};

struct NamesReservedMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, false },
        };

        static DB2Meta instance(1117085, -1, 1, 0xE4923C1F, fields, -1);
        return &instance;
    }
};

struct NamesReservedLocaleMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1117087, -1, 2, 0xC1403093, fields, -1);
        return &instance;
    }
};

struct ObjectEffectMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[8] =
        {
            { FT_FLOAT, 3, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1090577, -1, 8, 0x6A0CF743, fields, -1);
        return &instance;
    }
};

struct ObjectEffectModifierMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_FLOAT, 4, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1090575, -1, 4, 0xA482B053, fields, -1);
        return &instance;
    }
};

struct ObjectEffectPackageElemMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1090578, -1, 3, 0x8CF043E5, fields, -1);
        return &instance;
    }
};

struct OutlineEffectMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[6] =
        {
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1279739, -1, 6, 0x466B2BC4, fields, -1);
        return &instance;
    }
};

struct OverrideSpellDataMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 10, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1002186, -1, 3, 0x9417628C, fields, -1);
        return &instance;
    }
};

struct PVPBracketTypesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 4, false },
        };

        static DB2Meta instance(1394275, -1, 2, 0x7C55E5BB, fields, -1);
        return &instance;
    }
};

struct PVPDifficultyMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1339820, -1, 4, 0x970B5E15, fields, 3);
        return &instance;
    }
};

struct PVPItemMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(972287, -1, 2, 0xBD449801, fields, -1);
        return &instance;
    }
};

struct PageTextMaterialMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_STRING, 1, false },
        };

        static DB2Meta instance(1271600, -1, 1, 0x96663ABF, fields, -1);
        return &instance;
    }
};

struct PaperDollItemFrameMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_STRING, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1252503, -1, 3, 0x66B0597E, fields, -1);
        return &instance;
    }
};

struct ParagonReputationMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1581183, -1, 3, 0xD7712F98, fields, 2);
        return &instance;
    }
};

struct ParticleColorMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 3, false },
            { FT_INT, 3, false },
            { FT_INT, 3, false },
        };

        static DB2Meta instance(1284820, -1, 3, 0x1576D1E1, fields, -1);
        return &instance;
    }
};

struct PathMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[7] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(801732, -1, 7, 0x5017579F, fields, -1);
        return &instance;
    }
};

struct PathNodeMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(801733, 0, 4, 0x76615830, fields, -1);
        return &instance;
    }
};

struct PathNodePropertyMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(801734, 3, 5, 0x92C03009, fields, -1);
        return &instance;
    }
};

struct PathPropertyMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(801735, 3, 4, 0x3D29C266, fields, -1);
        return &instance;
    }
};

struct PhaseMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1348558, -1, 1, 0x0043219C, fields, -1);
        return &instance;
    }
};

struct PhaseShiftZoneSoundsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[13] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1267336, -1, 13, 0x85ACB830, fields, -1);
        return &instance;
    }
};

struct PhaseXPhaseGroupMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(987581, -1, 2, 0x66517AF6, fields, 1);
        return &instance;
    }
};

struct PlayerConditionMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[81] =
        {
            { FT_LONG, 1, true },
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 4, false },
            { FT_SHORT, 4, false },
            { FT_SHORT, 4, false },
            { FT_INT, 3, false },
            { FT_BYTE, 3, false },
            { FT_SHORT, 4, false },
            { FT_SHORT, 4, false },
            { FT_SHORT, 4, false },
            { FT_INT, 4, true },
            { FT_INT, 4, true },
            { FT_INT, 4, false },
            { FT_SHORT, 2, false },
            { FT_INT, 2, false },
            { FT_INT, 4, true },
            { FT_BYTE, 4, false },
            { FT_SHORT, 4, false },
            { FT_BYTE, 4, false },
            { FT_BYTE, 4, false },
            { FT_INT, 4, false },
            { FT_SHORT, 4, false },
            { FT_INT, 4, false },
            { FT_INT, 4, false },
            { FT_INT, 6, false },
            { FT_INT, 2, true },
        };

        static DB2Meta instance(1045411, 2, 81, 0x5B3DA113, fields, -1);
        return &instance;
    }
};

struct PositionerMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1251523, -1, 4, 0xE830F1B1, fields, -1);
        return &instance;
    }
};

struct PositionerStateMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[8] =
        {
            { FT_FLOAT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1251506, -1, 8, 0x6C975DF4, fields, -1);
        return &instance;
    }
};

struct PositionerStateEntryMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[11] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1251533, -1, 11, 0x667ED965, fields, -1);
        return &instance;
    }
};

struct PowerDisplayMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1332557, -1, 5, 0xFD152E5B, fields, -1);
        return &instance;
    }
};

struct PowerTypeMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[12] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, false },
            { FT_STRING_NOT_LOCALIZED, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
        };

        static DB2Meta instance(1266022, -1, 12, 0x0C3844E1, fields, -1);
        return &instance;
    }
};

struct PrestigeLevelInfoMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1275869, -1, 4, 0xA7B2D559, fields, -1);
        return &instance;
    }
};

struct PvpRewardMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1307154, -1, 3, 0x72F4C016, fields, -1);
        return &instance;
    }
};

struct PvpScalingEffectMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1591100, -1, 3, 0x52121A41, fields, 1);
        return &instance;
    }
};

struct PvpScalingEffectTypeMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_STRING, 1, false },
        };

        static DB2Meta instance(1591098, -1, 1, 0x96663ABF, fields, -1);
        return &instance;
    }
};

struct PvpTalentMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[10] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1302853, -1, 10, 0x6EB51740, fields, -1);
        return &instance;
    }
};

struct PvpTalentUnlockMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1302848, -1, 3, 0x465C83BC, fields, -1);
        return &instance;
    }
};

struct QuestFactionRewardMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_SHORT, 10, true },
        };

        static DB2Meta instance(1282622, -1, 1, 0xB0E02541, fields, -1);
        return &instance;
    }
};

struct QuestFeedbackEffectMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[6] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1343388, -1, 6, 0x89D55A27, fields, -1);
        return &instance;
    }
};

struct QuestInfoMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_STRING, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1120960, -1, 4, 0x4F45F445, fields, -1);
        return &instance;
    }
};

struct QuestLineMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_STRING, 1, false },
        };

        static DB2Meta instance(973430, -1, 1, 0x8046B23F, fields, -1);
        return &instance;
    }
};

struct QuestLineXQuestMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(973441, -1, 3, 0x8FA4A9C7, fields, -1);
        return &instance;
    }
};

struct QuestMoneyRewardMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_INT, 10, false },
        };

        static DB2Meta instance(1139047, -1, 1, 0x86397302, fields, -1);
        return &instance;
    }
};

struct QuestObjectiveMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[8] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1251960, -1, 8, 0xDD995180, fields, 7);
        return &instance;
    }
};

struct QuestPOIBlobMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[8] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1251882, 0, 8, 0xEC15976E, fields, 2);
        return &instance;
    }
};

struct QuestPOIPointMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1251883, 0, 4, 0x8CF2B119, fields, 3);
        return &instance;
    }
};

struct QuestPackageItemMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(801743, -1, 4, 0xCF9401CF, fields, -1);
        return &instance;
    }
};

struct QuestSortMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_STRING, 1, false },
            { FT_BYTE, 1, true },
        };

        static DB2Meta instance(1134585, -1, 2, 0xAD7072C6, fields, -1);
        return &instance;
    }
};

struct QuestV2Meta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1139443, -1, 1, 0x70495C9B, fields, -1);
        return &instance;
    }
};

struct QuestV2CliTaskMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[24] =
        {
            { FT_LONG, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 3, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1028735, 20, 24, 0x3F026A14, fields, -1);
        return &instance;
    }
};

struct QuestXGroupActivityMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1573634, -1, 2, 0x06CC45D3, fields, -1);
        return &instance;
    }
};

struct QuestXPMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_SHORT, 10, false },
        };

        static DB2Meta instance(1139378, -1, 1, 0xCB76B4C0, fields, -1);
        return &instance;
    }
};

struct RandPropPointsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 5, false },
            { FT_INT, 5, false },
            { FT_INT, 5, false },
        };

        static DB2Meta instance(1310245, -1, 3, 0x4E2C0BCC, fields, -1);
        return &instance;
    }
};

struct RelicSlotTierRequirementMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1716803, -1, 3, 0x129FCC09, fields, -1);
        return &instance;
    }
};

struct RelicTalentMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1671256, -1, 5, 0x7A5963FD, fields, -1);
        return &instance;
    }
};

struct ResearchBranchMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[6] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1133729, -1, 6, 0x58A3876E, fields, -1);
        return &instance;
    }
};

struct ResearchFieldMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_STRING, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1133711, 2, 3, 0x85868B9F, fields, -1);
        return &instance;
    }
};

struct ResearchProjectMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[9] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1134090, 6, 9, 0xB1CAB80B, fields, -1);
        return &instance;
    }
};

struct ResearchSiteMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1134091, -1, 4, 0x25F7DCC7, fields, -1);
        return &instance;
    }
};

struct ResistancesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_STRING, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1135072, -1, 3, 0xA3EAE5AE, fields, -1);
        return &instance;
    }
};

struct RewardPackMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[6] =
        {
            { FT_INT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1307156, -1, 6, 0xDB6CC0AB, fields, -1);
        return &instance;
    }
};

struct RewardPackXCurrencyTypeMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1307153, -1, 3, 0x217E6712, fields, 2);
        return &instance;
    }
};

struct RewardPackXItemMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1307155, -1, 3, 0x74F6B9BD, fields, 2);
        return &instance;
    }
};

struct RibbonQualityMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1398908, -1, 5, 0xC75DAEA8, fields, -1);
        return &instance;
    }
};

struct RulesetItemUpgradeMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(801749, -1, 2, 0xFB641AE0, fields, -1);
        return &instance;
    }
};

struct SDReplacementModelMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1712172, -1, 1, 0xE1F906C2, fields, -1);
        return &instance;
    }
};

struct SandboxScalingMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1776833, -1, 3, 0x5200B7F5, fields, -1);
        return &instance;
    }
};

struct ScalingStatDistributionMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1141728, -1, 3, 0xDED48286, fields, -1);
        return &instance;
    }
};

struct ScenarioMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_STRING, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1139062, -1, 4, 0xD052232A, fields, -1);
        return &instance;
    }
};

struct ScenarioEventEntryMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1141065, -1, 2, 0x02E80455, fields, -1);
        return &instance;
    }
};

struct ScenarioStepMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[9] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1132761, -1, 9, 0x201B0EFC, fields, 2);
        return &instance;
    }
};

struct SceneScriptMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(801754, -1, 2, 0xC694B81E, fields, -1);
        return &instance;
    }
};

struct SceneScriptGlobalTextMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, false },
            { FT_STRING_NOT_LOCALIZED, 1, false },
        };

        static DB2Meta instance(1758036, -1, 2, 0xB9F8FDF1, fields, -1);
        return &instance;
    }
};

struct SceneScriptPackageMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, false },
        };

        static DB2Meta instance(801755, -1, 1, 0x96663ABF, fields, -1);
        return &instance;
    }
};

struct SceneScriptPackageMemberMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(801756, -1, 4, 0x787A715F, fields, 0);
        return &instance;
    }
};

struct SceneScriptTextMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, false },
            { FT_STRING_NOT_LOCALIZED, 1, false },
        };

        static DB2Meta instance(1758037, -1, 2, 0xB9F8FDF1, fields, -1);
        return &instance;
    }
};

struct ScheduledIntervalMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1327082, -1, 5, 0x5DD2FF46, fields, -1);
        return &instance;
    }
};

struct ScheduledWorldStateMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[8] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1327083, -1, 8, 0xFCB13A6A, fields, 0);
        return &instance;
    }
};

struct ScheduledWorldStateGroupMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1327084, -1, 5, 0x21F6EE03, fields, -1);
        return &instance;
    }
};

struct ScheduledWorldStateXUniqCatMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1388724, 0, 3, 0x7EFF57FD, fields, 2);
        return &instance;
    }
};

struct ScreenEffectMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[12] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 4, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1302849, -1, 12, 0x4D5B91C5, fields, -1);
        return &instance;
    }
};

struct ScreenLocationMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_STRING, 1, false },
        };

        static DB2Meta instance(1279416, -1, 1, 0x96663ABF, fields, -1);
        return &instance;
    }
};

struct SeamlessSiteMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1328719, -1, 1, 0xBFE7B9D3, fields, 0);
        return &instance;
    }
};

struct ServerMessagesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_STRING, 1, false },
        };

        static DB2Meta instance(1301141, -1, 1, 0x1C7A1347, fields, -1);
        return &instance;
    }
};

struct ShadowyEffectMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[13] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1239844, -1, 13, 0xE909BB18, fields, -1);
        return &instance;
    }
};

struct SkillLineMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[8] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1240935, -1, 8, 0x3F7E88AF, fields, -1);
        return &instance;
    }
};

struct SkillLineAbilityMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[14] =
        {
            { FT_LONG, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
        };

        static DB2Meta instance(1266278, 1, 14, 0x97B5A653, fields, 4);
        return &instance;
    }
};

struct SkillRaceClassInfoMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[7] =
        {
            { FT_LONG, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1240406, -1, 7, 0x9752C2CE, fields, 1);
        return &instance;
    }
};

struct SoundAmbienceMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 2, false },
        };

        static DB2Meta instance(1310628, -1, 4, 0xB073D4B5, fields, -1);
        return &instance;
    }
};

struct SoundAmbienceFlavorMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1267065, -1, 3, 0x2C58D929, fields, 2);
        return &instance;
    }
};

struct SoundBusMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[8] =
        {
            { FT_FLOAT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1310246, 6, 8, 0xB2ACDE2A, fields, 7);
        return &instance;
    }
};

struct SoundBusOverrideMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[7] =
        {
            { FT_INT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1598732, 0, 7, 0x6D887F48, fields, 5);
        return &instance;
    }
};

struct SoundEmitterPillPointsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_FLOAT, 3, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1092317, -1, 2, 0x41FCF15B, fields, 1);
        return &instance;
    }
};

struct SoundEmittersMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[12] =
        {
            { FT_STRING, 1, false },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 3, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1092316, 8, 12, 0x55A3B17E, fields, 11);
        return &instance;
    }
};

struct SoundEnvelopeMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[7] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1693131, -1, 7, 0x5B78031C, fields, 0);
        return &instance;
    }
};

struct SoundFilterMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_STRING, 1, false },
        };

        static DB2Meta instance(1271601, -1, 1, 0x96663ABF, fields, -1);
        return &instance;
    }
};

struct SoundFilterElemMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_FLOAT, 9, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1267066, -1, 3, 0xE17AC589, fields, 2);
        return &instance;
    }
};

struct SoundKitMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[16] =
        {
            { FT_INT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1237434, 0, 16, 0x0E9CB7AE, fields, -1);
        return &instance;
    }
};

struct SoundKitAdvancedMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[40] =
        {
            { FT_INT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1237436, 0, 40, 0x73F6F023, fields, -1);
        return &instance;
    }
};

struct SoundKitChildMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1307289, -1, 2, 0x2827A3B5, fields, 0);
        return &instance;
    }
};

struct SoundKitEntryMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_FLOAT, 1, false },
        };

        static DB2Meta instance(1237435, -1, 4, 0x6ED6E26F, fields, 0);
        return &instance;
    }
};

struct SoundKitFallbackMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1307288, -1, 2, 0xB1A5106F, fields, -1);
        return &instance;
    }
};

struct SoundKitNameMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_STRING, 1, false },
        };

        static DB2Meta instance(1665033, -1, 1, 0x96663ABF, fields, -1);
        return &instance;
    }
};

struct SoundOverrideMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1266542, -1, 4, 0xFB7643F6, fields, -1);
        return &instance;
    }
};

struct SoundProviderPreferencesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[23] =
        {
            { FT_STRING, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1279417, -1, 23, 0x85F218A4, fields, -1);
        return &instance;
    }
};

struct SourceInfoMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_STRING, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1313612, -1, 4, 0x7C214135, fields, 3);
        return &instance;
    }
};

struct SpamMessagesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_STRING, 1, false },
        };

        static DB2Meta instance(1117088, -1, 1, 0x0D4BA7E7, fields, -1);
        return &instance;
    }
};

struct SpecializationSpellsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[6] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1240335, 5, 6, 0xAE3436F3, fields, 3);
        return &instance;
    }
};

struct SpellMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
        };

        static DB2Meta instance(1140089, -1, 4, 0x2273DFFF, fields, -1);
        return &instance;
    }
};

struct SpellActionBarPrefMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1019373, -1, 2, 0x1EF80B2B, fields, -1);
        return &instance;
    }
};

struct SpellActivationOverlayMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[8] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 4, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1261603, -1, 8, 0x23568FC7, fields, -1);
        return &instance;
    }
};

struct SpellAuraOptionsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[8] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1139952, -1, 8, 0xE05BE94F, fields, 7);
        return &instance;
    }
};

struct SpellAuraRestrictionsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[10] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(981566, -1, 10, 0x7CDF3311, fields, 9);
        return &instance;
    }
};

struct SpellAuraVisXChrSpecMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1280615, -1, 2, 0xA65B6A4A, fields, 1);
        return &instance;
    }
};

struct SpellAuraVisibilityMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1280616, 2, 4, 0xA549F79C, fields, 3);
        return &instance;
    }
};

struct SpellCastTimesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
        };

        static DB2Meta instance(1134089, -1, 3, 0x4129C6A4, fields, -1);
        return &instance;
    }
};

struct SpellCastingRequirementsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[7] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1002166, -1, 7, 0xD8B56E5D, fields, -1);
        return &instance;
    }
};

struct SpellCategoriesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[9] =
        {
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1139939, -1, 9, 0x14E916CC, fields, 8);
        return &instance;
    }
};

struct SpellCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[6] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1280619, -1, 6, 0xEA60E384, fields, -1);
        return &instance;
    }
};

struct SpellChainEffectsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[60] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 3, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 11, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 3, false },
        };

        static DB2Meta instance(1343310, -1, 60, 0x4E8FF369, fields, -1);
        return &instance;
    }
};

struct SpellClassOptionsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 4, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(979663, -1, 4, 0x80FBD67A, fields, -1);
        return &instance;
    }
};

struct SpellCooldownsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1139924, -1, 5, 0xCA8D8B3C, fields, 4);
        return &instance;
    }
};

struct SpellDescriptionVariablesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_STRING, 1, false },
        };

        static DB2Meta instance(1140004, -1, 1, 0xA8EDE75B, fields, -1);
        return &instance;
    }
};

struct SpellDispelTypeMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1137829, -1, 4, 0xE9DDA799, fields, -1);
        return &instance;
    }
};

struct SpellDurationMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1137828, -1, 3, 0x0D6C9082, fields, -1);
        return &instance;
    }
};

struct SpellEffectMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[30] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 4, false },
            { FT_INT, 2, true },
            { FT_INT, 2, false },
            { FT_INT, 2, false },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1140088, 0, 30, 0x3244098B, fields, 29);
        return &instance;
    }
};

struct SpellEffectEmissionMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1310248, -1, 4, 0xC6E61A9B, fields, -1);
        return &instance;
    }
};

struct SpellEquippedItemsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, true },
        };

        static DB2Meta instance(1140011, -1, 4, 0xCE628176, fields, -1);
        return &instance;
    }
};

struct SpellFlyoutMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[6] =
        {
            { FT_LONG, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1146819, -1, 6, 0x437671BD, fields, -1);
        return &instance;
    }
};

struct SpellFlyoutItemMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1134085, -1, 3, 0xF86ADE09, fields, 2);
        return &instance;
    }
};

struct SpellFocusObjectMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_STRING, 1, false },
        };

        static DB2Meta instance(1280620, -1, 1, 0x96663ABF, fields, -1);
        return &instance;
    }
};

struct SpellInterruptsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, true },
            { FT_INT, 2, true },
            { FT_INT, 2, true },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1139906, -1, 5, 0x2FA8EA94, fields, 4);
        return &instance;
    }
};

struct SpellItemEnchantmentMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[19] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 3, false },
            { FT_FLOAT, 3, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 3, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 3, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1362771, -1, 19, 0x80DEA734, fields, -1);
        return &instance;
    }
};

struct SpellItemEnchantmentConditionMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[6] =
        {
            { FT_INT, 5, false },
            { FT_BYTE, 5, false },
            { FT_BYTE, 5, false },
            { FT_BYTE, 5, false },
            { FT_BYTE, 5, false },
            { FT_BYTE, 5, false },
        };

        static DB2Meta instance(1121834, -1, 6, 0xB9C16961, fields, -1);
        return &instance;
    }
};

struct SpellKeyboundOverrideMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1127327, -1, 3, 0x6ECA16FC, fields, -1);
        return &instance;
    }
};

struct SpellLabelMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1347275, -1, 2, 0x68E44736, fields, 1);
        return &instance;
    }
};

struct SpellLearnSpellMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1001907, -1, 3, 0x153EBA26, fields, -1);
        return &instance;
    }
};

struct SpellLevelsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[6] =
        {
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1140079, -1, 6, 0x9E7D1CCD, fields, 5);
        return &instance;
    }
};

struct SpellMechanicMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_STRING, 1, false },
        };

        static DB2Meta instance(1014438, -1, 1, 0xF2075D8C, fields, -1);
        return &instance;
    }
};

struct SpellMiscMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[11] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 14, true },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1003144, -1, 11, 0xCDC114D5, fields, 10);
        return &instance;
    }
};

struct SpellMissileMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[15] =
        {
            { FT_INT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(897956, -1, 15, 0x1D35645E, fields, -1);
        return &instance;
    }
};

struct SpellMissileMotionMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(897955, -1, 4, 0x6B78A45B, fields, -1);
        return &instance;
    }
};

struct SpellPowerMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[14] =
        {
            { FT_INT, 1, true },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, true },
            { FT_FLOAT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(982806, 7, 14, 0x8E5E46EC, fields, 13);
        return &instance;
    }
};

struct SpellPowerDifficultyMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(982804, 2, 3, 0x74714FF7, fields, -1);
        return &instance;
    }
};

struct SpellProceduralEffectMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_FLOAT, 4, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1140477, 2, 3, 0x3E47F4EF, fields, -1);
        return &instance;
    }
};

struct SpellProcsPerMinuteMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_FLOAT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1133526, -1, 2, 0x4BC1931B, fields, -1);
        return &instance;
    }
};

struct SpellProcsPerMinuteModMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1133525, -1, 4, 0x2503C18B, fields, 3);
        return &instance;
    }
};

struct SpellRadiusMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
        };

        static DB2Meta instance(1134584, -1, 4, 0xC12E5C90, fields, -1);
        return &instance;
    }
};

struct SpellRangeMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_FLOAT, 2, false },
            { FT_FLOAT, 2, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1146820, -1, 5, 0xDE2E3F8E, fields, -1);
        return &instance;
    }
};

struct SpellReagentsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 8, true },
            { FT_SHORT, 8, true },
        };

        static DB2Meta instance(841946, -1, 3, 0x0463C688, fields, -1);
        return &instance;
    }
};

struct SpellReagentsCurrencyMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1135239, -1, 3, 0x90A5E5D2, fields, 0);
        return &instance;
    }
};

struct SpellScalingMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1139940, -1, 5, 0xF67A5719, fields, -1);
        return &instance;
    }
};

struct SpellShapeshiftMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_INT, 1, true },
            { FT_INT, 2, true },
            { FT_INT, 2, true },
            { FT_BYTE, 1, true },
        };

        static DB2Meta instance(1139929, -1, 4, 0xA461C24D, fields, -1);
        return &instance;
    }
};

struct SpellShapeshiftFormMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[10] =
        {
            { FT_STRING, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 4, false },
            { FT_INT, 8, false },
        };

        static DB2Meta instance(1280618, -1, 10, 0x130819AF, fields, -1);
        return &instance;
    }
};

struct SpellSpecialUnitEffectMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1268903, -1, 2, 0x76989615, fields, -1);
        return &instance;
    }
};

struct SpellTargetRestrictionsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[8] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1139993, -1, 8, 0x7B330026, fields, 7);
        return &instance;
    }
};

struct SpellTotemsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, true },
            { FT_INT, 2, true },
            { FT_SHORT, 2, false },
        };

        static DB2Meta instance(1002162, -1, 3, 0xEC0C4866, fields, -1);
        return &instance;
    }
};

struct SpellVisualMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[14] =
        {
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 3, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(897952, -1, 14, 0x1C1301D2, fields, -1);
        return &instance;
    }
};

struct SpellVisualAnimMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1140479, -1, 3, 0x0ABD7A19, fields, -1);
        return &instance;
    }
};

struct SpellVisualColorEffectMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[11] =
        {
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1094006, -1, 11, 0x7E5B2E66, fields, -1);
        return &instance;
    }
};

struct SpellVisualEffectNameMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[13] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(897948, -1, 13, 0xB930A934, fields, -1);
        return &instance;
    }
};

struct SpellVisualEventMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[9] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1685317, -1, 9, 0xAE75BC3C, fields, 8);
        return &instance;
    }
};

struct SpellVisualKitMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_INT, 1, true },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(897949, -1, 5, 0xDC04F488, fields, -1);
        return &instance;
    }
};

struct SpellVisualKitAreaModelMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[6] =
        {
            { FT_INT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(897951, -1, 6, 0xBE76E593, fields, -1);
        return &instance;
    }
};

struct SpellVisualKitEffectMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1140480, -1, 3, 0xB78084B7, fields, 2);
        return &instance;
    }
};

struct SpellVisualKitModelAttachMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[22] =
        {
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 3, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(897953, 2, 22, 0xBCE18649, fields, 21);
        return &instance;
    }
};

struct SpellVisualMissileMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[16] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 3, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(897954, 12, 16, 0x00BA67A5, fields, 15);
        return &instance;
    }
};

struct SpellXDescriptionVariablesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1724949, -1, 2, 0xB08E6876, fields, -1);
        return &instance;
    }
};

struct SpellXSpellVisualMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[13] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1101657, 1, 13, 0x4F4B8A2A, fields, 12);
        return &instance;
    }
};

struct StartupFilesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1604265, -1, 3, 0x51FEBBB5, fields, -1);
        return &instance;
    }
};

struct Startup_StringsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
        };

        static DB2Meta instance(1375805, -1, 2, 0xF8CDDEE7, fields, -1);
        return &instance;
    }
};

struct StationeryMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 2, false },
        };

        static DB2Meta instance(1140758, -1, 3, 0x20F6BABD, fields, -1);
        return &instance;
    }
};

struct SummonPropertiesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1345276, -1, 5, 0xFB8338FC, fields, -1);
        return &instance;
    }
};

struct TactKeyMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_BYTE, 16, false },
        };

        static DB2Meta instance(1302850, -1, 1, 0xF0F98B62, fields, -1);
        return &instance;
    }
};

struct TactKeyLookupMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_BYTE, 8, false },
        };

        static DB2Meta instance(1302851, -1, 1, 0x3C1AC92A, fields, -1);
        return &instance;
    }
};

struct TalentMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[9] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 2, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1369062, -1, 9, 0xE8850B48, fields, -1);
        return &instance;
    }
};

struct TaxiNodesMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[12] =
        {
            { FT_STRING, 1, false },
            { FT_FLOAT, 3, false },
            { FT_INT, 2, true },
            { FT_FLOAT, 2, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 2, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1068100, -1, 12, 0xB46C6A8B, fields, -1);
        return &instance;
    }
};

struct TaxiPathMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1067802, 2, 4, 0xF44E2BF5, fields, 0);
        return &instance;
    }
};

struct TaxiPathNodeMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[9] =
        {
            { FT_FLOAT, 3, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1000437, 4, 9, 0xD38E8C01, fields, 1);
        return &instance;
    }
};

struct TerrainMaterialMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1307290, -1, 3, 0x19D9496F, fields, -1);
        return &instance;
    }
};

struct TerrainTypeMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_STRING, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1310249, -1, 5, 0x4FE20345, fields, -1);
        return &instance;
    }
};

struct TerrainTypeSoundsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_STRING, 1, false },
        };

        static DB2Meta instance(1284822, -1, 1, 0xE4923C1F, fields, -1);
        return &instance;
    }
};

struct TextureBlendSetMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[10] =
        {
            { FT_INT, 3, false },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 4, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1328721, -1, 10, 0xA2323E0C, fields, -1);
        return &instance;
    }
};

struct TextureFileDataMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(982459, 0, 3, 0xE0790D00, fields, 1);
        return &instance;
    }
};

struct TotemCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1134586, -1, 3, 0x20B9177A, fields, -1);
        return &instance;
    }
};

struct ToyMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(988200, 4, 5, 0x5409C5EA, fields, -1);
        return &instance;
    }
};

struct TradeSkillCategoryMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_STRING, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1301101, -1, 5, 0x5D3ADD4D, fields, -1);
        return &instance;
    }
};

struct TradeSkillItemMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1329070, -1, 2, 0xFDE283DA, fields, -1);
        return &instance;
    }
};

struct TransformMatrixMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
        };

        static DB2Meta instance(1338702, -1, 5, 0xB6A2C431, fields, -1);
        return &instance;
    }
};

struct TransmogHolidayMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1589454, 0, 2, 0xB420EB18, fields, -1);
        return &instance;
    }
};

struct TransmogSetMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[10] =
        {
            { FT_STRING, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1376213, 4, 10, 0xBEDFD7D1, fields, 1);
        return &instance;
    }
};

struct TransmogSetGroupMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1576116, 1, 2, 0xCD072FE5, fields, -1);
        return &instance;
    }
};

struct TransmogSetItemMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1376212, 0, 4, 0x0E96B3A2, fields, 1);
        return &instance;
    }
};

struct TransportAnimationMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_INT, 1, false },
            { FT_FLOAT, 3, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1140686, -1, 4, 0x099987ED, fields, 3);
        return &instance;
    }
};

struct TransportPhysicsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[10] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
        };

        static DB2Meta instance(1121973, -1, 10, 0x2C1FB208, fields, -1);
        return &instance;
    }
};

struct TransportRotationMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, false },
            { FT_FLOAT, 4, false },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1140687, -1, 3, 0x72035AA9, fields, 2);
        return &instance;
    }
};

struct TrophyMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_STRING, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(975024, -1, 4, 0xE16151C5, fields, -1);
        return &instance;
    }
};

struct UIExpansionDisplayInfoMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1729547, -1, 3, 0x73DFDEC5, fields, -1);
        return &instance;
    }
};

struct UIExpansionDisplayInfoIconMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1729546, -1, 3, 0x331022F2, fields, -1);
        return &instance;
    }
};

struct UiCamFbackTransmogChrRaceMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1261406, -1, 5, 0x9FB4CC78, fields, -1);
        return &instance;
    }
};

struct UiCamFbackTransmogWeaponMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1261407, -1, 4, 0x020890B7, fields, -1);
        return &instance;
    }
};

struct UiCameraMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[9] =
        {
            { FT_STRING, 1, false },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 3, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1120287, -1, 9, 0xCA6C98D4, fields, -1);
        return &instance;
    }
};

struct UiCameraTypeMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1120288, -1, 3, 0x644732AE, fields, -1);
        return &instance;
    }
};

struct UiMapPOIMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[7] =
        {
            { FT_INT, 1, false },
            { FT_FLOAT, 3, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1445708, 6, 7, 0x559E1F11, fields, -1);
        return &instance;
    }
};

struct UiModelSceneMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1548215, -1, 2, 0xA7D62B8A, fields, -1);
        return &instance;
    }
};

struct UiModelSceneActorMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[10] =
        {
            { FT_STRING, 1, false },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1548214, 7, 10, 0x679AC95F, fields, 9);
        return &instance;
    }
};

struct UiModelSceneActorDisplayMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1548216, -1, 5, 0x6137F4BE, fields, -1);
        return &instance;
    }
};

struct UiModelSceneCameraMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[16] =
        {
            { FT_STRING, 1, false },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1548213, 14, 16, 0xC58AA5EC, fields, 15);
        return &instance;
    }
};

struct UiTextureAtlasMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(897470, -1, 3, 0x9879592A, fields, -1);
        return &instance;
    }
};

struct UiTextureAtlasMemberMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[8] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(897532, 1, 8, 0x81E2055F, fields, -1);
        return &instance;
    }
};

struct UiTextureKitMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_STRING, 1, false },
        };

        static DB2Meta instance(939159, -1, 1, 0x2C7E0372, fields, -1);
        return &instance;
    }
};

struct UnitBloodMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[6] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1284821, -1, 6, 0x4689A9A0, fields, -1);
        return &instance;
    }
};

struct UnitBloodLevelsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_BYTE, 3, false },
        };

        static DB2Meta instance(1268904, -1, 1, 0x31A6BD58, fields, -1);
        return &instance;
    }
};

struct UnitConditionMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_INT, 8, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 8, false },
            { FT_BYTE, 8, false },
        };

        static DB2Meta instance(1120959, -1, 4, 0x62802D9C, fields, -1);
        return &instance;
    }
};

struct UnitPowerBarMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[16] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 6, true },
            { FT_INT, 6, true },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1237753, -1, 16, 0x626C94CD, fields, -1);
        return &instance;
    }
};

struct VehicleMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[18] =
        {
            { FT_INT, 1, true },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 8, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 3, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1368621, -1, 18, 0x1606C582, fields, -1);
        return &instance;
    }
};

struct VehicleSeatMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[61] =
        {
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1345447, -1, 61, 0x242E0ECD, fields, -1);
        return &instance;
    }
};

struct VehicleUIIndSeatMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1279741, -1, 4, 0x5F688502, fields, 3);
        return &instance;
    }
};

struct VehicleUIIndicatorMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1279740, -1, 1, 0x68486100, fields, -1);
        return &instance;
    }
};

struct VignetteMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[7] =
        {
            { FT_STRING, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(892861, -1, 7, 0x52E3B381, fields, -1);
        return &instance;
    }
};

struct VirtualAttachmentMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_STRING, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1634482, -1, 2, 0xEC767C57, fields, -1);
        return &instance;
    }
};

struct VirtualAttachmentCustomizationMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1634480, -1, 3, 0xC354C931, fields, -1);
        return &instance;
    }
};

struct VocalUISoundsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 2, false },
        };

        static DB2Meta instance(1267067, -1, 4, 0xED48CFA9, fields, -1);
        return &instance;
    }
};

struct WMOAreaTableMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[15] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1355528, 12, 15, 0x4616C893, fields, 14);
        return &instance;
    }
};

struct WMOMinimapTextureMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1323241, -1, 5, 0x8F4AE3C0, fields, 4);
        return &instance;
    }
};

struct WbAccessControlListMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[5] =
        {
            { FT_STRING, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(879634, -1, 5, 0xBE044710, fields, -1);
        return &instance;
    }
};

struct WbCertWhitelistMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_STRING, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(879591, -1, 4, 0x01D13030, fields, -1);
        return &instance;
    }
};

struct WeaponImpactSoundsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[7] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 11, false },
            { FT_INT, 11, false },
            { FT_INT, 11, false },
            { FT_INT, 11, false },
        };

        static DB2Meta instance(1267648, -1, 7, 0x774C043A, fields, -1);
        return &instance;
    }
};

struct WeaponSwingSounds2Meta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1267068, -1, 3, 0xD45347C3, fields, -1);
        return &instance;
    }
};

struct WeaponTrailMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[9] =
        {
            { FT_INT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 3, false },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 3, false },
        };

        static DB2Meta instance(982461, -1, 9, 0x49754C60, fields, -1);
        return &instance;
    }
};

struct WeaponTrailModelDefMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1239843, -1, 3, 0x7DE7C508, fields, 2);
        return &instance;
    }
};

struct WeaponTrailParamMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[10] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1239842, -1, 10, 0x9B0F7200, fields, 9);
        return &instance;
    }
};

struct WeatherMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[14] =
        {
            { FT_FLOAT, 2, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1343311, -1, 14, 0x7C160B07, fields, -1);
        return &instance;
    }
};

struct WindSettingsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[10] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(943871, -1, 10, 0x5308550C, fields, -1);
        return &instance;
    }
};

struct WorldBossLockoutMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[2] =
        {
            { FT_STRING, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(975279, -1, 2, 0x4D7103A0, fields, -1);
        return &instance;
    }
};

struct WorldChunkSoundsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[6] =
        {
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1267069, -1, 6, 0xD06AA126, fields, -1);
        return &instance;
    }
};

struct WorldEffectMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[6] =
        {
            { FT_INT, 1, true },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1343312, -1, 6, 0x2E9B9BFD, fields, -1);
        return &instance;
    }
};

struct WorldElapsedTimerMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_STRING, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1135240, -1, 3, 0x6C026FDE, fields, -1);
        return &instance;
    }
};

struct WorldMapAreaMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[17] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, true },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1374382, 15, 17, 0xC7E90019, fields, -1);
        return &instance;
    }
};

struct WorldMapContinentMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[11] =
        {
            { FT_FLOAT, 2, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 2, false },
            { FT_FLOAT, 2, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1343594, -1, 11, 0x8F75E077, fields, -1);
        return &instance;
    }
};

struct WorldMapOverlayMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[14] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, false },
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, true },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 4, false },
        };

        static DB2Meta instance(1134579, 1, 14, 0xDC4B6AF3, fields, 4);
        return &instance;
    }
};

struct WorldMapTransformsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[10] =
        {
            { FT_FLOAT, 6, false },
            { FT_FLOAT, 2, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, true },
        };

        static DB2Meta instance(1310630, -1, 10, 0x99FB4B71, fields, 3);
        return &instance;
    }
};

struct WorldSafeLocsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_STRING, 1, false },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1369425, -1, 4, 0x605EA8A6, fields, 3);
        return &instance;
    }
};

struct WorldStateExpressionMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[1] =
        {
            { FT_STRING_NOT_LOCALIZED, 1, false },
        };

        static DB2Meta instance(1332558, -1, 1, 0xA69C9812, fields, -1);
        return &instance;
    }
};

struct WorldStateUIMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[17] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_STRING, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 3, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1343596, 14, 17, 0x70808977, fields, 5);
        return &instance;
    }
};

struct WorldStateZoneSoundsMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[8] =
        {
            { FT_INT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1266941, -1, 8, 0xB9572D3D, fields, -1);
        return &instance;
    }
};

struct World_PVP_AreaMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[7] =
        {
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };

        static DB2Meta instance(1310255, -1, 7, 0x6FBBF76B, fields, -1);
        return &instance;
    }
};

struct ZoneIntroMusicTableMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_STRING, 1, false },
            { FT_SHORT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1310251, -1, 4, 0x1F8417ED, fields, -1);
        return &instance;
    }
};

struct ZoneLightMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_STRING, 1, false },
            { FT_SHORT, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1310253, -1, 3, 0x3C11F38B, fields, -1);
        return &instance;
    }
};

struct ZoneLightPointMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[3] =
        {
            { FT_FLOAT, 2, false },
            { FT_BYTE, 1, false },
            { FT_SHORT, 1, false },
        };

        static DB2Meta instance(1310256, -1, 3, 0xEF93DC50, fields, 2);
        return &instance;
    }
};

struct ZoneMusicMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_STRING, 1, false },
            { FT_INT, 2, false },
            { FT_INT, 2, false },
            { FT_INT, 2, false },
        };

        static DB2Meta instance(1310254, -1, 4, 0x9E2B332D, fields, -1);
        return &instance;
    }
};

struct ZoneStoryMeta
{
    static DB2Meta const* Instance()
    {
        static DB2MetaField const fields[4] =
        {
            { FT_INT, 1, false },
            { FT_INT, 1, false },
            { FT_BYTE, 1, false },
            { FT_INT, 1, false },
        };

        static DB2Meta instance(1797864, -1, 4, 0xEE16D6F3, fields, 3);
        return &instance;
    }
};

#endif // DB2Metadata_h__
