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

#include "SceneObject.h"
#include "GameTime.h"
#include "Map.h"
#include "ObjectAccessor.h"
#include "ObjectMgr.h"
#include "PhasingHandler.h"
#include "SpellAuras.h"
#include "Unit.h"
#include "UpdateData.h"
#include "Util.h"

SceneObject::SceneObject() : WorldObject(false)
{
    m_objectType |= TYPEMASK_SCENEOBJECT;
    m_objectTypeId = TYPEID_SCENEOBJECT;

    m_updateFlag.Stationary = true;
    m_updateFlag.SceneObject = true;
}

SceneObject::~SceneObject() = default;

void SceneObject::AddToWorld()
{
    if (!IsInWorld())
    {
        GetMap()->GetObjectsStore().Insert<SceneObject>(GetGUID(), this);
        WorldObject::AddToWorld();
    }
}

void SceneObject::RemoveFromWorld()
{
    if (IsInWorld())
    {
        WorldObject::RemoveFromWorld();
        GetMap()->GetObjectsStore().Remove<SceneObject>(GetGUID());
    }
}

void SceneObject::Update(uint32 diff)
{
    WorldObject::Update(diff);

    if (ShouldBeRemoved())
        Remove();
}

void SceneObject::Remove()
{
    if (IsInWorld())
        AddObjectToRemoveList();
}

bool SceneObject::ShouldBeRemoved() const
{
    Unit* creator = ObjectAccessor::GetUnit(*this, GetOwnerGUID());
    if (!creator)
        return true;

    if (!_createdBySpellCast.IsEmpty())
    {
        // search for a dummy aura on creator
        Aura const* linkedAura = creator->GetAura(_createdBySpellCast.GetEntry(), [this](Aura const* aura)
        {
            return aura->GetCastId() == _createdBySpellCast;
        });
        if (!linkedAura)
            return true;
    }

    return false;
}

SceneObject* SceneObject::CreateSceneObject(uint32 sceneId, Unit* creator, Position const& pos, ObjectGuid privateObjectOwner)
{
    SceneTemplate const* sceneTemplate = sObjectMgr->GetSceneTemplate(sceneId);
    if (!sceneTemplate)
        return nullptr;

    ObjectGuid::LowType lowGuid = creator->GetMap()->GenerateLowGuid<HighGuid::SceneObject>();

    SceneObject* sceneObject = new SceneObject();
    if (!sceneObject->Create(lowGuid, SceneType::Normal, sceneId, sceneTemplate ? sceneTemplate->ScenePackageId : 0, creator->GetMap(), creator, pos, privateObjectOwner))
    {
        delete sceneObject;
        return nullptr;
    }

    return sceneObject;
}

bool SceneObject::Create(ObjectGuid::LowType lowGuid, SceneType type, uint32 sceneId, uint32 scriptPackageId, Map* map, Unit* creator,
    Position const& pos, ObjectGuid privateObjectOwner)
{
    SetMap(map);
    Relocate(pos);
    RelocateStationaryPosition(pos);

    SetPrivateObjectOwner(privateObjectOwner);

    Object::_Create(ObjectGuid::Create<HighGuid::SceneObject>(GetMapId(), sceneId, lowGuid));
    PhasingHandler::InheritPhaseShift(this, creator);

    UpdatePositionData();
    SetZoneScript();

    SetEntry(scriptPackageId);
    SetObjectScale(1.0f);

    SetUInt32Value(SCENEOBJECT_FIELD_SCRIPT_PACKAGE_ID, scriptPackageId);
    SetUInt32Value(SCENEOBJECT_FIELD_RND_SEED_VAL, GameTime::GetGameTimeMS());
    SetGuidValue(SCENEOBJECT_FIELD_CREATEDBY, creator->GetGUID());
    SetUInt32Value(SCENEOBJECT_FIELD_SCENE_TYPE, AsUnderlyingType(type));

    if (!GetMap()->AddToMap(this))
        return false;

    return true;
}
