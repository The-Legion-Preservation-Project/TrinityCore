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
        { .IsSigned = false, .Type = FT_INT, .Name = "ID" },
        { .IsSigned = false, .Type = FT_INT, .Name = "SoundID" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "OriginX" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "OriginY" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "OriginZ" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "OriginFacing" },
        { .IsSigned = false, .Type = FT_INT, .Name = "FileDataID" },
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
        { .IsSigned = false, .Type = FT_INT, .Name = "ID" },
        { .IsSigned = true, .Type = FT_INT, .Name = "FileDataID" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "GeoBoxMinX" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "GeoBoxMinY" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "GeoBoxMinZ" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "GeoBoxMaxX" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "GeoBoxMaxY" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "GeoBoxMaxZ" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "OverrideLootEffectScale" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "OverrideNameScale" },
        { .IsSigned = true, .Type = FT_SHORT, .Name = "ObjectEffectPackageID" },
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
        { .IsSigned = false, .Type = FT_INT, .Name = "ID" },
        { .IsSigned = true, .Type = FT_BYTE, .Name = "LVF" },
        { .IsSigned = true, .Type = FT_BYTE, .Name = "Flags" },
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
        { .IsSigned = false, .Type = FT_INT, .Name = "ID" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "FlowDirection" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "FlowSpeed" },
        { .IsSigned = true, .Type = FT_SHORT, .Name = "LiquidTypeID" },
        { .IsSigned = false, .Type = FT_BYTE, .Name = "Fishable" },
        { .IsSigned = false, .Type = FT_BYTE, .Name = "Reflection" },
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
        { .IsSigned = false, .Type = FT_INT, .Name = "ID" },
        { .IsSigned = false, .Type = FT_STRING_NOT_LOCALIZED, .Name = "Name" },
        { .IsSigned = false, .Type = FT_STRING_NOT_LOCALIZED, .Name = "Texture1" },
        { .IsSigned = false, .Type = FT_STRING_NOT_LOCALIZED, .Name = "Texture2" },
        { .IsSigned = false, .Type = FT_STRING_NOT_LOCALIZED, .Name = "Texture3" },
        { .IsSigned = false, .Type = FT_STRING_NOT_LOCALIZED, .Name = "Texture4" },
        { .IsSigned = false, .Type = FT_STRING_NOT_LOCALIZED, .Name = "Texture5" },
        { .IsSigned = false, .Type = FT_STRING_NOT_LOCALIZED, .Name = "Texture6" },
        { .IsSigned = false, .Type = FT_INT, .Name = "SpellID" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "MaxDarkenDepth" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "FogDarkenIntensity" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "AmbDarkenIntensity" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "DirDarkenIntensity" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "ParticleScale" },
        { .IsSigned = true, .Type = FT_INT, .Name = "Color1" },
        { .IsSigned = true, .Type = FT_INT, .Name = "Color2" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "Float1" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "Float2" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "Float3" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "Float4" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "Float5" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "Float6" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "Float7" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "Float8" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "Float9" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "Float10" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "Float11" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "Float12" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "Float13" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "Float14" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "Float15" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "Float16" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "Float17" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "Float18" },
        { .IsSigned = false, .Type = FT_INT, .Name = "Int1" },
        { .IsSigned = false, .Type = FT_INT, .Name = "Int2" },
        { .IsSigned = false, .Type = FT_INT, .Name = "Int3" },
        { .IsSigned = false, .Type = FT_INT, .Name = "Int4" },
        { .IsSigned = false, .Type = FT_SHORT, .Name = "Flags" },
        { .IsSigned = false, .Type = FT_SHORT, .Name = "LightID" },
        { .IsSigned = false, .Type = FT_BYTE, .Name = "SoundBank" },
        { .IsSigned = false, .Type = FT_BYTE, .Name = "ParticleMovement" },
        { .IsSigned = false, .Type = FT_BYTE, .Name = "ParticleTexSlots" },
        { .IsSigned = false, .Type = FT_BYTE, .Name = "MaterialID" },
        { .IsSigned = false, .Type = FT_BYTE, .Name = "FrameCountTexture1" },
        { .IsSigned = false, .Type = FT_BYTE, .Name = "FrameCountTexture2" },
        { .IsSigned = false, .Type = FT_BYTE, .Name = "FrameCountTexture3" },
        { .IsSigned = false, .Type = FT_BYTE, .Name = "FrameCountTexture4" },
        { .IsSigned = false, .Type = FT_BYTE, .Name = "FrameCountTexture5" },
        { .IsSigned = false, .Type = FT_BYTE, .Name = "FrameCountTexture6" },
        { .IsSigned = false, .Type = FT_INT, .Name = "SoundID" },
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
        { .IsSigned = false, .Type = FT_INT, .Name = "ID" },
        { .IsSigned = false, .Type = FT_STRING_NOT_LOCALIZED, .Name = "Directory" },
        { .IsSigned = false, .Type = FT_STRING, .Name = "MapName" },
        { .IsSigned = false, .Type = FT_STRING, .Name = "MapDescription0" },
        { .IsSigned = false, .Type = FT_STRING, .Name = "MapDescription1" },
        { .IsSigned = false, .Type = FT_STRING, .Name = "PvpShortDescription" },
        { .IsSigned = false, .Type = FT_STRING, .Name = "PvpLongDescription" },
        { .IsSigned = true, .Type = FT_INT, .Name = "Flags1" },
        { .IsSigned = true, .Type = FT_INT, .Name = "Flags2" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "MinimapIconScale" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "CorpseX" },
        { .IsSigned = false, .Type = FT_FLOAT, .Name = "CorpseY" },
        { .IsSigned = false, .Type = FT_SHORT, .Name = "AreaTableID" },
        { .IsSigned = true, .Type = FT_SHORT, .Name = "LoadingScreenID" },
        { .IsSigned = true, .Type = FT_SHORT, .Name = "CorpseMapID" },
        { .IsSigned = true, .Type = FT_SHORT, .Name = "TimeOfDayOverride" },
        { .IsSigned = true, .Type = FT_SHORT, .Name = "ParentMapID" },
        { .IsSigned = true, .Type = FT_SHORT, .Name = "CosmeticParentMapID" },
        { .IsSigned = true, .Type = FT_SHORT, .Name = "WindSettingsID" },
        { .IsSigned = false, .Type = FT_BYTE, .Name = "InstanceType" },
        { .IsSigned = false, .Type = FT_BYTE, .Name = "MapType" },
        { .IsSigned = false, .Type = FT_BYTE, .Name = "ExpansionID" },
        { .IsSigned = false, .Type = FT_BYTE, .Name = "MaxPlayers" },
        { .IsSigned = false, .Type = FT_BYTE, .Name = "TimeOffset" },
    };

    static constexpr DB2FileLoadInfo Instance{ Fields, 24, &MetaInstance };
};

#endif // TRINITYCORE_EXTRACTOR_DB2_LOAD_INFO_H
