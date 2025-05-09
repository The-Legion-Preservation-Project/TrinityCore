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

#ifndef TRINITYCORE_DB2_METADATA_H
#define TRINITYCORE_DB2_METADATA_H

#include "DB2Meta.h"

struct AchievementMeta
{
    static constexpr DB2MetaField Fields[15] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1260179,
        .IndexField       = 12,
        .ParentIndexField = 7,
        .FieldCount       = 15,
        .LayoutHash       = 0x2C4BE18C,
        .Fields           = Fields,
    };
};

struct Achievement_CategoryMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1324299,
        .IndexField       = 3,
        .ParentIndexField = 2,
        .FieldCount       = 4,
        .LayoutHash       = 0xED226BC9,
        .Fields           = Fields,
    };
};

struct AdventureJournalMeta
{
    static constexpr DB2MetaField Fields[22] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 2, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1115949,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 22,
        .LayoutHash       = 0xB2FFA8DD,
        .Fields           = Fields,
    };
};

struct AdventureMapPOIMeta
{
    static constexpr DB2MetaField Fields[13] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1267070,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 13,
        .LayoutHash       = 0x0C288A82,
        .Fields           = Fields,
    };
};

struct AlliedRaceMeta
{
    static constexpr DB2MetaField Fields[8] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1710672,
        .IndexField       = 1,
        .ParentIndexField = -1,
        .FieldCount       = 8,
        .LayoutHash       = 0xB13ABE04,
        .Fields           = Fields,
    };
};

struct AlliedRaceRacialAbilityMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1720145,
        .IndexField       = -1,
        .ParentIndexField = 4,
        .FieldCount       = 5,
        .LayoutHash       = 0x9EBF9B09,
        .Fields           = Fields,
    };
};

struct AnimKitMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1304323,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x81D6D250,
        .Fields           = Fields,
    };
};

struct AnimKitBoneSetMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1375433,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0xFE4B9B1F,
        .Fields           = Fields,
    };
};

struct AnimKitBoneSetAliasMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1266937,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xEA8B67BC,
        .Fields           = Fields,
    };
};

struct AnimKitConfigMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1300872,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x8A70ED4C,
        .Fields           = Fields,
    };
};

struct AnimKitConfigBoneSetMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1300873,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0x3D9B3BA7,
        .Fields           = Fields,
    };
};

struct AnimKitPriorityMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1266540,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x5E93C107,
        .Fields           = Fields,
    };
};

struct AnimKitReplacementMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1559807,
        .IndexField       = 3,
        .ParentIndexField = 4,
        .FieldCount       = 5,
        .LayoutHash       = 0x0735DB83,
        .Fields           = Fields,
    };
};

struct AnimKitSegmentMeta
{
    static constexpr DB2MetaField Fields[18] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1304324,
        .IndexField       = -1,
        .ParentIndexField = 5,
        .FieldCount       = 18,
        .LayoutHash       = 0x08F09B89,
        .Fields           = Fields,
    };
};

struct AnimReplacementMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1301100,
        .IndexField       = 3,
        .ParentIndexField = 4,
        .FieldCount       = 5,
        .LayoutHash       = 0x2C8B0F35,
        .Fields           = Fields,
    };
};

struct AnimReplacementSetMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1284817,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x3761247A,
        .Fields           = Fields,
    };
};

struct AnimationDataMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1375431,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x03182786,
        .Fields           = Fields,
    };
};

struct AreaFarClipOverrideMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1537162,
        .IndexField       = 4,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0xEB5921CC,
        .Fields           = Fields,
    };
};

struct AreaGroupMemberMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1093406,
        .IndexField       = -1,
        .ParentIndexField = 1,
        .FieldCount       = 2,
        .LayoutHash       = 0x50AA43EE,
        .Fields           = Fields,
    };
};

struct AreaPOIMeta
{
    static constexpr DB2MetaField Fields[16] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1000630,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 16,
        .LayoutHash       = 0xB161EE90,
        .Fields           = Fields,
    };
};

struct AreaPOIStateMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1000631,
        .IndexField       = -1,
        .ParentIndexField = 4,
        .FieldCount       = 5,
        .LayoutHash       = 0x673BDA80,
        .Fields           = Fields,
    };
};

struct AreaTableMeta
{
    static constexpr DB2MetaField Fields[23] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 4, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1353545,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 23,
        .LayoutHash       = 0x0CA01129,
        .Fields           = Fields,
    };
};

struct AreaTriggerMeta
{
    static constexpr DB2MetaField Fields[15] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1354401,
        .IndexField       = 14,
        .ParentIndexField = 6,
        .FieldCount       = 15,
        .LayoutHash       = 0x378573E8,
        .Fields           = Fields,
    };
};

struct AreaTriggerActionSetMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1352378,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x5DA480BD,
        .Fields           = Fields,
    };
};

struct AreaTriggerBoxMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1332554,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x602CFDA6,
        .Fields           = Fields,
    };
};

struct AreaTriggerCylinderMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1121943,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x26D4052D,
        .Fields           = Fields,
    };
};

struct AreaTriggerSphereMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1315630,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x9141AC7F,
        .Fields           = Fields,
    };
};

struct ArmorLocationMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1284818,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0xCCFBD16E,
        .Fields           = Fields,
    };
};

struct ArtifactMeta
{
    static constexpr DB2MetaField Fields[10] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1007934,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 10,
        .LayoutHash       = 0x76CF31A8,
        .Fields           = Fields,
    };
};

struct ArtifactAppearanceMeta
{
    static constexpr DB2MetaField Fields[15] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1116407,
        .IndexField       = 11,
        .ParentIndexField = 5,
        .FieldCount       = 15,
        .LayoutHash       = 0xAEED7395,
        .Fields           = Fields,
    };
};

struct ArtifactAppearanceSetMeta
{
    static constexpr DB2MetaField Fields[9] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1116408,
        .IndexField       = 7,
        .ParentIndexField = 8,
        .FieldCount       = 9,
        .LayoutHash       = 0x53DFED74,
        .Fields           = Fields,
    };
};

struct ArtifactCategoryMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1376210,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x21328475,
        .Fields           = Fields,
    };
};

struct ArtifactPowerMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1007937,
        .IndexField       = 5,
        .ParentIndexField = 1,
        .FieldCount       = 7,
        .LayoutHash       = 0x45240818,
        .Fields           = Fields,
    };
};

struct ArtifactPowerLinkMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1133731,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xE179618C,
        .Fields           = Fields,
    };
};

struct ArtifactPowerPickerMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1597467,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x2D6AF006,
        .Fields           = Fields,
    };
};

struct ArtifactPowerRankMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1261405,
        .IndexField       = -1,
        .ParentIndexField = 4,
        .FieldCount       = 5,
        .LayoutHash       = 0xA87EACC4,
        .Fields           = Fields,
    };
};

struct ArtifactQuestXPMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_INT,    .ArraySize = 10, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1036203,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x86397302,
        .Fields           = Fields,
    };
};

struct ArtifactTierMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1600114,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0x1A5A50B9,
        .Fields           = Fields,
    };
};

struct ArtifactUnlockMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1094540,
        .IndexField       = -1,
        .ParentIndexField = 4,
        .FieldCount       = 5,
        .LayoutHash       = 0x52839A77,
        .Fields           = Fields,
    };
};

struct AuctionHouseMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1237439,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x51CFEEFF,
        .Fields           = Fields,
    };
};

struct BankBagSlotPricesMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1284819,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0xEA0AC2AA,
        .Fields           = Fields,
    };
};

struct BannedAddonsMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1373459,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0xF779B6E5,
        .Fields           = Fields,
    };
};

struct BarberShopStyleMeta
{
    static constexpr DB2MetaField Fields[8] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1237437,
        .IndexField       = 7,
        .ParentIndexField = -1,
        .FieldCount       = 8,
        .LayoutHash       = 0x670C71AE,
        .Fields           = Fields,
    };
};

struct BattlePetAbilityMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 841610,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 7,
        .LayoutHash       = 0x0F29944D,
        .Fields           = Fields,
    };
};

struct BattlePetAbilityEffectMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 6, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 801575,
        .IndexField       = 6,
        .ParentIndexField = 0,
        .FieldCount       = 7,
        .LayoutHash       = 0x5D30EBC5,
        .Fields           = Fields,
    };
};

struct BattlePetAbilityStateMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 801576,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0x0E40A884,
        .Fields           = Fields,
    };
};

struct BattlePetAbilityTurnMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 801577,
        .IndexField       = 5,
        .ParentIndexField = 0,
        .FieldCount       = 6,
        .LayoutHash       = 0xCB063F4F,
        .Fields           = Fields,
    };
};

struct BattlePetBreedQualityMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 801578,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xBDE74E1D,
        .Fields           = Fields,
    };
};

struct BattlePetBreedStateMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 801579,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0x68D5C999,
        .Fields           = Fields,
    };
};

struct BattlePetDisplayOverrideMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1802988,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0xDE5129EA,
        .Fields           = Fields,
    };
};

struct BattlePetEffectPropertiesMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 6, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 6, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 801580,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x56070751,
        .Fields           = Fields,
    };
};

struct BattlePetNPCTeamMemberMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 841648,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x4423F004,
        .Fields           = Fields,
    };
};

struct BattlePetSpeciesMeta
{
    static constexpr DB2MetaField Fields[11] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 841622,
        .IndexField       = 8,
        .ParentIndexField = -1,
        .FieldCount       = 11,
        .LayoutHash       = 0x8A3D97A4,
        .Fields           = Fields,
    };
};

struct BattlePetSpeciesStateMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 801581,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0x8F958D5C,
        .Fields           = Fields,
    };
};

struct BattlePetSpeciesXAbilityMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 801582,
        .IndexField       = -1,
        .ParentIndexField = 3,
        .FieldCount       = 4,
        .LayoutHash       = 0x9EE27D6A,
        .Fields           = Fields,
    };
};

struct BattlePetStateMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 801583,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x1797AB4A,
        .Fields           = Fields,
    };
};

struct BattlePetVisualMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 801584,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 7,
        .LayoutHash       = 0x097E0F6C,
        .Fields           = Fields,
    };
};

struct BattlemasterListMeta
{
    static constexpr DB2MetaField Fields[17] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 16, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1360265,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 17,
        .LayoutHash       = 0xD8AAA088,
        .Fields           = Fields,
    };
};

struct BeamEffectMeta
{
    static constexpr DB2MetaField Fields[10] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1525607,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 10,
        .LayoutHash       = 0x42C18603,
        .Fields           = Fields,
    };
};

struct BoneWindModifierModelMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1467254,
        .IndexField       = -1,
        .ParentIndexField = 0,
        .FieldCount       = 2,
        .LayoutHash       = 0x577A0772,
        .Fields           = Fields,
    };
};

struct BoneWindModifiersMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1416756,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xB4E7449E,
        .Fields           = Fields,
    };
};

struct BountyMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1367866,
        .IndexField       = -1,
        .ParentIndexField = 4,
        .FieldCount       = 5,
        .LayoutHash       = 0xE76E716C,
        .Fields           = Fields,
    };
};

struct BountySetMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1367865,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x96B908A5,
        .Fields           = Fields,
    };
};

struct BroadcastTextMeta
{
    static constexpr DB2MetaField Fields[9] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 841604,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 9,
        .LayoutHash       = 0x51BF0C33,
        .Fields           = Fields,
    };
};

struct CameraEffectMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1117695,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0xF6AB4622,
        .Fields           = Fields,
    };
};

struct CameraEffectEntryMeta
{
    static constexpr DB2MetaField Fields[16] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1117696,
        .IndexField       = -1,
        .ParentIndexField = 15,
        .FieldCount       = 16,
        .LayoutHash       = 0xC5105557,
        .Fields           = Fields,
    };
};

struct CameraModeMeta
{
    static constexpr DB2MetaField Fields[11] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1343308,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 11,
        .LayoutHash       = 0xCDB6BC2F,
        .Fields           = Fields,
    };
};

struct CastableRaidBuffsMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1283018,
        .IndexField       = -1,
        .ParentIndexField = 1,
        .FieldCount       = 2,
        .LayoutHash       = 0x5BDD4028,
        .Fields           = Fields,
    };
};

struct CelestialBodyMeta
{
    static constexpr DB2MetaField Fields[15] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1592470,
        .IndexField       = 14,
        .ParentIndexField = -1,
        .FieldCount       = 15,
        .LayoutHash       = 0xD09BE31C,
        .Fields           = Fields,
    };
};

struct Cfg_CategoriesMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1068162,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0x705B82C8,
        .Fields           = Fields,
    };
};

struct Cfg_ConfigsMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1080949,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0xC618392F,
        .Fields           = Fields,
    };
};

struct Cfg_RegionsMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1082876,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0x9F4272BF,
        .Fields           = Fields,
    };
};

struct CharBaseInfoMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1343386,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x9E9939B8,
        .Fields           = Fields,
    };
};

struct CharBaseSectionMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1375798,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x4F08B5F3,
        .Fields           = Fields,
    };
};

struct CharComponentTextureLayoutsMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1360262,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x0F515E34,
        .Fields           = Fields,
    };
};

struct CharComponentTextureSectionsMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1360263,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 7,
        .LayoutHash       = 0xCE76000F,
        .Fields           = Fields,
    };
};

struct CharHairGeosetsMeta
{
    static constexpr DB2MetaField Fields[10] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1256914,
        .IndexField       = -1,
        .ParentIndexField = 1,
        .FieldCount       = 10,
        .LayoutHash       = 0x33EB32D2,
        .Fields           = Fields,
    };
};

struct CharSectionsMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { .Type = FT_INT,    .ArraySize = 3, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1365366,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 7,
        .LayoutHash       = 0xE349E55B,
        .Fields           = Fields,
    };
};

struct CharShipmentMeta
{
    static constexpr DB2MetaField Fields[9] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 972425,
        .IndexField       = -1,
        .ParentIndexField = 5,
        .FieldCount       = 9,
        .LayoutHash       = 0xE6D3C7C1,
        .Fields           = Fields,
    };
};

struct CharShipmentContainerMeta
{
    static constexpr DB2MetaField Fields[16] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 972405,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 16,
        .LayoutHash       = 0x194896E3,
        .Fields           = Fields,
    };
};

struct CharStartOutfitMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { .Type = FT_INT,    .ArraySize = 24, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1237591,
        .IndexField       = -1,
        .ParentIndexField = 6,
        .FieldCount       = 7,
        .LayoutHash       = 0x0EEBEE24,
        .Fields           = Fields,
    };
};

struct CharTitlesMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1349054,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x7A58AA5F,
        .Fields           = Fields,
    };
};

struct CharacterFaceBoneSetMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1028733,
        .IndexField       = -1,
        .ParentIndexField = 4,
        .FieldCount       = 5,
        .LayoutHash       = 0x1C634076,
        .Fields           = Fields,
    };
};

struct CharacterFacialHairStylesMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_INT,    .ArraySize = 5, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1369752,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x47D79688,
        .Fields           = Fields,
    };
};

struct CharacterLoadoutMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_LONG,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1344281,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x87B51673,
        .Fields           = Fields,
    };
};

struct CharacterLoadoutItemMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1302846,
        .IndexField       = -1,
        .ParentIndexField = 1,
        .FieldCount       = 2,
        .LayoutHash       = 0x3C3D40B9,
        .Fields           = Fields,
    };
};

struct CharacterServiceInfoMeta
{
    static constexpr DB2MetaField Fields[11] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1815417,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 11,
        .LayoutHash       = 0xADE120EF,
        .Fields           = Fields,
    };
};

struct ChatChannelsMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1345278,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x1A325E80,
        .Fields           = Fields,
    };
};

struct ChatProfanityMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1117084,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x328E1FE6,
        .Fields           = Fields,
    };
};

struct ChrClassRaceSexMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1306188,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 6,
        .LayoutHash       = 0x5E29DFA1,
        .Fields           = Fields,
    };
};

struct ChrClassTitleMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1267497,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0xC155DB2C,
        .Fields           = Fields,
    };
};

struct ChrClassUIDisplayMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1316515,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x59A95A73,
        .Fields           = Fields,
    };
};

struct ChrClassVillainMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1267498,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0xA6AC18CD,
        .Fields           = Fields,
    };
};

struct ChrClassesMeta
{
    static constexpr DB2MetaField Fields[20] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1361031,
        .IndexField       = 19,
        .ParentIndexField = -1,
        .FieldCount       = 20,
        .LayoutHash       = 0x6F7AB8E7,
        .Fields           = Fields,
    };
};

struct ChrClassesXPowerTypesMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1121420,
        .IndexField       = -1,
        .ParentIndexField = 1,
        .FieldCount       = 2,
        .LayoutHash       = 0xAF977B23,
        .Fields           = Fields,
    };
};

struct ChrCustomizationMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 3, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1611874,
        .IndexField       = -1,
        .ParentIndexField = 5,
        .FieldCount       = 6,
        .LayoutHash       = 0x71833CE5,
        .Fields           = Fields,
    };
};

struct ChrRacesMeta
{
    static constexpr DB2MetaField Fields[38] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 3, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 3, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1305311,
        .IndexField       = 30,
        .ParentIndexField = -1,
        .FieldCount       = 38,
        .LayoutHash       = 0x51C511F9,
        .Fields           = Fields,
    };
};

struct ChrSpecializationMeta
{
    static constexpr DB2MetaField Fields[13] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1343390,
        .IndexField       = 9,
        .ParentIndexField = 4,
        .FieldCount       = 13,
        .LayoutHash       = 0x3D86B8F7,
        .Fields           = Fields,
    };
};

struct ChrUpgradeBucketMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 984529,
        .IndexField       = 1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0xACF64A80,
        .Fields           = Fields,
    };
};

struct ChrUpgradeBucketSpellMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 984528,
        .IndexField       = -1,
        .ParentIndexField = 1,
        .FieldCount       = 2,
        .LayoutHash       = 0xDF939031,
        .Fields           = Fields,
    };
};

struct ChrUpgradeTierMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 984530,
        .IndexField       = 3,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x2C87937D,
        .Fields           = Fields,
    };
};

struct CinematicCameraMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1294214,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x0062B0F4,
        .Fields           = Fields,
    };
};

struct CinematicSequencesMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 8, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1134583,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x470FDA8C,
        .Fields           = Fields,
    };
};

struct CloakDampeningMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 5, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 5, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1465903,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 7,
        .LayoutHash       = 0xB2DF7F2A,
        .Fields           = Fields,
    };
};

struct CombatConditionMeta
{
    static constexpr DB2MetaField Fields[11] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 2, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 2, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 2, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 2, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1120958,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 11,
        .LayoutHash       = 0x28D253C6,
        .Fields           = Fields,
    };
};

struct CommentatorStartLocationMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1664251,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xEFD540EF,
        .Fields           = Fields,
    };
};

struct CommentatorTrackedCooldownMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1661584,
        .IndexField       = -1,
        .ParentIndexField = 3,
        .FieldCount       = 4,
        .LayoutHash       = 0x84985168,
        .Fields           = Fields,
    };
};

struct ComponentModelFileDataMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1349053,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x25BB55A7,
        .Fields           = Fields,
    };
};

struct ComponentTextureFileDataMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1278239,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x50C58D4F,
        .Fields           = Fields,
    };
};

struct ConfigurationWarningMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1709409,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x0B350390,
        .Fields           = Fields,
    };
};

struct ContributionMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 4, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1587153,
        .IndexField       = 2,
        .ParentIndexField = 3,
        .FieldCount       = 6,
        .LayoutHash       = 0x8EDF6090,
        .Fields           = Fields,
    };
};

struct ConversationLineMeta
{
    static constexpr DB2MetaField Fields[8] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1260801,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 8,
        .LayoutHash       = 0x032B137B,
        .Fields           = Fields,
    };
};

struct CreatureMeta
{
    static constexpr DB2MetaField Fields[12] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 3, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 4, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 4, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 841631,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 12,
        .LayoutHash       = 0xCFB508A9,
        .Fields           = Fields,
    };
};

struct CreatureDifficultyMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { .Type = FT_INT,    .ArraySize = 7, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 879282,
        .IndexField       = -1,
        .ParentIndexField = 5,
        .FieldCount       = 6,
        .LayoutHash       = 0x4291EEC6,
        .Fields           = Fields,
    };
};

struct CreatureDispXUiCameraMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1146692,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x6E0E7C15,
        .Fields           = Fields,
    };
};

struct CreatureDisplayInfoMeta
{
    static constexpr DB2MetaField Fields[23] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 3, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1108759,
        .IndexField       = 0,
        .ParentIndexField = -1,
        .FieldCount       = 23,
        .LayoutHash       = 0x406268DF,
        .Fields           = Fields,
    };
};

struct CreatureDisplayInfoCondMeta
{
    static constexpr DB2MetaField Fields[15] =
    {
        { .Type = FT_LONG,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 3, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1332686,
        .IndexField       = -1,
        .ParentIndexField = 14,
        .FieldCount       = 15,
        .LayoutHash       = 0x26CD44AB,
        .Fields           = Fields,
    };
};

struct CreatureDisplayInfoEvtMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1586882,
        .IndexField       = -1,
        .ParentIndexField = 3,
        .FieldCount       = 4,
        .LayoutHash       = 0x3FEF69BB,
        .Fields           = Fields,
    };
};

struct CreatureDisplayInfoExtraMeta
{
    static constexpr DB2MetaField Fields[12] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 3, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1264997,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 12,
        .LayoutHash       = 0x6DF98EF6,
        .Fields           = Fields,
    };
};

struct CreatureDisplayInfoTrnMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1146698,
        .IndexField       = -1,
        .ParentIndexField = 5,
        .FieldCount       = 6,
        .LayoutHash       = 0x8E687740,
        .Fields           = Fields,
    };
};

struct CreatureFamilyMeta
{
    static constexpr DB2MetaField Fields[9] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 2, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1351351,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 9,
        .LayoutHash       = 0xE2DC5126,
        .Fields           = Fields,
    };
};

struct CreatureImmunitiesMeta
{
    static constexpr DB2MetaField Fields[9] =
    {
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 8, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 16, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1131322,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 9,
        .LayoutHash       = 0x2D20050B,
        .Fields           = Fields,
    };
};

struct CreatureModelDataMeta
{
    static constexpr DB2MetaField Fields[28] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 6, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1365368,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 28,
        .LayoutHash       = 0x983BD312,
        .Fields           = Fields,
    };
};

struct CreatureMovementInfoMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1125666,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x39F710E3,
        .Fields           = Fields,
    };
};

struct CreatureSoundDataMeta
{
    static constexpr DB2MetaField Fields[37] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 5, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 4, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1344466,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 37,
        .LayoutHash       = 0x7C3C39B9,
        .Fields           = Fields,
    };
};

struct CreatureTypeMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1131315,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x7BA9D2F8,
        .Fields           = Fields,
    };
};

struct CreatureXContributionMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1587158,
        .IndexField       = 0,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0x3448DF58,
        .Fields           = Fields,
    };
};

struct CriteriaMeta
{
    static constexpr DB2MetaField Fields[11] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1263817,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 11,
        .LayoutHash       = 0xA87A5BB9,
        .Fields           = Fields,
    };
};

struct CriteriaTreeMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1263818,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 7,
        .LayoutHash       = 0x0A1B99C2,
        .Fields           = Fields,
    };
};

struct CriteriaTreeXEffectMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1345969,
        .IndexField       = -1,
        .ParentIndexField = 1,
        .FieldCount       = 2,
        .LayoutHash       = 0x929D9B0C,
        .Fields           = Fields,
    };
};

struct CurrencyCategoryMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1125667,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0xC3735D76,
        .Fields           = Fields,
    };
};

struct CurrencyTypesMeta
{
    static constexpr DB2MetaField Fields[10] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1095531,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 10,
        .LayoutHash       = 0x6CC25CBF,
        .Fields           = Fields,
    };
};

struct CurveMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 892585,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x17EA5154,
        .Fields           = Fields,
    };
};

struct CurvePointMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 892586,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0xF36752EB,
        .Fields           = Fields,
    };
};

struct DeathThudLookupsMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1279415,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0xD469085C,
        .Fields           = Fields,
    };
};

struct DecalPropertiesMeta
{
    static constexpr DB2MetaField Fields[17] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1278176,
        .IndexField       = 0,
        .ParentIndexField = -1,
        .FieldCount       = 17,
        .LayoutHash       = 0xDD48C72A,
        .Fields           = Fields,
    };
};

struct DeclinedWordMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1279100,
        .IndexField       = 1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x3FF5EC3E,
        .Fields           = Fields,
    };
};

struct DeclinedWordCasesMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1279099,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0x821A20A9,
        .Fields           = Fields,
    };
};

struct DestructibleModelDataMeta
{
    static constexpr DB2MetaField Fields[22] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1122116,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 22,
        .LayoutHash       = 0x1092C9AF,
        .Fields           = Fields,
    };
};

struct DeviceBlacklistMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 922722,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xD956413D,
        .Fields           = Fields,
    };
};

struct DeviceDefaultSettingsMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 925422,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x90CFEC8C,
        .Fields           = Fields,
    };
};

struct DifficultyMeta
{
    static constexpr DB2MetaField Fields[13] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1352127,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 13,
        .LayoutHash       = 0x92302BB8,
        .Fields           = Fields,
    };
};

struct DissolveEffectMeta
{
    static constexpr DB2MetaField Fields[14] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1304325,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 14,
        .LayoutHash       = 0x566413E7,
        .Fields           = Fields,
    };
};

struct DriverBlacklistMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 922720,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 7,
        .LayoutHash       = 0x1466ACAD,
        .Fields           = Fields,
    };
};

struct DungeonEncounterMeta
{
    static constexpr DB2MetaField Fields[9] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1347279,
        .IndexField       = 6,
        .ParentIndexField = 2,
        .FieldCount       = 9,
        .LayoutHash       = 0xB04A2596,
        .Fields           = Fields,
    };
};

struct DungeonMapMeta
{
    static constexpr DB2MetaField Fields[8] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1347271,
        .IndexField       = 7,
        .ParentIndexField = 2,
        .FieldCount       = 8,
        .LayoutHash       = 0xB5A245F4,
        .Fields           = Fields,
    };
};

struct DungeonMapChunkMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1294215,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 5,
        .LayoutHash       = 0x7927A3A7,
        .Fields           = Fields,
    };
};

struct DurabilityCostsMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_SHORT,  .ArraySize = 21, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 8, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1283019,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x8447966A,
        .Fields           = Fields,
    };
};

struct DurabilityQualityMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1130268,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x6F64793D,
        .Fields           = Fields,
    };
};

struct EdgeGlowEffectMeta
{
    static constexpr DB2MetaField Fields[13] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1387381,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 13,
        .LayoutHash       = 0x083BF2C4,
        .Fields           = Fields,
    };
};

struct EmotesMeta
{
    static constexpr DB2MetaField Fields[9] =
    {
        { .Type = FT_LONG,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1343602,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 9,
        .LayoutHash       = 0x14467F27,
        .Fields           = Fields,
    };
};

struct EmotesTextMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1347273,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xE85AFA10,
        .Fields           = Fields,
    };
};

struct EmotesTextDataMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1283024,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0x0E19BCF1,
        .Fields           = Fields,
    };
};

struct EmotesTextSoundMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1286524,
        .IndexField       = -1,
        .ParentIndexField = 4,
        .FieldCount       = 5,
        .LayoutHash       = 0x6DFAF9BC,
        .Fields           = Fields,
    };
};

struct EnvironmentalDamageMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1278398,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xC4552C14,
        .Fields           = Fields,
    };
};

struct ExhaustionMeta
{
    static constexpr DB2MetaField Fields[8] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1343313,
        .IndexField       = 7,
        .ParentIndexField = -1,
        .FieldCount       = 8,
        .LayoutHash       = 0xE6E16045,
        .Fields           = Fields,
    };
};

struct FactionMeta
{
    static constexpr DB2MetaField Fields[16] =
    {
        { .Type = FT_LONG,   .ArraySize = 4, .IsSigned = true },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 4, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 4, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 4, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 4, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 2, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1361972,
        .IndexField       = 3,
        .ParentIndexField = -1,
        .FieldCount       = 16,
        .LayoutHash       = 0x6BFE8737,
        .Fields           = Fields,
    };
};

struct FactionGroupMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1343595,
        .IndexField       = 2,
        .ParentIndexField = -1,
        .FieldCount       = 6,
        .LayoutHash       = 0x7A7F9A51,
        .Fields           = Fields,
    };
};

struct FactionTemplateMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 4, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 4, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1361579,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 7,
        .LayoutHash       = 0x6F1D2135,
        .Fields           = Fields,
    };
};

struct FootprintTexturesMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1308056,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0xFD6FF285,
        .Fields           = Fields,
    };
};

struct FootstepTerrainLookupMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1267647,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x454895AE,
        .Fields           = Fields,
    };
};

struct FriendshipRepReactionMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1237638,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0x9C412E5B,
        .Fields           = Fields,
    };
};

struct FriendshipReputationMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1237639,
        .IndexField       = 3,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x406EE0AB,
        .Fields           = Fields,
    };
};

struct FullScreenEffectMeta
{
    static constexpr DB2MetaField Fields[27] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1348282,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 27,
        .LayoutHash       = 0x5CBF1D1B,
        .Fields           = Fields,
    };
};

struct GMSurveyAnswersMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1283025,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0x422747F6,
        .Fields           = Fields,
    };
};

struct GMSurveyCurrentSurveyMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1278177,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x617205BF,
        .Fields           = Fields,
    };
};

struct GMSurveyQuestionsMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1278178,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x9D852FDC,
        .Fields           = Fields,
    };
};

struct GMSurveySurveysMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_BYTE,   .ArraySize = 15, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1283020,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x17FEF812,
        .Fields           = Fields,
    };
};

struct GameObjectArtKitMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 3, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1266737,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x6F65BC41,
        .Fields           = Fields,
    };
};

struct GameObjectDiffAnimMapMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1302847,
        .IndexField       = -1,
        .ParentIndexField = 3,
        .FieldCount       = 4,
        .LayoutHash       = 0x89A617CF,
        .Fields           = Fields,
    };
};

struct GameObjectDisplayInfoMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 6, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1266277,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0x9F2098D1,
        .Fields           = Fields,
    };
};

struct GameObjectDisplayInfoXSoundKitMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1345272,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0x4BBA66F2,
        .Fields           = Fields,
    };
};

struct GameObjectsMeta
{
    static constexpr DB2MetaField Fields[12] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 4, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 8, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 841620,
        .IndexField       = 11,
        .ParentIndexField = 5,
        .FieldCount       = 12,
        .LayoutHash       = 0x597E8643,
        .Fields           = Fields,
    };
};

struct GameTipsMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1368021,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x547E3F0F,
        .Fields           = Fields,
    };
};

struct GarrAbilityMeta
{
    static constexpr DB2MetaField Fields[8] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 966238,
        .IndexField       = 7,
        .ParentIndexField = -1,
        .FieldCount       = 8,
        .LayoutHash       = 0x5DF95DBD,
        .Fields           = Fields,
    };
};

struct GarrAbilityCategoryMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1020248,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x96663ABF,
        .Fields           = Fields,
    };
};

struct GarrAbilityEffectMeta
{
    static constexpr DB2MetaField Fields[12] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 966241,
        .IndexField       = 11,
        .ParentIndexField = 4,
        .FieldCount       = 12,
        .LayoutHash       = 0xE6A6CB99,
        .Fields           = Fields,
    };
};

struct GarrBuildingMeta
{
    static constexpr DB2MetaField Fields[24] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 929747,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 24,
        .LayoutHash       = 0x200F9858,
        .Fields           = Fields,
    };
};

struct GarrBuildingDoodadSetMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 943937,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0x2A861C7F,
        .Fields           = Fields,
    };
};

struct GarrBuildingPlotInstMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 983298,
        .IndexField       = 4,
        .ParentIndexField = 3,
        .FieldCount       = 5,
        .LayoutHash       = 0xF45B6227,
        .Fields           = Fields,
    };
};

struct GarrClassSpecMeta
{
    static constexpr DB2MetaField Fields[8] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 981570,
        .IndexField       = 7,
        .ParentIndexField = -1,
        .FieldCount       = 8,
        .LayoutHash       = 0x194CD478,
        .Fields           = Fields,
    };
};

struct GarrClassSpecPlayerCondMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1380674,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 6,
        .LayoutHash       = 0x06936172,
        .Fields           = Fields,
    };
};

struct GarrEncounterMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 975304,
        .IndexField       = 5,
        .ParentIndexField = -1,
        .FieldCount       = 7,
        .LayoutHash       = 0x63EF121A,
        .Fields           = Fields,
    };
};

struct GarrEncounterSetXEncounterMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1354772,
        .IndexField       = 0,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0x3AA64423,
        .Fields           = Fields,
    };
};

struct GarrEncounterXMechanicMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 967961,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0x97080E17,
        .Fields           = Fields,
    };
};

struct GarrFollItemSetMemberMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 981569,
        .IndexField       = -1,
        .ParentIndexField = 3,
        .FieldCount       = 4,
        .LayoutHash       = 0xCA1C4CBF,
        .Fields           = Fields,
    };
};

struct GarrFollSupportSpellMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1345970,
        .IndexField       = -1,
        .ParentIndexField = 3,
        .FieldCount       = 4,
        .LayoutHash       = 0xB7DBA2D1,
        .Fields           = Fields,
    };
};

struct GarrFollowerMeta
{
    static constexpr DB2MetaField Fields[32] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 949906,
        .IndexField       = 31,
        .ParentIndexField = -1,
        .FieldCount       = 32,
        .LayoutHash       = 0xAAB75E04,
        .Fields           = Fields,
    };
};

struct GarrFollowerLevelXPMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 970979,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x1ED485E2,
        .Fields           = Fields,
    };
};

struct GarrFollowerQualityMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1027793,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 7,
        .LayoutHash       = 0xAFF4CF7E,
        .Fields           = Fields,
    };
};

struct GarrFollowerSetXFollowerMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1361029,
        .IndexField       = -1,
        .ParentIndexField = 1,
        .FieldCount       = 2,
        .LayoutHash       = 0xDB0E0A17,
        .Fields           = Fields,
    };
};

struct GarrFollowerTypeMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1118784,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 7,
        .LayoutHash       = 0xD676FBC0,
        .Fields           = Fields,
    };
};

struct GarrFollowerUICreatureMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1412636,
        .IndexField       = -1,
        .ParentIndexField = 5,
        .FieldCount       = 6,
        .LayoutHash       = 0x7E275E96,
        .Fields           = Fields,
    };
};

struct GarrFollowerXAbilityMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 968468,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0x996447F1,
        .Fields           = Fields,
    };
};

struct GarrItemLevelUpgradeDataMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1572314,
        .IndexField       = 0,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0x069F44E5,
        .Fields           = Fields,
    };
};

struct GarrMechanicMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 967963,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0xAB49DA61,
        .Fields           = Fields,
    };
};

struct GarrMechanicSetXMechanicMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1391531,
        .IndexField       = 1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0x59514F7B,
        .Fields           = Fields,
    };
};

struct GarrMechanicTypeMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 967964,
        .IndexField       = 4,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0x6FEA569F,
        .Fields           = Fields,
    };
};

struct GarrMissionMeta
{
    static constexpr DB2MetaField Fields[29] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 967962,
        .IndexField       = 19,
        .ParentIndexField = 28,
        .FieldCount       = 29,
        .LayoutHash       = 0xDDD70490,
        .Fields           = Fields,
    };
};

struct GarrMissionTextureMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1125220,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x3071301C,
        .Fields           = Fields,
    };
};

struct GarrMissionTypeMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 984174,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0xA289655E,
        .Fields           = Fields,
    };
};

struct GarrMissionXEncounterMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 967960,
        .IndexField       = 1,
        .ParentIndexField = 4,
        .FieldCount       = 5,
        .LayoutHash       = 0xBCB016C6,
        .Fields           = Fields,
    };
};

struct GarrMissionXFollowerMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1359096,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0x1EBABA29,
        .Fields           = Fields,
    };
};

struct GarrMssnBonusAbilityMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1138458,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0x35F5AE92,
        .Fields           = Fields,
    };
};

struct GarrPlotMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 937634,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 7,
        .LayoutHash       = 0xE12049E0,
        .Fields           = Fields,
    };
};

struct GarrPlotBuildingMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 929743,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x3F77A6FA,
        .Fields           = Fields,
    };
};

struct GarrPlotInstanceMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 929742,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xB708BB37,
        .Fields           = Fields,
    };
};

struct GarrPlotUICategoryMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 937635,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xA94645EE,
        .Fields           = Fields,
    };
};

struct GarrSiteLevelMeta
{
    static constexpr DB2MetaField Fields[9] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 939295,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 9,
        .LayoutHash       = 0xD3979C38,
        .Fields           = Fields,
    };
};

struct GarrSiteLevelPlotInstMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 940404,
        .IndexField       = -1,
        .ParentIndexField = 1,
        .FieldCount       = 4,
        .LayoutHash       = 0xC4E74201,
        .Fields           = Fields,
    };
};

struct GarrSpecializationMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 937647,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 7,
        .LayoutHash       = 0x797A0F2F,
        .Fields           = Fields,
    };
};

struct GarrStringMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1416758,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0xE1C08C0C,
        .Fields           = Fields,
    };
};

struct GarrTalentMeta
{
    static constexpr DB2MetaField Fields[20] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1361032,
        .IndexField       = 7,
        .ParentIndexField = 8,
        .FieldCount       = 20,
        .LayoutHash       = 0x53D5FD16,
        .Fields           = Fields,
    };
};

struct GarrTalentTreeMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1361030,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0x676CBC04,
        .Fields           = Fields,
    };
};

struct GarrTypeMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1333161,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0x7C52F3B7,
        .Fields           = Fields,
    };
};

struct GarrUiAnimClassInfoMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 976037,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 6,
        .LayoutHash       = 0xDBF4633D,
        .Fields           = Fields,
    };
};

struct GarrUiAnimRaceInfoMeta
{
    static constexpr DB2MetaField Fields[13] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 976035,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 13,
        .LayoutHash       = 0x44B9C1DE,
        .Fields           = Fields,
    };
};

struct GemPropertiesMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1343604,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x84558CAB,
        .Fields           = Fields,
    };
};

struct GlobalStringsMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1394440,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x2CA3EA1E,
        .Fields           = Fields,
    };
};

struct GlyphBindableSpellMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1270147,
        .IndexField       = -1,
        .ParentIndexField = 1,
        .FieldCount       = 2,
        .LayoutHash       = 0xEA228DFA,
        .Fields           = Fields,
    };
};

struct GlyphExclusiveCategoryMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 948546,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0xFE598FCD,
        .Fields           = Fields,
    };
};

struct GlyphPropertiesMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1345274,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0xD0046829,
        .Fields           = Fields,
    };
};

struct GlyphRequiredSpecMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 948496,
        .IndexField       = -1,
        .ParentIndexField = 1,
        .FieldCount       = 2,
        .LayoutHash       = 0xDD6481CE,
        .Fields           = Fields,
    };
};

struct GroundEffectDoodadMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1308057,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x0376B2D6,
        .Fields           = Fields,
    };
};

struct GroundEffectTextureMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_SHORT,  .ArraySize = 4, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 4, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1308499,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x84549F0A,
        .Fields           = Fields,
    };
};

struct GroupFinderActivityMeta
{
    static constexpr DB2MetaField Fields[14] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 974813,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 14,
        .LayoutHash       = 0x3EF2F3BD,
        .Fields           = Fields,
    };
};

struct GroupFinderActivityGrpMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 974814,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xC9458196,
        .Fields           = Fields,
    };
};

struct GroupFinderCategoryMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 974812,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x9213552F,
        .Fields           = Fields,
    };
};

struct GuildColorBackgroundMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1286526,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0xCC0CEFF1,
        .Fields           = Fields,
    };
};

struct GuildColorBorderMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1286527,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0xCC0CEFF1,
        .Fields           = Fields,
    };
};

struct GuildColorEmblemMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1286525,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0xCC0CEFF1,
        .Fields           = Fields,
    };
};

struct GuildPerkSpellsMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1135238,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0xC15D6E9F,
        .Fields           = Fields,
    };
};

struct HeirloomMeta
{
    static constexpr DB2MetaField Fields[10] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 3, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1097696,
        .IndexField       = 9,
        .ParentIndexField = -1,
        .FieldCount       = 10,
        .LayoutHash       = 0x36887C6F,
        .Fields           = Fields,
    };
};

struct HelmetAnimScalingMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1348283,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0xB9EC1058,
        .Fields           = Fields,
    };
};

struct HelmetGeosetVisDataMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_INT,    .ArraySize = 9, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1294216,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x3B38D999,
        .Fields           = Fields,
    };
};

struct HighlightColorMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 996358,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0x5FADC5D3,
        .Fields           = Fields,
    };
};

struct HolidayDescriptionsMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 996360,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x92A95550,
        .Fields           = Fields,
    };
};

struct HolidayNamesMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 996359,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x96663ABF,
        .Fields           = Fields,
    };
};

struct HolidaysMeta
{
    static constexpr DB2MetaField Fields[12] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 16, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 10, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 10, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 3, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 996357,
        .IndexField       = 0,
        .ParentIndexField = -1,
        .FieldCount       = 12,
        .LayoutHash       = 0x7C3E60FC,
        .Fields           = Fields,
    };
};

struct HotfixMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1590224,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x3747930B,
        .Fields           = Fields,
    };
};

struct ImportPriceArmorMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1121229,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x1F7A850F,
        .Fields           = Fields,
    };
};

struct ImportPriceQualityMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1121228,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x6F64793D,
        .Fields           = Fields,
    };
};

struct ImportPriceShieldMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1121227,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x6F64793D,
        .Fields           = Fields,
    };
};

struct ImportPriceWeaponMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1121230,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x6F64793D,
        .Fields           = Fields,
    };
};

struct InvasionClientDataMeta
{
    static constexpr DB2MetaField Fields[10] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1336651,
        .IndexField       = 2,
        .ParentIndexField = 9,
        .FieldCount       = 10,
        .LayoutHash       = 0x4C93379F,
        .Fields           = Fields,
    };
};

struct ItemMeta
{
    static constexpr DB2MetaField Fields[8] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 841626,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 8,
        .LayoutHash       = 0x0DFCC83D,
        .Fields           = Fields,
    };
};

struct ItemAppearanceMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 982462,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x06D35A59,
        .Fields           = Fields,
    };
};

struct ItemAppearanceXUiCameraMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1248126,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x67747E15,
        .Fields           = Fields,
    };
};

struct ItemArmorQualityMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 7, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1283021,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x85642CC0,
        .Fields           = Fields,
    };
};

struct ItemArmorShieldMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 7, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1277741,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xC2186F95,
        .Fields           = Fields,
    };
};

struct ItemArmorTotalMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1283022,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0x45C396DD,
        .Fields           = Fields,
    };
};

struct ItemBagFamilyMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1278179,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x96663ABF,
        .Fields           = Fields,
    };
};

struct ItemBonusMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_INT,    .ArraySize = 3, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 959070,
        .IndexField       = -1,
        .ParentIndexField = 1,
        .FieldCount       = 4,
        .LayoutHash       = 0xE12FB1A0,
        .Fields           = Fields,
    };
};

struct ItemBonusListLevelDeltaMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1320358,
        .IndexField       = 1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xDFBF5AC9,
        .Fields           = Fields,
    };
};

struct ItemBonusTreeNodeMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 987134,
        .IndexField       = -1,
        .ParentIndexField = 4,
        .FieldCount       = 5,
        .LayoutHash       = 0x84FE93B7,
        .Fields           = Fields,
    };
};

struct ItemChildEquipmentMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1247926,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0xB6940674,
        .Fields           = Fields,
    };
};

struct ItemClassMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1140189,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0xA1E4663C,
        .Fields           = Fields,
    };
};

struct ItemContextPickerEntryMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1405665,
        .IndexField       = -1,
        .ParentIndexField = 5,
        .FieldCount       = 6,
        .LayoutHash       = 0x4A6DF90B,
        .Fields           = Fields,
    };
};

struct ItemCurrencyCostMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 801670,
        .IndexField       = -1,
        .ParentIndexField = 0,
        .FieldCount       = 1,
        .LayoutHash       = 0xE2FF5688,
        .Fields           = Fields,
    };
};

struct ItemDamageAmmoMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 7, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1277740,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xC2186F95,
        .Fields           = Fields,
    };
};

struct ItemDamageOneHandMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 7, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1277743,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xC2186F95,
        .Fields           = Fields,
    };
};

struct ItemDamageOneHandCasterMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 7, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1277739,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xC2186F95,
        .Fields           = Fields,
    };
};

struct ItemDamageTwoHandMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 7, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1277738,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xC2186F95,
        .Fields           = Fields,
    };
};

struct ItemDamageTwoHandCasterMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 7, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1277742,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xC2186F95,
        .Fields           = Fields,
    };
};

struct ItemDisenchantLootMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1134087,
        .IndexField       = -1,
        .ParentIndexField = 6,
        .FieldCount       = 7,
        .LayoutHash       = 0xC0D926CC,
        .Fields           = Fields,
    };
};

struct ItemDisplayInfoMeta
{
    static constexpr DB2MetaField Fields[15] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 4, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 4, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1266429,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 15,
        .LayoutHash       = 0x99606089,
        .Fields           = Fields,
    };
};

struct ItemDisplayInfoMaterialResMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1280614,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0xDEE4ED7B,
        .Fields           = Fields,
    };
};

struct ItemDisplayXUiCameraMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1146690,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xE57737B2,
        .Fields           = Fields,
    };
};

struct ItemEffectMeta
{
    static constexpr DB2MetaField Fields[9] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 969941,
        .IndexField       = -1,
        .ParentIndexField = 8,
        .FieldCount       = 9,
        .LayoutHash       = 0xA390FA40,
        .Fields           = Fields,
    };
};

struct ItemExtendedCostMeta
{
    static constexpr DB2MetaField Fields[10] =
    {
        { .Type = FT_INT,    .ArraySize = 5, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 5, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 5, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 5, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 801681,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 10,
        .LayoutHash       = 0xC31F4DEF,
        .Fields           = Fields,
    };
};

struct ItemGroupSoundsMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_INT,    .ArraySize = 4, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1283023,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0xDC2EE466,
        .Fields           = Fields,
    };
};

struct ItemLevelSelectorMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1588911,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x8143060E,
        .Fields           = Fields,
    };
};

struct ItemLevelSelectorQualityMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1624937,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0xB7174A51,
        .Fields           = Fields,
    };
};

struct ItemLevelSelectorQualitySetMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1624933,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x20055BA8,
        .Fields           = Fields,
    };
};

struct ItemLimitCategoryMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1237440,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0xB6BB188D,
        .Fields           = Fields,
    };
};

struct ItemLimitCategoryConditionMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1378590,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0xDE8EAD49,
        .Fields           = Fields,
    };
};

struct ItemModifiedAppearanceMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 982457,
        .IndexField       = 1,
        .ParentIndexField = 0,
        .FieldCount       = 6,
        .LayoutHash       = 0xE64FD18B,
        .Fields           = Fields,
    };
};

struct ItemModifiedAppearanceExtraMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1278399,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0x77212236,
        .Fields           = Fields,
    };
};

struct ItemNameDescriptionMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1332559,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x16760BD4,
        .Fields           = Fields,
    };
};

struct ItemPetFoodMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1302240,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0xE4923C1F,
        .Fields           = Fields,
    };
};

struct ItemPriceBaseMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1121231,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x4BD234D7,
        .Fields           = Fields,
    };
};

struct ItemRandomPropertiesMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 5, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1237441,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xB67375F8,
        .Fields           = Fields,
    };
};

struct ItemRandomSuffixMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 5, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 5, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1237592,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x95CAB825,
        .Fields           = Fields,
    };
};

struct ItemRangedDisplayInfoMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1270315,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x687A28D1,
        .Fields           = Fields,
    };
};

struct ItemSearchNameMeta
{
    static constexpr DB2MetaField Fields[14] =
    {
        { .Type = FT_LONG,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 3, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1273408,
        .IndexField       = 2,
        .ParentIndexField = -1,
        .FieldCount       = 14,
        .LayoutHash       = 0x2D4B72FA,
        .Fields           = Fields,
    };
};

struct ItemSetMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 17, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1343609,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0x847FF58A,
        .Fields           = Fields,
    };
};

struct ItemSetSpellMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1314689,
        .IndexField       = -1,
        .ParentIndexField = 3,
        .FieldCount       = 4,
        .LayoutHash       = 0xF65D0AF8,
        .Fields           = Fields,
    };
};

struct ItemSparseMeta
{
    static constexpr DB2MetaField Fields[64] =
    {
        { .Type = FT_LONG,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 4, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 10, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 10, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 10, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 10, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 3, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1572924,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 64,
        .LayoutHash       = 0x4007DE16,
        .Fields           = Fields,
    };
};

struct ItemSpecMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1135120,
        .IndexField       = -1,
        .ParentIndexField = 3,
        .FieldCount       = 6,
        .LayoutHash       = 0xB17B7986,
        .Fields           = Fields,
    };
};

struct ItemSpecOverrideMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1134576,
        .IndexField       = -1,
        .ParentIndexField = 1,
        .FieldCount       = 2,
        .LayoutHash       = 0xE499CD2A,
        .Fields           = Fields,
    };
};

struct ItemSubClassMeta
{
    static constexpr DB2MetaField Fields[10] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1261604,
        .IndexField       = -1,
        .ParentIndexField = 3,
        .FieldCount       = 10,
        .LayoutHash       = 0xDAD92A67,
        .Fields           = Fields,
    };
};

struct ItemSubClassMaskMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1302852,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0xFC1DA850,
        .Fields           = Fields,
    };
};

struct ItemUpgradeMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 801687,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0x8F3A4137,
        .Fields           = Fields,
    };
};

struct ItemVisualsMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_INT,    .ArraySize = 5, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1343605,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x485EA782,
        .Fields           = Fields,
    };
};

struct ItemXBonusTreeMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 987133,
        .IndexField       = -1,
        .ParentIndexField = 1,
        .FieldCount       = 2,
        .LayoutHash       = 0x87C4B605,
        .Fields           = Fields,
    };
};

struct JournalEncounterMeta
{
    static constexpr DB2MetaField Fields[11] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1240336,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 11,
        .LayoutHash       = 0x2935A0FD,
        .Fields           = Fields,
    };
};

struct JournalEncounterCreatureMeta
{
    static constexpr DB2MetaField Fields[8] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1301155,
        .IndexField       = 7,
        .ParentIndexField = 5,
        .FieldCount       = 8,
        .LayoutHash       = 0x22C79A42,
        .Fields           = Fields,
    };
};

struct JournalEncounterItemMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1344467,
        .IndexField       = 5,
        .ParentIndexField = 1,
        .FieldCount       = 6,
        .LayoutHash       = 0x39230FF9,
        .Fields           = Fields,
    };
};

struct JournalEncounterSectionMeta
{
    static constexpr DB2MetaField Fields[15] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1134413,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 15,
        .LayoutHash       = 0x13E56B12,
        .Fields           = Fields,
    };
};

struct JournalEncounterXDifficultyMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1121901,
        .IndexField       = -1,
        .ParentIndexField = 1,
        .FieldCount       = 2,
        .LayoutHash       = 0x321FD542,
        .Fields           = Fields,
    };
};

struct JournalEncounterXMapLocMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1722928,
        .IndexField       = -1,
        .ParentIndexField = 5,
        .FieldCount       = 6,
        .LayoutHash       = 0x430540E4,
        .Fields           = Fields,
    };
};

struct JournalInstanceMeta
{
    static constexpr DB2MetaField Fields[11] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1237438,
        .IndexField       = 10,
        .ParentIndexField = -1,
        .FieldCount       = 11,
        .LayoutHash       = 0x1691CC3D,
        .Fields           = Fields,
    };
};

struct JournalItemXDifficultyMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1277744,
        .IndexField       = -1,
        .ParentIndexField = 1,
        .FieldCount       = 2,
        .LayoutHash       = 0x60D9CA15,
        .Fields           = Fields,
    };
};

struct JournalSectionXDifficultyMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1121900,
        .IndexField       = -1,
        .ParentIndexField = 1,
        .FieldCount       = 2,
        .LayoutHash       = 0x243822A7,
        .Fields           = Fields,
    };
};

struct JournalTierMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1349056,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x8046B23F,
        .Fields           = Fields,
    };
};

struct JournalTierXInstanceMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1285009,
        .IndexField       = -1,
        .ParentIndexField = 0,
        .FieldCount       = 2,
        .LayoutHash       = 0x9C4F4D2A,
        .Fields           = Fields,
    };
};

struct KeychainMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_BYTE,   .ArraySize = 32, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 801693,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x5B214E82,
        .Fields           = Fields,
    };
};

struct KeystoneAffixMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1344761,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x1BCB46AA,
        .Fields           = Fields,
    };
};

struct LFGDungeonExpansionMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1343606,
        .IndexField       = -1,
        .ParentIndexField = 6,
        .FieldCount       = 7,
        .LayoutHash       = 0xB41DEA61,
        .Fields           = Fields,
    };
};

struct LFGDungeonGroupMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1135058,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x724D58E7,
        .Fields           = Fields,
    };
};

struct LFGDungeonsMeta
{
    static constexpr DB2MetaField Fields[33] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1361033,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 33,
        .LayoutHash       = 0xF02081A0,
        .Fields           = Fields,
    };
};

struct LFGRoleRequirementMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 982805,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0x7EB8A359,
        .Fields           = Fields,
    };
};

struct LanguageWordsMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 984702,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xC15912BD,
        .Fields           = Fields,
    };
};

struct LanguagesMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1135325,
        .IndexField       = 1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x6FA5D0C4,
        .Fields           = Fields,
    };
};

struct LfgDungeonsGroupingMapMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1339818,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0x8CB35C50,
        .Fields           = Fields,
    };
};

struct LightMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 8, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1375579,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0x25025A13,
        .Fields           = Fields,
    };
};

struct LightDataMeta
{
    static constexpr DB2MetaField Fields[35] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1375580,
        .IndexField       = -1,
        .ParentIndexField = 34,
        .FieldCount       = 35,
        .LayoutHash       = 0x2D2BA7FA,
        .Fields           = Fields,
    };
};

struct LightParamsMeta
{
    static constexpr DB2MetaField Fields[11] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1334669,
        .IndexField       = 10,
        .ParentIndexField = -1,
        .FieldCount       = 11,
        .LayoutHash       = 0xF67DE2AF,
        .Fields           = Fields,
    };
};

struct LightSkyboxMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1308501,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x8817C02C,
        .Fields           = Fields,
    };
};

struct LiquidMaterialMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1132538,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x62BE0340,
        .Fields           = Fields,
    };
};

struct LiquidObjectMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1308058,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0xACC168A6,
        .Fields           = Fields,
    };
};

struct LiquidTypeMeta
{
    static constexpr DB2MetaField Fields[19] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 6, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 18, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 4, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 6, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1371380,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 19,
        .LayoutHash       = 0x3313BBF3,
        .Fields           = Fields,
    };
};

struct LoadingScreenTaxiSplinesMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 10, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 10, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1302239,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0x4D6292C3,
        .Fields           = Fields,
    };
};

struct LoadingScreensMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1266541,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x99C0EB78,
        .Fields           = Fields,
    };
};

struct LocaleMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 801706,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x592AE13B,
        .Fields           = Fields,
    };
};

struct LocationMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 801707,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xBBC1BE7A,
        .Fields           = Fields,
    };
};

struct LockMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_INT,    .ArraySize = 8, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 8, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 8, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 8, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1343608,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0xDAC7F42F,
        .Fields           = Fields,
    };
};

struct LockTypeMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1284823,
        .IndexField       = 4,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0xCD5E1D2F,
        .Fields           = Fields,
    };
};

struct LookAtControllerMeta
{
    static constexpr DB2MetaField Fields[18] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1098785,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 18,
        .LayoutHash       = 0x543C0D56,
        .Fields           = Fields,
    };
};

struct MailTemplateMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1240344,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x25C8D6CC,
        .Fields           = Fields,
    };
};

struct ManagedWorldStateMeta
{
    static constexpr DB2MetaField Fields[10] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1587159,
        .IndexField       = 9,
        .ParentIndexField = -1,
        .FieldCount       = 10,
        .LayoutHash       = 0xBA06FC33,
        .Fields           = Fields,
    };
};

struct ManagedWorldStateBuffMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1587155,
        .IndexField       = -1,
        .ParentIndexField = 3,
        .FieldCount       = 4,
        .LayoutHash       = 0x6D201DC7,
        .Fields           = Fields,
    };
};

struct ManagedWorldStateInputMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1587151,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x0FC1A9B0,
        .Fields           = Fields,
    };
};

struct ManifestInterfaceActionIconMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1375803,
        .IndexField       = 0,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x6A529F37,
        .Fields           = Fields,
    };
};

struct ManifestInterfaceDataMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1375801,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x9E5F4C99,
        .Fields           = Fields,
    };
};

struct ManifestInterfaceItemIconMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1375804,
        .IndexField       = 0,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x6A529F37,
        .Fields           = Fields,
    };
};

struct ManifestInterfaceTOCDataMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1267335,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x6F7D397D,
        .Fields           = Fields,
    };
};

struct ManifestMP3Meta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1375802,
        .IndexField       = 0,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x6A529F37,
        .Fields           = Fields,
    };
};

struct MapMeta
{
    static constexpr DB2MetaField Fields[21] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1349477,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 21,
        .LayoutHash       = 0xF568DF12,
        .Fields           = Fields,
    };
};

struct MapCelestialBodyMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1597466,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0xBDE1C11C,
        .Fields           = Fields,
    };
};

struct MapChallengeModeMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 3, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 801709,
        .IndexField       = 1,
        .ParentIndexField = 2,
        .FieldCount       = 5,
        .LayoutHash       = 0xC5261662,
        .Fields           = Fields,
    };
};

struct MapDifficultyMeta
{
    static constexpr DB2MetaField Fields[9] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1367868,
        .IndexField       = -1,
        .ParentIndexField = 8,
        .FieldCount       = 9,
        .LayoutHash       = 0x2B3B759E,
        .Fields           = Fields,
    };
};

struct MapDifficultyXConditionMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1375435,
        .IndexField       = -1,
        .ParentIndexField = 3,
        .FieldCount       = 4,
        .LayoutHash       = 0x5F5D7102,
        .Fields           = Fields,
    };
};

struct MapLoadingScreenMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1719707,
        .IndexField       = -1,
        .ParentIndexField = 4,
        .FieldCount       = 5,
        .LayoutHash       = 0xBBE57FE4,
        .Fields           = Fields,
    };
};

struct MarketingPromotionsXLocaleMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 801710,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 7,
        .LayoutHash       = 0x80362F57,
        .Fields           = Fields,
    };
};

struct MaterialMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1294217,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x0BC8C134,
        .Fields           = Fields,
    };
};

struct MinorTalentMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1347274,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0xAAEF0DF8,
        .Fields           = Fields,
    };
};

struct MissileTargetingMeta
{
    static constexpr DB2MetaField Fields[12] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1710117,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 12,
        .LayoutHash       = 0x2305491E,
        .Fields           = Fields,
    };
};

struct ModelAnimCloakDampeningMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1465904,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0x839B4263,
        .Fields           = Fields,
    };
};

struct ModelFileDataMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1337833,
        .IndexField       = 1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0xA395EB50,
        .Fields           = Fields,
    };
};

struct ModelRibbonQualityMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1399953,
        .IndexField       = -1,
        .ParentIndexField = 1,
        .FieldCount       = 2,
        .LayoutHash       = 0x38F764D9,
        .Fields           = Fields,
    };
};

struct ModifierTreeMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1267645,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 7,
        .LayoutHash       = 0x7718AFC2,
        .Fields           = Fields,
    };
};

struct MountMeta
{
    static constexpr DB2MetaField Fields[11] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 921760,
        .IndexField       = 8,
        .ParentIndexField = -1,
        .FieldCount       = 11,
        .LayoutHash       = 0x4D812F19,
        .Fields           = Fields,
    };
};

struct MountCapabilityMeta
{
    static constexpr DB2MetaField Fields[8] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1114709,
        .IndexField       = 6,
        .ParentIndexField = -1,
        .FieldCount       = 8,
        .LayoutHash       = 0xB0D11D52,
        .Fields           = Fields,
    };
};

struct MountTypeXCapabilityMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1114715,
        .IndexField       = -1,
        .ParentIndexField = 0,
        .FieldCount       = 3,
        .LayoutHash       = 0xA34A8445,
        .Fields           = Fields,
    };
};

struct MountXDisplayMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1576117,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0xD59B9FE4,
        .Fields           = Fields,
    };
};

struct MovieMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1332556,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0xF3E9AE3B,
        .Fields           = Fields,
    };
};

struct MovieFileDataMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1301154,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0xAA16D59F,
        .Fields           = Fields,
    };
};

struct MovieVariationMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1339819,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0x3BFD250E,
        .Fields           = Fields,
    };
};

struct NPCModelItemSlotDisplayInfoMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1340661,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0x11D16204,
        .Fields           = Fields,
    };
};

struct NPCSoundsMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_INT,    .ArraySize = 4, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1282621,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x672E1A6B,
        .Fields           = Fields,
    };
};

struct NameGenMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1122117,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x2EF936CD,
        .Fields           = Fields,
    };
};

struct NamesProfanityMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1117086,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xDFB56E0E,
        .Fields           = Fields,
    };
};

struct NamesReservedMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1117085,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0xE4923C1F,
        .Fields           = Fields,
    };
};

struct NamesReservedLocaleMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1117087,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xC1403093,
        .Fields           = Fields,
    };
};

struct ObjectEffectMeta
{
    static constexpr DB2MetaField Fields[8] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1090577,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 8,
        .LayoutHash       = 0x6A0CF743,
        .Fields           = Fields,
    };
};

struct ObjectEffectModifierMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 4, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1090575,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0xA482B053,
        .Fields           = Fields,
    };
};

struct ObjectEffectPackageElemMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1090578,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x8CF043E5,
        .Fields           = Fields,
    };
};

struct OutlineEffectMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1279739,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 6,
        .LayoutHash       = 0x466B2BC4,
        .Fields           = Fields,
    };
};

struct OverrideSpellDataMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 10, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1002186,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x9417628C,
        .Fields           = Fields,
    };
};

struct PVPBracketTypesMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 4, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1394275,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x7C55E5BB,
        .Fields           = Fields,
    };
};

struct PVPDifficultyMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1339820,
        .IndexField       = -1,
        .ParentIndexField = 3,
        .FieldCount       = 4,
        .LayoutHash       = 0x970B5E15,
        .Fields           = Fields,
    };
};

struct PVPItemMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 972287,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xBD449801,
        .Fields           = Fields,
    };
};

struct PageTextMaterialMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1271600,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x96663ABF,
        .Fields           = Fields,
    };
};

struct PaperDollItemFrameMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1252503,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x66B0597E,
        .Fields           = Fields,
    };
};

struct ParagonReputationMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1581183,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0xD7712F98,
        .Fields           = Fields,
    };
};

struct ParticleColorMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 3, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 3, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 3, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1284820,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x1576D1E1,
        .Fields           = Fields,
    };
};

struct PathMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 801732,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 7,
        .LayoutHash       = 0x5017579F,
        .Fields           = Fields,
    };
};

struct PathNodeMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 801733,
        .IndexField       = 0,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x76615830,
        .Fields           = Fields,
    };
};

struct PathNodePropertyMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 801734,
        .IndexField       = 3,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0x92C03009,
        .Fields           = Fields,
    };
};

struct PathPropertyMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 801735,
        .IndexField       = 3,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x3D29C266,
        .Fields           = Fields,
    };
};

struct PhaseMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1348558,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x0043219C,
        .Fields           = Fields,
    };
};

struct PhaseShiftZoneSoundsMeta
{
    static constexpr DB2MetaField Fields[13] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1267336,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 13,
        .LayoutHash       = 0x85ACB830,
        .Fields           = Fields,
    };
};

struct PhaseXPhaseGroupMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 987581,
        .IndexField       = -1,
        .ParentIndexField = 1,
        .FieldCount       = 2,
        .LayoutHash       = 0x66517AF6,
        .Fields           = Fields,
    };
};

struct PlayerConditionMeta
{
    static constexpr DB2MetaField Fields[81] =
    {
        { .Type = FT_LONG,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 4, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 4, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 4, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 3, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 3, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 4, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 4, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 4, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 4, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 4, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 4, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 4, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 4, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 4, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 4, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 4, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 4, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 4, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 4, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 4, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 6, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1045411,
        .IndexField       = 2,
        .ParentIndexField = -1,
        .FieldCount       = 81,
        .LayoutHash       = 0x5B3DA113,
        .Fields           = Fields,
    };
};

struct PositionerMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1251523,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0xE830F1B1,
        .Fields           = Fields,
    };
};

struct PositionerStateMeta
{
    static constexpr DB2MetaField Fields[8] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1251506,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 8,
        .LayoutHash       = 0x6C975DF4,
        .Fields           = Fields,
    };
};

struct PositionerStateEntryMeta
{
    static constexpr DB2MetaField Fields[11] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1251533,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 11,
        .LayoutHash       = 0x667ED965,
        .Fields           = Fields,
    };
};

struct PowerDisplayMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1332557,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0xFD152E5B,
        .Fields           = Fields,
    };
};

struct PowerTypeMeta
{
    static constexpr DB2MetaField Fields[12] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1266022,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 12,
        .LayoutHash       = 0x0C3844E1,
        .Fields           = Fields,
    };
};

struct PrestigeLevelInfoMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1275869,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0xA7B2D559,
        .Fields           = Fields,
    };
};

struct PvpRewardMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1307154,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x72F4C016,
        .Fields           = Fields,
    };
};

struct PvpScalingEffectMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1591100,
        .IndexField       = -1,
        .ParentIndexField = 1,
        .FieldCount       = 3,
        .LayoutHash       = 0x52121A41,
        .Fields           = Fields,
    };
};

struct PvpScalingEffectTypeMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1591098,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x96663ABF,
        .Fields           = Fields,
    };
};

struct PvpTalentMeta
{
    static constexpr DB2MetaField Fields[10] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1302853,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 10,
        .LayoutHash       = 0x6EB51740,
        .Fields           = Fields,
    };
};

struct PvpTalentUnlockMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1302848,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x465C83BC,
        .Fields           = Fields,
    };
};

struct QuestFactionRewardMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_SHORT,  .ArraySize = 10, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1282622,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0xB0E02541,
        .Fields           = Fields,
    };
};

struct QuestFeedbackEffectMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1343388,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 6,
        .LayoutHash       = 0x89D55A27,
        .Fields           = Fields,
    };
};

struct QuestInfoMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1120960,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x4F45F445,
        .Fields           = Fields,
    };
};

struct QuestLineMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 973430,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x8046B23F,
        .Fields           = Fields,
    };
};

struct QuestLineXQuestMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 973441,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x8FA4A9C7,
        .Fields           = Fields,
    };
};

struct QuestMoneyRewardMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_INT,    .ArraySize = 10, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1139047,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x86397302,
        .Fields           = Fields,
    };
};

struct QuestObjectiveMeta
{
    static constexpr DB2MetaField Fields[8] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1251960,
        .IndexField       = -1,
        .ParentIndexField = 7,
        .FieldCount       = 8,
        .LayoutHash       = 0xDD995180,
        .Fields           = Fields,
    };
};

struct QuestPOIBlobMeta
{
    static constexpr DB2MetaField Fields[8] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1251882,
        .IndexField       = 0,
        .ParentIndexField = 2,
        .FieldCount       = 8,
        .LayoutHash       = 0xEC15976E,
        .Fields           = Fields,
    };
};

struct QuestPOIPointMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1251883,
        .IndexField       = 0,
        .ParentIndexField = 3,
        .FieldCount       = 4,
        .LayoutHash       = 0x8CF2B119,
        .Fields           = Fields,
    };
};

struct QuestPackageItemMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 801743,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0xCF9401CF,
        .Fields           = Fields,
    };
};

struct QuestSortMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1134585,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xAD7072C6,
        .Fields           = Fields,
    };
};

struct QuestV2Meta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1139443,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x70495C9B,
        .Fields           = Fields,
    };
};

struct QuestV2CliTaskMeta
{
    static constexpr DB2MetaField Fields[24] =
    {
        { .Type = FT_LONG,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1028735,
        .IndexField       = 20,
        .ParentIndexField = -1,
        .FieldCount       = 24,
        .LayoutHash       = 0x3F026A14,
        .Fields           = Fields,
    };
};

struct QuestXGroupActivityMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1573634,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x06CC45D3,
        .Fields           = Fields,
    };
};

struct QuestXPMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_SHORT,  .ArraySize = 10, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1139378,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0xCB76B4C0,
        .Fields           = Fields,
    };
};

struct RandPropPointsMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 5, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 5, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 5, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1310245,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x4E2C0BCC,
        .Fields           = Fields,
    };
};

struct RelicSlotTierRequirementMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1716803,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x129FCC09,
        .Fields           = Fields,
    };
};

struct RelicTalentMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1671256,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0x7A5963FD,
        .Fields           = Fields,
    };
};

struct ResearchBranchMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1133729,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 6,
        .LayoutHash       = 0x58A3876E,
        .Fields           = Fields,
    };
};

struct ResearchFieldMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1133711,
        .IndexField       = 2,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x85868B9F,
        .Fields           = Fields,
    };
};

struct ResearchProjectMeta
{
    static constexpr DB2MetaField Fields[9] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1134090,
        .IndexField       = 6,
        .ParentIndexField = -1,
        .FieldCount       = 9,
        .LayoutHash       = 0xB1CAB80B,
        .Fields           = Fields,
    };
};

struct ResearchSiteMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1134091,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x25F7DCC7,
        .Fields           = Fields,
    };
};

struct ResistancesMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1135072,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0xA3EAE5AE,
        .Fields           = Fields,
    };
};

struct RewardPackMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1307156,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 6,
        .LayoutHash       = 0xDB6CC0AB,
        .Fields           = Fields,
    };
};

struct RewardPackXCurrencyTypeMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1307153,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0x217E6712,
        .Fields           = Fields,
    };
};

struct RewardPackXItemMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1307155,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0x74F6B9BD,
        .Fields           = Fields,
    };
};

struct RibbonQualityMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1398908,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0xC75DAEA8,
        .Fields           = Fields,
    };
};

struct RulesetItemUpgradeMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 801749,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xFB641AE0,
        .Fields           = Fields,
    };
};

struct SDReplacementModelMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1712172,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0xE1F906C2,
        .Fields           = Fields,
    };
};

struct SandboxScalingMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1776833,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x5200B7F5,
        .Fields           = Fields,
    };
};

struct ScalingStatDistributionMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1141728,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0xDED48286,
        .Fields           = Fields,
    };
};

struct ScenarioMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1139062,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0xD052232A,
        .Fields           = Fields,
    };
};

struct ScenarioEventEntryMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1141065,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x02E80455,
        .Fields           = Fields,
    };
};

struct ScenarioStepMeta
{
    static constexpr DB2MetaField Fields[9] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1132761,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 9,
        .LayoutHash       = 0x201B0EFC,
        .Fields           = Fields,
    };
};

struct SceneScriptMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 801754,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xC694B81E,
        .Fields           = Fields,
    };
};

struct SceneScriptGlobalTextMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1758036,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xB9F8FDF1,
        .Fields           = Fields,
    };
};

struct SceneScriptPackageMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 801755,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x96663ABF,
        .Fields           = Fields,
    };
};

struct SceneScriptPackageMemberMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 801756,
        .IndexField       = -1,
        .ParentIndexField = 0,
        .FieldCount       = 4,
        .LayoutHash       = 0x787A715F,
        .Fields           = Fields,
    };
};

struct SceneScriptTextMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1758037,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xB9F8FDF1,
        .Fields           = Fields,
    };
};

struct ScheduledIntervalMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1327082,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0x5DD2FF46,
        .Fields           = Fields,
    };
};

struct ScheduledWorldStateMeta
{
    static constexpr DB2MetaField Fields[8] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1327083,
        .IndexField       = -1,
        .ParentIndexField = 0,
        .FieldCount       = 8,
        .LayoutHash       = 0xFCB13A6A,
        .Fields           = Fields,
    };
};

struct ScheduledWorldStateGroupMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1327084,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0x21F6EE03,
        .Fields           = Fields,
    };
};

struct ScheduledWorldStateXUniqCatMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1388724,
        .IndexField       = 0,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0x7EFF57FD,
        .Fields           = Fields,
    };
};

struct ScreenEffectMeta
{
    static constexpr DB2MetaField Fields[12] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 4, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1302849,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 12,
        .LayoutHash       = 0x4D5B91C5,
        .Fields           = Fields,
    };
};

struct ScreenLocationMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1279416,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x96663ABF,
        .Fields           = Fields,
    };
};

struct SeamlessSiteMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1328719,
        .IndexField       = -1,
        .ParentIndexField = 0,
        .FieldCount       = 1,
        .LayoutHash       = 0xBFE7B9D3,
        .Fields           = Fields,
    };
};

struct ServerMessagesMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1301141,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x1C7A1347,
        .Fields           = Fields,
    };
};

struct ShadowyEffectMeta
{
    static constexpr DB2MetaField Fields[13] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1239844,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 13,
        .LayoutHash       = 0xE909BB18,
        .Fields           = Fields,
    };
};

struct SkillLineMeta
{
    static constexpr DB2MetaField Fields[8] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1240935,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 8,
        .LayoutHash       = 0x3F7E88AF,
        .Fields           = Fields,
    };
};

struct SkillLineAbilityMeta
{
    static constexpr DB2MetaField Fields[14] =
    {
        { .Type = FT_LONG,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1266278,
        .IndexField       = 1,
        .ParentIndexField = 4,
        .FieldCount       = 14,
        .LayoutHash       = 0x97B5A653,
        .Fields           = Fields,
    };
};

struct SkillRaceClassInfoMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { .Type = FT_LONG,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1240406,
        .IndexField       = -1,
        .ParentIndexField = 1,
        .FieldCount       = 7,
        .LayoutHash       = 0x9752C2CE,
        .Fields           = Fields,
    };
};

struct SoundAmbienceMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1310628,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0xB073D4B5,
        .Fields           = Fields,
    };
};

struct SoundAmbienceFlavorMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1267065,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0x2C58D929,
        .Fields           = Fields,
    };
};

struct SoundBusMeta
{
    static constexpr DB2MetaField Fields[8] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1310246,
        .IndexField       = 6,
        .ParentIndexField = 7,
        .FieldCount       = 8,
        .LayoutHash       = 0xB2ACDE2A,
        .Fields           = Fields,
    };
};

struct SoundBusOverrideMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1598732,
        .IndexField       = 0,
        .ParentIndexField = 5,
        .FieldCount       = 7,
        .LayoutHash       = 0x6D887F48,
        .Fields           = Fields,
    };
};

struct SoundEmitterPillPointsMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1092317,
        .IndexField       = -1,
        .ParentIndexField = 1,
        .FieldCount       = 2,
        .LayoutHash       = 0x41FCF15B,
        .Fields           = Fields,
    };
};

struct SoundEmittersMeta
{
    static constexpr DB2MetaField Fields[12] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1092316,
        .IndexField       = 8,
        .ParentIndexField = 11,
        .FieldCount       = 12,
        .LayoutHash       = 0x55A3B17E,
        .Fields           = Fields,
    };
};

struct SoundEnvelopeMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1693131,
        .IndexField       = -1,
        .ParentIndexField = 0,
        .FieldCount       = 7,
        .LayoutHash       = 0x5B78031C,
        .Fields           = Fields,
    };
};

struct SoundFilterMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1271601,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x96663ABF,
        .Fields           = Fields,
    };
};

struct SoundFilterElemMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 9, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1267066,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0xE17AC589,
        .Fields           = Fields,
    };
};

struct SoundKitMeta
{
    static constexpr DB2MetaField Fields[16] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1237434,
        .IndexField       = 0,
        .ParentIndexField = -1,
        .FieldCount       = 16,
        .LayoutHash       = 0x0E9CB7AE,
        .Fields           = Fields,
    };
};

struct SoundKitAdvancedMeta
{
    static constexpr DB2MetaField Fields[40] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1237436,
        .IndexField       = 0,
        .ParentIndexField = -1,
        .FieldCount       = 40,
        .LayoutHash       = 0x73F6F023,
        .Fields           = Fields,
    };
};

struct SoundKitChildMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1307289,
        .IndexField       = -1,
        .ParentIndexField = 0,
        .FieldCount       = 2,
        .LayoutHash       = 0x2827A3B5,
        .Fields           = Fields,
    };
};

struct SoundKitEntryMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1237435,
        .IndexField       = -1,
        .ParentIndexField = 0,
        .FieldCount       = 4,
        .LayoutHash       = 0x6ED6E26F,
        .Fields           = Fields,
    };
};

struct SoundKitFallbackMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1307288,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xB1A5106F,
        .Fields           = Fields,
    };
};

struct SoundKitNameMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1665033,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x96663ABF,
        .Fields           = Fields,
    };
};

struct SoundOverrideMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1266542,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0xFB7643F6,
        .Fields           = Fields,
    };
};

struct SoundProviderPreferencesMeta
{
    static constexpr DB2MetaField Fields[23] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1279417,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 23,
        .LayoutHash       = 0x85F218A4,
        .Fields           = Fields,
    };
};

struct SourceInfoMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1313612,
        .IndexField       = -1,
        .ParentIndexField = 3,
        .FieldCount       = 4,
        .LayoutHash       = 0x7C214135,
        .Fields           = Fields,
    };
};

struct SpamMessagesMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1117088,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x0D4BA7E7,
        .Fields           = Fields,
    };
};

struct SpecializationSpellsMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1240335,
        .IndexField       = 5,
        .ParentIndexField = 3,
        .FieldCount       = 6,
        .LayoutHash       = 0xAE3436F3,
        .Fields           = Fields,
    };
};

struct SpellMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1140089,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x2273DFFF,
        .Fields           = Fields,
    };
};

struct SpellActionBarPrefMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1019373,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x1EF80B2B,
        .Fields           = Fields,
    };
};

struct SpellActivationOverlayMeta
{
    static constexpr DB2MetaField Fields[8] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 4, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1261603,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 8,
        .LayoutHash       = 0x23568FC7,
        .Fields           = Fields,
    };
};

struct SpellAuraOptionsMeta
{
    static constexpr DB2MetaField Fields[8] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1139952,
        .IndexField       = -1,
        .ParentIndexField = 7,
        .FieldCount       = 8,
        .LayoutHash       = 0xE05BE94F,
        .Fields           = Fields,
    };
};

struct SpellAuraRestrictionsMeta
{
    static constexpr DB2MetaField Fields[10] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 981566,
        .IndexField       = -1,
        .ParentIndexField = 9,
        .FieldCount       = 10,
        .LayoutHash       = 0x7CDF3311,
        .Fields           = Fields,
    };
};

struct SpellAuraVisXChrSpecMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1280615,
        .IndexField       = -1,
        .ParentIndexField = 1,
        .FieldCount       = 2,
        .LayoutHash       = 0xA65B6A4A,
        .Fields           = Fields,
    };
};

struct SpellAuraVisibilityMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1280616,
        .IndexField       = 2,
        .ParentIndexField = 3,
        .FieldCount       = 4,
        .LayoutHash       = 0xA549F79C,
        .Fields           = Fields,
    };
};

struct SpellCastTimesMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1134089,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x4129C6A4,
        .Fields           = Fields,
    };
};

struct SpellCastingRequirementsMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1002166,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 7,
        .LayoutHash       = 0xD8B56E5D,
        .Fields           = Fields,
    };
};

struct SpellCategoriesMeta
{
    static constexpr DB2MetaField Fields[9] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1139939,
        .IndexField       = -1,
        .ParentIndexField = 8,
        .FieldCount       = 9,
        .LayoutHash       = 0x14E916CC,
        .Fields           = Fields,
    };
};

struct SpellCategoryMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1280619,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 6,
        .LayoutHash       = 0xEA60E384,
        .Fields           = Fields,
    };
};

struct SpellChainEffectsMeta
{
    static constexpr DB2MetaField Fields[60] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 11, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 3, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1343310,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 60,
        .LayoutHash       = 0x4E8FF369,
        .Fields           = Fields,
    };
};

struct SpellClassOptionsMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 4, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 979663,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x80FBD67A,
        .Fields           = Fields,
    };
};

struct SpellCooldownsMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1139924,
        .IndexField       = -1,
        .ParentIndexField = 4,
        .FieldCount       = 5,
        .LayoutHash       = 0xCA8D8B3C,
        .Fields           = Fields,
    };
};

struct SpellDescriptionVariablesMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1140004,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0xA8EDE75B,
        .Fields           = Fields,
    };
};

struct SpellDispelTypeMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1137829,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0xE9DDA799,
        .Fields           = Fields,
    };
};

struct SpellDurationMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1137828,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x0D6C9082,
        .Fields           = Fields,
    };
};

struct SpellEffectMeta
{
    static constexpr DB2MetaField Fields[30] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 4, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1140088,
        .IndexField       = 0,
        .ParentIndexField = 29,
        .FieldCount       = 30,
        .LayoutHash       = 0x3244098B,
        .Fields           = Fields,
    };
};

struct SpellEffectEmissionMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1310248,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0xC6E61A9B,
        .Fields           = Fields,
    };
};

struct SpellEquippedItemsMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1140011,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0xCE628176,
        .Fields           = Fields,
    };
};

struct SpellFlyoutMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { .Type = FT_LONG,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1146819,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 6,
        .LayoutHash       = 0x437671BD,
        .Fields           = Fields,
    };
};

struct SpellFlyoutItemMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1134085,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0xF86ADE09,
        .Fields           = Fields,
    };
};

struct SpellFocusObjectMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1280620,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x96663ABF,
        .Fields           = Fields,
    };
};

struct SpellInterruptsMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1139906,
        .IndexField       = -1,
        .ParentIndexField = 4,
        .FieldCount       = 5,
        .LayoutHash       = 0x2FA8EA94,
        .Fields           = Fields,
    };
};

struct SpellItemEnchantmentMeta
{
    static constexpr DB2MetaField Fields[19] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 3, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 3, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1362771,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 19,
        .LayoutHash       = 0x80DEA734,
        .Fields           = Fields,
    };
};

struct SpellItemEnchantmentConditionMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { .Type = FT_INT,    .ArraySize = 5, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 5, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 5, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 5, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 5, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 5, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1121834,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 6,
        .LayoutHash       = 0xB9C16961,
        .Fields           = Fields,
    };
};

struct SpellKeyboundOverrideMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1127327,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x6ECA16FC,
        .Fields           = Fields,
    };
};

struct SpellLabelMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1347275,
        .IndexField       = -1,
        .ParentIndexField = 1,
        .FieldCount       = 2,
        .LayoutHash       = 0x68E44736,
        .Fields           = Fields,
    };
};

struct SpellLearnSpellMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1001907,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x153EBA26,
        .Fields           = Fields,
    };
};

struct SpellLevelsMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1140079,
        .IndexField       = -1,
        .ParentIndexField = 5,
        .FieldCount       = 6,
        .LayoutHash       = 0x9E7D1CCD,
        .Fields           = Fields,
    };
};

struct SpellMechanicMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1014438,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0xF2075D8C,
        .Fields           = Fields,
    };
};

struct SpellMiscMeta
{
    static constexpr DB2MetaField Fields[11] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 14, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1003144,
        .IndexField       = -1,
        .ParentIndexField = 10,
        .FieldCount       = 11,
        .LayoutHash       = 0xCDC114D5,
        .Fields           = Fields,
    };
};

struct SpellMissileMeta
{
    static constexpr DB2MetaField Fields[15] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 897956,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 15,
        .LayoutHash       = 0x1D35645E,
        .Fields           = Fields,
    };
};

struct SpellMissileMotionMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 897955,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x6B78A45B,
        .Fields           = Fields,
    };
};

struct SpellPowerMeta
{
    static constexpr DB2MetaField Fields[14] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 982806,
        .IndexField       = 7,
        .ParentIndexField = 13,
        .FieldCount       = 14,
        .LayoutHash       = 0x8E5E46EC,
        .Fields           = Fields,
    };
};

struct SpellPowerDifficultyMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 982804,
        .IndexField       = 2,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x74714FF7,
        .Fields           = Fields,
    };
};

struct SpellProceduralEffectMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 4, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1140477,
        .IndexField       = 2,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x3E47F4EF,
        .Fields           = Fields,
    };
};

struct SpellProcsPerMinuteMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1133526,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x4BC1931B,
        .Fields           = Fields,
    };
};

struct SpellProcsPerMinuteModMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1133525,
        .IndexField       = -1,
        .ParentIndexField = 3,
        .FieldCount       = 4,
        .LayoutHash       = 0x2503C18B,
        .Fields           = Fields,
    };
};

struct SpellRadiusMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1134584,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0xC12E5C90,
        .Fields           = Fields,
    };
};

struct SpellRangeMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1146820,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0xDE2E3F8E,
        .Fields           = Fields,
    };
};

struct SpellReagentsMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 8, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 8, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 841946,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x0463C688,
        .Fields           = Fields,
    };
};

struct SpellReagentsCurrencyMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1135239,
        .IndexField       = -1,
        .ParentIndexField = 0,
        .FieldCount       = 3,
        .LayoutHash       = 0x90A5E5D2,
        .Fields           = Fields,
    };
};

struct SpellScalingMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1139940,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0xF67A5719,
        .Fields           = Fields,
    };
};

struct SpellShapeshiftMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1139929,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0xA461C24D,
        .Fields           = Fields,
    };
};

struct SpellShapeshiftFormMeta
{
    static constexpr DB2MetaField Fields[10] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 4, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 8, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1280618,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 10,
        .LayoutHash       = 0x130819AF,
        .Fields           = Fields,
    };
};

struct SpellSpecialUnitEffectMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1268903,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x76989615,
        .Fields           = Fields,
    };
};

struct SpellTargetRestrictionsMeta
{
    static constexpr DB2MetaField Fields[8] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1139993,
        .IndexField       = -1,
        .ParentIndexField = 7,
        .FieldCount       = 8,
        .LayoutHash       = 0x7B330026,
        .Fields           = Fields,
    };
};

struct SpellTotemsMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 2, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1002162,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0xEC0C4866,
        .Fields           = Fields,
    };
};

struct SpellVisualMeta
{
    static constexpr DB2MetaField Fields[14] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 897952,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 14,
        .LayoutHash       = 0x1C1301D2,
        .Fields           = Fields,
    };
};

struct SpellVisualAnimMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1140479,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x0ABD7A19,
        .Fields           = Fields,
    };
};

struct SpellVisualColorEffectMeta
{
    static constexpr DB2MetaField Fields[11] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1094006,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 11,
        .LayoutHash       = 0x7E5B2E66,
        .Fields           = Fields,
    };
};

struct SpellVisualEffectNameMeta
{
    static constexpr DB2MetaField Fields[13] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 897948,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 13,
        .LayoutHash       = 0xB930A934,
        .Fields           = Fields,
    };
};

struct SpellVisualEventMeta
{
    static constexpr DB2MetaField Fields[9] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1685317,
        .IndexField       = -1,
        .ParentIndexField = 8,
        .FieldCount       = 9,
        .LayoutHash       = 0xAE75BC3C,
        .Fields           = Fields,
    };
};

struct SpellVisualKitMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 897949,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0xDC04F488,
        .Fields           = Fields,
    };
};

struct SpellVisualKitAreaModelMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 897951,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 6,
        .LayoutHash       = 0xBE76E593,
        .Fields           = Fields,
    };
};

struct SpellVisualKitEffectMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1140480,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0xB78084B7,
        .Fields           = Fields,
    };
};

struct SpellVisualKitModelAttachMeta
{
    static constexpr DB2MetaField Fields[22] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 897953,
        .IndexField       = 2,
        .ParentIndexField = 21,
        .FieldCount       = 22,
        .LayoutHash       = 0xBCE18649,
        .Fields           = Fields,
    };
};

struct SpellVisualMissileMeta
{
    static constexpr DB2MetaField Fields[16] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 897954,
        .IndexField       = 12,
        .ParentIndexField = 15,
        .FieldCount       = 16,
        .LayoutHash       = 0x00BA67A5,
        .Fields           = Fields,
    };
};

struct SpellXDescriptionVariablesMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1724949,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xB08E6876,
        .Fields           = Fields,
    };
};

struct SpellXSpellVisualMeta
{
    static constexpr DB2MetaField Fields[13] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1101657,
        .IndexField       = 1,
        .ParentIndexField = 12,
        .FieldCount       = 13,
        .LayoutHash       = 0x4F4B8A2A,
        .Fields           = Fields,
    };
};

struct StartupFilesMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1604265,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x51FEBBB5,
        .Fields           = Fields,
    };
};

struct Startup_StringsMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1375805,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xF8CDDEE7,
        .Fields           = Fields,
    };
};

struct StationeryMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1140758,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x20F6BABD,
        .Fields           = Fields,
    };
};

struct SummonPropertiesMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1345276,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0xFB8338FC,
        .Fields           = Fields,
    };
};

struct TactKeyMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_BYTE,   .ArraySize = 16, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1302850,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0xF0F98B62,
        .Fields           = Fields,
    };
};

struct TactKeyLookupMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_BYTE,   .ArraySize = 8, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1302851,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x3C1AC92A,
        .Fields           = Fields,
    };
};

struct TalentMeta
{
    static constexpr DB2MetaField Fields[9] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 2, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1369062,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 9,
        .LayoutHash       = 0xE8850B48,
        .Fields           = Fields,
    };
};

struct TaxiNodesMeta
{
    static constexpr DB2MetaField Fields[12] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1068100,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 12,
        .LayoutHash       = 0xB46C6A8B,
        .Fields           = Fields,
    };
};

struct TaxiPathMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1067802,
        .IndexField       = 2,
        .ParentIndexField = 0,
        .FieldCount       = 4,
        .LayoutHash       = 0xF44E2BF5,
        .Fields           = Fields,
    };
};

struct TaxiPathNodeMeta
{
    static constexpr DB2MetaField Fields[9] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1000437,
        .IndexField       = 4,
        .ParentIndexField = 1,
        .FieldCount       = 9,
        .LayoutHash       = 0xD38E8C01,
        .Fields           = Fields,
    };
};

struct TerrainMaterialMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1307290,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x19D9496F,
        .Fields           = Fields,
    };
};

struct TerrainTypeMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1310249,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0x4FE20345,
        .Fields           = Fields,
    };
};

struct TerrainTypeSoundsMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1284822,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0xE4923C1F,
        .Fields           = Fields,
    };
};

struct TextureBlendSetMeta
{
    static constexpr DB2MetaField Fields[10] =
    {
        { .Type = FT_INT,    .ArraySize = 3, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 4, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1328721,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 10,
        .LayoutHash       = 0xA2323E0C,
        .Fields           = Fields,
    };
};

struct TextureFileDataMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 982459,
        .IndexField       = 0,
        .ParentIndexField = 1,
        .FieldCount       = 3,
        .LayoutHash       = 0xE0790D00,
        .Fields           = Fields,
    };
};

struct TotemCategoryMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1134586,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x20B9177A,
        .Fields           = Fields,
    };
};

struct ToyMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 988200,
        .IndexField       = 4,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0x5409C5EA,
        .Fields           = Fields,
    };
};

struct TradeSkillCategoryMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1301101,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0x5D3ADD4D,
        .Fields           = Fields,
    };
};

struct TradeSkillItemMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1329070,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xFDE283DA,
        .Fields           = Fields,
    };
};

struct TransformMatrixMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1338702,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0xB6A2C431,
        .Fields           = Fields,
    };
};

struct TransmogHolidayMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1589454,
        .IndexField       = 0,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xB420EB18,
        .Fields           = Fields,
    };
};

struct TransmogSetMeta
{
    static constexpr DB2MetaField Fields[10] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1376213,
        .IndexField       = 4,
        .ParentIndexField = 1,
        .FieldCount       = 10,
        .LayoutHash       = 0xBEDFD7D1,
        .Fields           = Fields,
    };
};

struct TransmogSetGroupMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1576116,
        .IndexField       = 1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xCD072FE5,
        .Fields           = Fields,
    };
};

struct TransmogSetItemMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1376212,
        .IndexField       = 0,
        .ParentIndexField = 1,
        .FieldCount       = 4,
        .LayoutHash       = 0x0E96B3A2,
        .Fields           = Fields,
    };
};

struct TransportAnimationMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1140686,
        .IndexField       = -1,
        .ParentIndexField = 3,
        .FieldCount       = 4,
        .LayoutHash       = 0x099987ED,
        .Fields           = Fields,
    };
};

struct TransportPhysicsMeta
{
    static constexpr DB2MetaField Fields[10] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1121973,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 10,
        .LayoutHash       = 0x2C1FB208,
        .Fields           = Fields,
    };
};

struct TransportRotationMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 4, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1140687,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0x72035AA9,
        .Fields           = Fields,
    };
};

struct TrophyMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 975024,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0xE16151C5,
        .Fields           = Fields,
    };
};

struct UIExpansionDisplayInfoMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1729547,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x73DFDEC5,
        .Fields           = Fields,
    };
};

struct UIExpansionDisplayInfoIconMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1729546,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x331022F2,
        .Fields           = Fields,
    };
};

struct UiCamFbackTransmogChrRaceMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1261406,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0x9FB4CC78,
        .Fields           = Fields,
    };
};

struct UiCamFbackTransmogWeaponMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1261407,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x020890B7,
        .Fields           = Fields,
    };
};

struct UiCameraMeta
{
    static constexpr DB2MetaField Fields[9] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1120287,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 9,
        .LayoutHash       = 0xCA6C98D4,
        .Fields           = Fields,
    };
};

struct UiCameraTypeMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1120288,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x644732AE,
        .Fields           = Fields,
    };
};

struct UiMapPOIMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1445708,
        .IndexField       = 6,
        .ParentIndexField = -1,
        .FieldCount       = 7,
        .LayoutHash       = 0x559E1F11,
        .Fields           = Fields,
    };
};

struct UiModelSceneMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1548215,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xA7D62B8A,
        .Fields           = Fields,
    };
};

struct UiModelSceneActorMeta
{
    static constexpr DB2MetaField Fields[10] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1548214,
        .IndexField       = 7,
        .ParentIndexField = 9,
        .FieldCount       = 10,
        .LayoutHash       = 0x679AC95F,
        .Fields           = Fields,
    };
};

struct UiModelSceneActorDisplayMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1548216,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0x6137F4BE,
        .Fields           = Fields,
    };
};

struct UiModelSceneCameraMeta
{
    static constexpr DB2MetaField Fields[16] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1548213,
        .IndexField       = 14,
        .ParentIndexField = 15,
        .FieldCount       = 16,
        .LayoutHash       = 0xC58AA5EC,
        .Fields           = Fields,
    };
};

struct UiTextureAtlasMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 897470,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x9879592A,
        .Fields           = Fields,
    };
};

struct UiTextureAtlasMemberMeta
{
    static constexpr DB2MetaField Fields[8] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 897532,
        .IndexField       = 1,
        .ParentIndexField = -1,
        .FieldCount       = 8,
        .LayoutHash       = 0x81E2055F,
        .Fields           = Fields,
    };
};

struct UiTextureKitMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 939159,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x2C7E0372,
        .Fields           = Fields,
    };
};

struct UnitBloodMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1284821,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 6,
        .LayoutHash       = 0x4689A9A0,
        .Fields           = Fields,
    };
};

struct UnitBloodLevelsMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_BYTE,   .ArraySize = 3, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1268904,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x31A6BD58,
        .Fields           = Fields,
    };
};

struct UnitConditionMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_INT,    .ArraySize = 8, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 8, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 8, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1120959,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x62802D9C,
        .Fields           = Fields,
    };
};

struct UnitPowerBarMeta
{
    static constexpr DB2MetaField Fields[16] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 6, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 6, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1237753,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 16,
        .LayoutHash       = 0x626C94CD,
        .Fields           = Fields,
    };
};

struct VehicleMeta
{
    static constexpr DB2MetaField Fields[18] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 8, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1368621,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 18,
        .LayoutHash       = 0x1606C582,
        .Fields           = Fields,
    };
};

struct VehicleSeatMeta
{
    static constexpr DB2MetaField Fields[61] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1345447,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 61,
        .LayoutHash       = 0x242E0ECD,
        .Fields           = Fields,
    };
};

struct VehicleUIIndSeatMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1279741,
        .IndexField       = -1,
        .ParentIndexField = 3,
        .FieldCount       = 4,
        .LayoutHash       = 0x5F688502,
        .Fields           = Fields,
    };
};

struct VehicleUIIndicatorMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1279740,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0x68486100,
        .Fields           = Fields,
    };
};

struct VignetteMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 892861,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 7,
        .LayoutHash       = 0x52E3B381,
        .Fields           = Fields,
    };
};

struct VirtualAttachmentMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1634482,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0xEC767C57,
        .Fields           = Fields,
    };
};

struct VirtualAttachmentCustomizationMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1634480,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0xC354C931,
        .Fields           = Fields,
    };
};

struct VocalUISoundsMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1267067,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0xED48CFA9,
        .Fields           = Fields,
    };
};

struct WMOAreaTableMeta
{
    static constexpr DB2MetaField Fields[15] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1355528,
        .IndexField       = 12,
        .ParentIndexField = 14,
        .FieldCount       = 15,
        .LayoutHash       = 0x4616C893,
        .Fields           = Fields,
    };
};

struct WMOMinimapTextureMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1323241,
        .IndexField       = -1,
        .ParentIndexField = 4,
        .FieldCount       = 5,
        .LayoutHash       = 0x8F4AE3C0,
        .Fields           = Fields,
    };
};

struct WbAccessControlListMeta
{
    static constexpr DB2MetaField Fields[5] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 879634,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0xBE044710,
        .Fields           = Fields,
    };
};

struct WbCertWhitelistMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 879591,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x01D13030,
        .Fields           = Fields,
    };
};

struct WeaponImpactSoundsMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 11, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 11, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 11, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 11, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1267648,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 7,
        .LayoutHash       = 0x774C043A,
        .Fields           = Fields,
    };
};

struct WeaponSwingSounds2Meta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1267068,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0xD45347C3,
        .Fields           = Fields,
    };
};

struct WeaponTrailMeta
{
    static constexpr DB2MetaField Fields[9] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 3, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 982461,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 9,
        .LayoutHash       = 0x49754C60,
        .Fields           = Fields,
    };
};

struct WeaponTrailModelDefMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1239843,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0x7DE7C508,
        .Fields           = Fields,
    };
};

struct WeaponTrailParamMeta
{
    static constexpr DB2MetaField Fields[10] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1239842,
        .IndexField       = -1,
        .ParentIndexField = 9,
        .FieldCount       = 10,
        .LayoutHash       = 0x9B0F7200,
        .Fields           = Fields,
    };
};

struct WeatherMeta
{
    static constexpr DB2MetaField Fields[14] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1343311,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 14,
        .LayoutHash       = 0x7C160B07,
        .Fields           = Fields,
    };
};

struct WindSettingsMeta
{
    static constexpr DB2MetaField Fields[10] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 943871,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 10,
        .LayoutHash       = 0x5308550C,
        .Fields           = Fields,
    };
};

struct WorldBossLockoutMeta
{
    static constexpr DB2MetaField Fields[2] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 975279,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x4D7103A0,
        .Fields           = Fields,
    };
};

struct WorldChunkSoundsMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1267069,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 6,
        .LayoutHash       = 0xD06AA126,
        .Fields           = Fields,
    };
};

struct WorldEffectMeta
{
    static constexpr DB2MetaField Fields[6] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1343312,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 6,
        .LayoutHash       = 0x2E9B9BFD,
        .Fields           = Fields,
    };
};

struct WorldElapsedTimerMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1135240,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x6C026FDE,
        .Fields           = Fields,
    };
};

struct WorldMapAreaMeta
{
    static constexpr DB2MetaField Fields[17] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1374382,
        .IndexField       = 15,
        .ParentIndexField = -1,
        .FieldCount       = 17,
        .LayoutHash       = 0xC7E90019,
        .Fields           = Fields,
    };
};

struct WorldMapContinentMeta
{
    static constexpr DB2MetaField Fields[11] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1343594,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 11,
        .LayoutHash       = 0x8F75E077,
        .Fields           = Fields,
    };
};

struct WorldMapOverlayMeta
{
    static constexpr DB2MetaField Fields[14] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 4, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1134579,
        .IndexField       = 1,
        .ParentIndexField = 4,
        .FieldCount       = 14,
        .LayoutHash       = 0xDC4B6AF3,
        .Fields           = Fields,
    };
};

struct WorldMapTransformsMeta
{
    static constexpr DB2MetaField Fields[10] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 6, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1310630,
        .IndexField       = -1,
        .ParentIndexField = 3,
        .FieldCount       = 10,
        .LayoutHash       = 0x99FB4B71,
        .Fields           = Fields,
    };
};

struct WorldSafeLocsMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1369425,
        .IndexField       = -1,
        .ParentIndexField = 3,
        .FieldCount       = 4,
        .LayoutHash       = 0x605EA8A6,
        .Fields           = Fields,
    };
};

struct WorldStateExpressionMeta
{
    static constexpr DB2MetaField Fields[1] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1332558,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 1,
        .LayoutHash       = 0xA69C9812,
        .Fields           = Fields,
    };
};

struct WorldStateUIMeta
{
    static constexpr DB2MetaField Fields[17] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_STRING, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1343596,
        .IndexField       = 14,
        .ParentIndexField = 5,
        .FieldCount       = 17,
        .LayoutHash       = 0x70808977,
        .Fields           = Fields,
    };
};

struct WorldStateZoneSoundsMeta
{
    static constexpr DB2MetaField Fields[8] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1266941,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 8,
        .LayoutHash       = 0xB9572D3D,
        .Fields           = Fields,
    };
};

struct World_PVP_AreaMeta
{
    static constexpr DB2MetaField Fields[7] =
    {
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1310255,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 7,
        .LayoutHash       = 0x6FBBF76B,
        .Fields           = Fields,
    };
};

struct ZoneIntroMusicTableMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1310251,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x1F8417ED,
        .Fields           = Fields,
    };
};

struct ZoneLightMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1310253,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 3,
        .LayoutHash       = 0x3C11F38B,
        .Fields           = Fields,
    };
};

struct ZoneLightPointMeta
{
    static constexpr DB2MetaField Fields[3] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 2, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1310256,
        .IndexField       = -1,
        .ParentIndexField = 2,
        .FieldCount       = 3,
        .LayoutHash       = 0xEF93DC50,
        .Fields           = Fields,
    };
};

struct ZoneMusicMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_STRING_NOT_LOCALIZED, .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 2, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1310254,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x9E2B332D,
        .Fields           = Fields,
    };
};

struct ZoneStoryMeta
{
    static constexpr DB2MetaField Fields[4] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta Instance
    {
        .FileDataId       = 1797864,
        .IndexField       = -1,
        .ParentIndexField = 3,
        .FieldCount       = 4,
        .LayoutHash       = 0xEE16D6F3,
        .Fields           = Fields,
    };
};

#endif // DB2Metadata_h__
