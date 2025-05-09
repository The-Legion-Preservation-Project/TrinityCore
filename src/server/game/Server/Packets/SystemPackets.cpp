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

namespace WorldPackets::System
{
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

    {
        _worldPacket.WriteBit(QuickJoinConfig.ToastsDisabled);
        _worldPacket << float(QuickJoinConfig.ToastDuration);
        _worldPacket << float(QuickJoinConfig.DelayDuration);
        _worldPacket << float(QuickJoinConfig.QueueMultiplier);
        _worldPacket << float(QuickJoinConfig.PlayerMultiplier);
        _worldPacket << float(QuickJoinConfig.PlayerFriendValue);
        _worldPacket << float(QuickJoinConfig.PlayerGuildValue);
        _worldPacket << float(QuickJoinConfig.ThrottleInitialThreshold);
        _worldPacket << float(QuickJoinConfig.ThrottleDecayTime);
        _worldPacket << float(QuickJoinConfig.ThrottlePrioritySpike);
        _worldPacket << float(QuickJoinConfig.ThrottleMinThreshold);
        _worldPacket << float(QuickJoinConfig.ThrottlePvPPriorityNormal);
        _worldPacket << float(QuickJoinConfig.ThrottlePvPPriorityLow);
        _worldPacket << float(QuickJoinConfig.ThrottlePvPHonorThreshold);
        _worldPacket << float(QuickJoinConfig.ThrottleLfgListPriorityDefault);
        _worldPacket << float(QuickJoinConfig.ThrottleLfgListPriorityAbove);
        _worldPacket << float(QuickJoinConfig.ThrottleLfgListPriorityBelow);
        _worldPacket << float(QuickJoinConfig.ThrottleLfgListIlvlScalingAbove);
        _worldPacket << float(QuickJoinConfig.ThrottleLfgListIlvlScalingBelow);
        _worldPacket << float(QuickJoinConfig.ThrottleRfPriorityAbove);
        _worldPacket << float(QuickJoinConfig.ThrottleRfIlvlScalingAbove);
        _worldPacket << float(QuickJoinConfig.ThrottleDfMaxItemLevel);
        _worldPacket << float(QuickJoinConfig.ThrottleDfBestPriority);
    }

    if (SessionAlert)
    {
        _worldPacket << int32(SessionAlert->Delay);
        _worldPacket << int32(SessionAlert->Period);
        _worldPacket << int32(SessionAlert->DisplayTime);
    }

    if (RaceClassExpansionLevels)
    {
        _worldPacket << uint32(RaceClassExpansionLevels->size());
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
    _worldPacket.WriteBit(false); // not accessed in handler
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
    _worldPacket.WriteBits(Text->size(), 4);
    _worldPacket.FlushBits();

    for (std::string const& line : *Text)
    {
        _worldPacket.WriteBits(line.length(), 7);
        _worldPacket.FlushBits();
        _worldPacket.WriteString(line);
    }

    return &_worldPacket;
}

WorldPacket const* SetTimeZoneInformation::Write()
{
    _worldPacket << BitsSize<7>(ServerTimeTZ);
    _worldPacket << BitsSize<7>(GameTimeTZ);
    _worldPacket.FlushBits();

    _worldPacket.WriteString(ServerTimeTZ);
    _worldPacket.WriteString(GameTimeTZ);

    return &_worldPacket;
}
}
