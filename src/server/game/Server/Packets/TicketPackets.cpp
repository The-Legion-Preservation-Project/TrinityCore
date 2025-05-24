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

#include "TicketPackets.h"
#include "PacketOperators.h"
#include "SupportMgr.h"

namespace WorldPackets::Ticket
{
ByteBuffer& operator>>(ByteBuffer& data, SupportTicketHeader& header)
{
    data >> header.MapID;
    data >> header.Position;
    data >> header.Facing;

    return data;
}

WorldPacket const* GMTicketSystemStatus::Write()
{
    _worldPacket << int32(Status);

    return &_worldPacket;
}

WorldPacket const* GMTicketCaseStatus::Write()
{
    _worldPacket << Size<int32>(Cases);

    for (GMTicketCase const& c : Cases)
    {
        _worldPacket << int32(c.CaseID);
        _worldPacket << c.CaseOpened;
        _worldPacket << int32(c.CaseStatus);
        _worldPacket << uint16(c.CfgRealmID);
        _worldPacket << uint64(c.CharacterID);
        _worldPacket << int32(c.WaitTimeOverrideMinutes);

        _worldPacket << SizedString::BitsSize<11>(c.Url);
        _worldPacket << SizedString::BitsSize<10>(c.WaitTimeOverrideMessage);
        _worldPacket.FlushBits();

        _worldPacket << SizedString::Data(c.Url);
        _worldPacket << SizedString::Data(c.WaitTimeOverrideMessage);
    }

    return &_worldPacket;
}

void GMTicketAcknowledgeSurvey::Read()
{
    _worldPacket >> CaseID;
}

void SupportTicketSubmitBug::Read()
{
    _worldPacket >> Header;

    _worldPacket >> SizedString::BitsSize<10>(Note);
    _worldPacket >> SizedString::Data(Note);
}

void SupportTicketSubmitSuggestion::Read()
{
    _worldPacket >> Header;

    _worldPacket >> SizedString::BitsSize<10>(Note);
    _worldPacket >> SizedString::Data(Note);
}

SupportTicketChatLine::SupportTicketChatLine(time_t timestamp, std::string_view text)
    : Timestamp(timestamp), Text(text) { }

ByteBuffer& operator>>(ByteBuffer& data, SupportTicketChatLine& line)
{
    data >> line.Timestamp;
    data >> SizedString::BitsSize<12>(line.Text);
    data >> SizedString::Data(line.Text);

    return data;
}

ByteBuffer& operator>>(ByteBuffer& data, SupportTicketChatLog& chatlog)
{
    data >> Size<uint32>(chatlog.Lines);
    data >> OptionalInit(chatlog.ReportLineIndex);

    for (SupportTicketChatLine& line : chatlog.Lines)
        data >> line;

    if (chatlog.ReportLineIndex)
        data >> *chatlog.ReportLineIndex;

    return data;
}

ByteBuffer& operator>>(ByteBuffer& data, SupportTicketMailInfo& mail)
{
    data >> mail.MailID;
    data >> SizedString::BitsSize<13>(mail.MailBody);
    data >> SizedString::BitsSize<9>(mail.MailSubject);

    data >> SizedString::Data(mail.MailBody);
    data >> SizedString::Data(mail.MailSubject);

    return data;
}

ByteBuffer& operator>>(ByteBuffer& data, SupportTicketCalendarEventInfo& event)
{
    data >> event.EventID;
    data >> event.InviteID;
    data >> SizedString::BitsSize<8>(event.EventTitle);
    data >> SizedString::Data(event.EventTitle);

    return data;
}

ByteBuffer& operator>>(ByteBuffer& data, SupportTicketPetInfo& pet)
{
    data >> pet.PetID;
    data >> SizedString::BitsSize<8>(pet.PetName);
    data >> SizedString::Data(pet.PetName);

    return data;
}

ByteBuffer& operator>>(ByteBuffer& data, SupportTicketGuildInfo& guild)
{
    data >> SizedString::BitsSize<7>(guild.GuildName);
    data >> guild.GuildID;
    data >> SizedString::Data(guild.GuildName);

    return data;
}

ByteBuffer& operator>>(ByteBuffer& data, SupportTicketLFGListEntryInfo& lfgListSearchResult)
{
    data >> lfgListSearchResult.Ticket;
    data >> lfgListSearchResult.ActivityID;
    data >> lfgListSearchResult.LastTouchedName;
    data >> lfgListSearchResult.LastTouchedComment;
    data >> lfgListSearchResult.LastTouchedVoiceChat;
    data >> lfgListSearchResult.LastTouchedAny;
    data >> lfgListSearchResult.PartyGuid;

    data >> SizedString::BitsSize<8>(lfgListSearchResult.Name);
    data >> SizedString::BitsSize<11>(lfgListSearchResult.Comment);
    data >> SizedString::BitsSize<8>(lfgListSearchResult.VoiceChat);

    data >> SizedString::Data(lfgListSearchResult.Name);
    data >> SizedString::Data(lfgListSearchResult.Comment);
    data >> SizedString::Data(lfgListSearchResult.VoiceChat);

    return data;
}

ByteBuffer& operator>>(ByteBuffer& data, SupportTicketLFGListApplicant& lfgListApplicant)
{
    data >> lfgListApplicant.Ticket;
    data >> SizedString::BitsSize<9>(lfgListApplicant.Comment);

    data >> SizedString::Data(lfgListApplicant.Comment);

    return data;
}

void SupportTicketSubmitComplaint::Read()
{
    _worldPacket >> Header;
    _worldPacket >> TargetCharacterGUID;
    _worldPacket >> ChatLog;
    _worldPacket >> Bits<5>(ComplaintType);

    _worldPacket >> SizedCString::BitsSize<10>(Note);
    _worldPacket >> OptionalInit(MailInfo);
    _worldPacket >> OptionalInit(CalenderInfo);
    _worldPacket >> OptionalInit(PetInfo);
    _worldPacket >> OptionalInit(GuildInfo);
    _worldPacket >> OptionalInit(LfgListEntryInfo);
    _worldPacket >> OptionalInit(LfgListAppInfo);

    _worldPacket.ResetBitPos();

    if (MailInfo)
        _worldPacket >> *MailInfo;

    _worldPacket >> SizedCString::Data(Note);

    if (CalenderInfo)
        _worldPacket >> *CalenderInfo;

    if (PetInfo)
        _worldPacket >> *PetInfo;

    if (GuildInfo)
        _worldPacket >> *GuildInfo;

    if (LfgListEntryInfo)
        _worldPacket >> *LfgListEntryInfo;

    if (LfgListAppInfo)
        _worldPacket >> *LfgListAppInfo;
}

ByteBuffer& operator>>(ByteBuffer& data, Complaint::ComplaintOffender& complaintOffender)
{
    data >> complaintOffender.PlayerGuid;
    data >> complaintOffender.RealmAddress;
    data >> complaintOffender.TimeSinceOffence;

    return data;
}

ByteBuffer& operator>>(ByteBuffer& data, Complaint::ComplaintChat& chat)
{
    data >> chat.Command;
    data >> chat.ChannelID;
    data >> SizedString::BitsSize<12>(chat.MessageLog);

    data >> SizedString::Data(chat.MessageLog);

    return data;
}

void Complaint::Read()
{
    _worldPacket >> ComplaintType;
    _worldPacket >> Offender;

    switch (ComplaintType)
    {
        case SUPPORT_SPAM_TYPE_MAIL:
            _worldPacket >> MailID;
            break;
        case SUPPORT_SPAM_TYPE_CHAT:
            _worldPacket >> Chat;
            break;
        case SUPPORT_SPAM_TYPE_CALENDAR:
            _worldPacket >> EventGuid;
            _worldPacket >> InviteGuid;
            break;
        default:
            break;
    }
}

WorldPacket const* ComplaintResult::Write()
{
    _worldPacket << uint32(ComplaintType);
    _worldPacket << uint8(Result);

    return &_worldPacket;
}

void BugReport::Read()
{
    _worldPacket >> Bits<1>(Type);
    _worldPacket >> SizedString::BitsSize<12>(DiagInfo);
    _worldPacket >> SizedString::BitsSize<10>(Text);

    _worldPacket >> SizedString::Data(DiagInfo);
    _worldPacket >> SizedString::Data(Text);
}
}
