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

#include "ChatPackets.h"
#include "Creature.h"
#include "Group.h"
#include "PacketOperators.h"
#include "Player.h"
#include "World.h"
#include "WorldSession.h"

namespace WorldPackets::Chat
{
void ChatMessage::Read()
{
    _worldPacket >> Language;
    _worldPacket >> SizedString::BitsSize<9>(Text);
    _worldPacket >> SizedString::Data(Text);
}

void ChatMessageWhisper::Read()
{
    _worldPacket >> Language;
    _worldPacket >> SizedString::BitsSize<9>(Target);
    _worldPacket >> SizedString::BitsSize<9>(Text);
    _worldPacket >> SizedString::Data(Target);
    _worldPacket >> SizedString::Data(Text);
}

void ChatMessageChannel::Read()
{
    _worldPacket >> Language;
    _worldPacket >> SizedString::BitsSize<9>(Target);
    _worldPacket >> SizedString::BitsSize<9>(Text);
    _worldPacket >> SizedString::Data(Target);
    _worldPacket >> SizedString::Data(Text);
}

void ChatAddonMessage::Read()
{
    _worldPacket >> SizedString::BitsSize<5>(Prefix);
    _worldPacket >> SizedString::BitsSize<9>(Text);
    _worldPacket >> SizedString::Data(Prefix);
    _worldPacket >> SizedString::Data(Text);
}

void ChatAddonMessageWhisper::Read()
{
    _worldPacket >> SizedString::BitsSize<9>(Target);
    _worldPacket >> SizedString::BitsSize<5>(Prefix);
    _worldPacket >> SizedString::BitsSize<9>(Text);
    _worldPacket >> SizedString::Data(Target);
    _worldPacket >> SizedString::Data(Prefix);
    _worldPacket >> SizedString::Data(Text);
}

void ChatAddonMessageChannel::Read()
{
    _worldPacket >> SizedString::BitsSize<9>(Target);
    _worldPacket >> SizedString::BitsSize<5>(Prefix);
    _worldPacket >> SizedString::BitsSize<9>(Text);
    _worldPacket >> SizedString::Data(Target);
    _worldPacket >> SizedString::Data(Prefix);
    _worldPacket >> SizedString::Data(Text);
}

void ChatMessageDND::Read()
{
    _worldPacket >> SizedString::BitsSize<9>(Text);

    _worldPacket >> SizedString::Data(Text);
}

void ChatMessageAFK::Read()
{
    _worldPacket >> SizedString::BitsSize<9>(Text);

    _worldPacket >> SizedString::Data(Text);
}

void ChatMessageEmote::Read()
{
    _worldPacket >> SizedString::BitsSize<9>(Text);

    _worldPacket >> SizedString::Data(Text);
}

Chat::Chat(Chat const& chat) : ServerPacket(SMSG_CHAT, chat._worldPacket.size()),
                                                   SlashCmd(chat.SlashCmd), _Language(chat._Language), SenderGUID(chat.SenderGUID),
                                                   SenderGuildGUID(chat.SenderGuildGUID), SenderWowAccount(chat.SenderWowAccount), TargetGUID(chat.TargetGUID), PartyGUID(chat.PartyGUID),
                                                   SenderVirtualAddress(chat.SenderVirtualAddress), TargetVirtualAddress(chat.TargetVirtualAddress), SenderName(chat.SenderName), TargetName(chat.TargetName),
                                                   Prefix(chat.Prefix), _Channel(chat._Channel), ChatText(chat.ChatText), AchievementID(chat.AchievementID), _ChatFlags(chat._ChatFlags),
                                                   DisplayTime(chat.DisplayTime), HideChatLog(chat.HideChatLog), FakeSenderName(chat.FakeSenderName)
{
}

void Chat::Initialize(ChatMsg chatType, Language language, WorldObject const* sender, WorldObject const* receiver, std::string_view message,
    uint32 achievementId /*= 0*/, std::string_view channelName /*= ""*/, LocaleConstant locale /*= DEFAULT_LOCALE*/, std::string_view addonPrefix /*= ""*/)
{
    // Clear everything because same packet can be used multiple times
    Clear();

    SenderGUID.Clear();
    SenderWowAccount.Clear();
    SenderGuildGUID.Clear();
    PartyGUID.Clear();
    TargetGUID.Clear();
    SenderName.clear();
    TargetName.clear();
    _ChatFlags = CHAT_FLAG_NONE;

    SlashCmd = chatType;
    _Language = language;

    if (sender)
        SetSender(sender, locale);

    if (receiver)
        SetReceiver(receiver, locale);

    SenderVirtualAddress = GetVirtualRealmAddress();
    TargetVirtualAddress = GetVirtualRealmAddress();
    AchievementID = achievementId;
    _Channel = channelName;
    Prefix = addonPrefix;
    ChatText = message;
}

void Chat::SetSender(WorldObject const* sender, LocaleConstant locale)
{
    SenderGUID = sender->GetGUID();

    if (Creature const* creatureSender = sender->ToCreature())
        SenderName = creatureSender->GetNameForLocaleIdx(locale);

    if (Player const* playerSender = sender->ToPlayer())
    {
        SenderGuildGUID = ObjectGuid::Create<HighGuid::Guild>(playerSender->GetGuildId());
        SenderWowAccount = playerSender->GetSession()->GetAccountGUID();
        _ChatFlags = playerSender->GetChatFlags();

        if (Group const* group = playerSender->GetGroup())
            PartyGUID = group->GetGUID();
    }
}

void Chat::SetReceiver(WorldObject const* receiver, LocaleConstant locale)
{
    TargetGUID = receiver->GetGUID();
    if (Creature const* creatureReceiver = receiver->ToCreature())
        TargetName = creatureReceiver->GetNameForLocaleIdx(locale);
}

WorldPacket const* Chat::Write()
{
    _worldPacket << uint8(SlashCmd);
    _worldPacket << uint8(_Language);
    _worldPacket << SenderGUID;
    _worldPacket << SenderGuildGUID;
    _worldPacket << SenderWowAccount;
    _worldPacket << TargetGUID;
    _worldPacket << uint32(TargetVirtualAddress);
    _worldPacket << uint32(SenderVirtualAddress);
    _worldPacket << PartyGUID;
    _worldPacket << uint32(AchievementID);
    _worldPacket << float(DisplayTime);
    _worldPacket << SizedString::BitsSize<11>(SenderName);
    _worldPacket << SizedString::BitsSize<11>(TargetName);
    _worldPacket << SizedString::BitsSize<5>(Prefix);
    _worldPacket << SizedString::BitsSize<7>(_Channel);
    _worldPacket << SizedString::BitsSize<12>(ChatText);
    _worldPacket << Bits<11>(_ChatFlags);
    _worldPacket << Bits<1>(HideChatLog);
    _worldPacket << Bits<1>(FakeSenderName);
    _worldPacket.FlushBits();

    _worldPacket << SizedString::Data(SenderName);
    _worldPacket << SizedString::Data(TargetName);
    _worldPacket << SizedString::Data(Prefix);
    _worldPacket << SizedString::Data(_Channel);
    _worldPacket << SizedString::Data(ChatText);

    return &_worldPacket;
}

WorldPacket const* Emote::Write()
{
    _worldPacket << Guid;
    _worldPacket << EmoteID;

    return &_worldPacket;
}

void CTextEmote::Read()
{
    _worldPacket >> Target;
    _worldPacket >> EmoteID;
    _worldPacket >> SoundIndex;
}

WorldPacket const* STextEmote::Write()
{
    _worldPacket << SourceGUID;
    _worldPacket << SourceAccountGUID;
    _worldPacket << EmoteID;
    _worldPacket << SoundIndex;
    _worldPacket << TargetGUID;

    return &_worldPacket;
}

WorldPacket const* PrintNotification::Write()
{
    _worldPacket << SizedString::BitsSize<12>(NotifyText);
    _worldPacket.FlushBits();

    _worldPacket << SizedString::Data(NotifyText);

    return &_worldPacket;
}

WorldPacket const* ChatPlayerNotfound::Write()
{
    _worldPacket << SizedString::BitsSize<9>(Name);
    _worldPacket.FlushBits();

    _worldPacket << SizedString::Data(Name);

    return &_worldPacket;
}

WorldPacket const* ChatServerMessage::Write()
{
    _worldPacket << int32(MessageID);

    _worldPacket << SizedString::BitsSize<11>(StringParam);
    _worldPacket.FlushBits();

    _worldPacket << SizedString::Data(StringParam);

    return &_worldPacket;
}

void ChatRegisterAddonPrefixes::Read()
{
    _worldPacket >> Size<uint32>(Prefixes);
    for (std::string& prefix : Prefixes)
    {
        _worldPacket >> SizedString::BitsSize<5>(prefix);
        _worldPacket >> SizedString::Data(prefix);
    }
}

WorldPacket const* DefenseMessage::Write()
{
    _worldPacket << int32(ZoneID);
    _worldPacket << SizedString::BitsSize<12>(MessageText);
    _worldPacket.FlushBits();

    _worldPacket << SizedString::Data(MessageText);

    return &_worldPacket;
}

void ChatReportIgnored::Read()
{
    _worldPacket >> IgnoredGUID;
    _worldPacket >> Reason;
}

WorldPacket const* ChatPlayerAmbiguous::Write()
{
    _worldPacket << SizedString::BitsSize<9>(Name);

    _worldPacket << SizedString::Data(Name);

    return &_worldPacket;
}

WorldPacket const* ChatRestricted::Write()
{
    _worldPacket << uint8(Reason);

    return &_worldPacket;
}
}
