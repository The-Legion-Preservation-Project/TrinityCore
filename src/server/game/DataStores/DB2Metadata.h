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
    static constexpr DB2MetaField Fields[15] =
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

    static constexpr DB2Meta Instance{ 1260179, 12, 15, 0x2C4BE18C, Fields, 7 };
};

struct Achievement_CategoryMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_STRING, 1, false },
        { FT_SHORT, 1, true },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1324299, 3, 4, 0xED226BC9, Fields, 2 };
};

struct AdventureJournalMeta
{
    static constexpr DB2MetaField Fields[22] =
    {
        { FT_STRING, 1, true },
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
        { FT_INT, 1, true },
        { FT_INT, 1, true },
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
        { FT_INT, 1, true },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1115949, -1, 22, 0xB2FFA8DD, Fields, -1 };
};

struct AdventureMapPOIMeta
{
    static constexpr DB2MetaField Fields[13] =
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

    static constexpr DB2Meta Instance{ 1267070, -1, 13, 0x0C288A82, Fields, -1 };
};

struct AlliedRaceMeta
{
    static constexpr DB2MetaField Fields[8] =
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

    static constexpr DB2Meta Instance{ 1710672, 1, 8, 0xB13ABE04, Fields, -1 };
};

struct AlliedRaceRacialAbilityMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1720145, -1, 5, 0x9EBF9B09, Fields, 4 };
};

struct AnimKitMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1304323, -1, 3, 0x81D6D250, Fields, -1 };
};

struct AnimKitBoneSetMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_STRING, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1375433, -1, 5, 0xFE4B9B1F, Fields, -1 };
};

struct AnimKitBoneSetAliasMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1266937, -1, 2, 0xEA8B67BC, Fields, -1 };
};

struct AnimKitConfigMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1300872, -1, 1, 0x8A70ED4C, Fields, -1 };
};

struct AnimKitConfigBoneSetMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1300873, -1, 3, 0x3D9B3BA7, Fields, 2 };
};

struct AnimKitPriorityMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1266540, -1, 1, 0x5E93C107, Fields, -1 };
};

struct AnimKitReplacementMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1559807, 3, 5, 0x0735DB83, Fields, 4 };
};

struct AnimKitSegmentMeta
{
    static constexpr DB2MetaField Fields[18] =
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

    static constexpr DB2Meta Instance{ 1304324, -1, 18, 0x08F09B89, Fields, 5 };
};

struct AnimReplacementMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1301100, 3, 5, 0x2C8B0F35, Fields, 4 };
};

struct AnimReplacementSetMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1284817, -1, 1, 0x3761247A, Fields, -1 };
};

struct AnimationDataMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_INT, 1, true },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1375431, -1, 4, 0x03182786, Fields, -1 };
};

struct AreaFarClipOverrideMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_INT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1537162, 4, 5, 0xEB5921CC, Fields, -1 };
};

struct AreaGroupMemberMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1093406, -1, 2, 0x50AA43EE, Fields, 1 };
};

struct AreaPOIMeta
{
    static constexpr DB2MetaField Fields[16] =
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

    static constexpr DB2Meta Instance{ 1000630, -1, 16, 0xB161EE90, Fields, -1 };
};

struct AreaPOIStateMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_STRING, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1000631, -1, 5, 0x673BDA80, Fields, 4 };
};

struct AreaTableMeta
{
    static constexpr DB2MetaField Fields[23] =
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

    static constexpr DB2Meta Instance{ 1353545, -1, 23, 0x0CA01129, Fields, -1 };
};

struct AreaTriggerMeta
{
    static constexpr DB2MetaField Fields[15] =
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

    static constexpr DB2Meta Instance{ 1354401, 14, 15, 0x378573E8, Fields, 6 };
};

struct AreaTriggerActionSetMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1352378, -1, 1, 0x5DA480BD, Fields, -1 };
};

struct AreaTriggerBoxMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_FLOAT, 3, false },
    };

    static constexpr DB2Meta Instance{ 1332554, -1, 1, 0x602CFDA6, Fields, -1 };
};

struct AreaTriggerCylinderMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1121943, -1, 3, 0x26D4052D, Fields, -1 };
};

struct AreaTriggerSphereMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_FLOAT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1315630, -1, 1, 0x9141AC7F, Fields, -1 };
};

struct ArmorLocationMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1284818, -1, 5, 0xCCFBD16E, Fields, -1 };
};

struct ArtifactMeta
{
    static constexpr DB2MetaField Fields[10] =
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

    static constexpr DB2Meta Instance{ 1007934, -1, 10, 0x76CF31A8, Fields, -1 };
};

struct ArtifactAppearanceMeta
{
    static constexpr DB2MetaField Fields[15] =
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

    static constexpr DB2Meta Instance{ 1116407, 11, 15, 0xAEED7395, Fields, 5 };
};

struct ArtifactAppearanceSetMeta
{
    static constexpr DB2MetaField Fields[9] =
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

    static constexpr DB2Meta Instance{ 1116408, 7, 9, 0x53DFED74, Fields, 8 };
};

struct ArtifactCategoryMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_SHORT, 1, true },
        { FT_SHORT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1376210, -1, 2, 0x21328475, Fields, -1 };
};

struct ArtifactPowerMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { FT_FLOAT, 2, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1007937, 5, 7, 0x45240818, Fields, 1 };
};

struct ArtifactPowerLinkMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1133731, -1, 2, 0xE179618C, Fields, -1 };
};

struct ArtifactPowerPickerMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1597467, -1, 1, 0x2D6AF006, Fields, -1 };
};

struct ArtifactPowerRankMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_INT, 1, true },
        { FT_FLOAT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1261405, -1, 5, 0xA87EACC4, Fields, 4 };
};

struct ArtifactQuestXPMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_INT, 10, false },
    };

    static constexpr DB2Meta Instance{ 1036203, -1, 1, 0x86397302, Fields, -1 };
};

struct ArtifactTierMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1600114, -1, 5, 0x1A5A50B9, Fields, -1 };
};

struct ArtifactUnlockMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1094540, -1, 5, 0x52839A77, Fields, 4 };
};

struct AuctionHouseMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_STRING, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1237439, -1, 4, 0x51CFEEFF, Fields, -1 };
};

struct BankBagSlotPricesMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1284819, -1, 1, 0xEA0AC2AA, Fields, -1 };
};

struct BannedAddonsMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_STRING_NOT_LOCALIZED, 1, false },
        { FT_STRING_NOT_LOCALIZED, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1373459, -1, 3, 0xF779B6E5, Fields, -1 };
};

struct BarberShopStyleMeta
{
    static constexpr DB2MetaField Fields[8] =
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

    static constexpr DB2Meta Instance{ 1237437, 7, 8, 0x670C71AE, Fields, -1 };
};

struct BattlePetAbilityMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 841610, -1, 7, 0x0F29944D, Fields, -1 };
};

struct BattlePetAbilityEffectMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 6, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 801575, 6, 7, 0x5D30EBC5, Fields, 0 };
};

struct BattlePetAbilityStateMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, false },
        { FT_BYTE, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 801576, -1, 3, 0x0E40A884, Fields, 2 };
};

struct BattlePetAbilityTurnMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 801577, 5, 6, 0xCB063F4F, Fields, 0 };
};

struct BattlePetBreedQualityMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_FLOAT, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 801578, -1, 2, 0xBDE74E1D, Fields, -1 };
};

struct BattlePetBreedStateMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 801579, -1, 3, 0x68D5C999, Fields, 2 };
};

struct BattlePetDisplayOverrideMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1802988, -1, 4, 0xDE5129EA, Fields, -1 };
};

struct BattlePetEffectPropertiesMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_STRING, 6, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 6, false },
    };

    static constexpr DB2Meta Instance{ 801580, -1, 3, 0x56070751, Fields, -1 };
};

struct BattlePetNPCTeamMemberMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_STRING, 1, false },
    };

    static constexpr DB2Meta Instance{ 841648, -1, 1, 0x4423F004, Fields, -1 };
};

struct BattlePetSpeciesMeta
{
    static constexpr DB2MetaField Fields[11] =
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

    static constexpr DB2Meta Instance{ 841622, 8, 11, 0x8A3D97A4, Fields, -1 };
};

struct BattlePetSpeciesStateMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, true },
        { FT_BYTE, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 801581, -1, 3, 0x8F958D5C, Fields, 2 };
};

struct BattlePetSpeciesXAbilityMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 801582, -1, 4, 0x9EE27D6A, Fields, 3 };
};

struct BattlePetStateMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_STRING, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 801583, -1, 3, 0x1797AB4A, Fields, -1 };
};

struct BattlePetVisualMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 801584, -1, 7, 0x097E0F6C, Fields, -1 };
};

struct BattlemasterListMeta
{
    static constexpr DB2MetaField Fields[17] =
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

    static constexpr DB2Meta Instance{ 1360265, -1, 17, 0xD8AAA088, Fields, -1 };
};

struct BeamEffectMeta
{
    static constexpr DB2MetaField Fields[10] =
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

    static constexpr DB2Meta Instance{ 1525607, -1, 10, 0x42C18603, Fields, -1 };
};

struct BoneWindModifierModelMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1467254, -1, 2, 0x577A0772, Fields, 0 };
};

struct BoneWindModifiersMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_FLOAT, 3, false },
        { FT_FLOAT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1416756, -1, 2, 0xB4E7449E, Fields, -1 };
};

struct BountyMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_INT, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1367866, -1, 5, 0xE76E716C, Fields, 4 };
};

struct BountySetMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_SHORT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1367865, -1, 2, 0x96B908A5, Fields, -1 };
};

struct BroadcastTextMeta
{
    static constexpr DB2MetaField Fields[9] =
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

    static constexpr DB2Meta Instance{ 841604, -1, 9, 0x51BF0C33, Fields, -1 };
};

struct CameraEffectMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1117695, -1, 1, 0xF6AB4622, Fields, -1 };
};

struct CameraEffectEntryMeta
{
    static constexpr DB2MetaField Fields[16] =
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

    static constexpr DB2Meta Instance{ 1117696, -1, 16, 0xC5105557, Fields, 15 };
};

struct CameraModeMeta
{
    static constexpr DB2MetaField Fields[11] =
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

    static constexpr DB2Meta Instance{ 1343308, -1, 11, 0xCDB6BC2F, Fields, -1 };
};

struct CastableRaidBuffsMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1283018, -1, 2, 0x5BDD4028, Fields, 1 };
};

struct CelestialBodyMeta
{
    static constexpr DB2MetaField Fields[15] =
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

    static constexpr DB2Meta Instance{ 1592470, 14, 15, 0xD09BE31C, Fields, -1 };
};

struct Cfg_CategoriesMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_STRING, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1068162, -1, 5, 0x705B82C8, Fields, -1 };
};

struct Cfg_ConfigsMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_FLOAT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1080949, -1, 4, 0xC618392F, Fields, -1 };
};

struct Cfg_RegionsMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_STRING_NOT_LOCALIZED, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1082876, -1, 5, 0x9F4272BF, Fields, -1 };
};

struct CharBaseInfoMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1343386, -1, 2, 0x9E9939B8, Fields, -1 };
};

struct CharBaseSectionMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1375798, -1, 3, 0x4F08B5F3, Fields, -1 };
};

struct CharComponentTextureLayoutsMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1360262, -1, 2, 0x0F515E34, Fields, -1 };
};

struct CharComponentTextureSectionsMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1360263, -1, 7, 0xCE76000F, Fields, -1 };
};

struct CharHairGeosetsMeta
{
    static constexpr DB2MetaField Fields[10] =
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

    static constexpr DB2Meta Instance{ 1256914, -1, 10, 0x33EB32D2, Fields, 1 };
};

struct CharSectionsMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { FT_INT, 3, true },
        { FT_SHORT, 1, true },
        { FT_BYTE, 1, true },
        { FT_BYTE, 1, true },
        { FT_BYTE, 1, true },
        { FT_BYTE, 1, true },
        { FT_BYTE, 1, true },
    };

    static constexpr DB2Meta Instance{ 1365366, -1, 7, 0xE349E55B, Fields, -1 };
};

struct CharShipmentMeta
{
    static constexpr DB2MetaField Fields[9] =
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

    static constexpr DB2Meta Instance{ 972425, -1, 9, 0xE6D3C7C1, Fields, 5 };
};

struct CharShipmentContainerMeta
{
    static constexpr DB2MetaField Fields[16] =
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

    static constexpr DB2Meta Instance{ 972405, -1, 16, 0x194896E3, Fields, -1 };
};

struct CharStartOutfitMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { FT_INT, 24, true },
        { FT_INT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1237591, -1, 7, 0x0EEBEE24, Fields, 6 };
};

struct CharTitlesMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
        { FT_SHORT, 1, true },
        { FT_BYTE, 1, true },
    };

    static constexpr DB2Meta Instance{ 1349054, -1, 4, 0x7A58AA5F, Fields, -1 };
};

struct CharacterFaceBoneSetMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_INT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1028733, -1, 5, 0x1C634076, Fields, 4 };
};

struct CharacterFacialHairStylesMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_INT, 5, true },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1369752, -1, 4, 0x47D79688, Fields, -1 };
};

struct CharacterLoadoutMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_LONG, 1, true },
        { FT_BYTE, 1, true },
        { FT_BYTE, 1, true },
    };

    static constexpr DB2Meta Instance{ 1344281, -1, 3, 0x87B51673, Fields, -1 };
};

struct CharacterLoadoutItemMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1302846, -1, 2, 0x3C3D40B9, Fields, 1 };
};

struct CharacterServiceInfoMeta
{
    static constexpr DB2MetaField Fields[11] =
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

    static constexpr DB2Meta Instance{ 1815417, -1, 11, 0xADE120EF, Fields, -1 };
};

struct ChatChannelsMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
        { FT_INT, 1, true },
        { FT_BYTE, 1, true },
    };

    static constexpr DB2Meta Instance{ 1345278, -1, 4, 0x1A325E80, Fields, -1 };
};

struct ChatProfanityMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_STRING, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1117084, -1, 2, 0x328E1FE6, Fields, -1 };
};

struct ChrClassRaceSexMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1306188, -1, 6, 0x5E29DFA1, Fields, -1 };
};

struct ChrClassTitleMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1267497, -1, 3, 0xC155DB2C, Fields, -1 };
};

struct ChrClassUIDisplayMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_BYTE, 1, false },
        { FT_INT, 1, true },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1316515, -1, 3, 0x59A95A73, Fields, -1 };
};

struct ChrClassVillainMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_STRING, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1267498, -1, 3, 0xA6AC18CD, Fields, -1 };
};

struct ChrClassesMeta
{
    static constexpr DB2MetaField Fields[20] =
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

    static constexpr DB2Meta Instance{ 1361031, 19, 20, 0x6F7AB8E7, Fields, -1 };
};

struct ChrClassesXPowerTypesMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1121420, -1, 2, 0xAF977B23, Fields, 1 };
};

struct ChrCustomizationMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 3, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1611874, -1, 6, 0x71833CE5, Fields, 5 };
};

struct ChrRacesMeta
{
    static constexpr DB2MetaField Fields[38] =
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

    static constexpr DB2Meta Instance{ 1305311, 30, 38, 0x51C511F9, Fields, -1 };
};

struct ChrSpecializationMeta
{
    static constexpr DB2MetaField Fields[13] =
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

    static constexpr DB2Meta Instance{ 1343390, 9, 13, 0x3D86B8F7, Fields, 4 };
};

struct ChrUpgradeBucketMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_SHORT, 1, false },
        { FT_INT, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 984529, 1, 3, 0xACF64A80, Fields, 2 };
};

struct ChrUpgradeBucketSpellMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 984528, -1, 2, 0xDF939031, Fields, 1 };
};

struct ChrUpgradeTierMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_STRING, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 984530, 3, 4, 0x2C87937D, Fields, -1 };
};

struct CinematicCameraMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_INT, 1, false },
        { FT_FLOAT, 3, false },
        { FT_FLOAT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1294214, -1, 4, 0x0062B0F4, Fields, -1 };
};

struct CinematicSequencesMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_INT, 1, false },
        { FT_SHORT, 8, false },
    };

    static constexpr DB2Meta Instance{ 1134583, -1, 2, 0x470FDA8C, Fields, -1 };
};

struct CloakDampeningMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { FT_FLOAT, 5, false },
        { FT_FLOAT, 5, false },
        { FT_FLOAT, 2, false },
        { FT_FLOAT, 2, false },
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1465903, -1, 7, 0xB2DF7F2A, Fields, -1 };
};

struct CombatConditionMeta
{
    static constexpr DB2MetaField Fields[11] =
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

    static constexpr DB2Meta Instance{ 1120958, -1, 11, 0x28D253C6, Fields, -1 };
};

struct CommentatorStartLocationMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_FLOAT, 3, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1664251, -1, 2, 0xEFD540EF, Fields, -1 };
};

struct CommentatorTrackedCooldownMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1661584, -1, 4, 0x84985168, Fields, 3 };
};

struct ComponentModelFileDataMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1349053, -1, 4, 0x25BB55A7, Fields, -1 };
};

struct ComponentTextureFileDataMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1278239, -1, 3, 0x50C58D4F, Fields, -1 };
};

struct ConfigurationWarningMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1709409, -1, 2, 0x0B350390, Fields, -1 };
};

struct ContributionMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 4, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1587153, 2, 6, 0x8EDF6090, Fields, 3 };
};

struct ConversationLineMeta
{
    static constexpr DB2MetaField Fields[8] =
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

    static constexpr DB2Meta Instance{ 1260801, -1, 8, 0x032B137B, Fields, -1 };
};

struct CreatureMeta
{
    static constexpr DB2MetaField Fields[12] =
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

    static constexpr DB2Meta Instance{ 841631, -1, 12, 0xCFB508A9, Fields, -1 };
};

struct CreatureDifficultyMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { FT_INT, 7, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 879282, -1, 6, 0x4291EEC6, Fields, 5 };
};

struct CreatureDispXUiCameraMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1146692, -1, 2, 0x6E0E7C15, Fields, -1 };
};

struct CreatureDisplayInfoMeta
{
    static constexpr DB2MetaField Fields[23] =
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

    static constexpr DB2Meta Instance{ 1108759, 0, 23, 0x406268DF, Fields, -1 };
};

struct CreatureDisplayInfoCondMeta
{
    static constexpr DB2MetaField Fields[15] =
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

    static constexpr DB2Meta Instance{ 1332686, -1, 15, 0x26CD44AB, Fields, 14 };
};

struct CreatureDisplayInfoEvtMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1586882, -1, 4, 0x3FEF69BB, Fields, 3 };
};

struct CreatureDisplayInfoExtraMeta
{
    static constexpr DB2MetaField Fields[12] =
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

    static constexpr DB2Meta Instance{ 1264997, -1, 12, 0x6DF98EF6, Fields, -1 };
};

struct CreatureDisplayInfoTrnMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { FT_INT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1146698, -1, 6, 0x8E687740, Fields, 5 };
};

struct CreatureFamilyMeta
{
    static constexpr DB2MetaField Fields[9] =
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

    static constexpr DB2Meta Instance{ 1351351, -1, 9, 0xE2DC5126, Fields, -1 };
};

struct CreatureImmunitiesMeta
{
    static constexpr DB2MetaField Fields[9] =
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

    static constexpr DB2Meta Instance{ 1131322, -1, 9, 0x2D20050B, Fields, -1 };
};

struct CreatureModelDataMeta
{
    static constexpr DB2MetaField Fields[28] =
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

    static constexpr DB2Meta Instance{ 1365368, -1, 28, 0x983BD312, Fields, -1 };
};

struct CreatureMovementInfoMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_FLOAT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1125666, -1, 1, 0x39F710E3, Fields, -1 };
};

struct CreatureSoundDataMeta
{
    static constexpr DB2MetaField Fields[37] =
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

    static constexpr DB2Meta Instance{ 1344466, -1, 37, 0x7C3C39B9, Fields, -1 };
};

struct CreatureTypeMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_STRING, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1131315, -1, 2, 0x7BA9D2F8, Fields, -1 };
};

struct CreatureXContributionMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1587158, 0, 3, 0x3448DF58, Fields, 2 };
};

struct CriteriaMeta
{
    static constexpr DB2MetaField Fields[11] =
    {
        { FT_INT, 1, true },
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

    static constexpr DB2Meta Instance{ 1263817, -1, 11, 0xA87A5BB9, Fields, -1 };
};

struct CriteriaTreeMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 1, true },
        { FT_SHORT, 1, true },
        { FT_BYTE, 1, true },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1263818, -1, 7, 0x0A1B99C2, Fields, -1 };
};

struct CriteriaTreeXEffectMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_SHORT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1345969, -1, 2, 0x929D9B0C, Fields, 1 };
};

struct CurrencyCategoryMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_STRING, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1125667, -1, 3, 0xC3735D76, Fields, -1 };
};

struct CurrencyTypesMeta
{
    static constexpr DB2MetaField Fields[10] =
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

    static constexpr DB2Meta Instance{ 1095531, -1, 10, 0x6CC25CBF, Fields, -1 };
};

struct CurveMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 892585, -1, 2, 0x17EA5154, Fields, -1 };
};

struct CurvePointMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_FLOAT, 2, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 892586, -1, 3, 0xF36752EB, Fields, -1 };
};

struct DeathThudLookupsMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1279415, -1, 4, 0xD469085C, Fields, -1 };
};

struct DecalPropertiesMeta
{
    static constexpr DB2MetaField Fields[17] =
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

    static constexpr DB2Meta Instance{ 1278176, 0, 17, 0xDD48C72A, Fields, -1 };
};

struct DeclinedWordMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1279100, 1, 2, 0x3FF5EC3E, Fields, -1 };
};

struct DeclinedWordCasesMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_STRING, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1279099, -1, 3, 0x821A20A9, Fields, 2 };
};

struct DestructibleModelDataMeta
{
    static constexpr DB2MetaField Fields[22] =
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

    static constexpr DB2Meta Instance{ 1122116, -1, 22, 0x1092C9AF, Fields, -1 };
};

struct DeviceBlacklistMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 922722, -1, 2, 0xD956413D, Fields, -1 };
};

struct DeviceDefaultSettingsMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 925422, -1, 3, 0x90CFEC8C, Fields, -1 };
};

struct DifficultyMeta
{
    static constexpr DB2MetaField Fields[13] =
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

    static constexpr DB2Meta Instance{ 1352127, -1, 13, 0x92302BB8, Fields, -1 };
};

struct DissolveEffectMeta
{
    static constexpr DB2MetaField Fields[14] =
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

    static constexpr DB2Meta Instance{ 1304325, -1, 14, 0x566413E7, Fields, -1 };
};

struct DriverBlacklistMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 922720, -1, 7, 0x1466ACAD, Fields, -1 };
};

struct DungeonEncounterMeta
{
    static constexpr DB2MetaField Fields[9] =
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

    static constexpr DB2Meta Instance{ 1347279, 6, 9, 0xB04A2596, Fields, 2 };
};

struct DungeonMapMeta
{
    static constexpr DB2MetaField Fields[8] =
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

    static constexpr DB2Meta Instance{ 1347271, 7, 8, 0xB5A245F4, Fields, 2 };
};

struct DungeonMapChunkMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_FLOAT, 1, false },
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1294215, -1, 5, 0x7927A3A7, Fields, 2 };
};

struct DurabilityCostsMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_SHORT, 21, false },
        { FT_SHORT, 8, false },
    };

    static constexpr DB2Meta Instance{ 1283019, -1, 2, 0x8447966A, Fields, -1 };
};

struct DurabilityQualityMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_FLOAT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1130268, -1, 1, 0x6F64793D, Fields, -1 };
};

struct EdgeGlowEffectMeta
{
    static constexpr DB2MetaField Fields[13] =
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

    static constexpr DB2Meta Instance{ 1387381, -1, 13, 0x083BF2C4, Fields, -1 };
};

struct EmotesMeta
{
    static constexpr DB2MetaField Fields[9] =
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

    static constexpr DB2Meta Instance{ 1343602, -1, 9, 0x14467F27, Fields, -1 };
};

struct EmotesTextMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_STRING_NOT_LOCALIZED, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1347273, -1, 2, 0xE85AFA10, Fields, -1 };
};

struct EmotesTextDataMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_STRING, 1, false },
        { FT_BYTE, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1283024, -1, 3, 0x0E19BCF1, Fields, 2 };
};

struct EmotesTextSoundMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1286524, -1, 5, 0x6DFAF9BC, Fields, 4 };
};

struct EnvironmentalDamageMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1278398, -1, 2, 0xC4552C14, Fields, -1 };
};

struct ExhaustionMeta
{
    static constexpr DB2MetaField Fields[8] =
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

    static constexpr DB2Meta Instance{ 1343313, 7, 8, 0xE6E16045, Fields, -1 };
};

struct FactionMeta
{
    static constexpr DB2MetaField Fields[16] =
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

    static constexpr DB2Meta Instance{ 1361972, 3, 16, 0x6BFE8737, Fields, -1 };
};

struct FactionGroupMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
        { FT_INT, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1343595, 2, 6, 0x7A7F9A51, Fields, -1 };
};

struct FactionTemplateMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 4, false },
        { FT_SHORT, 4, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1361579, -1, 7, 0x6F1D2135, Fields, -1 };
};

struct FootprintTexturesMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1308056, -1, 3, 0xFD6FF285, Fields, -1 };
};

struct FootstepTerrainLookupMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1267647, -1, 4, 0x454895AE, Fields, -1 };
};

struct FriendshipRepReactionMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_STRING, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1237638, -1, 3, 0x9C412E5B, Fields, 2 };
};

struct FriendshipReputationMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 1, true },
        { FT_SHORT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1237639, 3, 4, 0x406EE0AB, Fields, -1 };
};

struct FullScreenEffectMeta
{
    static constexpr DB2MetaField Fields[27] =
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

    static constexpr DB2Meta Instance{ 1348282, -1, 27, 0x5CBF1D1B, Fields, -1 };
};

struct GMSurveyAnswersMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_STRING, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1283025, -1, 3, 0x422747F6, Fields, 2 };
};

struct GMSurveyCurrentSurveyMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1278177, -1, 1, 0x617205BF, Fields, -1 };
};

struct GMSurveyQuestionsMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_STRING, 1, false },
    };

    static constexpr DB2Meta Instance{ 1278178, -1, 1, 0x9D852FDC, Fields, -1 };
};

struct GMSurveySurveysMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_BYTE, 15, false },
    };

    static constexpr DB2Meta Instance{ 1283020, -1, 1, 0x17FEF812, Fields, -1 };
};

struct GameObjectArtKitMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_INT, 1, true },
        { FT_INT, 3, true },
    };

    static constexpr DB2Meta Instance{ 1266737, -1, 2, 0x6F65BC41, Fields, -1 };
};

struct GameObjectDiffAnimMapMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1302847, -1, 4, 0x89A617CF, Fields, 3 };
};

struct GameObjectDisplayInfoMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_INT, 1, true },
        { FT_FLOAT, 6, false },
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_SHORT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1266277, -1, 5, 0x9F2098D1, Fields, -1 };
};

struct GameObjectDisplayInfoXSoundKitMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1345272, -1, 3, 0x4BBA66F2, Fields, 2 };
};

struct GameObjectsMeta
{
    static constexpr DB2MetaField Fields[12] =
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

    static constexpr DB2Meta Instance{ 841620, 11, 12, 0x597E8643, Fields, 5 };
};

struct GameTipsMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_STRING, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1368021, -1, 4, 0x547E3F0F, Fields, -1 };
};

struct GarrAbilityMeta
{
    static constexpr DB2MetaField Fields[8] =
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

    static constexpr DB2Meta Instance{ 966238, 7, 8, 0x5DF95DBD, Fields, -1 };
};

struct GarrAbilityCategoryMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_STRING, 1, false },
    };

    static constexpr DB2Meta Instance{ 1020248, -1, 1, 0x96663ABF, Fields, -1 };
};

struct GarrAbilityEffectMeta
{
    static constexpr DB2MetaField Fields[12] =
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

    static constexpr DB2Meta Instance{ 966241, 11, 12, 0xE6A6CB99, Fields, 4 };
};

struct GarrBuildingMeta
{
    static constexpr DB2MetaField Fields[24] =
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

    static constexpr DB2Meta Instance{ 929747, -1, 24, 0x200F9858, Fields, -1 };
};

struct GarrBuildingDoodadSetMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 943937, -1, 5, 0x2A861C7F, Fields, -1 };
};

struct GarrBuildingPlotInstMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_FLOAT, 2, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 983298, 4, 5, 0xF45B6227, Fields, 3 };
};

struct GarrClassSpecMeta
{
    static constexpr DB2MetaField Fields[8] =
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

    static constexpr DB2Meta Instance{ 981570, 7, 8, 0x194CD478, Fields, -1 };
};

struct GarrClassSpecPlayerCondMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1380674, -1, 6, 0x06936172, Fields, -1 };
};

struct GarrEncounterMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 975304, 5, 7, 0x63EF121A, Fields, -1 };
};

struct GarrEncounterSetXEncounterMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1354772, 0, 3, 0x3AA64423, Fields, 2 };
};

struct GarrEncounterXMechanicMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 967961, -1, 3, 0x97080E17, Fields, 2 };
};

struct GarrFollItemSetMemberMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 981569, -1, 4, 0xCA1C4CBF, Fields, 3 };
};

struct GarrFollSupportSpellMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1345970, -1, 4, 0xB7DBA2D1, Fields, 3 };
};

struct GarrFollowerMeta
{
    static constexpr DB2MetaField Fields[32] =
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

    static constexpr DB2Meta Instance{ 949906, 31, 32, 0xAAB75E04, Fields, -1 };
};

struct GarrFollowerLevelXPMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 970979, -1, 4, 0x1ED485E2, Fields, -1 };
};

struct GarrFollowerQualityMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1027793, -1, 7, 0xAFF4CF7E, Fields, -1 };
};

struct GarrFollowerSetXFollowerMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1361029, -1, 2, 0xDB0E0A17, Fields, 1 };
};

struct GarrFollowerTypeMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1118784, -1, 7, 0xD676FBC0, Fields, -1 };
};

struct GarrFollowerUICreatureMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { FT_INT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1412636, -1, 6, 0x7E275E96, Fields, 5 };
};

struct GarrFollowerXAbilityMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 968468, -1, 3, 0x996447F1, Fields, 2 };
};

struct GarrItemLevelUpgradeDataMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1572314, 0, 5, 0x069F44E5, Fields, -1 };
};

struct GarrMechanicMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_FLOAT, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 967963, -1, 3, 0xAB49DA61, Fields, -1 };
};

struct GarrMechanicSetXMechanicMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1391531, 1, 3, 0x59514F7B, Fields, 2 };
};

struct GarrMechanicTypeMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
        { FT_INT, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 967964, 4, 5, 0x6FEA569F, Fields, -1 };
};

struct GarrMissionMeta
{
    static constexpr DB2MetaField Fields[29] =
    {
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
        { FT_INT, 1, true },
        { FT_INT, 1, false },
        { FT_FLOAT, 2, false },
        { FT_FLOAT, 2, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, true },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, true },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 967962, 19, 29, 0xDDD70490, Fields, 28 };
};

struct GarrMissionTextureMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_FLOAT, 2, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1125220, -1, 2, 0x3071301C, Fields, -1 };
};

struct GarrMissionTypeMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_STRING, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 984174, -1, 3, 0xA289655E, Fields, -1 };
};

struct GarrMissionXEncounterMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 967960, 1, 5, 0xBCB016C6, Fields, 4 };
};

struct GarrMissionXFollowerMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1359096, -1, 3, 0x1EBABA29, Fields, 2 };
};

struct GarrMssnBonusAbilityMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_FLOAT, 1, false },
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1138458, -1, 5, 0x35F5AE92, Fields, -1 };
};

struct GarrPlotMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 1, true },
        { FT_INT, 1, true },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 2, false },
    };

    static constexpr DB2Meta Instance{ 937634, -1, 7, 0xE12049E0, Fields, -1 };
};

struct GarrPlotBuildingMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 929743, -1, 2, 0x3F77A6FA, Fields, -1 };
};

struct GarrPlotInstanceMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_STRING_NOT_LOCALIZED, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 929742, -1, 2, 0xB708BB37, Fields, -1 };
};

struct GarrPlotUICategoryMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_STRING, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 937635, -1, 2, 0xA94645EE, Fields, -1 };
};

struct GarrSiteLevelMeta
{
    static constexpr DB2MetaField Fields[9] =
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

    static constexpr DB2Meta Instance{ 939295, -1, 9, 0xD3979C38, Fields, -1 };
};

struct GarrSiteLevelPlotInstMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_FLOAT, 2, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 940404, -1, 4, 0xC4E74201, Fields, 1 };
};

struct GarrSpecializationMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
        { FT_INT, 1, false },
        { FT_FLOAT, 2, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 937647, -1, 7, 0x797A0F2F, Fields, -1 };
};

struct GarrStringMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_STRING, 1, false },
    };

    static constexpr DB2Meta Instance{ 1416758, -1, 1, 0xE1C08C0C, Fields, -1 };
};

struct GarrTalentMeta
{
    static constexpr DB2MetaField Fields[20] =
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

    static constexpr DB2Meta Instance{ 1361032, 7, 20, 0x53D5FD16, Fields, 8 };
};

struct GarrTalentTreeMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, true },
        { FT_BYTE, 1, true },
        { FT_INT, 1, true },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1361030, -1, 5, 0x676CBC04, Fields, -1 };
};

struct GarrTypeMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 2, false },
    };

    static constexpr DB2Meta Instance{ 1333161, -1, 5, 0x7C52F3B7, Fields, -1 };
};

struct GarrUiAnimClassInfoMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { FT_FLOAT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 976037, -1, 6, 0xDBF4633D, Fields, -1 };
};

struct GarrUiAnimRaceInfoMeta
{
    static constexpr DB2MetaField Fields[13] =
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

    static constexpr DB2Meta Instance{ 976035, -1, 13, 0x44B9C1DE, Fields, -1 };
};

struct GemPropertiesMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1343604, -1, 3, 0x84558CAB, Fields, -1 };
};

struct GlobalStringsMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1394440, -1, 3, 0x2CA3EA1E, Fields, -1 };
};

struct GlyphBindableSpellMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_INT, 1, true },
        { FT_SHORT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1270147, -1, 2, 0xEA228DFA, Fields, 1 };
};

struct GlyphExclusiveCategoryMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_STRING, 1, false },
    };

    static constexpr DB2Meta Instance{ 948546, -1, 1, 0xFE598FCD, Fields, -1 };
};

struct GlyphPropertiesMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1345274, -1, 4, 0xD0046829, Fields, -1 };
};

struct GlyphRequiredSpecMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 948496, -1, 2, 0xDD6481CE, Fields, 1 };
};

struct GroundEffectDoodadMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1308057, -1, 4, 0x0376B2D6, Fields, -1 };
};

struct GroundEffectTextureMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_SHORT, 4, false },
        { FT_BYTE, 4, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1308499, -1, 4, 0x84549F0A, Fields, -1 };
};

struct GroupFinderActivityMeta
{
    static constexpr DB2MetaField Fields[14] =
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

    static constexpr DB2Meta Instance{ 974813, -1, 14, 0x3EF2F3BD, Fields, -1 };
};

struct GroupFinderActivityGrpMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_STRING, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 974814, -1, 2, 0xC9458196, Fields, -1 };
};

struct GroupFinderCategoryMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_STRING, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 974812, -1, 3, 0x9213552F, Fields, -1 };
};

struct GuildColorBackgroundMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1286526, -1, 3, 0xCC0CEFF1, Fields, -1 };
};

struct GuildColorBorderMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1286527, -1, 3, 0xCC0CEFF1, Fields, -1 };
};

struct GuildColorEmblemMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1286525, -1, 3, 0xCC0CEFF1, Fields, -1 };
};

struct GuildPerkSpellsMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1135238, -1, 1, 0xC15D6E9F, Fields, -1 };
};

struct HeirloomMeta
{
    static constexpr DB2MetaField Fields[10] =
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

    static constexpr DB2Meta Instance{ 1097696, 9, 10, 0x36887C6F, Fields, -1 };
};

struct HelmetAnimScalingMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_FLOAT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1348283, -1, 3, 0xB9EC1058, Fields, 2 };
};

struct HelmetGeosetVisDataMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_INT, 9, false },
    };

    static constexpr DB2Meta Instance{ 1294216, -1, 1, 0x3B38D999, Fields, -1 };
};

struct HighlightColorMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 996358, -1, 5, 0x5FADC5D3, Fields, -1 };
};

struct HolidayDescriptionsMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_STRING, 1, false },
    };

    static constexpr DB2Meta Instance{ 996360, -1, 1, 0x92A95550, Fields, -1 };
};

struct HolidayNamesMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_STRING, 1, false },
    };

    static constexpr DB2Meta Instance{ 996359, -1, 1, 0x96663ABF, Fields, -1 };
};

struct HolidaysMeta
{
    static constexpr DB2MetaField Fields[12] =
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

    static constexpr DB2Meta Instance{ 996357, 0, 12, 0x7C3E60FC, Fields, -1 };
};

struct HotfixMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1590224, -1, 3, 0x3747930B, Fields, -1 };
};

struct ImportPriceArmorMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1121229, -1, 4, 0x1F7A850F, Fields, -1 };
};

struct ImportPriceQualityMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_FLOAT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1121228, -1, 1, 0x6F64793D, Fields, -1 };
};

struct ImportPriceShieldMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_FLOAT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1121227, -1, 1, 0x6F64793D, Fields, -1 };
};

struct ImportPriceWeaponMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_FLOAT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1121230, -1, 1, 0x6F64793D, Fields, -1 };
};

struct InvasionClientDataMeta
{
    static constexpr DB2MetaField Fields[10] =
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

    static constexpr DB2Meta Instance{ 1336651, 2, 10, 0x4C93379F, Fields, 9 };
};

struct ItemMeta
{
    static constexpr DB2MetaField Fields[8] =
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

    static constexpr DB2Meta Instance{ 841626, -1, 8, 0x0DFCC83D, Fields, -1 };
};

struct ItemAppearanceMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_INT, 1, true },
        { FT_INT, 1, true },
        { FT_INT, 1, true },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 982462, -1, 4, 0x06D35A59, Fields, -1 };
};

struct ItemAppearanceXUiCameraMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1248126, -1, 2, 0x67747E15, Fields, -1 };
};

struct ItemArmorQualityMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_FLOAT, 7, false },
        { FT_SHORT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1283021, -1, 2, 0x85642CC0, Fields, -1 };
};

struct ItemArmorShieldMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_FLOAT, 7, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1277741, -1, 2, 0xC2186F95, Fields, -1 };
};

struct ItemArmorTotalMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_SHORT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1283022, -1, 5, 0x45C396DD, Fields, -1 };
};

struct ItemBagFamilyMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_STRING, 1, false },
    };

    static constexpr DB2Meta Instance{ 1278179, -1, 1, 0x96663ABF, Fields, -1 };
};

struct ItemBonusMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_INT, 3, true },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 959070, -1, 4, 0xE12FB1A0, Fields, 1 };
};

struct ItemBonusListLevelDeltaMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_SHORT, 1, true },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1320358, 1, 2, 0xDFBF5AC9, Fields, -1 };
};

struct ItemBonusTreeNodeMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 987134, -1, 5, 0x84FE93B7, Fields, 4 };
};

struct ItemChildEquipmentMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, true },
        { FT_BYTE, 1, false },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1247926, -1, 3, 0xB6940674, Fields, 2 };
};

struct ItemClassMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_STRING, 1, false },
        { FT_FLOAT, 1, false },
        { FT_BYTE, 1, true },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1140189, -1, 4, 0xA1E4663C, Fields, -1 };
};

struct ItemContextPickerEntryMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1405665, -1, 6, 0x4A6DF90B, Fields, 5 };
};

struct ItemCurrencyCostMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 801670, -1, 1, 0xE2FF5688, Fields, 0 };
};

struct ItemDamageAmmoMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_FLOAT, 7, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1277740, -1, 2, 0xC2186F95, Fields, -1 };
};

struct ItemDamageOneHandMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_FLOAT, 7, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1277743, -1, 2, 0xC2186F95, Fields, -1 };
};

struct ItemDamageOneHandCasterMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_FLOAT, 7, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1277739, -1, 2, 0xC2186F95, Fields, -1 };
};

struct ItemDamageTwoHandMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_FLOAT, 7, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1277738, -1, 2, 0xC2186F95, Fields, -1 };
};

struct ItemDamageTwoHandCasterMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_FLOAT, 7, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1277742, -1, 2, 0xC2186F95, Fields, -1 };
};

struct ItemDisenchantLootMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, true },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, true },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1134087, -1, 7, 0xC0D926CC, Fields, 6 };
};

struct ItemDisplayInfoMeta
{
    static constexpr DB2MetaField Fields[15] =
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

    static constexpr DB2Meta Instance{ 1266429, -1, 15, 0x99606089, Fields, -1 };
};

struct ItemDisplayInfoMaterialResMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1280614, -1, 3, 0xDEE4ED7B, Fields, 2 };
};

struct ItemDisplayXUiCameraMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1146690, -1, 2, 0xE57737B2, Fields, -1 };
};

struct ItemEffectMeta
{
    static constexpr DB2MetaField Fields[9] =
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

    static constexpr DB2Meta Instance{ 969941, -1, 9, 0xA390FA40, Fields, 8 };
};

struct ItemExtendedCostMeta
{
    static constexpr DB2MetaField Fields[10] =
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

    static constexpr DB2Meta Instance{ 801681, -1, 10, 0xC31F4DEF, Fields, -1 };
};

struct ItemGroupSoundsMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_INT, 4, false },
    };

    static constexpr DB2Meta Instance{ 1283023, -1, 1, 0xDC2EE466, Fields, -1 };
};

struct ItemLevelSelectorMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1588911, -1, 2, 0x8143060E, Fields, -1 };
};

struct ItemLevelSelectorQualityMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, true },
        { FT_BYTE, 1, true },
        { FT_SHORT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1624937, -1, 3, 0xB7174A51, Fields, 2 };
};

struct ItemLevelSelectorQualitySetMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_SHORT, 1, true },
        { FT_SHORT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1624933, -1, 2, 0x20055BA8, Fields, -1 };
};

struct ItemLimitCategoryMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_STRING, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1237440, -1, 3, 0xB6BB188D, Fields, -1 };
};

struct ItemLimitCategoryConditionMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_BYTE, 1, true },
        { FT_INT, 1, false },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1378590, -1, 3, 0xDE8EAD49, Fields, 2 };
};

struct ItemModifiedAppearanceMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { FT_INT, 1, true },
        { FT_INT, 1, false },
        { FT_BYTE, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, true },
    };

    static constexpr DB2Meta Instance{ 982457, 1, 6, 0xE64FD18B, Fields, 0 };
};

struct ItemModifiedAppearanceExtraMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_INT, 1, true },
        { FT_INT, 1, true },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1278399, -1, 5, 0x77212236, Fields, -1 };
};

struct ItemNameDescriptionMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1332559, -1, 2, 0x16760BD4, Fields, -1 };
};

struct ItemPetFoodMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_STRING, 1, false },
    };

    static constexpr DB2Meta Instance{ 1302240, -1, 1, 0xE4923C1F, Fields, -1 };
};

struct ItemPriceBaseMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1121231, -1, 3, 0x4BD234D7, Fields, -1 };
};

struct ItemRandomPropertiesMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_STRING, 1, false },
        { FT_SHORT, 5, false },
    };

    static constexpr DB2Meta Instance{ 1237441, -1, 2, 0xB67375F8, Fields, -1 };
};

struct ItemRandomSuffixMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_STRING, 1, false },
        { FT_SHORT, 5, false },
        { FT_SHORT, 5, false },
    };

    static constexpr DB2Meta Instance{ 1237592, -1, 3, 0x95CAB825, Fields, -1 };
};

struct ItemRangedDisplayInfoMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1270315, -1, 4, 0x687A28D1, Fields, -1 };
};

struct ItemSearchNameMeta
{
    static constexpr DB2MetaField Fields[14] =
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

    static constexpr DB2Meta Instance{ 1273408, 2, 14, 0x2D4B72FA, Fields, -1 };
};

struct ItemSetMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 17, false },
        { FT_SHORT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1343609, -1, 5, 0x847FF58A, Fields, -1 };
};

struct ItemSetSpellMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1314689, -1, 4, 0xF65D0AF8, Fields, 3 };
};

struct ItemSparseMeta
{
    static constexpr DB2MetaField Fields[64] =
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

    static constexpr DB2Meta Instance{ 1572924, -1, 64, 0x4007DE16, Fields, -1 };
};

struct ItemSpecMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1135120, -1, 6, 0xB17B7986, Fields, 3 };
};

struct ItemSpecOverrideMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_SHORT, 1, false },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1134576, -1, 2, 0xE499CD2A, Fields, 1 };
};

struct ItemSubClassMeta
{
    static constexpr DB2MetaField Fields[10] =
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

    static constexpr DB2Meta Instance{ 1261604, -1, 10, 0xDAD92A67, Fields, 3 };
};

struct ItemSubClassMaskMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1302852, -1, 3, 0xFC1DA850, Fields, -1 };
};

struct ItemUpgradeMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 801687, -1, 5, 0x8F3A4137, Fields, -1 };
};

struct ItemVisualsMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_INT, 5, false },
    };

    static constexpr DB2Meta Instance{ 1343605, -1, 1, 0x485EA782, Fields, -1 };
};

struct ItemXBonusTreeMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_SHORT, 1, false },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 987133, -1, 2, 0x87C4B605, Fields, 1 };
};

struct JournalEncounterMeta
{
    static constexpr DB2MetaField Fields[11] =
    {
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
        { FT_FLOAT, 2, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, true },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1240336, -1, 11, 0x2935A0FD, Fields, -1 };
};

struct JournalEncounterCreatureMeta
{
    static constexpr DB2MetaField Fields[8] =
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

    static constexpr DB2Meta Instance{ 1301155, 7, 8, 0x22C79A42, Fields, 5 };
};

struct JournalEncounterItemMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1344467, 5, 6, 0x39230FF9, Fields, 1 };
};

struct JournalEncounterSectionMeta
{
    static constexpr DB2MetaField Fields[15] =
    {
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, true },
        { FT_INT, 1, true },
        { FT_INT, 1, true },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, true },
    };

    static constexpr DB2Meta Instance{ 1134413, -1, 15, 0x13E56B12, Fields, -1 };
};

struct JournalEncounterXDifficultyMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_BYTE, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1121901, -1, 2, 0x321FD542, Fields, 1 };
};

struct JournalEncounterXMapLocMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { FT_FLOAT, 2, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1722928, -1, 6, 0x430540E4, Fields, 5 };
};

struct JournalInstanceMeta
{
    static constexpr DB2MetaField Fields[11] =
    {
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
        { FT_INT, 1, true },
        { FT_INT, 1, true },
        { FT_INT, 1, true },
        { FT_INT, 1, true },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1237438, 10, 11, 0x1691CC3D, Fields, -1 };
};

struct JournalItemXDifficultyMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_BYTE, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1277744, -1, 2, 0x60D9CA15, Fields, 1 };
};

struct JournalSectionXDifficultyMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_BYTE, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1121900, -1, 2, 0x243822A7, Fields, 1 };
};

struct JournalTierMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_STRING, 1, false },
    };

    static constexpr DB2Meta Instance{ 1349056, -1, 1, 0x8046B23F, Fields, -1 };
};

struct JournalTierXInstanceMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1285009, -1, 2, 0x9C4F4D2A, Fields, 0 };
};

struct KeychainMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_BYTE, 32, false },
    };

    static constexpr DB2Meta Instance{ 801693, -1, 1, 0x5B214E82, Fields, -1 };
};

struct KeystoneAffixMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1344761, -1, 3, 0x1BCB46AA, Fields, -1 };
};

struct LFGDungeonExpansionMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1343606, -1, 7, 0xB41DEA61, Fields, 6 };
};

struct LFGDungeonGroupMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_STRING, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1135058, -1, 4, 0x724D58E7, Fields, -1 };
};

struct LFGDungeonsMeta
{
    static constexpr DB2MetaField Fields[33] =
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

    static constexpr DB2Meta Instance{ 1361033, -1, 33, 0xF02081A0, Fields, -1 };
};

struct LFGRoleRequirementMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 982805, -1, 3, 0x7EB8A359, Fields, 2 };
};

struct LanguageWordsMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_STRING_NOT_LOCALIZED, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 984702, -1, 2, 0xC15912BD, Fields, -1 };
};

struct LanguagesMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1135325, 1, 2, 0x6FA5D0C4, Fields, -1 };
};

struct LfgDungeonsGroupingMapMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1339818, -1, 3, 0x8CB35C50, Fields, 2 };
};

struct LightMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_FLOAT, 3, false },
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_SHORT, 1, true },
        { FT_SHORT, 8, false },
    };

    static constexpr DB2Meta Instance{ 1375579, -1, 5, 0x25025A13, Fields, -1 };
};

struct LightDataMeta
{
    static constexpr DB2MetaField Fields[35] =
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

    static constexpr DB2Meta Instance{ 1375580, -1, 35, 0x2D2BA7FA, Fields, 34 };
};

struct LightParamsMeta
{
    static constexpr DB2MetaField Fields[11] =
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

    static constexpr DB2Meta Instance{ 1334669, 10, 11, 0xF67DE2AF, Fields, -1 };
};

struct LightSkyboxMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1308501, -1, 4, 0x8817C02C, Fields, -1 };
};

struct LiquidMaterialMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1132538, -1, 2, 0x62BE0340, Fields, -1 };
};

struct LiquidObjectMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1308058, -1, 5, 0xACC168A6, Fields, -1 };
};

struct LiquidTypeMeta
{
    static constexpr DB2MetaField Fields[19] =
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

    static constexpr DB2Meta Instance{ 1371380, -1, 19, 0x3313BBF3, Fields, -1 };
};

struct LoadingScreenTaxiSplinesMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_FLOAT, 10, false },
        { FT_FLOAT, 10, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1302239, -1, 5, 0x4D6292C3, Fields, -1 };
};

struct LoadingScreensMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1266541, -1, 3, 0x99C0EB78, Fields, -1 };
};

struct LocaleMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_INT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 801706, -1, 4, 0x592AE13B, Fields, -1 };
};

struct LocationMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_FLOAT, 3, false },
        { FT_FLOAT, 3, false },
    };

    static constexpr DB2Meta Instance{ 801707, -1, 2, 0xBBC1BE7A, Fields, -1 };
};

struct LockMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_INT, 8, true },
        { FT_SHORT, 8, false },
        { FT_BYTE, 8, false },
        { FT_BYTE, 8, false },
    };

    static constexpr DB2Meta Instance{ 1343608, -1, 4, 0xDAC7F42F, Fields, -1 };
};

struct LockTypeMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1284823, 4, 5, 0xCD5E1D2F, Fields, -1 };
};

struct LookAtControllerMeta
{
    static constexpr DB2MetaField Fields[18] =
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

    static constexpr DB2Meta Instance{ 1098785, -1, 18, 0x543C0D56, Fields, -1 };
};

struct MailTemplateMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_STRING, 1, false },
    };

    static constexpr DB2Meta Instance{ 1240344, -1, 1, 0x25C8D6CC, Fields, -1 };
};

struct ManagedWorldStateMeta
{
    static constexpr DB2MetaField Fields[10] =
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

    static constexpr DB2Meta Instance{ 1587159, 9, 10, 0xBA06FC33, Fields, -1 };
};

struct ManagedWorldStateBuffMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1587155, -1, 4, 0x6D201DC7, Fields, 3 };
};

struct ManagedWorldStateInputMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1587151, -1, 3, 0x0FC1A9B0, Fields, -1 };
};

struct ManifestInterfaceActionIconMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1375803, 0, 1, 0x6A529F37, Fields, -1 };
};

struct ManifestInterfaceDataMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
    };

    static constexpr DB2Meta Instance{ 1375801, -1, 2, 0x9E5F4C99, Fields, -1 };
};

struct ManifestInterfaceItemIconMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1375804, 0, 1, 0x6A529F37, Fields, -1 };
};

struct ManifestInterfaceTOCDataMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_STRING, 1, false },
    };

    static constexpr DB2Meta Instance{ 1267335, -1, 1, 0x6F7D397D, Fields, -1 };
};

struct ManifestMP3Meta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1375802, 0, 1, 0x6A529F37, Fields, -1 };
};

struct MapMeta
{
    static constexpr DB2MetaField Fields[21] =
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

    static constexpr DB2Meta Instance{ 1349477, -1, 21, 0xF568DF12, Fields, -1 };
};

struct MapCelestialBodyMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_SHORT, 1, false },
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1597466, -1, 3, 0xBDE1C11C, Fields, 2 };
};

struct MapChallengeModeMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 3, true },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 801709, 1, 5, 0xC5261662, Fields, 2 };
};

struct MapDifficultyMeta
{
    static constexpr DB2MetaField Fields[9] =
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

    static constexpr DB2Meta Instance{ 1367868, -1, 9, 0x2B3B759E, Fields, 8 };
};

struct MapDifficultyXConditionMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, true },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1375435, -1, 4, 0x5F5D7102, Fields, 3 };
};

struct MapLoadingScreenMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_FLOAT, 2, false },
        { FT_FLOAT, 2, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1719707, -1, 5, 0xBBE57FE4, Fields, 4 };
};

struct MarketingPromotionsXLocaleMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 801710, -1, 7, 0x80362F57, Fields, -1 };
};

struct MaterialMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1294217, -1, 4, 0x0BC8C134, Fields, -1 };
};

struct MinorTalentMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1347274, -1, 3, 0xAAEF0DF8, Fields, 2 };
};

struct MissileTargetingMeta
{
    static constexpr DB2MetaField Fields[12] =
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

    static constexpr DB2Meta Instance{ 1710117, -1, 12, 0x2305491E, Fields, -1 };
};

struct ModelAnimCloakDampeningMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1465904, -1, 3, 0x839B4263, Fields, 2 };
};

struct ModelFileDataMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1337833, 1, 3, 0xA395EB50, Fields, 2 };
};

struct ModelRibbonQualityMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1399953, -1, 2, 0x38F764D9, Fields, 1 };
};

struct ModifierTreeMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { FT_INT, 1, true },
        { FT_INT, 1, true },
        { FT_INT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, true },
        { FT_BYTE, 1, true },
        { FT_BYTE, 1, true },
    };

    static constexpr DB2Meta Instance{ 1267645, -1, 7, 0x7718AFC2, Fields, -1 };
};

struct MountMeta
{
    static constexpr DB2MetaField Fields[11] =
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

    static constexpr DB2Meta Instance{ 921760, 8, 11, 0x4D812F19, Fields, -1 };
};

struct MountCapabilityMeta
{
    static constexpr DB2MetaField Fields[8] =
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

    static constexpr DB2Meta Instance{ 1114709, 6, 8, 0xB0D11D52, Fields, -1 };
};

struct MountTypeXCapabilityMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1114715, -1, 3, 0xA34A8445, Fields, 0 };
};

struct MountXDisplayMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, true },
        { FT_INT, 1, false },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1576117, -1, 3, 0xD59B9FE4, Fields, 2 };
};

struct MovieMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1332556, -1, 4, 0xF3E9AE3B, Fields, -1 };
};

struct MovieFileDataMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1301154, -1, 1, 0xAA16D59F, Fields, -1 };
};

struct MovieVariationMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1339819, -1, 3, 0x3BFD250E, Fields, 2 };
};

struct NPCModelItemSlotDisplayInfoMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1340661, -1, 3, 0x11D16204, Fields, 2 };
};

struct NPCSoundsMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_INT, 4, false },
    };

    static constexpr DB2Meta Instance{ 1282621, -1, 1, 0x672E1A6B, Fields, -1 };
};

struct NameGenMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_STRING_NOT_LOCALIZED, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1122117, -1, 3, 0x2EF936CD, Fields, -1 };
};

struct NamesProfanityMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_STRING_NOT_LOCALIZED, 1, false },
        { FT_BYTE, 1, true },
    };

    static constexpr DB2Meta Instance{ 1117086, -1, 2, 0xDFB56E0E, Fields, -1 };
};

struct NamesReservedMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_STRING_NOT_LOCALIZED, 1, false },
    };

    static constexpr DB2Meta Instance{ 1117085, -1, 1, 0xE4923C1F, Fields, -1 };
};

struct NamesReservedLocaleMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_STRING_NOT_LOCALIZED, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1117087, -1, 2, 0xC1403093, Fields, -1 };
};

struct ObjectEffectMeta
{
    static constexpr DB2MetaField Fields[8] =
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

    static constexpr DB2Meta Instance{ 1090577, -1, 8, 0x6A0CF743, Fields, -1 };
};

struct ObjectEffectModifierMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_FLOAT, 4, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1090575, -1, 4, 0xA482B053, Fields, -1 };
};

struct ObjectEffectPackageElemMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1090578, -1, 3, 0x8CF043E5, Fields, -1 };
};

struct OutlineEffectMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { FT_FLOAT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1279739, -1, 6, 0x466B2BC4, Fields, -1 };
};

struct OverrideSpellDataMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 10, true },
        { FT_INT, 1, true },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1002186, -1, 3, 0x9417628C, Fields, -1 };
};

struct PVPBracketTypesMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_BYTE, 1, false },
        { FT_INT, 4, false },
    };

    static constexpr DB2Meta Instance{ 1394275, -1, 2, 0x7C55E5BB, Fields, -1 };
};

struct PVPDifficultyMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1339820, -1, 4, 0x970B5E15, Fields, 3 };
};

struct PVPItemMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_INT, 1, true },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 972287, -1, 2, 0xBD449801, Fields, -1 };
};

struct PageTextMaterialMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_STRING, 1, false },
    };

    static constexpr DB2Meta Instance{ 1271600, -1, 1, 0x96663ABF, Fields, -1 };
};

struct PaperDollItemFrameMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_STRING, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1252503, -1, 3, 0x66B0597E, Fields, -1 };
};

struct ParagonReputationMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, true },
        { FT_INT, 1, true },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1581183, -1, 3, 0xD7712F98, Fields, 2 };
};

struct ParticleColorMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 3, false },
        { FT_INT, 3, false },
        { FT_INT, 3, false },
    };

    static constexpr DB2Meta Instance{ 1284820, -1, 3, 0x1576D1E1, Fields, -1 };
};

struct PathMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 801732, -1, 7, 0x5017579F, Fields, -1 };
};

struct PathNodeMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 801733, 0, 4, 0x76615830, Fields, -1 };
};

struct PathNodePropertyMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 801734, 3, 5, 0x92C03009, Fields, -1 };
};

struct PathPropertyMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 801735, 3, 4, 0x3D29C266, Fields, -1 };
};

struct PhaseMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1348558, -1, 1, 0x0043219C, Fields, -1 };
};

struct PhaseShiftZoneSoundsMeta
{
    static constexpr DB2MetaField Fields[13] =
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

    static constexpr DB2Meta Instance{ 1267336, -1, 13, 0x85ACB830, Fields, -1 };
};

struct PhaseXPhaseGroupMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 987581, -1, 2, 0x66517AF6, Fields, 1 };
};

struct PlayerConditionMeta
{
    static constexpr DB2MetaField Fields[81] =
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

    static constexpr DB2Meta Instance{ 1045411, 2, 81, 0x5B3DA113, Fields, -1 };
};

struct PositionerMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_FLOAT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1251523, -1, 4, 0xE830F1B1, Fields, -1 };
};

struct PositionerStateMeta
{
    static constexpr DB2MetaField Fields[8] =
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

    static constexpr DB2Meta Instance{ 1251506, -1, 8, 0x6C975DF4, Fields, -1 };
};

struct PositionerStateEntryMeta
{
    static constexpr DB2MetaField Fields[11] =
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

    static constexpr DB2Meta Instance{ 1251533, -1, 11, 0x667ED965, Fields, -1 };
};

struct PowerDisplayMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_STRING_NOT_LOCALIZED, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1332557, -1, 5, 0xFD152E5B, Fields, -1 };
};

struct PowerTypeMeta
{
    static constexpr DB2MetaField Fields[12] =
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

    static constexpr DB2Meta Instance{ 1266022, -1, 12, 0x0C3844E1, Fields, -1 };
};

struct PrestigeLevelInfoMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 1, true },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1275869, -1, 4, 0xA7B2D559, Fields, -1 };
};

struct PvpRewardMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, true },
        { FT_INT, 1, true },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1307154, -1, 3, 0x72F4C016, Fields, -1 };
};

struct PvpScalingEffectMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_FLOAT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1591100, -1, 3, 0x52121A41, Fields, 1 };
};

struct PvpScalingEffectTypeMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_STRING, 1, false },
    };

    static constexpr DB2Meta Instance{ 1591098, -1, 1, 0x96663ABF, Fields, -1 };
};

struct PvpTalentMeta
{
    static constexpr DB2MetaField Fields[10] =
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

    static constexpr DB2Meta Instance{ 1302853, -1, 10, 0x6EB51740, Fields, -1 };
};

struct PvpTalentUnlockMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, true },
        { FT_INT, 1, true },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1302848, -1, 3, 0x465C83BC, Fields, -1 };
};

struct QuestFactionRewardMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_SHORT, 10, true },
    };

    static constexpr DB2Meta Instance{ 1282622, -1, 1, 0xB0E02541, Fields, -1 };
};

struct QuestFeedbackEffectMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1343388, -1, 6, 0x89D55A27, Fields, -1 };
};

struct QuestInfoMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_STRING, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1120960, -1, 4, 0x4F45F445, Fields, -1 };
};

struct QuestLineMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_STRING, 1, false },
    };

    static constexpr DB2Meta Instance{ 973430, -1, 1, 0x8046B23F, Fields, -1 };
};

struct QuestLineXQuestMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 973441, -1, 3, 0x8FA4A9C7, Fields, -1 };
};

struct QuestMoneyRewardMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_INT, 10, false },
    };

    static constexpr DB2Meta Instance{ 1139047, -1, 1, 0x86397302, Fields, -1 };
};

struct QuestObjectiveMeta
{
    static constexpr DB2MetaField Fields[8] =
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

    static constexpr DB2Meta Instance{ 1251960, -1, 8, 0xDD995180, Fields, 7 };
};

struct QuestPOIBlobMeta
{
    static constexpr DB2MetaField Fields[8] =
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

    static constexpr DB2Meta Instance{ 1251882, 0, 8, 0xEC15976E, Fields, 2 };
};

struct QuestPOIPointMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1251883, 0, 4, 0x8CF2B119, Fields, 3 };
};

struct QuestPackageItemMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_INT, 1, true },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 801743, -1, 4, 0xCF9401CF, Fields, -1 };
};

struct QuestSortMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_STRING, 1, false },
        { FT_BYTE, 1, true },
    };

    static constexpr DB2Meta Instance{ 1134585, -1, 2, 0xAD7072C6, Fields, -1 };
};

struct QuestV2Meta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1139443, -1, 1, 0x70495C9B, Fields, -1 };
};

struct QuestV2CliTaskMeta
{
    static constexpr DB2MetaField Fields[24] =
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

    static constexpr DB2Meta Instance{ 1028735, 20, 24, 0x3F026A14, Fields, -1 };
};

struct QuestXGroupActivityMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1573634, -1, 2, 0x06CC45D3, Fields, -1 };
};

struct QuestXPMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_SHORT, 10, false },
    };

    static constexpr DB2Meta Instance{ 1139378, -1, 1, 0xCB76B4C0, Fields, -1 };
};

struct RandPropPointsMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 5, false },
        { FT_INT, 5, false },
        { FT_INT, 5, false },
    };

    static constexpr DB2Meta Instance{ 1310245, -1, 3, 0x4E2C0BCC, Fields, -1 };
};

struct RelicSlotTierRequirementMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1716803, -1, 3, 0x129FCC09, Fields, -1 };
};

struct RelicTalentMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1671256, -1, 5, 0x7A5963FD, Fields, -1 };
};

struct ResearchBranchMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1133729, -1, 6, 0x58A3876E, Fields, -1 };
};

struct ResearchFieldMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_STRING, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1133711, 2, 3, 0x85868B9F, Fields, -1 };
};

struct ResearchProjectMeta
{
    static constexpr DB2MetaField Fields[9] =
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

    static constexpr DB2Meta Instance{ 1134090, 6, 9, 0xB1CAB80B, Fields, -1 };
};

struct ResearchSiteMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1134091, -1, 4, 0x25F7DCC7, Fields, -1 };
};

struct ResistancesMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_STRING, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1135072, -1, 3, 0xA3EAE5AE, Fields, -1 };
};

struct RewardPackMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { FT_INT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_BYTE, 1, true },
        { FT_BYTE, 1, false },
        { FT_INT, 1, true },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1307156, -1, 6, 0xDB6CC0AB, Fields, -1 };
};

struct RewardPackXCurrencyTypeMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, true },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1307153, -1, 3, 0x217E6712, Fields, 2 };
};

struct RewardPackXItemMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, true },
        { FT_INT, 1, true },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1307155, -1, 3, 0x74F6B9BD, Fields, 2 };
};

struct RibbonQualityMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1398908, -1, 5, 0xC75DAEA8, Fields, -1 };
};

struct RulesetItemUpgradeMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_INT, 1, true },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 801749, -1, 2, 0xFB641AE0, Fields, -1 };
};

struct SDReplacementModelMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1712172, -1, 1, 0xE1F906C2, Fields, -1 };
};

struct SandboxScalingMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, true },
        { FT_INT, 1, true },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1776833, -1, 3, 0x5200B7F5, Fields, -1 };
};

struct ScalingStatDistributionMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_SHORT, 1, false },
        { FT_INT, 1, true },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1141728, -1, 3, 0xDED48286, Fields, -1 };
};

struct ScenarioMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_STRING, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1139062, -1, 4, 0xD052232A, Fields, -1 };
};

struct ScenarioEventEntryMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1141065, -1, 2, 0x02E80455, Fields, -1 };
};

struct ScenarioStepMeta
{
    static constexpr DB2MetaField Fields[9] =
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

    static constexpr DB2Meta Instance{ 1132761, -1, 9, 0x201B0EFC, Fields, 2 };
};

struct SceneScriptMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 801754, -1, 2, 0xC694B81E, Fields, -1 };
};

struct SceneScriptGlobalTextMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_STRING_NOT_LOCALIZED, 1, false },
        { FT_STRING_NOT_LOCALIZED, 1, false },
    };

    static constexpr DB2Meta Instance{ 1758036, -1, 2, 0xB9F8FDF1, Fields, -1 };
};

struct SceneScriptPackageMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_STRING_NOT_LOCALIZED, 1, false },
    };

    static constexpr DB2Meta Instance{ 801755, -1, 1, 0x96663ABF, Fields, -1 };
};

struct SceneScriptPackageMemberMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 801756, -1, 4, 0x787A715F, Fields, 0 };
};

struct SceneScriptTextMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_STRING_NOT_LOCALIZED, 1, false },
        { FT_STRING_NOT_LOCALIZED, 1, false },
    };

    static constexpr DB2Meta Instance{ 1758037, -1, 2, 0xB9F8FDF1, Fields, -1 };
};

struct ScheduledIntervalMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1327082, -1, 5, 0x5DD2FF46, Fields, -1 };
};

struct ScheduledWorldStateMeta
{
    static constexpr DB2MetaField Fields[8] =
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

    static constexpr DB2Meta Instance{ 1327083, -1, 8, 0xFCB13A6A, Fields, 0 };
};

struct ScheduledWorldStateGroupMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1327084, -1, 5, 0x21F6EE03, Fields, -1 };
};

struct ScheduledWorldStateXUniqCatMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1388724, 0, 3, 0x7EFF57FD, Fields, 2 };
};

struct ScreenEffectMeta
{
    static constexpr DB2MetaField Fields[12] =
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

    static constexpr DB2Meta Instance{ 1302849, -1, 12, 0x4D5B91C5, Fields, -1 };
};

struct ScreenLocationMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_STRING, 1, false },
    };

    static constexpr DB2Meta Instance{ 1279416, -1, 1, 0x96663ABF, Fields, -1 };
};

struct SeamlessSiteMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1328719, -1, 1, 0xBFE7B9D3, Fields, 0 };
};

struct ServerMessagesMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_STRING, 1, false },
    };

    static constexpr DB2Meta Instance{ 1301141, -1, 1, 0x1C7A1347, Fields, -1 };
};

struct ShadowyEffectMeta
{
    static constexpr DB2MetaField Fields[13] =
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

    static constexpr DB2Meta Instance{ 1239844, -1, 13, 0xE909BB18, Fields, -1 };
};

struct SkillLineMeta
{
    static constexpr DB2MetaField Fields[8] =
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

    static constexpr DB2Meta Instance{ 1240935, -1, 8, 0x3F7E88AF, Fields, -1 };
};

struct SkillLineAbilityMeta
{
    static constexpr DB2MetaField Fields[14] =
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

    static constexpr DB2Meta Instance{ 1266278, 1, 14, 0x97B5A653, Fields, 4 };
};

struct SkillRaceClassInfoMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { FT_LONG, 1, true },
        { FT_SHORT, 1, true },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, true },
        { FT_BYTE, 1, true },
        { FT_BYTE, 1, true },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1240406, -1, 7, 0x9752C2CE, Fields, 1 };
};

struct SoundAmbienceMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 2, false },
    };

    static constexpr DB2Meta Instance{ 1310628, -1, 4, 0xB073D4B5, Fields, -1 };
};

struct SoundAmbienceFlavorMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1267065, -1, 3, 0x2C58D929, Fields, 2 };
};

struct SoundBusMeta
{
    static constexpr DB2MetaField Fields[8] =
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

    static constexpr DB2Meta Instance{ 1310246, 6, 8, 0xB2ACDE2A, Fields, 7 };
};

struct SoundBusOverrideMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { FT_INT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1598732, 0, 7, 0x6D887F48, Fields, 5 };
};

struct SoundEmitterPillPointsMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_FLOAT, 3, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1092317, -1, 2, 0x41FCF15B, Fields, 1 };
};

struct SoundEmittersMeta
{
    static constexpr DB2MetaField Fields[12] =
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

    static constexpr DB2Meta Instance{ 1092316, 8, 12, 0x55A3B17E, Fields, 11 };
};

struct SoundEnvelopeMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1693131, -1, 7, 0x5B78031C, Fields, 0 };
};

struct SoundFilterMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_STRING, 1, false },
    };

    static constexpr DB2Meta Instance{ 1271601, -1, 1, 0x96663ABF, Fields, -1 };
};

struct SoundFilterElemMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_FLOAT, 9, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1267066, -1, 3, 0xE17AC589, Fields, 2 };
};

struct SoundKitMeta
{
    static constexpr DB2MetaField Fields[16] =
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

    static constexpr DB2Meta Instance{ 1237434, 0, 16, 0x0E9CB7AE, Fields, -1 };
};

struct SoundKitAdvancedMeta
{
    static constexpr DB2MetaField Fields[40] =
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

    static constexpr DB2Meta Instance{ 1237436, 0, 40, 0x73F6F023, Fields, -1 };
};

struct SoundKitChildMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1307289, -1, 2, 0x2827A3B5, Fields, 0 };
};

struct SoundKitEntryMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_BYTE, 1, false },
        { FT_FLOAT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1237435, -1, 4, 0x6ED6E26F, Fields, 0 };
};

struct SoundKitFallbackMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1307288, -1, 2, 0xB1A5106F, Fields, -1 };
};

struct SoundKitNameMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_STRING, 1, false },
    };

    static constexpr DB2Meta Instance{ 1665033, -1, 1, 0x96663ABF, Fields, -1 };
};

struct SoundOverrideMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1266542, -1, 4, 0xFB7643F6, Fields, -1 };
};

struct SoundProviderPreferencesMeta
{
    static constexpr DB2MetaField Fields[23] =
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

    static constexpr DB2Meta Instance{ 1279417, -1, 23, 0x85F218A4, Fields, -1 };
};

struct SourceInfoMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_STRING, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1313612, -1, 4, 0x7C214135, Fields, 3 };
};

struct SpamMessagesMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_STRING, 1, false },
    };

    static constexpr DB2Meta Instance{ 1117088, -1, 1, 0x0D4BA7E7, Fields, -1 };
};

struct SpecializationSpellsMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 1, true },
        { FT_INT, 1, true },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1240335, 5, 6, 0xAE3436F3, Fields, 3 };
};

struct SpellMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
    };

    static constexpr DB2Meta Instance{ 1140089, -1, 4, 0x2273DFFF, Fields, -1 };
};

struct SpellActionBarPrefMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1019373, -1, 2, 0x1EF80B2B, Fields, -1 };
};

struct SpellActivationOverlayMeta
{
    static constexpr DB2MetaField Fields[8] =
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

    static constexpr DB2Meta Instance{ 1261603, -1, 8, 0x23568FC7, Fields, -1 };
};

struct SpellAuraOptionsMeta
{
    static constexpr DB2MetaField Fields[8] =
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

    static constexpr DB2Meta Instance{ 1139952, -1, 8, 0xE05BE94F, Fields, 7 };
};

struct SpellAuraRestrictionsMeta
{
    static constexpr DB2MetaField Fields[10] =
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

    static constexpr DB2Meta Instance{ 981566, -1, 10, 0x7CDF3311, Fields, 9 };
};

struct SpellAuraVisXChrSpecMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1280615, -1, 2, 0xA65B6A4A, Fields, 1 };
};

struct SpellAuraVisibilityMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1280616, 2, 4, 0xA549F79C, Fields, 3 };
};

struct SpellCastTimesMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, true },
        { FT_INT, 1, true },
        { FT_SHORT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1134089, -1, 3, 0x4129C6A4, Fields, -1 };
};

struct SpellCastingRequirementsMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { FT_INT, 1, true },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, true },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1002166, -1, 7, 0xD8B56E5D, Fields, -1 };
};

struct SpellCategoriesMeta
{
    static constexpr DB2MetaField Fields[9] =
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

    static constexpr DB2Meta Instance{ 1139939, -1, 9, 0x14E916CC, Fields, 8 };
};

struct SpellCategoryMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 1, true },
        { FT_BYTE, 1, true },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, true },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1280619, -1, 6, 0xEA60E384, Fields, -1 };
};

struct SpellChainEffectsMeta
{
    static constexpr DB2MetaField Fields[60] =
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

    static constexpr DB2Meta Instance{ 1343310, -1, 60, 0x4E8FF369, Fields, -1 };
};

struct SpellClassOptionsMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_INT, 1, true },
        { FT_INT, 4, true },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 979663, -1, 4, 0x80FBD67A, Fields, -1 };
};

struct SpellCooldownsMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_INT, 1, true },
        { FT_INT, 1, true },
        { FT_INT, 1, true },
        { FT_BYTE, 1, false },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1139924, -1, 5, 0xCA8D8B3C, Fields, 4 };
};

struct SpellDescriptionVariablesMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_STRING, 1, false },
    };

    static constexpr DB2Meta Instance{ 1140004, -1, 1, 0xA8EDE75B, Fields, -1 };
};

struct SpellDispelTypeMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1137829, -1, 4, 0xE9DDA799, Fields, -1 };
};

struct SpellDurationMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, true },
        { FT_INT, 1, true },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1137828, -1, 3, 0x0D6C9082, Fields, -1 };
};

struct SpellEffectMeta
{
    static constexpr DB2MetaField Fields[30] =
    {
        { FT_INT, 1, true },
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
        { FT_INT, 4, true },
        { FT_INT, 2, true },
        { FT_INT, 2, false },
        { FT_INT, 2, false },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1140088, 0, 30, 0x3244098B, Fields, 29 };
};

struct SpellEffectEmissionMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1310248, -1, 4, 0xC6E61A9B, Fields, -1 };
};

struct SpellEquippedItemsMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_INT, 1, true },
        { FT_INT, 1, true },
        { FT_INT, 1, true },
        { FT_BYTE, 1, true },
    };

    static constexpr DB2Meta Instance{ 1140011, -1, 4, 0xCE628176, Fields, -1 };
};

struct SpellFlyoutMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { FT_LONG, 1, false },
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1146819, -1, 6, 0x437671BD, Fields, -1 };
};

struct SpellFlyoutItemMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1134085, -1, 3, 0xF86ADE09, Fields, 2 };
};

struct SpellFocusObjectMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_STRING, 1, false },
    };

    static constexpr DB2Meta Instance{ 1280620, -1, 1, 0x96663ABF, Fields, -1 };
};

struct SpellInterruptsMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_BYTE, 1, false },
        { FT_SHORT, 1, true },
        { FT_INT, 2, true },
        { FT_INT, 2, true },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1139906, -1, 5, 0x2FA8EA94, Fields, 4 };
};

struct SpellItemEnchantmentMeta
{
    static constexpr DB2MetaField Fields[19] =
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

    static constexpr DB2Meta Instance{ 1362771, -1, 19, 0x80DEA734, Fields, -1 };
};

struct SpellItemEnchantmentConditionMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { FT_INT, 5, false },
        { FT_BYTE, 5, false },
        { FT_BYTE, 5, false },
        { FT_BYTE, 5, false },
        { FT_BYTE, 5, false },
        { FT_BYTE, 5, false },
    };

    static constexpr DB2Meta Instance{ 1121834, -1, 6, 0xB9C16961, Fields, -1 };
};

struct SpellKeyboundOverrideMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1127327, -1, 3, 0x6ECA16FC, Fields, -1 };
};

struct SpellLabelMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1347275, -1, 2, 0x68E44736, Fields, 1 };
};

struct SpellLearnSpellMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, true },
        { FT_INT, 1, true },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1001907, -1, 3, 0x153EBA26, Fields, -1 };
};

struct SpellLevelsMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { FT_SHORT, 1, true },
        { FT_SHORT, 1, true },
        { FT_SHORT, 1, true },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1140079, -1, 6, 0x9E7D1CCD, Fields, 5 };
};

struct SpellMechanicMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_STRING, 1, false },
    };

    static constexpr DB2Meta Instance{ 1014438, -1, 1, 0xF2075D8C, Fields, -1 };
};

struct SpellMiscMeta
{
    static constexpr DB2MetaField Fields[11] =
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

    static constexpr DB2Meta Instance{ 1003144, -1, 11, 0xCDC114D5, Fields, 10 };
};

struct SpellMissileMeta
{
    static constexpr DB2MetaField Fields[15] =
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

    static constexpr DB2Meta Instance{ 897956, -1, 15, 0x1D35645E, Fields, -1 };
};

struct SpellMissileMotionMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 897955, -1, 4, 0x6B78A45B, Fields, -1 };
};

struct SpellPowerMeta
{
    static constexpr DB2MetaField Fields[14] =
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

    static constexpr DB2Meta Instance{ 982806, 7, 14, 0x8E5E46EC, Fields, 13 };
};

struct SpellPowerDifficultyMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 982804, 2, 3, 0x74714FF7, Fields, -1 };
};

struct SpellProceduralEffectMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_FLOAT, 4, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1140477, 2, 3, 0x3E47F4EF, Fields, -1 };
};

struct SpellProcsPerMinuteMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_FLOAT, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1133526, -1, 2, 0x4BC1931B, Fields, -1 };
};

struct SpellProcsPerMinuteModMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_FLOAT, 1, false },
        { FT_SHORT, 1, true },
        { FT_BYTE, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1133525, -1, 4, 0x2503C18B, Fields, 3 };
};

struct SpellRadiusMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1134584, -1, 4, 0xC12E5C90, Fields, -1 };
};

struct SpellRangeMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
        { FT_FLOAT, 2, false },
        { FT_FLOAT, 2, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1146820, -1, 5, 0xDE2E3F8E, Fields, -1 };
};

struct SpellReagentsMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, true },
        { FT_INT, 8, true },
        { FT_SHORT, 8, true },
    };

    static constexpr DB2Meta Instance{ 841946, -1, 3, 0x0463C688, Fields, -1 };
};

struct SpellReagentsCurrencyMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, true },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1135239, -1, 3, 0x90A5E5D2, Fields, 0 };
};

struct SpellScalingMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_INT, 1, true },
        { FT_SHORT, 1, true },
        { FT_INT, 1, true },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1139940, -1, 5, 0xF67A5719, Fields, -1 };
};

struct SpellShapeshiftMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_INT, 1, true },
        { FT_INT, 2, true },
        { FT_INT, 2, true },
        { FT_BYTE, 1, true },
    };

    static constexpr DB2Meta Instance{ 1139929, -1, 4, 0xA461C24D, Fields, -1 };
};

struct SpellShapeshiftFormMeta
{
    static constexpr DB2MetaField Fields[10] =
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

    static constexpr DB2Meta Instance{ 1280618, -1, 10, 0x130819AF, Fields, -1 };
};

struct SpellSpecialUnitEffectMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_SHORT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1268903, -1, 2, 0x76989615, Fields, -1 };
};

struct SpellTargetRestrictionsMeta
{
    static constexpr DB2MetaField Fields[8] =
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

    static constexpr DB2Meta Instance{ 1139993, -1, 8, 0x7B330026, Fields, 7 };
};

struct SpellTotemsMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, true },
        { FT_INT, 2, true },
        { FT_SHORT, 2, false },
    };

    static constexpr DB2Meta Instance{ 1002162, -1, 3, 0xEC0C4866, Fields, -1 };
};

struct SpellVisualMeta
{
    static constexpr DB2MetaField Fields[14] =
    {
        { FT_FLOAT, 3, false },
        { FT_FLOAT, 3, false },
        { FT_INT, 1, true },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, true },
        { FT_BYTE, 1, true },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, true },
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 897952, -1, 14, 0x1C1301D2, Fields, -1 };
};

struct SpellVisualAnimMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1140479, -1, 3, 0x0ABD7A19, Fields, -1 };
};

struct SpellVisualColorEffectMeta
{
    static constexpr DB2MetaField Fields[11] =
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

    static constexpr DB2Meta Instance{ 1094006, -1, 11, 0x7E5B2E66, Fields, -1 };
};

struct SpellVisualEffectNameMeta
{
    static constexpr DB2MetaField Fields[13] =
    {
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, true },
        { FT_INT, 1, true },
        { FT_BYTE, 1, false },
        { FT_INT, 1, true },
        { FT_INT, 1, false },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 897948, -1, 13, 0xB930A934, Fields, -1 };
};

struct SpellVisualEventMeta
{
    static constexpr DB2MetaField Fields[9] =
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

    static constexpr DB2Meta Instance{ 1685317, -1, 9, 0xAE75BC3C, Fields, 8 };
};

struct SpellVisualKitMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_INT, 1, true },
        { FT_FLOAT, 1, false },
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 897949, -1, 5, 0xDC04F488, Fields, -1 };
};

struct SpellVisualKitAreaModelMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { FT_INT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 897951, -1, 6, 0xBE76E593, Fields, -1 };
};

struct SpellVisualKitEffectMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1140480, -1, 3, 0xB78084B7, Fields, 2 };
};

struct SpellVisualKitModelAttachMeta
{
    static constexpr DB2MetaField Fields[22] =
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

    static constexpr DB2Meta Instance{ 897953, 2, 22, 0xBCE18649, Fields, 21 };
};

struct SpellVisualMissileMeta
{
    static constexpr DB2MetaField Fields[16] =
    {
        { FT_INT, 1, true },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_FLOAT, 3, false },
        { FT_FLOAT, 3, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, true },
        { FT_BYTE, 1, true },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 897954, 12, 16, 0x00BA67A5, Fields, 15 };
};

struct SpellXDescriptionVariablesMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1724949, -1, 2, 0xB08E6876, Fields, -1 };
};

struct SpellXSpellVisualMeta
{
    static constexpr DB2MetaField Fields[13] =
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

    static constexpr DB2Meta Instance{ 1101657, 1, 13, 0x4F4B8A2A, Fields, 12 };
};

struct StartupFilesMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1604265, -1, 3, 0x51FEBBB5, Fields, -1 };
};

struct Startup_StringsMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_STRING, 1, false },
        { FT_STRING, 1, false },
    };

    static constexpr DB2Meta Instance{ 1375805, -1, 2, 0xF8CDDEE7, Fields, -1 };
};

struct StationeryMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 2, false },
    };

    static constexpr DB2Meta Instance{ 1140758, -1, 3, 0x20F6BABD, Fields, -1 };
};

struct SummonPropertiesMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_INT, 1, true },
        { FT_INT, 1, true },
        { FT_INT, 1, true },
        { FT_INT, 1, true },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1345276, -1, 5, 0xFB8338FC, Fields, -1 };
};

struct TactKeyMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_BYTE, 16, false },
    };

    static constexpr DB2Meta Instance{ 1302850, -1, 1, 0xF0F98B62, Fields, -1 };
};

struct TactKeyLookupMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_BYTE, 8, false },
    };

    static constexpr DB2Meta Instance{ 1302851, -1, 1, 0x3C1AC92A, Fields, -1 };
};

struct TalentMeta
{
    static constexpr DB2MetaField Fields[9] =
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

    static constexpr DB2Meta Instance{ 1369062, -1, 9, 0xE8850B48, Fields, -1 };
};

struct TaxiNodesMeta
{
    static constexpr DB2MetaField Fields[12] =
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

    static constexpr DB2Meta Instance{ 1068100, -1, 12, 0xB46C6A8B, Fields, -1 };
};

struct TaxiPathMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1067802, 2, 4, 0xF44E2BF5, Fields, 0 };
};

struct TaxiPathNodeMeta
{
    static constexpr DB2MetaField Fields[9] =
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

    static constexpr DB2Meta Instance{ 1000437, 4, 9, 0xD38E8C01, Fields, 1 };
};

struct TerrainMaterialMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1307290, -1, 3, 0x19D9496F, Fields, -1 };
};

struct TerrainTypeMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_STRING, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1310249, -1, 5, 0x4FE20345, Fields, -1 };
};

struct TerrainTypeSoundsMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_STRING, 1, false },
    };

    static constexpr DB2Meta Instance{ 1284822, -1, 1, 0xE4923C1F, Fields, -1 };
};

struct TextureBlendSetMeta
{
    static constexpr DB2MetaField Fields[10] =
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

    static constexpr DB2Meta Instance{ 1328721, -1, 10, 0xA2323E0C, Fields, -1 };
};

struct TextureFileDataMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 982459, 0, 3, 0xE0790D00, Fields, 1 };
};

struct TotemCategoryMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 1, true },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1134586, -1, 3, 0x20B9177A, Fields, -1 };
};

struct ToyMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 1, true },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, true },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 988200, 4, 5, 0x5409C5EA, Fields, -1 };
};

struct TradeSkillCategoryMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_STRING, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1301101, -1, 5, 0x5D3ADD4D, Fields, -1 };
};

struct TradeSkillItemMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1329070, -1, 2, 0xFDE283DA, Fields, -1 };
};

struct TransformMatrixMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_FLOAT, 3, false },
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1338702, -1, 5, 0xB6A2C431, Fields, -1 };
};

struct TransmogHolidayMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1589454, 0, 2, 0xB420EB18, Fields, -1 };
};

struct TransmogSetMeta
{
    static constexpr DB2MetaField Fields[10] =
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

    static constexpr DB2Meta Instance{ 1376213, 4, 10, 0xBEDFD7D1, Fields, 1 };
};

struct TransmogSetGroupMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1576116, 1, 2, 0xCD072FE5, Fields, -1 };
};

struct TransmogSetItemMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1376212, 0, 4, 0x0E96B3A2, Fields, 1 };
};

struct TransportAnimationMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_INT, 1, false },
        { FT_FLOAT, 3, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1140686, -1, 4, 0x099987ED, Fields, 3 };
};

struct TransportPhysicsMeta
{
    static constexpr DB2MetaField Fields[10] =
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

    static constexpr DB2Meta Instance{ 1121973, -1, 10, 0x2C1FB208, Fields, -1 };
};

struct TransportRotationMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, false },
        { FT_FLOAT, 4, false },
        { FT_INT, 1, true },
    };

    static constexpr DB2Meta Instance{ 1140687, -1, 3, 0x72035AA9, Fields, 2 };
};

struct TrophyMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_STRING, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 975024, -1, 4, 0xE16151C5, Fields, -1 };
};

struct UIExpansionDisplayInfoMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1729547, -1, 3, 0x73DFDEC5, Fields, -1 };
};

struct UIExpansionDisplayInfoIconMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1729546, -1, 3, 0x331022F2, Fields, -1 };
};

struct UiCamFbackTransmogChrRaceMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1261406, -1, 5, 0x9FB4CC78, Fields, -1 };
};

struct UiCamFbackTransmogWeaponMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1261407, -1, 4, 0x020890B7, Fields, -1 };
};

struct UiCameraMeta
{
    static constexpr DB2MetaField Fields[9] =
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

    static constexpr DB2Meta Instance{ 1120287, -1, 9, 0xCA6C98D4, Fields, -1 };
};

struct UiCameraTypeMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1120288, -1, 3, 0x644732AE, Fields, -1 };
};

struct UiMapPOIMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { FT_INT, 1, false },
        { FT_FLOAT, 3, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1445708, 6, 7, 0x559E1F11, Fields, -1 };
};

struct UiModelSceneMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1548215, -1, 2, 0xA7D62B8A, Fields, -1 };
};

struct UiModelSceneActorMeta
{
    static constexpr DB2MetaField Fields[10] =
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

    static constexpr DB2Meta Instance{ 1548214, 7, 10, 0x679AC95F, Fields, 9 };
};

struct UiModelSceneActorDisplayMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1548216, -1, 5, 0x6137F4BE, Fields, -1 };
};

struct UiModelSceneCameraMeta
{
    static constexpr DB2MetaField Fields[16] =
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

    static constexpr DB2Meta Instance{ 1548213, 14, 16, 0xC58AA5EC, Fields, 15 };
};

struct UiTextureAtlasMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 897470, -1, 3, 0x9879592A, Fields, -1 };
};

struct UiTextureAtlasMemberMeta
{
    static constexpr DB2MetaField Fields[8] =
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

    static constexpr DB2Meta Instance{ 897532, 1, 8, 0x81E2055F, Fields, -1 };
};

struct UiTextureKitMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_STRING, 1, false },
    };

    static constexpr DB2Meta Instance{ 939159, -1, 1, 0x2C7E0372, Fields, -1 };
};

struct UnitBloodMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1284821, -1, 6, 0x4689A9A0, Fields, -1 };
};

struct UnitBloodLevelsMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_BYTE, 3, false },
    };

    static constexpr DB2Meta Instance{ 1268904, -1, 1, 0x31A6BD58, Fields, -1 };
};

struct UnitConditionMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_INT, 8, true },
        { FT_BYTE, 1, false },
        { FT_BYTE, 8, false },
        { FT_BYTE, 8, true },
    };

    static constexpr DB2Meta Instance{ 1120959, -1, 4, 0x62802D9C, Fields, -1 };
};

struct UnitPowerBarMeta
{
    static constexpr DB2MetaField Fields[16] =
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

    static constexpr DB2Meta Instance{ 1237753, -1, 16, 0x626C94CD, Fields, -1 };
};

struct VehicleMeta
{
    static constexpr DB2MetaField Fields[18] =
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

    static constexpr DB2Meta Instance{ 1368621, -1, 18, 0x1606C582, Fields, -1 };
};

struct VehicleSeatMeta
{
    static constexpr DB2MetaField Fields[61] =
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

    static constexpr DB2Meta Instance{ 1345447, -1, 61, 0x242E0ECD, Fields, -1 };
};

struct VehicleUIIndSeatMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_BYTE, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1279741, -1, 4, 0x5F688502, Fields, 3 };
};

struct VehicleUIIndicatorMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1279740, -1, 1, 0x68486100, Fields, -1 };
};

struct VignetteMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { FT_STRING, 1, false },
        { FT_FLOAT, 1, false },
        { FT_FLOAT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 892861, -1, 7, 0x52E3B381, Fields, -1 };
};

struct VirtualAttachmentMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_STRING, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1634482, -1, 2, 0xEC767C57, Fields, -1 };
};

struct VirtualAttachmentCustomizationMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1634480, -1, 3, 0xC354C931, Fields, -1 };
};

struct VocalUISoundsMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 2, false },
    };

    static constexpr DB2Meta Instance{ 1267067, -1, 4, 0xED48CFA9, Fields, -1 };
};

struct WMOAreaTableMeta
{
    static constexpr DB2MetaField Fields[15] =
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

    static constexpr DB2Meta Instance{ 1355528, 12, 15, 0x4616C893, Fields, 14 };
};

struct WMOMinimapTextureMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1323241, -1, 5, 0x8F4AE3C0, Fields, 4 };
};

struct WbAccessControlListMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { FT_STRING, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 879634, -1, 5, 0xBE044710, Fields, -1 };
};

struct WbCertWhitelistMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_STRING, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 879591, -1, 4, 0x01D13030, Fields, -1 };
};

struct WeaponImpactSoundsMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 11, false },
        { FT_INT, 11, false },
        { FT_INT, 11, false },
        { FT_INT, 11, false },
    };

    static constexpr DB2Meta Instance{ 1267648, -1, 7, 0x774C043A, Fields, -1 };
};

struct WeaponSwingSounds2Meta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1267068, -1, 3, 0xD45347C3, Fields, -1 };
};

struct WeaponTrailMeta
{
    static constexpr DB2MetaField Fields[9] =
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

    static constexpr DB2Meta Instance{ 982461, -1, 9, 0x49754C60, Fields, -1 };
};

struct WeaponTrailModelDefMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_INT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1239843, -1, 3, 0x7DE7C508, Fields, 2 };
};

struct WeaponTrailParamMeta
{
    static constexpr DB2MetaField Fields[10] =
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

    static constexpr DB2Meta Instance{ 1239842, -1, 10, 0x9B0F7200, Fields, 9 };
};

struct WeatherMeta
{
    static constexpr DB2MetaField Fields[14] =
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

    static constexpr DB2Meta Instance{ 1343311, -1, 14, 0x7C160B07, Fields, -1 };
};

struct WindSettingsMeta
{
    static constexpr DB2MetaField Fields[10] =
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

    static constexpr DB2Meta Instance{ 943871, -1, 10, 0x5308550C, Fields, -1 };
};

struct WorldBossLockoutMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { FT_STRING, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 975279, -1, 2, 0x4D7103A0, Fields, -1 };
};

struct WorldChunkSoundsMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1267069, -1, 6, 0xD06AA126, Fields, -1 };
};

struct WorldEffectMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { FT_INT, 1, true },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1343312, -1, 6, 0x2E9B9BFD, Fields, -1 };
};

struct WorldElapsedTimerMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_STRING, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1135240, -1, 3, 0x6C026FDE, Fields, -1 };
};

struct WorldMapAreaMeta
{
    static constexpr DB2MetaField Fields[17] =
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

    static constexpr DB2Meta Instance{ 1374382, 15, 17, 0xC7E90019, Fields, -1 };
};

struct WorldMapContinentMeta
{
    static constexpr DB2MetaField Fields[11] =
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

    static constexpr DB2Meta Instance{ 1343594, -1, 11, 0x8F75E077, Fields, -1 };
};

struct WorldMapOverlayMeta
{
    static constexpr DB2MetaField Fields[14] =
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

    static constexpr DB2Meta Instance{ 1134579, 1, 14, 0xDC4B6AF3, Fields, 4 };
};

struct WorldMapTransformsMeta
{
    static constexpr DB2MetaField Fields[10] =
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

    static constexpr DB2Meta Instance{ 1310630, -1, 10, 0x99FB4B71, Fields, 3 };
};

struct WorldSafeLocsMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_STRING, 1, false },
        { FT_FLOAT, 3, false },
        { FT_FLOAT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1369425, -1, 4, 0x605EA8A6, Fields, 3 };
};

struct WorldStateExpressionMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { FT_STRING_NOT_LOCALIZED, 1, false },
    };

    static constexpr DB2Meta Instance{ 1332558, -1, 1, 0xA69C9812, Fields, -1 };
};

struct WorldStateUIMeta
{
    static constexpr DB2MetaField Fields[17] =
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

    static constexpr DB2Meta Instance{ 1343596, 14, 17, 0x70808977, Fields, 5 };
};

struct WorldStateZoneSoundsMeta
{
    static constexpr DB2MetaField Fields[8] =
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

    static constexpr DB2Meta Instance{ 1266941, -1, 8, 0xB9572D3D, Fields, -1 };
};

struct World_PVP_AreaMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_BYTE, 1, false },
    };

    static constexpr DB2Meta Instance{ 1310255, -1, 7, 0x6FBBF76B, Fields, -1 };
};

struct ZoneIntroMusicTableMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_STRING, 1, false },
        { FT_SHORT, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1310251, -1, 4, 0x1F8417ED, Fields, -1 };
};

struct ZoneLightMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_STRING, 1, false },
        { FT_SHORT, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1310253, -1, 3, 0x3C11F38B, Fields, -1 };
};

struct ZoneLightPointMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { FT_FLOAT, 2, false },
        { FT_BYTE, 1, false },
        { FT_SHORT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1310256, -1, 3, 0xEF93DC50, Fields, 2 };
};

struct ZoneMusicMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_STRING, 1, false },
        { FT_INT, 2, false },
        { FT_INT, 2, false },
        { FT_INT, 2, false },
    };

    static constexpr DB2Meta Instance{ 1310254, -1, 4, 0x9E2B332D, Fields, -1 };
};

struct ZoneStoryMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { FT_INT, 1, false },
        { FT_INT, 1, false },
        { FT_BYTE, 1, false },
        { FT_INT, 1, false },
    };

    static constexpr DB2Meta Instance{ 1797864, -1, 4, 0xEE16D6F3, Fields, 3 };
};

#endif // DB2Metadata_h__
