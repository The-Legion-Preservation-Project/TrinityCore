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

#include "SystemPackets.h"
#include "Errors.h"
#include "PacketOperators.h"

namespace WorldPackets::System
{
ByteBuffer& operator<<(ByteBuffer& data, SocialQueueConfig const& socialQueueConfig)
{
    data << Bits<1>(socialQueueConfig.ToastsDisabled);
    data << float(socialQueueConfig.ToastDuration);
    data << float(socialQueueConfig.DelayDuration);
    data << float(socialQueueConfig.QueueMultiplier);
    data << float(socialQueueConfig.PlayerMultiplier);
    data << float(socialQueueConfig.PlayerFriendValue);
    data << float(socialQueueConfig.PlayerGuildValue);
    data << float(socialQueueConfig.ThrottleInitialThreshold);
    data << float(socialQueueConfig.ThrottleDecayTime);
    data << float(socialQueueConfig.ThrottlePrioritySpike);
    data << float(socialQueueConfig.ThrottleMinThreshold);
    data << float(socialQueueConfig.ThrottlePvPPriorityNormal);
    data << float(socialQueueConfig.ThrottlePvPPriorityLow);
    data << float(socialQueueConfig.ThrottlePvPHonorThreshold);
    data << float(socialQueueConfig.ThrottleLfgListPriorityDefault);
    data << float(socialQueueConfig.ThrottleLfgListPriorityAbove);
    data << float(socialQueueConfig.ThrottleLfgListPriorityBelow);
    data << float(socialQueueConfig.ThrottleLfgListIlvlScalingAbove);
    data << float(socialQueueConfig.ThrottleLfgListIlvlScalingBelow);
    data << float(socialQueueConfig.ThrottleRfPriorityAbove);
    data << float(socialQueueConfig.ThrottleRfIlvlScalingAbove);
    data << float(socialQueueConfig.ThrottleDfMaxItemLevel);
    data << float(socialQueueConfig.ThrottleDfBestPriority);

    return data;
}

ByteBuffer& operator<<(ByteBuffer& data, SessionAlertConfig const& sessionAlert)
{
    data << int32(sessionAlert.Delay);
    data << int32(sessionAlert.Period);
    data << int32(sessionAlert.DisplayTime);

    return data;
}

ByteBuffer& operator<<(ByteBuffer& data, SavedThrottleObjectState const& throttleState)
{
    data << uint32(throttleState.MaxTries);
    data << uint32(throttleState.PerMilliseconds);
    data << uint32(throttleState.TryCount);
    data << uint32(throttleState.LastResetTimeBeforeNow);

    return data;
}

ByteBuffer& operator<<(ByteBuffer& data, EuropaTicketConfig const& europaTicketSystemStatus)
{
    data << Bits<1>(europaTicketSystemStatus.TicketsEnabled);
    data << Bits<1>(europaTicketSystemStatus.BugsEnabled);
    data << Bits<1>(europaTicketSystemStatus.ComplaintsEnabled);
    data << Bits<1>(europaTicketSystemStatus.SuggestionsEnabled);
    data << europaTicketSystemStatus.ThrottleState;

    return data;
}

WorldPacket const* FeatureSystemStatus::Write()
{
    _worldPacket << uint8(ComplaintStatus);

    _worldPacket << uint32(ScrollOfResurrectionRequestsRemaining);
    _worldPacket << uint32(ScrollOfResurrectionMaxRequestsPerDay);

    _worldPacket << uint32(CfgRealmID);
    _worldPacket << int32(CfgRealmRecID);

    _worldPacket << uint32(TwitterPostThrottleLimit);
    _worldPacket << uint32(TwitterPostThrottleCooldown);

    _worldPacket << uint32(CommercePricePollTimeSeconds);
    _worldPacket << uint32(TokenRedeemIndex);
    _worldPacket << int64(RedeemForBalanceAmount);

    _worldPacket << uint32(BpayStorePurchaseTimeout);

    _worldPacket << Bits<1>(VoiceEnabled);
    _worldPacket << OptionalInit(EuropaTicketSystemStatus);
    _worldPacket << Bits<1>(ScrollOfResurrectionEnabled);
    _worldPacket << Bits<1>(BpayStoreEnabled);
    _worldPacket << Bits<1>(BpayStoreAvailable);
    _worldPacket << Bits<1>(BpayStoreDisabledByParentalControls);
    _worldPacket << Bits<1>(ItemRestorationButtonEnabled);
    _worldPacket << Bits<1>(BrowserEnabled);

    _worldPacket << OptionalInit(SessionAlert);
    _worldPacket << Bits<1>(RecruitAFriendSendingEnabled);
    _worldPacket << Bits<1>(CharUndeleteEnabled);
    _worldPacket << Bits<1>(RestrictedAccount);
    _worldPacket << Bits<1>(TutorialEnabled);
    _worldPacket << Bits<1>(NPETutorialsEnabled);
    _worldPacket << Bits<1>(TwitterEnabled);
    _worldPacket << Bits<1>(CommerceServerEnabled);

    _worldPacket << Bits<1>(VeteranTokenRedeemWillKick);
    _worldPacket << Bits<1>(WorldTokenRedeemWillKick);
    _worldPacket << Bits<1>(KioskModeEnabled);
    _worldPacket << Bits<1>(CompetitiveModeEnabled);
    _worldPacket << OptionalInit(RaceClassExpansionLevels);
    _worldPacket << Bits<1>(RedeemForBalanceAvailable);

    _worldPacket.FlushBits();

    _worldPacket << QuickJoinConfig;

    if (SessionAlert)
        _worldPacket << *SessionAlert;

    if (RaceClassExpansionLevels)
    {
        _worldPacket << Size<uint32>(*RaceClassExpansionLevels);
        if (!RaceClassExpansionLevels->empty())
            _worldPacket.append(RaceClassExpansionLevels->data(), RaceClassExpansionLevels->size());
    }

    if (EuropaTicketSystemStatus)
        _worldPacket << *EuropaTicketSystemStatus;

    return &_worldPacket;
}

WorldPacket const* FeatureSystemStatusGlueScreen::Write()
{
    _worldPacket << Bits<1>(BpayStoreEnabled);
    _worldPacket << Bits<1>(BpayStoreAvailable);
    _worldPacket << Bits<1>(BpayStoreDisabledByParentalControls);
    _worldPacket << Bits<1>(CharUndeleteEnabled);
    _worldPacket << Bits<1>(CommerceServerEnabled);
    _worldPacket << Bits<1>(VeteranTokenRedeemWillKick);
    _worldPacket << Bits<1>(WorldTokenRedeemWillKick);
    _worldPacket << Bits<1>(ExpansionPreorderInStore);

    _worldPacket << Bits<1>(KioskModeEnabled);
    _worldPacket << Bits<1>(CompetitiveModeEnabled);
    _worldPacket << Bits<1>(false); // not accessed in handler
    _worldPacket << Bits<1>(BoostEnabled);
    _worldPacket << Bits<1>(RedeemForBalanceAvailable);
    _worldPacket << Bits<1>(LiveRegionCharacterListEnabled);
    _worldPacket << Bits<1>(LiveRegionCharacterCopyEnabled);
    _worldPacket << Bits<1>(LiveRegionAccountCopyEnabled);
    _worldPacket.FlushBits();

    _worldPacket << int32(CommercePricePollTimeSeconds);
    _worldPacket << int32(TokenRedeemIndex);
    _worldPacket << int64(RedeemForBalanceAmount);
    _worldPacket << uint32(BpayStorePurchaseTimeout);

    return &_worldPacket;
}

WorldPacket const* MOTD::Write()
{
    ASSERT(Text);
    _worldPacket << BitsSize<4>(*Text);
    _worldPacket.FlushBits();

    for (std::string const& line : *Text)
    {
        _worldPacket << SizedString::BitsSize<7>(line);
        _worldPacket.FlushBits();

        _worldPacket << SizedString::Data(line);
    }

    return &_worldPacket;
}

WorldPacket const* SetTimeZoneInformation::Write()
{
    _worldPacket << SizedString::BitsSize<7>(ServerTimeTZ);
    _worldPacket << SizedString::BitsSize<7>(GameTimeTZ);
    _worldPacket.FlushBits();

    _worldPacket << SizedString::Data(ServerTimeTZ);
    _worldPacket << SizedString::Data(GameTimeTZ);

    return &_worldPacket;
}
}
