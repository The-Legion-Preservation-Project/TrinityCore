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

#ifndef ExtractorDB2LoadInfo_h__
#define ExtractorDB2LoadInfo_h__

#include "DB2FileLoader.h"
#include "DB2Meta.h"
#include <array>

struct CinematicCameraLoadInfo
{
    static DB2FileLoadInfo const* Instance()
    {
        static DB2FieldMeta const loadedFields[] =
        {
            { false, FT_INT, "ID" },
            { false, FT_INT, "SoundID" },
            { false, FT_FLOAT, "OriginX" },
            { false, FT_FLOAT, "OriginY" },
            { false, FT_FLOAT, "OriginZ" },
            { false, FT_FLOAT, "OriginFacing" },
            { false, FT_INT, "FileDataID" },
        };
        static DB2MetaField const fields[4] =
        {
            { FT_INT, 1, false },
            { FT_FLOAT, 3, false },
            { FT_FLOAT, 1, false },
            { FT_INT, 1, false },
        };
        static DB2Meta const meta(1294214, -1, 4, 0x0062B0F4, fields, -1);
        static DB2FileLoadInfo const loadInfo(&loadedFields[0], std::extent<decltype(loadedFields)>::value, &meta);
        return &loadInfo;
    }
};

struct GameobjectDisplayInfoLoadInfo
{
    static DB2FileLoadInfo const* Instance()
    {
        static DB2FieldMeta const loadedFields[] =
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
        static DB2MetaField const fields[5] =
        {
            { FT_INT, 1, true },
            { FT_FLOAT, 6, false },
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, true },
        };
        static DB2Meta const meta(1266277, -1, 5, 0x9F2098D1, fields, -1);
        static DB2FileLoadInfo const loadInfo(&loadedFields[0], std::extent<decltype(loadedFields)>::value, &meta);
        return &loadInfo;
    }
};

struct LiquidMaterialLoadInfo
{
    static DB2FileLoadInfo const* Instance()
    {
        static DB2FieldMeta const loadedFields[] =
        {
            { false, FT_INT, "ID" },
            { true, FT_BYTE, "LVF" },
            { true, FT_BYTE, "Flags" },
        };
        static DB2MetaField const fields[2] =
        {
            { FT_BYTE, 1, true },
            { FT_BYTE, 1, true },
        };
        static DB2Meta meta(1132538, -1, 2, 0x62BE0340, fields, -1);
        static DB2FileLoadInfo const loadInfo(&loadedFields[0], std::extent<decltype(loadedFields)>::value, &meta);
        return &loadInfo;
    }
};

struct LiquidObjectLoadInfo
{
    static DB2FileLoadInfo const* Instance()
    {
        static DB2FieldMeta const loadedFields[] =
        {
            { false, FT_INT, "ID" },
            { false, FT_FLOAT, "FlowDirection" },
            { false, FT_FLOAT, "FlowSpeed" },
            { true, FT_SHORT, "LiquidTypeID" },
            { false, FT_BYTE, "Fishable" },
            { false, FT_BYTE, "Reflection" },
        };
        static DB2MetaField const fields[5] =
        {
            { FT_FLOAT, 1, false },
            { FT_FLOAT, 1, false },
            { FT_SHORT, 1, true },
            { FT_BYTE, 1, false },
            { FT_BYTE, 1, false },
        };
        static DB2Meta meta(1308058, -1, 5, 0xACC168A6, fields, -1);
        static DB2FileLoadInfo const loadInfo(&loadedFields[0], std::extent<decltype(loadedFields)>::value, &meta);
        return &loadInfo;
    }
};

struct LiquidTypeLoadInfo
{
    static DB2FileLoadInfo const* Instance()
    {
        static DB2FieldMeta const loadedFields[] =
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
                static DB2MetaField const fields[19] =
        {
            { FT_STRING, 1, false },
            { FT_STRING, 6, false },
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
        static DB2Meta const meta(1371380, -1, 19, 0x3313BBF3, fields, -1);
        static DB2FileLoadInfo const loadInfo(&loadedFields[0], std::extent<decltype(loadedFields)>::value, &meta);
        return &loadInfo;
    }
};

struct MapLoadInfo
{
    static DB2FileLoadInfo const* Instance()
    {
        static DB2FieldMeta const loadedFields[] =
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
        static DB2MetaField const fields[21] =
        {
            { FT_STRING, 1, false },
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
        static DB2Meta const meta(1349477, -1, 21, 0xF568DF12, fields, -1);
        static DB2FileLoadInfo const loadInfo(&loadedFields[0], std::extent<decltype(loadedFields)>::value, &meta);
        return &loadInfo;
    }
};

#endif // ExtractorDB2LoadInfo_h__
