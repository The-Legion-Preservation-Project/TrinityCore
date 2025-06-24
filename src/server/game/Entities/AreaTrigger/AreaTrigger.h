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

#ifndef TRINITYCORE_AREATRIGGER_H
#define TRINITYCORE_AREATRIGGER_H

#include "Object.h"
#include "GridObject.h"
#include "MapObject.h"
#include "AreaTriggerTemplate.h"

class AuraEffect;
class AreaTriggerAI;
class SpellInfo;
class Unit;

namespace G3D
{
    class Vector2;
    class Vector3;
}
namespace Movement
{
    template<typename length_type>
    class Spline;
}

enum AreaTriggerScaleCurveOffsets
{
    // TheLegionPreservationProject: these might be incorrect
    AREATRIGGER_SCALE_CURVE_OFFSET_POINTS          = 0,
    AREATRIGGER_SCALE_CURVE_OFFSET_START_TIME      = 1,

    // TheLegionPreservationProject: these are correct
    AREATRIGGER_SCALE_CURVE_OFFSET_PARAMETER_CURVE = 5,
    AREATRIGGER_SCALE_CURVE_OFFSET_OVERRIDE_ACTIVE = 6,
};

class TC_GAME_API AreaTrigger final : public WorldObject, public GridObject<AreaTrigger>, public MapObject
{
    public:
        AreaTrigger();
        ~AreaTrigger();

        void AddToWorld() override;
        void RemoveFromWorld() override;

        void AI_Initialize();
        void AI_Destroy();

        AreaTriggerAI* AI() { return _ai.get(); }

        bool IsCustom() const { return _areaTriggerTemplate->Id.IsCustom; }
        bool IsServerSide() const { return _areaTriggerTemplate->Flags.HasFlag(AreaTriggerFlag::IsServerSide); }
        bool IsStaticSpawn() const { return _spawnId != 0; }
        bool HasActionSetFlag(AreaTriggerActionSetFlag flag) const { return _areaTriggerTemplate->ActionSetFlags.HasFlag(flag); }

        bool IsNeverVisibleFor(WorldObject const* seer, bool allowServersideObjects = false) const override;

        Position const& GetStationaryPosition() const override { return _stationaryPosition; }
        void RelocateStationaryPosition(Position const& pos) { _stationaryPosition.Relocate(pos); }

    private:
        bool Create(AreaTriggerCreatePropertiesId areaTriggerCreatePropertiesId, Map* map, Position const& pos, int32 duration, AreaTriggerSpawn const* spawnData = nullptr, Unit* caster = nullptr, Unit* target = nullptr, SpellCastVisual spellVisual = { 0, 0 }, SpellInfo const* spellInfo = nullptr, Spell* spell = nullptr, AuraEffect const* aurEff = nullptr);

    public:
        static AreaTrigger* CreateAreaTrigger(AreaTriggerCreatePropertiesId areaTriggerCreatePropertiesId, Position const& pos, int32 duration, Unit* caster, Unit* target, SpellCastVisual spellVisual = { 0, 0 }, SpellInfo const* spellInfo = nullptr, Spell* spell = nullptr, AuraEffect const* aurEff = nullptr);
        static ObjectGuid CreateNewMovementForceId(Map* map, uint32 areaTriggerId);
        bool LoadFromDB(ObjectGuid::LowType spawnId, Map* map, bool addToMap, bool allowDuplicate);

        void Update(uint32 diff) override;
        void Remove();
        bool IsRemoved() const { return _isRemoved; }
        uint32 GetSpellId() const { return GetUInt32Value(AREATRIGGER_SPELLID); }
        AuraEffect const* GetAuraEffect() const { return _aurEff; }
        uint32 GetTimeSinceCreated() const { return _timeSinceCreated; }

        void SetOverrideScaleCurve(float overrideScale);
        void SetOverrideScaleCurve(std::array<DBCPosition2D, 2> const& points, Optional<uint32> startTimeOffset = {}, CurveInterpolationMode interpolation = CurveInterpolationMode::Linear);
        void ClearOverrideScaleCurve();

        void SetExtraScaleCurve(float extraScale);
        void SetExtraScaleCurve(std::array<DBCPosition2D, 2> const& points, Optional<uint32> startTimeOffset = {}, CurveInterpolationMode interpolation = CurveInterpolationMode::Linear);
        void ClearExtraScaleCurve();

        uint32 GetTimeToTarget() const { return GetUInt32Value(AREATRIGGER_TIME_TO_TARGET); }
        void SetTimeToTarget(uint32 timeToTarget) { SetUInt32Value(AREATRIGGER_TIME_TO_TARGET, timeToTarget); }

        uint32 GetTimeToTargetScale() const { return GetUInt32Value(AREATRIGGER_TIME_TO_TARGET_SCALE); }
        void SetTimeToTargetScale(uint32 timeToTargetScale) { SetUInt32Value(AREATRIGGER_TIME_TO_TARGET_SCALE, timeToTargetScale); }

        uint32 GetTimeToTargetExtraScale() const { return GetUInt32Value(AREATRIGGER_TIME_TO_TARGET_EXTRA_SCALE); }
        void SetTimeToTargetExtraScale(uint32 timeToTargetExtraScale) { SetUInt32Value(AREATRIGGER_TIME_TO_TARGET_EXTRA_SCALE, timeToTargetExtraScale); }

        void SetSpellVisual(SpellCastVisual const& visual);

        int32 GetDuration() const { return _duration; }

        int32 GetTotalDuration() const { return _totalDuration; }
        void SetDuration(int32 newDuration);
        void Delay(int32 delaytime) { SetDuration(GetDuration() - delaytime); }

        GuidUnorderedSet const& GetInsideUnits() const { return _insideUnits; }

        AreaTriggerCreateProperties const* GetCreateProperties() const { return _areaTriggerCreateProperties; }
        AreaTriggerTemplate const* GetTemplate() const { return _areaTriggerTemplate; }
        uint32 GetScriptId() const;

        ObjectGuid GetCreatorGUID() const override { return GetCasterGuid(); }
        ObjectGuid GetOwnerGUID() const override { return GetCasterGuid(); }
        ObjectGuid const& GetCasterGuid() const { return GetGuidValue(AREATRIGGER_CASTER); }
        Unit* GetCaster() const;
        Unit* GetTarget() const;

        uint32 GetFaction() const override;

        AreaTriggerShapeInfo const& GetShape() const { return _shape; }
        float GetMaxSearchRadius() const;
        Position const& GetRollPitchYaw() const { return _rollPitchYaw; }
        Position const& GetTargetRollPitchYaw() const { return _targetRollPitchYaw; }
        void InitSplineOffsets(std::vector<Position> const& offsets, Optional<float> overrideSpeed = {});
        void InitSplines(std::vector<G3D::Vector3> const& splinePoints, Optional<float> overrideSpeed = {});
        bool HasSplines() const { return std::holds_alternative<std::unique_ptr<::Movement::Spline<float>>>(_movement); }
        ::Movement::Spline<float> const& GetSpline() const { return *std::get<std::unique_ptr<::Movement::Spline<float>>>(_movement); }
        uint32 GetElapsedTimeForMovement() const { return GetTimeSinceCreated(); } /// @todo: research the right value, in sniffs both timers are nearly identical

        void InitOrbit(AreaTriggerOrbitInfo const& orbit, Optional<float> overrideSpeed = {});
        bool HasOrbit() const { return std::holds_alternative<std::unique_ptr<AreaTriggerOrbitInfo>>(_movement); }
        AreaTriggerOrbitInfo const& GetOrbit() const { return *std::get<std::unique_ptr<AreaTriggerOrbitInfo>>(_movement); }

        void UpdateShape();

    protected:
        void _UpdateDuration(int32 newDuration);

        float CalcCurrentScale() const;

        float GetProgress() const;

        float GetScaleCurveProgress(AreaTriggerFields scaleCurve, uint32 timeTo) const;
        float GetScaleCurveValueAtProgress(AreaTriggerFields scaleCurve, float x) const;
        float GetScaleCurveValue(AreaTriggerFields scaleCurve, uint32 timeTo) const;
        void SetScaleCurve(AreaTriggerFields scaleCurve, float constantValue);
        void SetScaleCurve(AreaTriggerFields scaleCurve, std::array<DBCPosition2D, 2> const& points, Optional<uint32> startTimeOffset, CurveInterpolationMode interpolation);
        void ClearScaleCurve(AreaTriggerFields scaleCurve);
        void SetScaleCurve(AreaTriggerFields scaleCurve, Optional<AreaTriggerScaleCurveTemplate> const& curve);

        void UpdateTargetList();
        void SearchUnits(std::vector<Unit*>& targetList, float radius, bool check3D);
        void SearchUnitInSphere(std::vector<Unit*>& targetList);
        void SearchUnitInBox(std::vector<Unit*>& targetList);
        void SearchUnitInPolygon(std::vector<Unit*>& targetList);
        void SearchUnitInCylinder(std::vector<Unit*>& targetList);
        void HandleUnitEnterExit(std::vector<Unit*> const& targetList);

        void DoActions(Unit* unit);
        void UndoActions(Unit* unit);

        void UpdatePolygonVertices();
        void UpdateOrbitPosition(AreaTriggerOrbitInfo& orbit, uint32 diff);
        void UpdateSplinePosition(Movement::Spline<float>& spline, uint32 diff);

        Position const* GetOrbitCenterPosition() const;
        Position CalculateOrbitPosition() const;

        void DebugVisualizePosition(); // Debug purpose only

        ObjectGuid::LowType _spawnId;

        ObjectGuid _targetGuid;

        AuraEffect const* _aurEff;

        Position _stationaryPosition;
        AreaTriggerShapeInfo _shape;
        int32 _duration;
        int32 _totalDuration;
        uint32 _timeSinceCreated;
        float _verticesUpdatePreviousOrientation;
        bool _isRemoved;

        Position _rollPitchYaw;
        Position _targetRollPitchYaw;
        std::vector<Position> _polygonVertices;
        std::variant<std::monostate, std::unique_ptr<::Movement::Spline<float>>, std::unique_ptr<AreaTriggerOrbitInfo>> _movement;

        bool _reachedDestination;
        int32 _lastSplineIndex;
        uint32 _movementTime;

        AreaTriggerCreateProperties const* _areaTriggerCreateProperties;
        AreaTriggerTemplate const* _areaTriggerTemplate;
        GuidUnorderedSet _insideUnits;

        std::unique_ptr<AreaTriggerAI> _ai;
};

#endif
