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

#include "GuildFinderPackets.h"
#include "PacketOperators.h"

namespace WorldPackets::GuildFinder
{
void LFGuildAddRecruit::Read()
{
    _worldPacket >> GuildGUID;
    _worldPacket >> PlayStyle;
    _worldPacket >> Availability;
    _worldPacket >> ClassRoles;
    _worldPacket >> SizedString::BitsSize<10>(Comment);
    _worldPacket >> SizedString::Data(Comment);
}

void LFGuildBrowse::Read()
{
    _worldPacket >> PlayStyle;
    _worldPacket >> Availability;
    _worldPacket >> ClassRoles;
    _worldPacket >> CharacterLevel;
}

ByteBuffer& operator<<(ByteBuffer& data, LFGuildBrowseData const& guildData)
{
    data << SizedString::BitsSize<7>(guildData.GuildName);
    data << SizedString::BitsSize<10>(guildData.Comment);
    data << guildData.GuildGUID;
    data << uint32(guildData.GuildVirtualRealm);
    data << int32(guildData.GuildMembers);
    data << int32(guildData.GuildAchievementPoints);
    data << int32(guildData.PlayStyle);
    data << int32(guildData.Availability);
    data << int32(guildData.ClassRoles);
    data << int32(guildData.LevelRange);
    data << int32(guildData.EmblemStyle);
    data << int32(guildData.EmblemColor);
    data << int32(guildData.BorderStyle);
    data << int32(guildData.BorderColor);
    data << int32(guildData.Background);
    data << int8(guildData.Cached);
    data << int8(guildData.MembershipRequested);
    data << SizedString::Data(guildData.GuildName);
    data << SizedString::Data(guildData.Comment);
    return data;
}

WorldPacket const* LFGuildBrowseResult::Write()
{
    _worldPacket << Size<uint32>(Post);
    for (LFGuildBrowseData const& guildData : Post)
        _worldPacket << guildData;

    return &_worldPacket;
}

void LFGuildDeclineRecruit::Read()
{
    _worldPacket >> RecruitGUID;
}

ByteBuffer& operator<<(ByteBuffer& data, LFGuildApplicationData const& application)
{
    data << application.GuildGUID;
    data << uint32(application.GuildVirtualRealm);
    data << int32(application.ClassRoles);
    data << int32(application.PlayStyle);
    data << int32(application.Availability);
    data << uint32(application.SecondsSinceCreated);
    data << uint32(application.SecondsUntilExpiration);
    data << SizedString::BitsSize<7>(application.GuildName);
    data << SizedString::BitsSize<10>(application.Comment);
    data.FlushBits();

    data << SizedString::Data(application.GuildName);
    data << SizedString::Data(application.Comment);

    return data;
}

WorldPacket const* LFGuildApplications::Write()
{
    _worldPacket << int32(NumRemaining);
    _worldPacket << Size<uint32>(Application);
    for (LFGuildApplicationData const& application : Application)
        _worldPacket << application;

    return &_worldPacket;
}

ByteBuffer& operator<<(ByteBuffer& data, GuildPostData const& post)
{
    data << Bits<1>(post.Active);
    data << SizedString::BitsSize<10>(post.Comment);
    data << int32(post.PlayStyle);
    data << int32(post.Availability);
    data << int32(post.ClassRoles);
    data << int32(post.LevelRange);
    data << post.SecondsRemaining;
    data << SizedString::Data(post.Comment);

    return data;
}

WorldPacket const* LFGuildPost::Write()
{
    _worldPacket << OptionalInit(Post);
    _worldPacket.FlushBits();
    if (Post)
        _worldPacket << *Post;

    return &_worldPacket;
}

void LFGuildGetRecruits::Read()
{
    _worldPacket >> LastUpdate;
}

ByteBuffer& operator<<(ByteBuffer& data, LFGuildRecruitData const& recruit)
{
    data << recruit.RecruitGUID;
    data << uint32(recruit.RecruitVirtualRealm);
    data << int32(recruit.CharacterClass);
    data << int32(recruit.CharacterGender);
    data << int32(recruit.CharacterLevel);
    data << int32(recruit.ClassRoles);
    data << int32(recruit.PlayStyle);
    data << int32(recruit.Availability);
    data << uint32(recruit.SecondsSinceCreated);
    data << uint32(recruit.SecondsUntilExpiration);
    data << SizedString::BitsSize<6>(recruit.Name);
    data << SizedString::BitsSize<10>(recruit.Comment);
    data.FlushBits();

    data << SizedString::Data(recruit.Name);
    data << SizedString::Data(recruit.Comment);

    return data;
}

WorldPacket const* LFGuildRecruits::Write()
{
    _worldPacket << Size<uint32>(Recruits);
    _worldPacket << UpdateTime;
    for (LFGuildRecruitData const& recruit : Recruits)
        _worldPacket << recruit;

    return &_worldPacket;
}

void LFGuildRemoveRecruit::Read()
{
    _worldPacket >> GuildGUID;
}

void LFGuildSetGuildPost::Read()
{
    _worldPacket >> PlayStyle;
    _worldPacket >> Availability;
    _worldPacket >> ClassRoles;
    _worldPacket >> LevelRange;
    _worldPacket >> Bits<1>(Active);
    _worldPacket >> SizedString::BitsSize<10>(Comment);
    _worldPacket >> SizedString::Data(Comment);
}
}
