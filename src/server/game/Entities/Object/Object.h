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

#ifndef _OBJECT_H
#define _OBJECT_H

#include "Common.h"
#include "Duration.h"
#include "Errors.h"
#include "EventProcessor.h"
#include "ModelIgnoreFlags.h"
#include "MovementInfo.h"
#include "ObjectDefines.h"
#include "ObjectGuid.h"
#include "Optional.h"
#include "PhaseShift.h"
#include "Position.h"
#include "SharedDefines.h"
#include "SpellDefines.h"
#include "UpdateFields.h"
#include <list>
#include <unordered_map>

class AreaTrigger;
class Conversation;
class Corpse;
class Creature;
class CreatureAI;
class DynamicObject;
class GameObject;
class InstanceScript;
class Map;
class Object;
class Player;
class Scenario;
class SceneObject;
class SmoothPhasing;
class Spell;
class SpellCastTargets;
class SpellEffectInfo;
class SpellInfo;
class TempSummon;
class TransportBase;
class Unit;
class UpdateData;
class WorldObject;
class WorldPacket;
class ZoneScript;
struct FactionTemplateEntry;
struct PositionFullTerrainStatus;
struct QuaternionData;
enum ZLiquidStatus : uint32;

namespace WorldPackets
{
    namespace CombatLog
    {
        class CombatLogServerPacket;
    }
}

typedef std::unordered_map<Player*, UpdateData> UpdateDataMapType;

struct CreateObjectBits
{
    bool NoBirthAnim : 1;
    bool EnablePortals : 1;
    bool PlayHoverAnim : 1;
    bool MovementUpdate : 1;
    bool MovementTransport : 1;
    bool Stationary : 1;
    bool CombatVictim : 1;
    bool ServerTime : 1;
    bool Vehicle : 1;
    bool AnimKit : 1;
    bool Rotation : 1;
    bool AreaTrigger : 1;
    bool GameObject : 1;
    bool SmoothPhasing : 1;
    bool ThisIsYou : 1;
    bool SceneObject : 1;
    bool ActivePlayer : 1;

    void Clear()
    {
        memset(this, 0, sizeof(CreateObjectBits));
    }
};

namespace UpdateMask
{
    typedef uint32 BlockType;

    enum DynamicFieldChangeType : uint16
    {
        UNCHANGED               = 0,
        VALUE_CHANGED           = 0x7FFF,
        VALUE_AND_SIZE_CHANGED  = 0x8000
    };

    inline std::size_t GetBlockCount(std::size_t bitCount)
    {
        using BitsPerBlock = std::integral_constant<std::size_t, sizeof(BlockType) * 8>;
        return (bitCount + BitsPerBlock::value - 1) / BitsPerBlock::value;
    }

    inline std::size_t EncodeDynamicFieldChangeType(std::size_t blockCount, DynamicFieldChangeType changeType, uint8 updateType)
    {
        return blockCount | ((changeType & VALUE_AND_SIZE_CHANGED) * ((3 - updateType /*this part evaluates to 0 if update type is not VALUES*/) / 3));
    }

    template<typename T>
    inline void SetUpdateBit(T* data, std::size_t bitIndex)
    {
        static_assert(std::is_integral<T>::value && std::is_unsigned<T>::value, "Type used for SetUpdateBit data arg is not an unsigned integer");
        using BitsPerBlock = std::integral_constant<std::size_t, sizeof(T) * 8>;
        data[bitIndex / BitsPerBlock::value] |= T(1) << (bitIndex % BitsPerBlock::value);
    }
}

// Helper class used to iterate object dynamic fields while interpreting them as a structure instead of raw int array
template<class T>
class DynamicFieldStructuredView
{
public:
    explicit DynamicFieldStructuredView(std::vector<uint32> const& data) : _data(data) { }

    T const* begin() const
    {
        return reinterpret_cast<T const*>(_data.data());
    }

    T const* end() const
    {
        return reinterpret_cast<T const*>(_data.data() + _data.size());
    }

    std::size_t size() const
    {
        using BlockCount = std::integral_constant<uint16, sizeof(T) / sizeof(uint32)>;
        return _data.size() / BlockCount::value;
    }

private:
    std::vector<uint32> const& _data;
};

float const DEFAULT_COLLISION_HEIGHT = 2.03128f; // Most common value in dbc

class TC_GAME_API Object
{
    public:
        virtual ~Object();

        bool IsInWorld() const { return m_inWorld; }

        virtual void AddToWorld();
        virtual void RemoveFromWorld();

        static ObjectGuid GetGUID(Object const* o) { return o ? o->GetGUID() : ObjectGuid::Empty; }
        ObjectGuid const& GetGUID() const { return m_guid; }
        uint32 GetEntry() const { return GetUInt32Value(OBJECT_FIELD_ENTRY); }
        void SetEntry(uint32 entry) { SetUInt32Value(OBJECT_FIELD_ENTRY, entry); }

        float GetObjectScale() const { return GetFloatValue(OBJECT_FIELD_SCALE_X); }
        virtual void SetObjectScale(float scale) { SetFloatValue(OBJECT_FIELD_SCALE_X, scale); }

        uint32 GetDynamicFlags() const { return GetUInt32Value(OBJECT_DYNAMIC_FLAGS); }
        bool HasDynamicFlag(uint32 flag) const { return HasFlag(OBJECT_DYNAMIC_FLAGS, flag); }
        void SetDynamicFlag(uint32 flag) { SetFlag(OBJECT_DYNAMIC_FLAGS, flag); }
        void RemoveDynamicFlag(uint32 flag) { RemoveFlag(OBJECT_DYNAMIC_FLAGS, flag); }
        void ReplaceAllDynamicFlags(uint32 flag) { SetUInt32Value(OBJECT_DYNAMIC_FLAGS, flag); }

        TypeID GetTypeId() const { return m_objectTypeId; }
        bool isType(uint16 mask) const { return (mask & m_objectType) != 0; }

        virtual void BuildCreateUpdateBlockForPlayer(UpdateData* data, Player* target) const;
        void SendUpdateToPlayer(Player* player);

        void BuildValuesUpdateBlockForPlayer(UpdateData* data, Player const* target) const;
        void BuildDestroyUpdateBlock(UpdateData* data) const;
        void BuildOutOfRangeUpdateBlock(UpdateData* data) const;

        virtual void DestroyForPlayer(Player* target) const;
        void SendOutOfRangeForPlayer(Player* target) const;

        int32 GetInt32Value(uint16 index) const;
        uint32 GetUInt32Value(uint16 index) const;
        uint64 GetUInt64Value(uint16 index) const;
        float GetFloatValue(uint16 index) const;
        uint8 GetByteValue(uint16 index, uint8 offset) const;
        uint16 GetUInt16Value(uint16 index, uint8 offset) const;
        ObjectGuid const& GetGuidValue(uint16 index) const;

        void SetInt32Value(uint16 index, int32 value);
        void SetUInt32Value(uint16 index, uint32 value);
        void UpdateUInt32Value(uint16 index, uint32 value);
        void SetUInt64Value(uint16 index, uint64 value);
        void SetFloatValue(uint16 index, float value);
        void SetByteValue(uint16 index, uint8 offset, uint8 value);
        void SetUInt16Value(uint16 index, uint8 offset, uint16 value);
        void SetGuidValue(uint16 index, ObjectGuid const& value);
        void SetStatFloatValue(uint16 index, float value);
        void SetStatInt32Value(uint16 index, int32 value);

        bool AddGuidValue(uint16 index, ObjectGuid const& value);
        bool RemoveGuidValue(uint16 index, ObjectGuid const& value);

        void ApplyModUInt32Value(uint16 index, int32 val, bool apply);
        void ApplyModInt32Value(uint16 index, int32 val, bool apply);
        void ApplyModUInt16Value(uint16 index, uint8 offset, int16 val, bool apply);
        void ApplyModPositiveFloatValue(uint16 index, float val, bool apply);
        void ApplyModSignedFloatValue(uint16 index, float val, bool apply);
        void ApplyPercentModFloatValue(uint16 index, float val, bool apply);

        void SetFlag(uint16 index, uint32 newFlag);
        void RemoveFlag(uint16 index, uint32 oldFlag);
        void ToggleFlag(uint16 index, uint32 flag);
        bool HasFlag(uint16 index, uint32 flag) const;
        void ApplyModFlag(uint16 index, uint32 flag, bool apply);

        void SetByteFlag(uint16 index, uint8 offset, uint8 newFlag);
        void RemoveByteFlag(uint16 index, uint8 offset, uint8 newFlag);
        void ToggleByteFlag(uint16 index, uint8 offset, uint8 flag);
        bool HasByteFlag(uint16 index, uint8 offset, uint8 flag) const;

        void SetFlag64(uint16 index, uint64 newFlag);
        void RemoveFlag64(uint16 index, uint64 oldFlag);
        void ToggleFlag64(uint16 index, uint64 flag);
        bool HasFlag64(uint16 index, uint64 flag) const;
        void ApplyModFlag64(uint16 index, uint64 flag, bool apply);

        std::vector<uint32> const& GetDynamicValues(uint16 index) const;
        uint32 GetDynamicValue(uint16 index, uint16 offset) const;
        bool HasDynamicValue(uint16 index, uint32 value);
        void AddDynamicValue(uint16 index, uint32 value);
        void RemoveDynamicValue(uint16 index, uint32 value);
        void ClearDynamicValue(uint16 index);
        void SetDynamicValue(uint16 index, uint16 offset, uint32 value);

        template<class T>
        DynamicFieldStructuredView<T> GetDynamicStructuredValues(uint16 index) const
        {
            static_assert(std::is_standard_layout<T>::value && std::is_trivially_destructible<T>::value, "T used for Object::SetDynamicStructuredValue<T> is not a trivially destructible standard layout type");
            using BlockCount = std::integral_constant<uint16, sizeof(T) / sizeof(uint32)>;
            ASSERT(index < _dynamicValuesCount || PrintIndexError(index, false));
            std::vector<uint32> const& values = _dynamicValues[index];
            ASSERT((values.size() % BlockCount::value) == 0, "Dynamic field value count must exactly fit into structure");
            return DynamicFieldStructuredView<T>(values);
        }

        template<class T>
        T const* GetDynamicStructuredValue(uint16 index, uint16 offset) const
        {
            static_assert(std::is_standard_layout<T>::value && std::is_trivially_destructible<T>::value, "T used for Object::SetDynamicStructuredValue<T> is not a trivially destructible standard layout type");
            using BlockCount = std::integral_constant<uint16, sizeof(T) / sizeof(uint32)>;
            ASSERT(index < _dynamicValuesCount || PrintIndexError(index, false));
            std::vector<uint32> const& values = _dynamicValues[index];
            ASSERT((values.size() % BlockCount::value) == 0, "Dynamic field value count must exactly fit into structure");
            if (offset * BlockCount::value >= values.size())
                return nullptr;
            return reinterpret_cast<T const*>(&values[offset * BlockCount::value]);
        }

        template<class T>
        void SetDynamicStructuredValue(uint16 index, uint16 offset, T const* value)
        {
            static_assert(std::is_standard_layout<T>::value && std::is_trivially_destructible<T>::value, "T used for Object::SetDynamicStructuredValue<T> is not a trivially destructible standard layout type");
            using BlockCount = std::integral_constant<uint16, sizeof(T) / sizeof(uint32)>;
            SetDynamicValue(index, (offset + 1) * BlockCount::value - 1, 0); // reserve space
            for (uint16 i = 0; i < BlockCount::value; ++i)
                SetDynamicValue(index, offset * BlockCount::value + i, *(reinterpret_cast<uint32 const*>(value) + i));
        }

        template<class T>
        void AddDynamicStructuredValue(uint16 index, T const* value)
        {
            static_assert(std::is_standard_layout<T>::value && std::is_trivially_destructible<T>::value, "T used for Object::SetDynamicStructuredValue<T> is not a trivially destructible standard layout type");
            using BlockCount = std::integral_constant<uint16, sizeof(T) / sizeof(uint32)>;
            std::vector<uint32> const& values = _dynamicValues[index];
            uint16 offset = uint16(values.size() / BlockCount::value);
            SetDynamicValue(index, (offset + 1) * BlockCount::value - 1, 0); // reserve space
            for (uint16 i = 0; i < BlockCount::value; ++i)
                SetDynamicValue(index, offset * BlockCount::value + i, *(reinterpret_cast<uint32 const*>(value) + i));
        }

        void ClearUpdateMask(bool remove);

        uint16 GetValuesCount() const { return m_valuesCount; }

        virtual std::string GetNameForLocaleIdx(LocaleConstant locale) const = 0;

        virtual bool hasQuest(uint32 /* quest_id */) const { return false; }
        virtual bool hasInvolvedQuest(uint32 /* quest_id */) const { return false; }
        void SetIsNewObject(bool enable) { m_isNewObject = enable; }
        bool IsDestroyedObject() const { return m_isDestroyedObject; }
        void SetDestroyedObject(bool destroyed) { m_isDestroyedObject = destroyed; }
        virtual void BuildUpdate(UpdateDataMapType&) { }
        void BuildFieldsUpdate(Player*, UpdateDataMapType &) const;

        void SetFieldNotifyFlag(uint16 flag) { _fieldNotifyFlags |= flag; }
        void RemoveFieldNotifyFlag(uint16 flag) { _fieldNotifyFlags &= uint16(~flag); }

        // FG: some hacky helpers
        void ForceValuesUpdateAtIndex(uint32);

        inline bool IsPlayer() const { return GetTypeId() == TYPEID_PLAYER; }
        static Player* ToPlayer(Object* o) { return o ? o->ToPlayer() : nullptr; }
        static Player const* ToPlayer(Object const* o) { return o ? o->ToPlayer() : nullptr; }
        Player* ToPlayer() { if (IsPlayer()) return reinterpret_cast<Player*>(this); else return nullptr; }
        Player const* ToPlayer() const { if (IsPlayer()) return reinterpret_cast<Player const*>(this); else return nullptr; }

        inline bool IsCreature() const { return GetTypeId() == TYPEID_UNIT; }
        static Creature* ToCreature(Object* o) { return o ? o->ToCreature() : nullptr; }
        static Creature const* ToCreature(Object const* o) { return o ? o->ToCreature() : nullptr; }
        Creature* ToCreature() { if (IsCreature()) return reinterpret_cast<Creature*>(this); else return nullptr; }
        Creature const* ToCreature() const { if (IsCreature()) return reinterpret_cast<Creature const*>(this); else return nullptr; }

        inline bool IsUnit() const { return isType(TYPEMASK_UNIT); }
        static Unit* ToUnit(Object* o) { return o ? o->ToUnit() : nullptr; }
        static Unit const* ToUnit(Object const* o) { return o ? o->ToUnit() : nullptr; }
        Unit* ToUnit() { if (IsUnit()) return reinterpret_cast<Unit*>(this); else return nullptr; }
        Unit const* ToUnit() const { if (IsUnit()) return reinterpret_cast<Unit const*>(this); else return nullptr; }

        inline bool IsGameObject() const { return GetTypeId() == TYPEID_GAMEOBJECT; }
        static GameObject* ToGameObject(Object* o) { return o ? o->ToGameObject() : nullptr; }
        static GameObject const* ToGameObject(Object const* o) { return o ? o->ToGameObject() : nullptr; }
        GameObject* ToGameObject() { if (IsGameObject()) return reinterpret_cast<GameObject*>(this); else return nullptr; }
        GameObject const* ToGameObject() const { if (IsGameObject()) return reinterpret_cast<GameObject const*>(this); else return nullptr; }

        inline bool IsCorpse() const { return GetTypeId() == TYPEID_CORPSE; }
        static Corpse* ToCorpse(Object* o) { return o ? o->ToCorpse() : nullptr; }
        static Corpse const* ToCorpse(Object const* o) { return o ? o->ToCorpse() : nullptr; }
        Corpse* ToCorpse() { if (IsCorpse()) return reinterpret_cast<Corpse*>(this); else return nullptr; }
        Corpse const* ToCorpse() const { if (IsCorpse()) return reinterpret_cast<Corpse const*>(this); else return nullptr; }

        inline bool IsDynObject() const { return GetTypeId() == TYPEID_DYNAMICOBJECT; }
        static DynamicObject* ToDynObject(Object* o) { return o ? o->ToDynObject() : nullptr; }
        static DynamicObject const* ToDynObject(Object const* o) { return o ? o->ToDynObject() : nullptr; }
        DynamicObject* ToDynObject() { if (IsDynObject()) return reinterpret_cast<DynamicObject*>(this); else return nullptr; }
        DynamicObject const* ToDynObject() const { if (IsDynObject()) return reinterpret_cast<DynamicObject const*>(this); else return nullptr; }

        inline bool IsAreaTrigger() const { return GetTypeId() == TYPEID_AREATRIGGER; }
        static AreaTrigger* ToAreaTrigger(Object* o) { return o ? o->ToAreaTrigger() : nullptr; }
        static AreaTrigger const* ToAreaTrigger(Object const* o) { return o ? o->ToAreaTrigger() : nullptr; }
        AreaTrigger* ToAreaTrigger() { if (IsAreaTrigger()) return reinterpret_cast<AreaTrigger*>(this); else return nullptr; }
        AreaTrigger const* ToAreaTrigger() const { if (IsAreaTrigger()) return reinterpret_cast<AreaTrigger const*>(this); else return nullptr; }

        inline bool IsSceneObject() const { return GetTypeId() == TYPEID_SCENEOBJECT; }
        static SceneObject* ToSceneObject(Object* o) { return o ? o->ToSceneObject() : nullptr; }
        static SceneObject const* ToSceneObject(Object const* o) { return o ? o->ToSceneObject() : nullptr; }
        SceneObject* ToSceneObject() { if (IsSceneObject()) return reinterpret_cast<SceneObject*>(this); else return nullptr; }
        SceneObject const* ToSceneObject() const { if (IsSceneObject()) return reinterpret_cast<SceneObject const*>(this); else return nullptr; }

        inline bool IsConversation() const { return GetTypeId() == TYPEID_CONVERSATION; }
        static Conversation* ToConversation(Object* o) { return o ? o->ToConversation() : nullptr; }
        static Conversation const* ToConversation(Object const* o) { return o ? o->ToConversation() : nullptr; }
        Conversation* ToConversation() { if (IsConversation()) return reinterpret_cast<Conversation*>(this); else return nullptr; }
        Conversation const* ToConversation() const { if (IsConversation()) return reinterpret_cast<Conversation const*>(this); else return nullptr; }

        virtual std::string GetDebugInfo() const;

    protected:
        Object();

        void _InitValues();
        void _Create(ObjectGuid const& guid);
        std::string _ConcatFields(uint16 startIndex, uint16 size) const;
        void _LoadIntoDataField(std::string const& data, uint32 startOffset, uint32 count);

        uint32 GetUpdateFieldData(Player const* target, uint32*& flags) const;
        uint32 GetDynamicUpdateFieldData(Player const* target, uint32*& flags) const;

        template<typename Action>
        void DoWithSuppressingObjectUpdates(Action&& action)
        {
            bool wasUpdatedBeforeAction = m_objectUpdated;
            action();
            if (m_objectUpdated && !wasUpdatedBeforeAction)
            {
                RemoveFromObjectUpdate();
                m_objectUpdated = false;
            }
        }

        void BuildMovementUpdate(ByteBuffer* data, CreateObjectBits flags, Player* target) const;
        virtual void BuildValuesUpdate(uint8 updatetype, ByteBuffer* data, Player const* target) const;
        virtual void BuildDynamicValuesUpdate(uint8 updatetype, ByteBuffer* data, Player const* target) const;

        void ApplyPercentModFloatVar(float& var, float val, bool apply);

        uint16 m_objectType;

        TypeID m_objectTypeId;
        CreateObjectBits m_updateFlag;

        union
        {
            int32  *m_int32Values;
            uint32 *m_uint32Values;
            float  *m_floatValues;
        };

        std::vector<uint32>* _dynamicValues;

        std::vector<uint8> _changesMask;
        std::vector<UpdateMask::DynamicFieldChangeType> _dynamicChangesMask;
        std::vector<uint8>* _dynamicChangesArrayMask;

        uint16 m_valuesCount;
        uint16 _dynamicValuesCount;

        uint16 _fieldNotifyFlags;

        virtual bool AddToObjectUpdate() = 0;
        virtual void RemoveFromObjectUpdate() = 0;
        void AddToObjectUpdateIfNeeded();

        bool m_objectUpdated;

    private:
        ObjectGuid m_guid;
        bool m_inWorld;
        bool m_isNewObject;
        bool m_isDestroyedObject;

        // for output helpful error messages from asserts
        bool PrintIndexError(uint32 index, bool set) const;
        Object(Object const& right) = delete;
        Object(Object&& right) = delete;
        Object& operator=(Object const& right) = delete;
        Object& operator=(Object&& right) = delete;
};

template <class T_VALUES, class T_FLAGS, class FLAG_TYPE, size_t ARRAY_SIZE>
class FlaggedValuesArray32
{
    public:
        FlaggedValuesArray32()
        {
            for (uint32 i = 0; i < ARRAY_SIZE; ++i)
                m_values[i] = T_VALUES(0);
            m_flags = 0;
        }

        T_FLAGS GetFlags() const { return m_flags; }
        bool HasFlag(FLAG_TYPE flag) const { return m_flags & (1 << flag); }
        void AddFlag(FLAG_TYPE flag) { m_flags |= (1 << flag); }
        void DelFlag(FLAG_TYPE flag) { m_flags &= ~(1 << flag); }

        T_VALUES GetValue(FLAG_TYPE flag) const { return m_values[flag]; }
        void SetValue(FLAG_TYPE flag, T_VALUES value) { m_values[flag] = value; }
        void AddValue(FLAG_TYPE flag, T_VALUES value) { m_values[flag] += value; }

    private:
        T_VALUES m_values[ARRAY_SIZE];
        T_FLAGS m_flags;
};

class TC_GAME_API WorldObject : public Object, public WorldLocation
{
    protected:
        explicit WorldObject(bool isWorldObject); //note: here it means if it is in grid object list or world object list
    public:
        virtual ~WorldObject();

        virtual void Update(uint32 /*time_diff*/) { }

        void AddToWorld() override;
        void RemoveFromWorld() override;

        void GetNearPoint2D(WorldObject const* searcher, float& x, float& y, float distance, float absAngle) const;
        void GetNearPoint(WorldObject const* searcher, float& x, float& y, float& z, float distance2d, float absAngle) const;
        void GetClosePoint(float& x, float& y, float& z, float size, float distance2d = 0, float relAngle = 0) const;
        void MovePosition(Position &pos, float dist, float angle);
        Position GetNearPosition(float dist, float angle);
        void MovePositionToFirstCollision(Position &pos, float dist, float angle);
        Position GetFirstCollisionPosition(float dist, float angle);
        Position GetRandomNearPosition(float radius);
        void GetContactPoint(WorldObject const* obj, float& x, float& y, float& z, float distance2d = CONTACT_DISTANCE) const;

        virtual float GetCombatReach() const { return 0.0f; } // overridden (only) in Unit
        void UpdateGroundPositionZ(float x, float y, float &z) const;
        void UpdateAllowedPositionZ(float x, float y, float &z, float* groundZ = nullptr) const;

        void GetRandomPoint(Position const& srcPos, float distance, float& rand_x, float& rand_y, float& rand_z) const;
        Position GetRandomPoint(Position const& srcPos, float distance) const;

        uint32 GetInstanceId() const { return m_InstanceId; }

        bool IsInPhase(WorldObject const* obj) const
        {
            return GetPhaseShift().CanSee(obj->GetPhaseShift());
        }
        static bool InSamePhase(WorldObject const* a, WorldObject const* b)
        {
            return a && b && a->IsInPhase(b);
        }

        PhaseShift& GetPhaseShift() { return _phaseShift; }
        PhaseShift const& GetPhaseShift() const { return _phaseShift; }
        PhaseShift& GetSuppressedPhaseShift() { return _suppressedPhaseShift; }
        PhaseShift const& GetSuppressedPhaseShift() const { return _suppressedPhaseShift; }
        int32 GetDBPhase() const { return _dbPhase; }

        // if negative it is used as PhaseGroupId
        void SetDBPhase(int32 p) { _dbPhase = p; }

        uint32 GetZoneId() const { return m_zoneId; }
        uint32 GetAreaId() const { return m_areaId; }
        void GetZoneAndAreaId(uint32& zoneid, uint32& areaid) const { zoneid = m_zoneId, areaid = m_areaId; }
        bool IsInWorldPvpZone() const;
        bool IsOutdoors() const { return m_outdoors; }
        ZLiquidStatus GetLiquidStatus() const { return m_liquidStatus; }

        InstanceScript* GetInstanceScript() const;

        std::string const& GetName() const { return m_name; }
        void SetName(std::string newname) { m_name = std::move(newname); }

        std::string GetNameForLocaleIdx(LocaleConstant /*locale*/) const override { return m_name; }

        float GetDistance(WorldObject const* obj) const;
        float GetDistance(Position const& pos) const;
        float GetDistance(float x, float y, float z) const;
        float GetDistance2d(WorldObject const* obj) const;
        float GetDistance2d(float x, float y) const;
        float GetDistanceZ(WorldObject const* obj) const;

        bool IsSelfOrInSameMap(WorldObject const* obj) const;
        bool IsInMap(WorldObject const* obj) const;
        bool IsWithinDist3d(float x, float y, float z, float dist) const;
        bool IsWithinDist3d(Position const* pos, float dist) const;
        bool IsWithinDist2d(float x, float y, float dist) const;
        bool IsWithinDist2d(Position const* pos, float dist) const;
        // use only if you will sure about placing both object at same map
        bool IsWithinDist(WorldObject const* obj, float dist2compare, bool is3D = true) const;
        bool IsWithinDistInMap(WorldObject const* obj, float dist2compare, bool is3D = true, bool incOwnRadius = true, bool incTargetRadius = true) const;
        bool IsWithinLOS(float x, float y, float z, LineOfSightChecks checks = LINEOFSIGHT_ALL_CHECKS, VMAP::ModelIgnoreFlags ignoreFlags = VMAP::ModelIgnoreFlags::Nothing) const;
        bool IsWithinLOSInMap(WorldObject const* obj, LineOfSightChecks checks = LINEOFSIGHT_ALL_CHECKS, VMAP::ModelIgnoreFlags ignoreFlags = VMAP::ModelIgnoreFlags::Nothing) const;
        Position GetHitSpherePointFor(Position const& dest) const;
        void GetHitSpherePointFor(Position const& dest, float& x, float& y, float& z) const;
        bool GetDistanceOrder(WorldObject const* obj1, WorldObject const* obj2, bool is3D = true) const;
        bool IsInRange(WorldObject const* obj, float minRange, float maxRange, bool is3D = true) const;
        bool IsInRange2d(float x, float y, float minRange, float maxRange) const;
        bool IsInRange3d(float x, float y, float z, float minRange, float maxRange) const;
        bool isInFront(WorldObject const* target, float arc = float(M_PI)) const;
        bool isInBack(WorldObject const* target, float arc = float(M_PI)) const;

        bool IsInBetween(Position const& pos1, Position const& pos2, float size = 0) const;
        bool IsInBetween(WorldObject const* obj1, WorldObject const* obj2, float size = 0) const { return obj1 && obj2 && IsInBetween(obj1->GetPosition(), obj2->GetPosition(), size); }

        virtual void CleanupsBeforeDelete(bool finalCleanup = true);  // used in destructor or explicitly before mass creature delete to remove cross-references to already deleted units

        virtual void SendMessageToSet(WorldPacket const* data, bool self) const;
        virtual void SendMessageToSetInRange(WorldPacket const* data, float dist, bool self) const;
        virtual void SendMessageToSet(WorldPacket const* data, Player const* skipped_rcvr) const;

        void SendCombatLogMessage(WorldPackets::CombatLog::CombatLogServerPacket* combatLog) const;

        virtual uint8 GetLevelForTarget(WorldObject const* /*target*/) const { return 1; }

        void PlayDistanceSound(uint32 soundId, Player* target = nullptr);
        void PlayDirectSound(uint32 soundId, Player* target = nullptr);
        void PlayDirectMusic(uint32 musicId, Player* target = nullptr);

        void AddObjectToRemoveList();

        float GetGridActivationRange() const;
        float GetVisibilityRange() const;
        float GetSightRange(WorldObject const* target = nullptr) const;
        bool CanSeeOrDetect(WorldObject const* obj, bool ignoreStealth = false, bool distanceCheck = false, bool checkAlert = false) const;

        FlaggedValuesArray32<int32, uint32, StealthType, TOTAL_STEALTH_TYPES> m_stealth;
        FlaggedValuesArray32<int32, uint32, StealthType, TOTAL_STEALTH_TYPES> m_stealthDetect;

        FlaggedValuesArray32<int32, uint32, InvisibilityType, TOTAL_INVISIBILITY_TYPES> m_invisibility;
        FlaggedValuesArray32<int32, uint32, InvisibilityType, TOTAL_INVISIBILITY_TYPES> m_invisibilityDetect;

        FlaggedValuesArray32<int32, uint32, ServerSideVisibilityType, TOTAL_SERVERSIDE_VISIBILITY_TYPES> m_serverSideVisibility;
        FlaggedValuesArray32<int32, uint32, ServerSideVisibilityType, TOTAL_SERVERSIDE_VISIBILITY_TYPES> m_serverSideVisibilityDetect;

        virtual void SetMap(Map* map);
        virtual void ResetMap();
        Map* GetMap() const { ASSERT(m_currMap); return m_currMap; }
        Map* FindMap() const { return m_currMap; }
        //used to check all object's GetMap() calls when object is not in world!

        void SetZoneScript();
        ZoneScript* FindZoneScript() const;
        ZoneScript* GetZoneScript() const { return m_zoneScript; }

        Scenario* GetScenario() const;

        TempSummon* SummonCreature(uint32 entry, Position const& pos, TempSummonType despawnType = TEMPSUMMON_MANUAL_DESPAWN, Milliseconds despawnTime = 0s, uint32 vehId = 0, uint32 spellId = 0, ObjectGuid privateObjectOwner = ObjectGuid::Empty);
        TempSummon* SummonCreature(uint32 entry, float x, float y, float z, float o = 0, TempSummonType despawnType = TEMPSUMMON_MANUAL_DESPAWN, Milliseconds despawnTime = 0s, ObjectGuid privateObjectOwner = ObjectGuid::Empty);
        TempSummon* SummonPersonalClone(Position const& pos, TempSummonType despawnType = TEMPSUMMON_MANUAL_DESPAWN, Milliseconds despawnTime = 0s, uint32 vehId = 0, uint32 spellId = 0, Player* privateObjectOwner = nullptr);
        GameObject* SummonGameObject(uint32 entry, Position const& pos, QuaternionData const& rot, Seconds respawnTime, GOSummonType summonType = GO_SUMMON_TIMED_OR_CORPSE_DESPAWN);
        GameObject* SummonGameObject(uint32 entry, float x, float y, float z, float ang, QuaternionData const& rot, Seconds respawnTime, GOSummonType summonType = GO_SUMMON_TIMED_OR_CORPSE_DESPAWN);
        Creature*   SummonTrigger(float x, float y, float z, float ang, Milliseconds despawnTime, CreatureAI* (*GetAI)(Creature*) = nullptr);
        void SummonCreatureGroup(uint8 group, std::list<TempSummon*>* list = nullptr);

        Creature*   FindNearestCreature(uint32 entry, float range, bool alive = true) const;
        GameObject* FindNearestGameObject(uint32 entry, float range, bool spawnedOnly = true) const;
        GameObject* FindNearestUnspawnedGameObject(uint32 entry, float range) const;
        GameObject* FindNearestGameObjectOfType(GameobjectTypes type, float range) const;
        Player* SelectNearestPlayer(float distance) const;

        virtual ObjectGuid GetOwnerGUID() const = 0;
        virtual ObjectGuid GetCharmerOrOwnerGUID() const { return GetOwnerGUID(); }
        ObjectGuid GetCharmerOrOwnerOrOwnGUID() const;

        Unit* GetOwner() const;
        Unit* GetCharmerOrOwner() const;
        Unit* GetCharmerOrOwnerOrSelf() const;
        Player* GetCharmerOrOwnerPlayerOrPlayerItself() const;
        Player* GetAffectingPlayer() const;

        Player* GetSpellModOwner() const;
        int32 CalculateSpellDamage(Unit const* target, SpellEffectInfo const& spellEffectInfo, int32 const* basePoints = nullptr, float* variance = nullptr, uint32 castItemId = 0, int32 itemLevel = -1) const;

        // target dependent range checks
        float GetSpellMaxRangeForTarget(Unit const* target, SpellInfo const* spellInfo) const;
        float GetSpellMinRangeForTarget(Unit const* target, SpellInfo const* spellInfo) const;

        float ApplyEffectModifiers(SpellInfo const* spellInfo, uint8 effIndex, float value) const;
        int32 CalcSpellDuration(SpellInfo const* spellInfo) const;
        int32 ModSpellDuration(SpellInfo const* spellInfo, WorldObject const* target, int32 duration, bool positive, uint32 effectMask) const;
        void ModSpellCastTime(SpellInfo const* spellInfo, int32& castTime, Spell* spell = nullptr) const;
        void ModSpellDurationTime(SpellInfo const* spellInfo, int32& durationTime, Spell* spell = nullptr) const;

        virtual float MeleeSpellMissChance(Unit const* victim, WeaponAttackType attType, SpellInfo const* spellInfo) const;
        virtual SpellMissInfo MeleeSpellHitResult(Unit* victim, SpellInfo const* spellInfo) const;
        SpellMissInfo MagicSpellHitResult(Unit* victim, SpellInfo const* spellInfo) const;
        SpellMissInfo SpellHitResult(Unit* victim, SpellInfo const* spellInfo, bool canReflect = false) const;
        void SendSpellMiss(Unit* target, uint32 spellID, SpellMissInfo missInfo);

        virtual uint32 GetFaction() const = 0;
        virtual void SetFaction(uint32 /*faction*/) { }
        FactionTemplateEntry const* GetFactionTemplateEntry() const;

        ReputationRank GetReactionTo(WorldObject const* target) const;
        static ReputationRank GetFactionReactionTo(FactionTemplateEntry const* factionTemplateEntry, WorldObject const* target);

        bool IsHostileTo(WorldObject const* target) const;
        bool IsHostileToPlayers() const;
        bool IsFriendlyTo(WorldObject const* target) const;
        bool IsNeutralToAll() const;

        // CastSpell's third arg can be a variety of things - check out CastSpellExtraArgs' constructors!
        SpellCastResult CastSpell(CastSpellTargetArg const& targets, uint32 spellId, CastSpellExtraArgs const& args = { });

        void SendPlayOrphanSpellVisual(ObjectGuid const& target, uint32 spellVisualId, float travelSpeed, bool speedAsTime = false, bool withSourceOrientation = false);
        void SendPlayOrphanSpellVisual(Position const& targetLocation, uint32 spellVisualId, float travelSpeed, bool speedAsTime = false, bool withSourceOrientation = false);
        void SendCancelOrphanSpellVisual(uint32 id);

        void SendPlaySpellVisual(WorldObject* target, uint32 spellVisualId, uint16 missReason, uint16 reflectStatus, float travelSpeed, bool speedAsTime = false);
        void SendPlaySpellVisual(Position const& targetPosition, float o, uint32 spellVisualId, uint16 missReason, uint16 reflectStatus, float travelSpeed, bool speedAsTime = false);
        void SendCancelSpellVisual(uint32 id);

        void SendPlaySpellVisualKit(uint32 id, uint32 type, uint32 duration) const;
        void SendCancelSpellVisualKit(uint32 id);

        bool IsValidAttackTarget(WorldObject const* target, SpellInfo const* bySpell = nullptr) const;
        bool IsValidAssistTarget(WorldObject const* target, SpellInfo const* bySpell = nullptr) const;

        Unit* GetMagicHitRedirectTarget(Unit* victim, SpellInfo const* spellInfo);

        virtual uint32 GetCastSpellXSpellVisualId(SpellInfo const* spellInfo) const;

        template <typename Container>
        void GetGameObjectListWithEntryInGrid(Container& gameObjectContainer, uint32 entry, float maxSearchRange = 250.0f) const;

        template <typename Container>
        void GetCreatureListWithEntryInGrid(Container& creatureContainer, uint32 entry, float maxSearchRange = 250.0f) const;

        template <typename Container>
        void GetPlayerListInGrid(Container& playerContainer, float maxSearchRange, bool alive = true) const;

        void DestroyForNearbyPlayers();
        virtual void UpdateObjectVisibility(bool forced = true);
        virtual void UpdateObjectVisibilityOnCreate() { UpdateObjectVisibility(true); }
        virtual void UpdateObjectVisibilityOnDestroy() { DestroyForNearbyPlayers(); }
        void UpdatePositionData();

        void BuildUpdate(UpdateDataMapType&) override;
        bool AddToObjectUpdate() override;
        void RemoveFromObjectUpdate() override;

        //relocation and visibility system functions
        void AddToNotify(uint16 f) { m_notifyflags |= f;}
        bool isNeedNotify(uint16 f) const { return (m_notifyflags & f) != 0; }
        uint16 GetNotifyFlags() const { return m_notifyflags; }
        void ResetAllNotifies() { m_notifyflags = 0; }

        bool isActiveObject() const { return m_isActive; }
        void setActive(bool isActiveObject);
        bool IsFarVisible() const { return m_isFarVisible; }
        void SetFarVisible(bool on);
        bool IsVisibilityOverridden() const { return m_visibilityDistanceOverride.has_value(); }
        void SetVisibilityDistanceOverride(VisibilityDistanceType type);
        void SetWorldObject(bool apply);
        bool IsPermanentWorldObject() const { return m_isWorldObject; }
        bool IsWorldObject() const;

        uint32  LastUsedScriptID;

        // Transports
        TransportBase* GetTransport() const { return m_transport; }
        float GetTransOffsetX() const { return m_movementInfo.transport.pos.GetPositionX(); }
        float GetTransOffsetY() const { return m_movementInfo.transport.pos.GetPositionY(); }
        float GetTransOffsetZ() const { return m_movementInfo.transport.pos.GetPositionZ(); }
        float GetTransOffsetO() const { return m_movementInfo.transport.pos.GetOrientation(); }
        Position const& GetTransOffset() const { return m_movementInfo.transport.pos; }
        uint32 GetTransTime()   const { return m_movementInfo.transport.time; }
        int8 GetTransSeat()     const { return m_movementInfo.transport.seat; }
        virtual ObjectGuid GetTransGUID() const;
        void SetTransport(TransportBase* t) { m_transport = t; }

        MovementInfo m_movementInfo;

        virtual float GetStationaryX() const { return GetPositionX(); }
        virtual float GetStationaryY() const { return GetPositionY(); }
        virtual float GetStationaryZ() const { return GetPositionZ(); }
        virtual float GetStationaryO() const { return GetOrientation(); }

        float GetFloorZ() const;
        virtual float GetCollisionHeight() const { return 0.0f; }

        float GetMapWaterOrGroundLevel(float x, float y, float z, float* ground = nullptr) const;
        float GetMapHeight(float x, float y, float z, bool vmap = true, float distanceToSearch = 50.0f) const; // DEFAULT_HEIGHT_SEARCH in map.h

        std::string GetDebugInfo() const override;

        // Event handler
        EventProcessor m_Events;

        virtual uint16 GetAIAnimKitId() const { return 0; }
        virtual uint16 GetMovementAnimKitId() const { return 0; }
        virtual uint16 GetMeleeAnimKitId() const { return 0; }

        // Watcher
        bool IsPrivateObject() const { return !_privateObjectOwner.IsEmpty(); }
        ObjectGuid GetPrivateObjectOwner() const { return _privateObjectOwner; }
        void SetPrivateObjectOwner(ObjectGuid const& owner) { _privateObjectOwner = owner; }
        bool CheckPrivateObjectOwnerVisibility(WorldObject const* seer) const;

        // Smooth Phasing
        SmoothPhasing* GetOrCreateSmoothPhasing();
        SmoothPhasing* GetSmoothPhasing() { return _smoothPhasing.get(); }
        SmoothPhasing const* GetSmoothPhasing() const { return _smoothPhasing.get(); }

    protected:
        std::string m_name;
        bool m_isActive;
        bool m_isFarVisible;
        Optional<float> m_visibilityDistanceOverride;
        bool const m_isWorldObject;
        ZoneScript* m_zoneScript;

        // transports (gameobjects only)
        TransportBase* m_transport;

        virtual void ProcessPositionDataChanged(PositionFullTerrainStatus const& data);
        uint32 m_zoneId;
        uint32 m_areaId;
        float m_staticFloorZ;
        bool m_outdoors;
        ZLiquidStatus m_liquidStatus;

        //these functions are used mostly for Relocate() and Corpse/Player specific stuff...
        //use them ONLY in LoadFromDB()/Create() funcs and nowhere else!
        //mapId/instanceId should be set in SetMap() function!
        void SetLocationMapId(uint32 _mapId) { m_mapId = _mapId; }
        void SetLocationInstanceId(uint32 _instanceId) { m_InstanceId = _instanceId; }

        virtual bool IsNeverVisibleFor(WorldObject const* /*seer*/) const { return !IsInWorld() || IsDestroyedObject(); }
        virtual bool IsAlwaysVisibleFor(WorldObject const* /*seer*/) const { return false; }
        virtual bool IsInvisibleDueToDespawn() const { return false; }
        //difference from IsAlwaysVisibleFor: 1. after distance check; 2. use owner or charmer as seer
        virtual bool IsAlwaysDetectableFor(WorldObject const* /*seer*/) const { return false; }
    private:
        Map* m_currMap;                                   // current object's Map location

        uint32 m_InstanceId;                              // in map copy with instance id
        PhaseShift _phaseShift;
        PhaseShift _suppressedPhaseShift;                 // contains phases for current area but not applied due to conditions
        int32 _dbPhase;

        uint16 m_notifyflags;

        ObjectGuid _privateObjectOwner;

        std::unique_ptr<SmoothPhasing> _smoothPhasing;

        virtual bool _IsWithinDist(WorldObject const* obj, float dist2compare, bool is3D, bool incOwnRadius = true, bool incTargetRadius = true) const;

        bool CanNeverSee(WorldObject const* obj) const;
        virtual bool CanAlwaysSee(WorldObject const* /*obj*/) const { return false; }
        bool CanDetect(WorldObject const* obj, bool ignoreStealth, bool checkAlert = false) const;
        bool CanDetectInvisibilityOf(WorldObject const* obj) const;
        bool CanDetectStealthOf(WorldObject const* obj, bool checkAlert = false) const;
};

namespace Trinity
{
    // Binary predicate to sort WorldObjects based on the distance to a reference WorldObject
    class ObjectDistanceOrderPred
    {
        public:
            ObjectDistanceOrderPred(WorldObject const* refObj, bool ascending = true) : _refObj(refObj), _ascending(ascending) { }

            bool operator()(WorldObject const* left, WorldObject const* right) const
            {
                return _refObj->GetDistanceOrder(left, right) == _ascending;
            }

        private:
            WorldObject const* _refObj;
            bool _ascending;
    };
}

#endif
