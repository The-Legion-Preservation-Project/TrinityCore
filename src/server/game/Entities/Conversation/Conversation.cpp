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

#include "ConditionMgr.h"
#include "Conversation.h"
#include "ConversationAI.h"
#include "ConversationDataStore.h"
#include "Creature.h"
#include "CreatureAISelector.h"
#include "DB2Stores.h"
#include "IteratorPair.h"
#include "Log.h"
#include "Map.h"
#include "ObjectAccessor.h"
#include "PhasingHandler.h"
#include "Player.h"
#include "Unit.h"
#include "UpdateData.h"
#include "WorldSession.h"

Conversation::Conversation() : WorldObject(false), _duration(0)
{
    m_objectType |= TYPEMASK_CONVERSATION;
    m_objectTypeId = TYPEID_CONVERSATION;

    m_updateFlag.Stationary = true;

    m_valuesCount = CONVERSATION_END;
    _dynamicValuesCount = CONVERSATION_DYNAMIC_END;
}

Conversation::~Conversation() = default;

void Conversation::AddToWorld()
{
    ///- Register the Conversation for guid lookup and for caster
    if (!IsInWorld())
    {
        GetMap()->GetObjectsStore().Insert<Conversation>(this);
        WorldObject::AddToWorld();
    }
}

void Conversation::RemoveFromWorld()
{
    ///- Remove the Conversation from the accessor and from all lists of objects in world
    if (IsInWorld())
    {
        _ai->OnRemove();

        WorldObject::RemoveFromWorld();
        GetMap()->GetObjectsStore().Remove<Conversation>(this);
    }
}

void Conversation::Update(uint32 diff)
{
    _ai->OnUpdate(diff);

    if (GetDuration() > Milliseconds(diff))
        _duration -= Milliseconds(diff);
    else
    {
        Remove(); // expired
        return;
    }

    WorldObject::Update(diff);
}

void Conversation::Remove()
{
    if (IsInWorld())
    {
        AddObjectToRemoveList(); // calls RemoveFromWorld
    }
}

Conversation* Conversation::CreateConversation(uint32 conversationEntry, Unit* creator, Position const& pos, ObjectGuid privateObjectOwner, SpellInfo const* spellInfo /*= nullptr*/, bool autoStart /*= true*/)
{
    ConversationTemplate const* conversationTemplate = sConversationDataStore->GetConversationTemplate(conversationEntry);
    if (!conversationTemplate)
        return nullptr;

    ObjectGuid::LowType lowGuid = creator->GetMap()->GenerateLowGuid<HighGuid::Conversation>();

    Conversation* conversation = new Conversation();
    conversation->Create(lowGuid, conversationEntry, creator->GetMap(), creator, pos, privateObjectOwner, spellInfo);
    if (autoStart && !conversation->Start())
    {
        delete conversation;
        return nullptr;
    }

    return conversation;
}

struct ConversationActorFillVisitor
{
    explicit ConversationActorFillVisitor(Conversation* conversation, Unit const* creator, Map const* map, ConversationActorTemplate const& actor)
        : _conversation(conversation), _creator(creator), _map(map), _actor(actor)
    {
    }

    void operator()(ConversationActorWorldObjectTemplate const& worldObject) const
    {
        Creature const* bestFit = nullptr;

        for (auto const& [_, creature] : Trinity::Containers::MapEqualRange(_map->GetCreatureBySpawnIdStore(), worldObject.SpawnId))
        {
            bestFit = creature;

            // If creature is in a personal phase then we pick that one specifically
            if (creature->GetPhaseShift().GetPersonalGuid() == _creator->GetGUID())
                break;
        }

        if (bestFit)
            _conversation->AddActor(_actor.Id, _actor.Index, bestFit->GetGUID());
    }

    void operator()(ConversationActorNoObjectTemplate const& noObject) const
    {
        _conversation->AddActor(_actor.Id, _actor.Index, ConversationActorType::WorldObject, noObject.CreatureId, noObject.CreatureDisplayInfoId);
    }

    void operator()([[maybe_unused]] ConversationActorActivePlayerTemplate const& activePlayer) const
    {
        _conversation->AddActor(_actor.Id, _actor.Index, ObjectGuid::Create<HighGuid::Player>(0xFFFFFFFFFFFFFFFF));
    }

    void operator()(ConversationActorTalkingHeadTemplate const& talkingHead) const
    {
        _conversation->AddActor(_actor.Id, _actor.Index, ConversationActorType::TalkingHead, talkingHead.CreatureId, talkingHead.CreatureDisplayInfoId);
    }

private:
    Conversation* _conversation;
    Unit const* _creator;
    ::Map const* _map;
    ConversationActorTemplate const& _actor;
};

void Conversation::Create(ObjectGuid::LowType lowGuid, uint32 conversationEntry, Map* map, Unit* creator, Position const& pos, ObjectGuid privateObjectOwner, SpellInfo const* /*spellInfo = nullptr*/)
{
    ConversationTemplate const* conversationTemplate = sConversationDataStore->GetConversationTemplate(conversationEntry);
    ASSERT(conversationTemplate);

    _creatorGuid = creator->GetGUID();
    SetPrivateObjectOwner(privateObjectOwner);

    SetMap(map);
    Relocate(pos);
    RelocateStationaryPosition(pos);

    Object::_Create(ObjectGuid::Create<HighGuid::Conversation>(GetMapId(), conversationEntry, lowGuid));
    PhasingHandler::InheritPhaseShift(this, creator);

    UpdatePositionData();
    SetZoneScript();

    SetEntry(conversationEntry);
    SetObjectScale(1.0f);

    SetUInt32Value(CONVERSATION_LAST_LINE_END_TIME, conversationTemplate->LastLineEndTime);
    _duration = Milliseconds(conversationTemplate->LastLineEndTime) + Seconds(10);

    AI_Initialize();

    for (ConversationActorTemplate const& actor : conversationTemplate->Actors)
        std::visit(ConversationActorFillVisitor(this, creator, map, actor), actor.Data);

    for (ConversationLineTemplate const* line : conversationTemplate->Lines)
    {
        if (!sConditionMgr->IsObjectMeetingNotGroupedConditions(CONDITION_SOURCE_TYPE_CONVERSATION_LINE, line->Id, creator))
            continue;

        _actorIndices.insert(line->ActorIdx);
        AddDynamicStructuredValue(CONVERSATION_DYNAMIC_FIELD_LINES, line);
    }

    _ai->OnCreate(creator);
}

bool Conversation::Start()
{
    ConversationTemplate const* conversationTemplate = sConversationDataStore->GetConversationTemplate(GetEntry()); // never null, already checked in ::Create / ::CreateConversation
    if (!conversationTemplate->Flags.HasFlag(ConversationFlags::AllowWithoutSpawnedActor))
    {
        for (uint16 actorIndex : _actorIndices)
        {
            ConversationDynamicFieldActor const* actor = GetDynamicStructuredValue<ConversationDynamicFieldActor>(CONVERSATION_DYNAMIC_FIELD_ACTORS, actorIndex);
            if (!actor || actor->IsEmpty())
            {
                TC_LOG_ERROR("entities.conversation", "Failed to create conversation (Id: {}) due to missing actor (Idx: {}).", GetEntry(), actorIndex);
                return false;
            }
        }
    }

    if (IsInWorld())
    {
        TC_LOG_ERROR("entities.conversation", "Attempted to start conversation (Id: {}) multiple times.", GetEntry());
        return true; // returning true to not cause delete in Conversation::CreateConversation if convo is already started in ConversationScript::OnConversationCreate
    }

    if (!GetMap()->AddToMap(this))
        return false;

    _ai->OnStart();
    return true;
}

void Conversation::AddActor(int32 actorId, uint32 actorIdx, ObjectGuid const& actorGuid)
{
    ConversationDynamicFieldActor actorField;
    actorField.ActorTemplate.Id = actorId;
    actorField.ActorTemplate.CreatureId = 0;
    actorField.ActorTemplate.CreatureModelId = 0;
    actorField.ActorGuid = actorGuid;
    actorField.Type = AsUnderlyingType(ConversationDynamicFieldActor::ActorType::WorldObjectActor);
    SetDynamicStructuredValue(CONVERSATION_DYNAMIC_FIELD_ACTORS, actorIdx, &actorField);
}

void Conversation::AddActor(int32 actorId, uint32 actorIdx, ConversationActorType type, uint32 creatureId, uint32 creatureDisplayInfoId)
{
    ConversationDynamicFieldActor actorField;
    actorField.ActorTemplate.Id = actorId;
    actorField.ActorTemplate.CreatureId = creatureId;
    actorField.ActorTemplate.CreatureModelId = creatureDisplayInfoId;
    actorField.ActorGuid = ObjectGuid::Empty;
    actorField.Type = AsUnderlyingType(type);
    SetDynamicStructuredValue(CONVERSATION_DYNAMIC_FIELD_ACTORS, actorIdx, &actorField);
}

Milliseconds Conversation::GetLastLineEndTime(LocaleConstant /*locale*/) const
{
    Milliseconds lastLineEndTime(0);

    // TODO: TheLegionPreservationProject: locale?
    if (ConversationTemplate const* conversationTemplate = sConversationDataStore->GetConversationTemplate(GetEntry()))
    {
        lastLineEndTime = Milliseconds(conversationTemplate->LastLineEndTime);
    }

    if (lastLineEndTime.count() == 0)
        TC_LOG_ERROR("entities.conversation", "Conversation::GetLastLineEndTime: Missing last line end time for conversation (Conversation ID: {}).", GetEntry());

    return lastLineEndTime;
}

LocaleConstant Conversation::GetPrivateObjectOwnerLocale() const
{
    LocaleConstant privateOwnerLocale = LOCALE_enUS;
    if (Player* owner = ObjectAccessor::GetPlayer(*this, GetPrivateObjectOwner()))
        privateOwnerLocale = owner->GetSession()->GetSessionDbLocaleIndex();
    return privateOwnerLocale;
}

Unit* Conversation::GetActorUnit(uint32 actorIdx) const
{
    auto const* actorField = GetDynamicStructuredValue<ConversationDynamicFieldActor>(CONVERSATION_DYNAMIC_FIELD_ACTORS, actorIdx);
    if (actorField == nullptr || actorField->IsEmpty())
    {
        TC_LOG_ERROR("entities.conversation", "Conversation::GetActorUnit: Tried to access invalid actor idx {} (Conversation ID: {}).", actorIdx, GetEntry());
        return nullptr;
    }

    return ObjectAccessor::GetUnit(*this, actorField->ActorGuid);
}

Creature* Conversation::GetActorCreature(uint32 actorIdx) const
{
    Unit* actor = GetActorUnit(actorIdx);
    if (!actor)
        return nullptr;
    return actor->ToCreature();
}

void Conversation::AI_Initialize()
{
    AI_Destroy();
    _ai.reset(FactorySelector::SelectConversationAI(this));
    _ai->OnInitialize();
}

void Conversation::AI_Destroy()
{
    _ai.reset();
}

uint32 Conversation::GetScriptId() const
{
    return sConversationDataStore->GetConversationTemplate(GetEntry())->ScriptId;
}
