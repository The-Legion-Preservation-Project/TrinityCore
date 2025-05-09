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

#ifndef TRINITYCORE_EXTRACTOR_DB2_LOAD_INFO_H
#define TRINITYCORE_EXTRACTOR_DB2_LOAD_INFO_H

#include "DB2FileLoader.h"
#include "DB2Meta.h"

struct CinematicCameraLoadInfo
{
    static constexpr DB2MetaField MetaFields[4] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 3, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta MetaInstance
    {
        .FileDataId       = 1294214,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 4,
        .LayoutHash       = 0x0062B0F4,
        .Fields           = MetaFields,
    };

    static constexpr DB2FieldMeta Fields[7] =
    {
        { false, FT_INT, "ID" },
        { false, FT_INT, "SoundID" },
        { false, FT_FLOAT, "OriginX" },
        { false, FT_FLOAT, "OriginY" },
        { false, FT_FLOAT, "OriginZ" },
        { false, FT_FLOAT, "OriginFacing" },
        { false, FT_INT, "FileDataID" },
    };

    static constexpr DB2FileLoadInfo Instance{ Fields, 7, &MetaInstance };
};

struct GameobjectDisplayInfoLoadInfo
{
    static constexpr DB2MetaField MetaFields[5] =
    {
        { .Type = FT_INT,    .ArraySize = 1, .IsSigned = true },
        { .Type = FT_FLOAT,  .ArraySize = 6, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta MetaInstance
    {
        .FileDataId       = 1266277,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0x9F2098D1,
        .Fields           = MetaFields,
    };

    static constexpr DB2FieldMeta Fields[11] =
    {
        { false, FT_INT, "ID" },
        { true, FT_INT, "FileDataID" },
        { false, FT_FLOAT, "GeoBoxMinX" },
        { false, FT_FLOAT, "GeoBoxMinY" },
        { false, FT_FLOAT, "GeoBoxMinZ" },
        { false, FT_FLOAT, "GeoBoxMaxX" },
        { false, FT_FLOAT, "GeoBoxMaxY" },
        { false, FT_FLOAT, "GeoBoxMaxZ" },
        { false, FT_FLOAT, "OverrideLootEffectScale" },
        { false, FT_FLOAT, "OverrideNameScale" },
        { true, FT_SHORT, "ObjectEffectPackageID" },
    };

    static constexpr DB2FileLoadInfo Instance{ Fields, 11, &MetaInstance };
};

struct LiquidMaterialLoadInfo
{
    static constexpr DB2MetaField MetaFields[2] =
    {
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = true },
    };

    static constexpr DB2Meta MetaInstance
    {
        .FileDataId       = 1132538,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 2,
        .LayoutHash       = 0x62BE0340,
        .Fields           = MetaFields,
    };

    static constexpr DB2FieldMeta Fields[3] =
    {
        { false, FT_INT, "ID" },
        { true, FT_BYTE, "LVF" },
        { true, FT_BYTE, "Flags" },
    };

    static constexpr DB2FileLoadInfo Instance{ Fields, 3, &MetaInstance };
};

struct LiquidObjectLoadInfo
{
    static constexpr DB2MetaField MetaFields[5] =
    {
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_FLOAT,  .ArraySize = 1, .IsSigned = false },
        { .Type = FT_SHORT,  .ArraySize = 1, .IsSigned = true },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
        { .Type = FT_BYTE,   .ArraySize = 1, .IsSigned = false },
    };

    static constexpr DB2Meta MetaInstance
    {
        .FileDataId       = 1308058,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 5,
        .LayoutHash       = 0xACC168A6,
        .Fields           = MetaFields,
    };

    static constexpr DB2FieldMeta Fields[6] =
    {
        { false, FT_INT, "ID" },
        { false, FT_FLOAT, "FlowDirection" },
        { false, FT_FLOAT, "FlowSpeed" },
        { true, FT_SHORT, "LiquidTypeID" },
        { false, FT_BYTE, "Fishable" },
        { false, FT_BYTE, "Reflection" },
    };

    static constexpr DB2FileLoadInfo Instance{ Fields, 6, & MetaInstance };
};

struct LiquidTypeLoadInfo
{
    static constexpr DB2MetaField MetaFields[19] =
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

    static constexpr DB2Meta MetaInstance
    {
        .FileDataId       = 1371380,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 19,
        .LayoutHash       = 0x3313BBF3,
        .Fields           = MetaFields,
    };

    static constexpr DB2FieldMeta Fields[51] =
    {
        { false, FT_INT, "ID" },
        { false, FT_STRING_NOT_LOCALIZED, "Name" },
        { false, FT_STRING_NOT_LOCALIZED, "Texture1" },
        { false, FT_STRING_NOT_LOCALIZED, "Texture2" },
        { false, FT_STRING_NOT_LOCALIZED, "Texture3" },
        { false, FT_STRING_NOT_LOCALIZED, "Texture4" },
        { false, FT_STRING_NOT_LOCALIZED, "Texture5" },
        { false, FT_STRING_NOT_LOCALIZED, "Texture6" },
        { false, FT_INT, "SpellID" },
        { false, FT_FLOAT, "MaxDarkenDepth" },
        { false, FT_FLOAT, "FogDarkenIntensity" },
        { false, FT_FLOAT, "AmbDarkenIntensity" },
        { false, FT_FLOAT, "DirDarkenIntensity" },
        { false, FT_FLOAT, "ParticleScale" },
        { true, FT_INT, "Color1" },
        { true, FT_INT, "Color2" },
        { false, FT_FLOAT, "Float1" },
        { false, FT_FLOAT, "Float2" },
        { false, FT_FLOAT, "Float3" },
        { false, FT_FLOAT, "Float4" },
        { false, FT_FLOAT, "Float5" },
        { false, FT_FLOAT, "Float6" },
        { false, FT_FLOAT, "Float7" },
        { false, FT_FLOAT, "Float8" },
        { false, FT_FLOAT, "Float9" },
        { false, FT_FLOAT, "Float10" },
        { false, FT_FLOAT, "Float11" },
        { false, FT_FLOAT, "Float12" },
        { false, FT_FLOAT, "Float13" },
        { false, FT_FLOAT, "Float14" },
        { false, FT_FLOAT, "Float15" },
        { false, FT_FLOAT, "Float16" },
        { false, FT_FLOAT, "Float17" },
        { false, FT_FLOAT, "Float18" },
        { false, FT_INT, "Int1" },
        { false, FT_INT, "Int2" },
        { false, FT_INT, "Int3" },
        { false, FT_INT, "Int4" },
        { false, FT_SHORT, "Flags" },
        { false, FT_SHORT, "LightID" },
        { false, FT_BYTE, "SoundBank" },
        { false, FT_BYTE, "ParticleMovement" },
        { false, FT_BYTE, "ParticleTexSlots" },
        { false, FT_BYTE, "MaterialID" },
        { false, FT_BYTE, "FrameCountTexture1" },
        { false, FT_BYTE, "FrameCountTexture2" },
        { false, FT_BYTE, "FrameCountTexture3" },
        { false, FT_BYTE, "FrameCountTexture4" },
        { false, FT_BYTE, "FrameCountTexture5" },
        { false, FT_BYTE, "FrameCountTexture6" },
        { false, FT_INT, "SoundID" },
    };

    static constexpr DB2FileLoadInfo Instance{ Fields, 51, &MetaInstance };
};

struct MapLoadInfo
{
    static constexpr DB2MetaField MetaFields[21] =
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

    static constexpr DB2Meta MetaInstance
    {
        .FileDataId       = 1349477,
        .IndexField       = -1,
        .ParentIndexField = -1,
        .FieldCount       = 21,
        .LayoutHash       = 0xF568DF12,
        .Fields           = MetaFields,
    };

    static constexpr DB2FieldMeta Fields[24] =
    {
        { false, FT_INT, "ID" },
        { false, FT_STRING_NOT_LOCALIZED, "Directory" },
        { false, FT_STRING, "MapName" },
        { false, FT_STRING, "MapDescription0" },
        { false, FT_STRING, "MapDescription1" },
        { false, FT_STRING, "PvpShortDescription" },
        { false, FT_STRING, "PvpLongDescription" },
        { true, FT_INT, "Flags1" },
        { true, FT_INT, "Flags2" },
        { false, FT_FLOAT, "MinimapIconScale" },
        { false, FT_FLOAT, "CorpseX" },
        { false, FT_FLOAT, "CorpseY" },
        { false, FT_SHORT, "AreaTableID" },
        { true, FT_SHORT, "LoadingScreenID" },
        { true, FT_SHORT, "CorpseMapID" },
        { true, FT_SHORT, "TimeOfDayOverride" },
        { true, FT_SHORT, "ParentMapID" },
        { true, FT_SHORT, "CosmeticParentMapID" },
        { true, FT_SHORT, "WindSettingsID" },
        { false, FT_BYTE, "InstanceType" },
        { false, FT_BYTE, "MapType" },
        { false, FT_BYTE, "ExpansionID" },
        { false, FT_BYTE, "MaxPlayers" },
        { false, FT_BYTE, "TimeOffset" },
    };

    static constexpr DB2FileLoadInfo Instance{ Fields, 24, &MetaInstance };
};

#endif // TRINITYCORE_EXTRACTOR_DB2_LOAD_INFO_H
