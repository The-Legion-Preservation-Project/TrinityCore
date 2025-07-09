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

#include "GossipDef.h"
#include "Creature.h"
#include "DB2Stores.h"
#include "Log.h"
#include "NPCPackets.h"
#include "ObjectAccessor.h"
#include "ObjectMgr.h"
#include "Player.h"
#include "QuestDef.h"
#include "QuestPackets.h"
#include "SpellInfo.h"
#include "SpellMgr.h"
#include "Util.h"
#include "World.h"
#include "WorldSession.h"

GossipMenu::GossipMenu()
{
    _menuId = 0;
    _locale = DEFAULT_LOCALE;
}

GossipMenu::~GossipMenu() = default;

uint32 GossipMenu::AddMenuItem(int32 menuItemId, GossipOptionNpc optionNpc, std::string optionText, uint32 actionMenuId, uint32 actionPoiId,
                               bool boxCoded, uint32 boxMoney, std::string boxText, uint32 sender, uint32 action)
{
    ASSERT(_menuItems.size() <= GOSSIP_MAX_MENU_ITEMS);

    // Find a free new id - script case
    if (menuItemId == -1)
    {
        menuItemId = 0;
        if (_menuId)
        {
            // set baseline menuItemId as higher than whatever exists in db
            Trinity::IteratorPair bounds = sObjectMgr->GetGossipMenuItemsMapBounds(_menuId);
            auto itr = std::ranges::max_element(bounds, std::ranges::less(),
                [](GossipMenuItemsContainer::value_type const& a) { return a.second.OptionID; });

            if (itr != bounds.end())
                menuItemId = itr->second.OptionID + 1;
        }

        for (GossipMenuItem const& _menuItem : _menuItems)
        {
            if (int32(_menuItem.OptionID) > menuItemId)
                break;

            menuItemId = _menuItem.OptionID + 1;
        }
    }

    auto where = std::ranges::lower_bound(_menuItems, menuItemId, std::ranges::less(), &GossipMenuItem::OptionID);

    GossipMenuItem& menuItem = *_menuItems.emplace(where);
    menuItem.OptionID = menuItemId;
    menuItem.OptionNpc = optionNpc;
    menuItem.OptionText = std::move(optionText);
    menuItem.BoxCoded = boxCoded;
    menuItem.BoxMoney = boxMoney;
    menuItem.BoxText = std::move(boxText);
    menuItem.ActionMenuID = actionMenuId;
    menuItem.ActionPoiID = actionPoiId;
    menuItem.Sender = sender;
    menuItem.Action = action;
    return menuItemId;
}

/**
 * @name AddMenuItem
 * @brief Adds a localized gossip menu item from db by menu id and menu item id.
 * @param menuId Gossip menu id.
 * @param menuItemId Gossip menu item id.
 * @param sender Identifier of the current menu.
 * @param action Custom action given to OnGossipHello.
 */
void GossipMenu::AddMenuItem(uint32 menuId, uint32 menuItemId, uint32 sender, uint32 action)
{
    /// Find items for given menu id.
    Trinity::IteratorPair bounds = sObjectMgr->GetGossipMenuItemsMapBounds(menuId);

    /// Find the one with the given menu item id.
    auto itr = std::ranges::find(bounds, menuItemId,
        [](std::pair<uint32 const, GossipMenuItems> const& itemPair) { return itemPair.second.OptionID; });

    if (itr == bounds.end())
        return;

    AddMenuItem(itr->second, sender, action);
}

void GossipMenu::AddMenuItem(GossipMenuItems const& menuItem, uint32 sender, uint32 action)
{
    /// Store texts for localization.
    std::string strOptionText, strBoxText;
    BroadcastTextEntry const* optionBroadcastText = sBroadcastTextStore.LookupEntry(menuItem.OptionBroadcastTextID);
    BroadcastTextEntry const* boxBroadcastText = sBroadcastTextStore.LookupEntry(menuItem.BoxBroadcastTextID);

    /// OptionText
    if (optionBroadcastText)
        strOptionText = DB2Manager::GetBroadcastTextValue(optionBroadcastText, GetLocale());
    else
    {
        strOptionText = menuItem.OptionText;

        /// Find localizations from database.
        if (GetLocale() != LOCALE_enUS)
            if (GossipMenuItemsLocale const* gossipMenuLocale = sObjectMgr->GetGossipMenuItemsLocale(menuItem.MenuID, menuItem.OptionID))
                ObjectMgr::GetLocaleString(gossipMenuLocale->OptionText, GetLocale(), strOptionText);
    }

    /// BoxText
    if (boxBroadcastText)
        strBoxText = DB2Manager::GetBroadcastTextValue(boxBroadcastText, GetLocale());
    else
    {
        strBoxText = menuItem.BoxText;

        /// Find localizations from database.
        if (GetLocale() != LOCALE_enUS)
            if (GossipMenuItemsLocale const* gossipMenuLocale = sObjectMgr->GetGossipMenuItemsLocale(menuItem.MenuID, menuItem.OptionID))
                ObjectMgr::GetLocaleString(gossipMenuLocale->BoxText, GetLocale(), strBoxText);
    }

    AddMenuItem(menuItem.OptionID, menuItem.OptionNpc, std::move(strOptionText), menuItem.ActionMenuID, menuItem.ActionPoiID,
                menuItem.BoxCoded, menuItem.BoxMoney, std::move(strBoxText), sender, action);
}

GossipMenuItem const* GossipMenu::GetItem(uint32 menuItemId) const
{
    auto const itr = std::ranges::find(_menuItems, static_cast<int32>(menuItemId), &GossipMenuItem::OptionID);
    if (itr != _menuItems.end())
        return &*itr;

    return nullptr;
}

uint32 GossipMenu::GetMenuItemSender(uint32 menuItemId) const
{
    if (GossipMenuItem const* item = GetItem(menuItemId))
        return item->Sender;

    return 0;
}

uint32 GossipMenu::GetMenuItemAction(uint32 menuItemId) const
{
    if (GossipMenuItem const* item = GetItem(menuItemId))
        return item->Action;

    return 0;
}

bool GossipMenu::IsMenuItemCoded(uint32 menuItemId) const
{
    if (GossipMenuItem const* item = GetItem(menuItemId))
        return item->BoxCoded;

    return false;
}

void GossipMenu::ClearMenu()
{
    _menuItems.clear();
}

PlayerMenu::PlayerMenu(WorldSession* session) : _session(session)
{
    if (_session)
        _gossipMenu.SetLocale(_session->GetSessionDbLocaleIndex());
}

PlayerMenu::~PlayerMenu() = default;

void PlayerMenu::ClearMenus()
{
    _gossipMenu.ClearMenu();
    _questMenu.ClearMenu();
}

void PlayerMenu::SendGossipMenu(uint32 titleTextId, ObjectGuid objectGUID)
{
    _interactionData.StartInteraction(objectGUID, PlayerInteractionType::Gossip);

    WorldPackets::NPC::GossipMessage packet;
    packet.GossipGUID = objectGUID;
    packet.GossipID = _gossipMenu.GetMenuId();
    if (GossipMenuAddon const* addon = sObjectMgr->GetGossipMenuAddon(packet.GossipID))
        packet.FriendshipFactionID = addon->FriendshipFactionID;

    packet.TextID = titleTextId;

    packet.GossipOptions.reserve(_gossipMenu.GetMenuItems().size());
    for (GossipMenuItem const& item : _gossipMenu.GetMenuItems())
    {
        WorldPackets::NPC::ClientGossipOptions& opt = packet.GossipOptions.emplace_back();
        opt.OptionID = item.OptionID;
        opt.OptionNPC = item.OptionNpc;
        opt.OptionFlags = item.BoxCoded;    // makes pop up box password
        opt.OptionCost = item.BoxMoney;     // money required to open menu, 2.0.3
        opt.Text = item.OptionText;         // text for gossip item
        opt.Confirm = item.BoxText;         // accept text (related to money) pop up box, 2.0.3
    }

    packet.GossipText.resize(_questMenu.GetMenuItemCount());
    uint32 count = 0;
    for (uint8 i = 0; i < _questMenu.GetMenuItemCount(); ++i)
    {
        QuestMenuItem const& item = _questMenu.GetItem(i);
        uint32 questID = item.QuestId;
        if (Quest const* quest = sObjectMgr->GetQuestTemplate(questID))
        {
            WorldPackets::NPC::ClientGossipText& text = packet.GossipText[count];
            text.QuestID = questID;
            text.QuestType = item.QuestIcon;
            text.QuestLevel = quest->GetQuestLevel();
            text.QuestMaxScalingLevel = quest->GetQuestMaxScalingLevel();
            text.QuestFlags[0] = quest->GetFlags();
            text.QuestFlags[1] = quest->GetFlagsEx();
            text.Repeatable = quest->IsTurnIn() && quest->IsRepeatable() && !quest->IsDailyOrWeekly() && !quest->IsMonthly();

            text.QuestTitle = quest->GetLogTitle();
            LocaleConstant localeConstant = _session->GetSessionDbLocaleIndex();
            if (localeConstant != LOCALE_enUS)
                if (QuestTemplateLocale const* localeData = sObjectMgr->GetQuestLocale(questID))
                    ObjectMgr::GetLocaleString(localeData->LogTitle, localeConstant, text.QuestTitle);

            ++count;
        }
    }

    // Shrink to the real size
    packet.GossipText.resize(count);

    _session->SendPacket(packet.Write());
}

void PlayerMenu::SendCloseGossip()
{
    _interactionData.Reset();

    WorldPackets::NPC::GossipComplete packet;
    _session->SendPacket(packet.Write());
}

void PlayerMenu::SendPointOfInterest(uint32 id) const
{
    PointOfInterest const* pointOfInterest = sObjectMgr->GetPointOfInterest(id);
    if (!pointOfInterest)
    {
        TC_LOG_ERROR("sql.sql", "Request to send non-existing PointOfInterest (Id: {}), ignored.", id);
        return;
    }

    WorldPackets::NPC::GossipPOI packet;
    packet.Name = pointOfInterest->Name;

    LocaleConstant localeConstant = _session->GetSessionDbLocaleIndex();
    if (localeConstant != LOCALE_enUS)
        if (PointOfInterestLocale const* localeData = sObjectMgr->GetPointOfInterestLocale(id))
            ObjectMgr::GetLocaleString(localeData->Name, localeConstant, packet.Name);

    packet.Flags = pointOfInterest->Flags;
    packet.Pos = pointOfInterest->Pos;
    packet.Icon = pointOfInterest->Icon;
    packet.Importance = pointOfInterest->Importance;

    _session->SendPacket(packet.Write());
}

/*********************************************************/
/***                    QUEST SYSTEM                   ***/
/*********************************************************/

QuestMenu::QuestMenu()
{
    _questMenuItems.reserve(4);                                    // can be set for max from most often sizes to speedup push_back and less memory use
}

QuestMenu::~QuestMenu() = default;

void QuestMenu::AddMenuItem(uint32 QuestId, uint8 Icon)
{
    if (!sObjectMgr->GetQuestTemplate(QuestId))
        return;

    ASSERT(_questMenuItems.size() <= GOSSIP_MAX_MENU_ITEMS);

    QuestMenuItem& questMenuItem = _questMenuItems.emplace_back();

    questMenuItem.QuestId        = QuestId;
    questMenuItem.QuestIcon      = Icon;
}

bool QuestMenu::HasItem(uint32 questId) const
{
    return advstd::ranges::contains(_questMenuItems, questId, &QuestMenuItem::QuestId);
}

bool PlayerChoiceData::HasResponseId(uint32 id) const
{
    return _responses.contains(id);
}

void PlayerChoiceData::AddResponse(uint32 id)
{
    _responses.emplace(id);
}

InteractionData::InteractionData() = default;
InteractionData::InteractionData(InteractionData const& other) = default;
InteractionData::InteractionData(InteractionData&& other) noexcept = default;
InteractionData& InteractionData::operator=(InteractionData const& other) = default;
InteractionData& InteractionData::operator=(InteractionData&& other) noexcept = default;
InteractionData::~InteractionData() = default;

void InteractionData::StartInteraction(ObjectGuid target, PlayerInteractionType type)
{
    SourceGuid = target;
    Type = type;
    IsLaunchedByQuest = false;
    switch (type)
    {
        case PlayerInteractionType::Trainer:
            _data.emplace<TrainerData>();
            break;
        case PlayerInteractionType::PlayerChoice:
            _data.emplace<PlayerChoiceData>();
            break;
        default:
            break;
    }
}

void InteractionData::Reset()
{
    SourceGuid.Clear();
    Type = PlayerInteractionType::None;
    IsLaunchedByQuest = false;
    _data.emplace<std::monostate>();
}

void QuestMenu::ClearMenu()
{
    _questMenuItems.clear();
}

void PlayerMenu::SendQuestGiverQuestListMessage(Object* questgiver)
{
    ObjectGuid guid = questgiver->GetGUID();

    GetInteractionData().StartInteraction(guid, PlayerInteractionType::QuestGiver);

    LocaleConstant localeConstant = _session->GetSessionDbLocaleIndex();

    WorldPackets::Quest::QuestGiverQuestListMessage questList;
    questList.QuestGiverGUID = guid;

    if (QuestGreeting const* questGreeting = sObjectMgr->GetQuestGreeting(questgiver->GetTypeId(), questgiver->GetEntry()))
    {
        questList.GreetEmoteDelay = questGreeting->EmoteDelay;
        questList.GreetEmoteType = questGreeting->EmoteType;
        questList.Greeting = questGreeting->Text;

        if (localeConstant != LOCALE_enUS)
            if (QuestGreetingLocale const* questGreetingLocale = sObjectMgr->GetQuestGreetingLocale(questgiver->GetTypeId(), questgiver->GetEntry()))
                ObjectMgr::GetLocaleString(questGreetingLocale->Greeting, localeConstant, questList.Greeting);
    }

    for (uint32 i = 0; i < _questMenu.GetMenuItemCount(); ++i)
    {
        QuestMenuItem const& questMenuItem = _questMenu.GetItem(i);

        uint32 questID = questMenuItem.QuestId;

        if (Quest const* quest = sObjectMgr->GetQuestTemplate(questID))
        {
            questList.QuestDataText.emplace_back();
            WorldPackets::NPC::ClientGossipText& text = questList.QuestDataText.back();
            text.QuestID = questID;
            text.QuestType = questMenuItem.QuestIcon;
            text.QuestLevel = quest->GetQuestLevel();
            text.QuestMaxScalingLevel = quest->GetQuestMaxScalingLevel();
            text.QuestFlags[0] = quest->GetFlags();
            text.QuestFlags[1] = quest->GetFlagsEx();
            text.Repeatable = quest->IsTurnIn() && quest->IsRepeatable() && !quest->IsDailyOrWeekly() && !quest->IsMonthly();

            text.QuestTitle = quest->GetLogTitle();
            LocaleConstant localeConstant = _session->GetSessionDbLocaleIndex();
            if (localeConstant != LOCALE_enUS)
                if (QuestTemplateLocale const* localeData = sObjectMgr->GetQuestLocale(questID))
                    ObjectMgr::GetLocaleString(localeData->LogTitle, localeConstant, text.QuestTitle);
        }
    }

    _session->SendPacket(questList.Write());
    TC_LOG_DEBUG("network", "WORLD: Sent SMSG_QUEST_GIVER_QUEST_LIST_MESSAGE NPC={}", guid.ToString());
}

void PlayerMenu::SendQuestGiverStatus(QuestGiverStatus questStatus, ObjectGuid npcGUID) const
{
    WorldPackets::Quest::QuestGiverStatus packet;
    packet.QuestGiver.Guid = npcGUID;
    packet.QuestGiver.Status = questStatus;

    _session->SendPacket(packet.Write());
    TC_LOG_DEBUG("network", "WORLD: Sent SMSG_QUESTGIVER_STATUS NPC={}, status={}", npcGUID.ToString(), AsUnderlyingType(questStatus));
}

void PlayerMenu::SendQuestGiverQuestDetails(Quest const* quest, ObjectGuid npcGUID, bool autoLaunched, bool displayPopup)
{
    GetInteractionData().StartInteraction(npcGUID, PlayerInteractionType::QuestGiver);

    WorldPackets::Quest::QuestGiverQuestDetails packet;

    packet.QuestTitle = quest->GetLogTitle();
    packet.LogDescription = quest->GetLogDescription();
    packet.DescriptionText = quest->GetQuestDescription();
    packet.PortraitGiverText = quest->GetPortraitGiverText();
    packet.PortraitGiverName = quest->GetPortraitGiverName();
    packet.PortraitTurnInText = quest->GetPortraitTurnInText();
    packet.PortraitTurnInName = quest->GetPortraitTurnInName();

    LocaleConstant localeConstant = _session->GetSessionDbLocaleIndex();
    if (localeConstant != LOCALE_enUS)
    {
        if (QuestTemplateLocale const* questTemplateLocale = sObjectMgr->GetQuestLocale(quest->GetQuestId()))
        {
            ObjectMgr::GetLocaleString(questTemplateLocale->LogTitle,           localeConstant, packet.QuestTitle);
            ObjectMgr::GetLocaleString(questTemplateLocale->LogDescription,     localeConstant, packet.LogDescription);
            ObjectMgr::GetLocaleString(questTemplateLocale->QuestDescription,   localeConstant, packet.DescriptionText);
            ObjectMgr::GetLocaleString(questTemplateLocale->PortraitGiverText,  localeConstant, packet.PortraitGiverText);
            ObjectMgr::GetLocaleString(questTemplateLocale->PortraitGiverName,  localeConstant, packet.PortraitGiverName);
            ObjectMgr::GetLocaleString(questTemplateLocale->PortraitTurnInText, localeConstant, packet.PortraitTurnInText);
            ObjectMgr::GetLocaleString(questTemplateLocale->PortraitTurnInName, localeConstant, packet.PortraitTurnInName);
        }
    }

    packet.QuestGiverGUID = npcGUID;
    packet.InformUnit = _session->GetPlayer()->GetPlayerSharingQuest();
    packet.QuestID = quest->GetQuestId();
    packet.QuestPackageID = quest->GetQuestPackageID();
    packet.PortraitGiver = quest->GetQuestGiverPortrait();
    packet.PortraitTurnIn = quest->GetQuestTurnInPortrait();
    packet.AutoLaunched = autoLaunched;
    packet.DisplayPopup = displayPopup;
    packet.QuestFlags[0] = quest->GetFlags() & (sWorld->getBoolConfig(CONFIG_QUEST_IGNORE_AUTO_ACCEPT) ? ~QUEST_FLAGS_AUTO_ACCEPT : ~0);
    packet.QuestFlags[1] = quest->GetFlagsEx();
    packet.SuggestedPartyMembers = quest->GetSuggestedPlayers();

    // RewardSpell can teach multiple spells in trigger spell effects. But not all effects must be SPELL_EFFECT_LEARN_SPELL. See example spell 33950
    if (SpellInfo const* spellInfo = sSpellMgr->GetSpellInfo(quest->GetRewSpell(), DIFFICULTY_NONE))
        for (SpellEffectInfo const& spellEffectInfo : spellInfo->GetEffects())
            if (spellEffectInfo.IsEffect(SPELL_EFFECT_LEARN_SPELL))
                packet.LearnSpells.push_back(spellEffectInfo.TriggerSpell);

    quest->BuildQuestRewards(packet.Rewards, _session->GetPlayer());

    packet.DescEmotes.resize(QUEST_EMOTE_COUNT);
    for (uint32 i = 0; i < QUEST_EMOTE_COUNT; ++i)
    {
        packet.DescEmotes[i].Type = quest->DetailsEmote[i];
        packet.DescEmotes[i].Delay = quest->DetailsEmoteDelay[i];
    }

    QuestObjectives const& objs = quest->GetObjectives();
    packet.Objectives.resize(objs.size());
    for (uint32 i = 0; i < objs.size(); ++i)
    {
        packet.Objectives[i].ID = objs[i].ID;
        packet.Objectives[i].ObjectID = objs[i].ObjectID;
        packet.Objectives[i].Amount = objs[i].Amount;
        packet.Objectives[i].Type = objs[i].Type;
    }

    _session->SendPacket(packet.Write());

    TC_LOG_DEBUG("network", "WORLD: Sent SMSG_QUEST_GIVER_QUEST_DETAILS NPC={}, questid={}", npcGUID.ToString(), quest->GetQuestId());
}

void PlayerMenu::SendQuestQueryResponse(Quest const* quest) const
{
    if (sWorld->getBoolConfig(CONFIG_CACHE_DATA_QUERIES))
        _session->SendPacket(&quest->QueryData[static_cast<uint32>(_session->GetSessionDbLocaleIndex())]);
    else
    {
        WorldPacket queryPacket = quest->BuildQueryData(_session->GetSessionDbLocaleIndex(), _session->GetPlayer());
        _session->SendPacket(&queryPacket);
    }

    TC_LOG_DEBUG("network", "WORLD: Sent SMSG_QUEST_QUERY_RESPONSE questid={}", quest->GetQuestId());
}

void PlayerMenu::SendQuestGiverOfferReward(Quest const* quest, ObjectGuid npcGUID, bool autoLaunched)
{
    GetInteractionData().StartInteraction(npcGUID, PlayerInteractionType::QuestGiver);

    WorldPackets::Quest::QuestGiverOfferRewardMessage packet;

    packet.QuestTitle = quest->GetLogTitle();
    packet.RewardText = quest->GetOfferRewardText();
    packet.PortraitGiverText = quest->GetPortraitGiverText();
    packet.PortraitGiverName = quest->GetPortraitGiverName();
    packet.PortraitTurnInText = quest->GetPortraitTurnInText();
    packet.PortraitTurnInName = quest->GetPortraitTurnInName();

    LocaleConstant locale = _session->GetSessionDbLocaleIndex();
    if (locale != LOCALE_enUS)
    {
        if (QuestTemplateLocale const* questTemplateLocale = sObjectMgr->GetQuestLocale(quest->GetQuestId()))
        {
            ObjectMgr::GetLocaleString(questTemplateLocale->LogTitle,           locale, packet.QuestTitle);
            ObjectMgr::GetLocaleString(questTemplateLocale->PortraitGiverText,  locale, packet.PortraitGiverText);
            ObjectMgr::GetLocaleString(questTemplateLocale->PortraitGiverName,  locale, packet.PortraitGiverName);
            ObjectMgr::GetLocaleString(questTemplateLocale->PortraitTurnInText, locale, packet.PortraitTurnInText);
            ObjectMgr::GetLocaleString(questTemplateLocale->PortraitTurnInName, locale, packet.PortraitTurnInName);
        }

        if (QuestOfferRewardLocale const* questOfferRewardLocale = sObjectMgr->GetQuestOfferRewardLocale(quest->GetQuestId()))
            ObjectMgr::GetLocaleString(questOfferRewardLocale->RewardText, locale, packet.RewardText);
    }

    WorldPackets::Quest::QuestGiverOfferReward& offer = packet.QuestData;

    quest->BuildQuestRewards(offer.Rewards, _session->GetPlayer());
    offer.QuestGiverGUID = npcGUID;

    // Is there a better way? what about game objects?
    if (Creature const* creature = ObjectAccessor::GetCreature(*_session->GetPlayer(), npcGUID))
        offer.QuestGiverCreatureID = creature->GetCreatureTemplate()->Entry;

    offer.QuestID = quest->GetQuestId();
    offer.AutoLaunched = autoLaunched;
    offer.SuggestedPartyMembers = quest->GetSuggestedPlayers();

    for (uint32 i = 0; i < QUEST_EMOTE_COUNT && quest->OfferRewardEmote[i]; ++i)
        offer.Emotes.emplace_back(quest->OfferRewardEmote[i], quest->OfferRewardEmoteDelay[i]);

    offer.QuestFlags[0] = quest->GetFlags();
    offer.QuestFlags[1] = quest->GetFlagsEx();

    packet.PortraitTurnIn = quest->GetQuestTurnInPortrait();
    packet.PortraitGiver = quest->GetQuestGiverPortrait();
    packet.QuestPackageID = quest->GetQuestPackageID();

    _session->SendPacket(packet.Write());
    TC_LOG_DEBUG("network", "WORLD: Sent SMSG_QUESTGIVER_OFFER_REWARD NPC={}, questid={}", npcGUID.ToString(), quest->GetQuestId());
}

void PlayerMenu::SendQuestGiverRequestItems(Quest const* quest, ObjectGuid npcGUID, bool canComplete, bool autoLaunched)
{
    // We can always call to RequestItems, but this packet only goes out if there are actually
    // items.  Otherwise, we'll skip straight to the OfferReward

    if (!quest->HasQuestObjectiveType(QUEST_OBJECTIVE_ITEM) && canComplete)
    {
        SendQuestGiverOfferReward(quest, npcGUID, true);
        return;
    }

    GetInteractionData().StartInteraction(npcGUID, PlayerInteractionType::QuestGiver);

    WorldPackets::Quest::QuestGiverRequestItems packet;

    packet.QuestTitle = quest->GetLogTitle();
    packet.CompletionText = quest->GetRequestItemsText();

    LocaleConstant locale = _session->GetSessionDbLocaleIndex();
    if (locale != LOCALE_enUS)
    {
        if (QuestTemplateLocale const* questTemplateLocale = sObjectMgr->GetQuestLocale(quest->GetQuestId()))
            ObjectMgr::GetLocaleString(questTemplateLocale->LogTitle, locale, packet.QuestTitle);

        if (QuestRequestItemsLocale const* questRequestItemsLocale = sObjectMgr->GetQuestRequestItemsLocale(quest->GetQuestId()))
            ObjectMgr::GetLocaleString(questRequestItemsLocale->CompletionText, locale, packet.CompletionText);
    }

    packet.QuestGiverGUID = npcGUID;

    // Is there a better way? what about game objects?
    if (Creature const* creature = ObjectAccessor::GetCreature(*_session->GetPlayer(), npcGUID))
        packet.QuestGiverCreatureID = creature->GetCreatureTemplate()->Entry;

    packet.QuestID = quest->GetQuestId();

    if (canComplete)
    {
        packet.CompEmoteDelay = quest->GetCompleteEmoteDelay();
        packet.CompEmoteType = quest->GetCompleteEmote();
    }
    else
    {
        packet.CompEmoteDelay = quest->GetIncompleteEmoteDelay();
        packet.CompEmoteType = quest->GetIncompleteEmote();
    }

    packet.QuestFlags[0] = quest->GetFlags();
    packet.QuestFlags[1] = quest->GetFlagsEx();
    packet.SuggestPartyMembers = quest->GetSuggestedPlayers();

    // incomplete: FD
    // incomplete quest with item objective but item objective is complete DD
    packet.StatusFlags = canComplete ? 0xFF : 0xFD;

    packet.MoneyToGet = 0;
    for (QuestObjective const& obj : quest->GetObjectives())
    {
        switch (obj.Type)
        {
            case QUEST_OBJECTIVE_ITEM:
                packet.Collect.emplace_back(obj.ObjectID, obj.Amount, obj.Flags);
                break;
            case QUEST_OBJECTIVE_CURRENCY:
                packet.Currency.emplace_back(obj.ObjectID, obj.Amount);
                break;
            case QUEST_OBJECTIVE_MONEY:
                packet.MoneyToGet += obj.Amount;
                break;
            default:
                break;
        }
    }

    packet.AutoLaunched = autoLaunched;

    _session->SendPacket(packet.Write());
    TC_LOG_DEBUG("network", "WORLD: Sent SMSG_QUESTGIVER_REQUEST_ITEMS NPC={}, questid={}", npcGUID.ToString(), quest->GetQuestId());
}
