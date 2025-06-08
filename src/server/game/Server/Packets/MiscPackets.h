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

#ifndef TRINITYCORE_MISC_PACKETS_H
#define TRINITYCORE_MISC_PACKETS_H

#include "Packet.h"
#include "CollectionMgr.h"
#include "CUFProfile.h"
#include "ItemPacketsCommon.h"
#include "ObjectGuid.h"
#include "Optional.h"
#include "PacketUtilities.h"
#include "Position.h"
#include "SharedDefines.h"
#include "WowTime.h"
#include <array>
#include <map>

enum class CountdownTimerType : int32;
enum class DisplayToastType : uint8;
enum class DisplayToastMethod : uint8;
enum UnitStandStateType : uint8;
enum WeatherState : uint32;

namespace WorldPackets
{
    namespace Misc
    {
        class BindPointUpdate final : public ServerPacket
        {
        public:
            explicit BindPointUpdate() : ServerPacket(SMSG_BIND_POINT_UPDATE, 20) { }

            WorldPacket const* Write() override;

            uint32 BindMapID = 0;
            TaggedPosition<Position::XYZ> BindPosition;
            uint32 BindAreaID = 0;
        };

        class PlayerBound final : public ServerPacket
        {
        public:
            explicit PlayerBound() : ServerPacket(SMSG_PLAYER_BOUND, 16 + 4) { }
            explicit PlayerBound(ObjectGuid binderId, uint32 areaId) : ServerPacket(SMSG_PLAYER_BOUND, 16 + 4), BinderID(binderId), AreaID(areaId) { }

            WorldPacket const* Write() override;

            ObjectGuid BinderID;
            uint32 AreaID = 0;
        };

        class BinderConfirm final : public ServerPacket
        {
        public:
            explicit BinderConfirm() : ServerPacket(SMSG_BINDER_CONFIRM, 16) { }
            explicit BinderConfirm(ObjectGuid unit) : ServerPacket(SMSG_BINDER_CONFIRM, 16), Unit(unit) { }

            WorldPacket const* Write() override;

            ObjectGuid Unit;
        };

        class InvalidatePlayer final : public ServerPacket
        {
        public:
            explicit InvalidatePlayer() : ServerPacket(SMSG_INVALIDATE_PLAYER, 18) { }

            WorldPacket const* Write() override;

            ObjectGuid Guid;
        };

        class LoginSetTimeSpeed final : public ServerPacket
        {
        public:
            explicit LoginSetTimeSpeed() : ServerPacket(SMSG_LOGIN_SET_TIME_SPEED, 20) { }

            WorldPacket const* Write() override;

            float NewSpeed = 0.0f;
            int32 ServerTimeHolidayOffset = 0;
            WowTime GameTime;
            WowTime ServerTime;
            int32 GameTimeHolidayOffset = 0;
        };

        class ResetWeeklyCurrency final : public ServerPacket
        {
        public:
            explicit ResetWeeklyCurrency() : ServerPacket(SMSG_RESET_WEEKLY_CURRENCY, 0) { }

            WorldPacket const* Write() override { return &_worldPacket; }
        };

        class SetCurrency final : public ServerPacket
        {
        public:
            explicit SetCurrency() : ServerPacket(SMSG_SET_CURRENCY, 12) { }

            WorldPacket const* Write() override;

            int32 Type = 0;
            int32 Quantity = 0;
            CurrencyGainFlags Flags = CurrencyGainFlags(0);
            Optional<int32> WeeklyQuantity;
            Optional<int32> TrackedQuantity;
            Optional<int32> MaxQuantity;
            bool SuppressChatLog = false;
        };

        class SetSelection final : public ClientPacket
        {
        public:
            explicit SetSelection(WorldPacket&& packet) : ClientPacket(CMSG_SET_SELECTION, std::move(packet)) { }

            void Read() override;

            ObjectGuid Selection; ///< Target
        };

        class SetupCurrency final : public ServerPacket
        {
        public:
            struct Record
            {
                int32 Type = 0;                       // ID from CurrencyTypes.dbc
                int32 Quantity = 0;
                Optional<int32> WeeklyQuantity;       // Currency count obtained this Week.
                Optional<int32> MaxWeeklyQuantity;    // Weekly Currency cap.
                Optional<int32> TrackedQuantity;
                Optional<int32> MaxQuantity;
                uint8 Flags = 0;                      // 0 = none,
            };

            explicit SetupCurrency() : ServerPacket(SMSG_SETUP_CURRENCY, 22) { }

            WorldPacket const* Write() override;

            std::vector<Record> Data;
        };

        class ViolenceLevel final : public ClientPacket
        {
        public:
            explicit ViolenceLevel(WorldPacket&& packet) : ClientPacket(CMSG_VIOLENCE_LEVEL, std::move(packet)) { }

            void Read() override;

            int8 ViolenceLvl = -1; ///< 0 - no combat effects, 1 - display some combat effects, 2 - blood, 3 - bloody, 4 - bloodier, 5 - bloodiest
        };

        class TimeSyncRequest final : public ServerPacket
        {
        public:
            explicit TimeSyncRequest() : ServerPacket(SMSG_TIME_SYNC_REQUEST, 4) { }

            WorldPacket const* Write() override;

            uint32 SequenceIndex = 0;
        };

        class TimeSyncResponse final : public ClientPacket
        {
        public:
            explicit TimeSyncResponse(WorldPacket&& packet) : ClientPacket(CMSG_TIME_SYNC_RESPONSE, std::move(packet)) { }

            void Read() override;

            TimePoint GetReceivedTime() const { return _worldPacket.GetReceivedTime(); }

            uint32 ClientTime = 0; // Client ticks in ms
            uint32 SequenceIndex = 0; // Same index as in request
        };

        class TriggerCinematic final : public ServerPacket
        {
        public:
            explicit TriggerCinematic() : ServerPacket(SMSG_TRIGGER_CINEMATIC, 4) { }

            WorldPacket const* Write() override;

            uint32 CinematicID = 0;
        };

        class TriggerMovie final : public ServerPacket
        {
        public:
            explicit TriggerMovie() : ServerPacket(SMSG_TRIGGER_MOVIE, 4) { }

            WorldPacket const* Write() override;

            uint32 MovieID = 0;
        };

        class ServerTimeOffsetRequest final : public ClientPacket
        {
        public:
            explicit ServerTimeOffsetRequest(WorldPacket&& packet) : ClientPacket(CMSG_SERVER_TIME_OFFSET_REQUEST, std::move(packet)) { }

            void Read() override { }
        };

        class ServerTimeOffset final : public ServerPacket
        {
        public:
            explicit ServerTimeOffset() : ServerPacket(SMSG_SERVER_TIME_OFFSET, 4) { }

            WorldPacket const* Write() override;

            Timestamp<> Time;
        };

        class TutorialFlags : public ServerPacket
        {
        public:
            explicit TutorialFlags() : ServerPacket(SMSG_TUTORIAL_FLAGS, 32) { }

            WorldPacket const* Write() override;

            std::array<uint32, MAX_ACCOUNT_TUTORIAL_VALUES> TutorialData = { };
        };

        class TutorialSetFlag final : public ClientPacket
        {
        public:
            explicit TutorialSetFlag(WorldPacket&& packet) : ClientPacket(CMSG_TUTORIAL, std::move(packet)) { }

            void Read() override;

            uint8 Action = 0;
            uint32 TutorialBit = 0;
        };

        class WorldServerInfo final : public ServerPacket
        {
        public:
            explicit WorldServerInfo() : ServerPacket(SMSG_WORLD_SERVER_INFO, 26) { }

            WorldPacket const* Write() override;

            uint32 DifficultyID     = 0;
            uint8 IsTournamentRealm = 0;
            bool XRealmPvpAlert     = false;
            Optional<uint32> RestrictedAccountMaxLevel;
            Optional<uint32> RestrictedAccountMaxMoney;
            Optional<uint32> InstanceGroupSize;
        };

        class SetDungeonDifficulty final : public ClientPacket
        {
        public:
            explicit SetDungeonDifficulty(WorldPacket&& packet) : ClientPacket(CMSG_SET_DUNGEON_DIFFICULTY, std::move(packet)) { }

            void Read() override;

            uint32 DifficultyID = 0;
        };

        class SetRaidDifficulty final : public ClientPacket
        {
        public:
            explicit SetRaidDifficulty(WorldPacket&& packet) : ClientPacket(CMSG_SET_RAID_DIFFICULTY, std::move(packet)) { }

            void Read() override;

            int32 DifficultyID = 0;
            uint8 Legacy = 0;
        };

        class DungeonDifficultySet final : public ServerPacket
        {
        public:
            explicit DungeonDifficultySet() : ServerPacket(SMSG_SET_DUNGEON_DIFFICULTY, 4) { }

            WorldPacket const* Write() override;

            int32 DifficultyID = 0;
        };

        class RaidDifficultySet final : public ServerPacket
        {
        public:
            explicit RaidDifficultySet() : ServerPacket(SMSG_RAID_DIFFICULTY_SET, 4 + 1) { }

            WorldPacket const* Write() override;

            int32 DifficultyID = 0;
            uint8 Legacy = 0;
        };

        class CorpseReclaimDelay : public ServerPacket
        {
        public:
            explicit CorpseReclaimDelay() : ServerPacket(SMSG_CORPSE_RECLAIM_DELAY, 4) { }

            WorldPacket const* Write() override;

            uint32 Remaining = 0;
        };

        class DeathReleaseLoc : public ServerPacket
        {
        public:
            explicit DeathReleaseLoc() : ServerPacket(SMSG_DEATH_RELEASE_LOC, 4 + (3 * 4)) { }

            WorldPacket const* Write() override;

            int32 MapID = 0;
            TaggedPosition<Position::XYZ> Loc;
        };

        class PortGraveyard final : public ClientPacket
        {
        public:
            explicit PortGraveyard(WorldPacket&& packet) : ClientPacket(CMSG_CLIENT_PORT_GRAVEYARD, std::move(packet)) { }

            void Read() override { }
        };

        class PreRessurect : public ServerPacket
        {
        public:
            explicit PreRessurect() : ServerPacket(SMSG_PRE_RESSURECT, 18) { }

            WorldPacket const* Write() override;

            ObjectGuid PlayerGUID;
        };

        class ReclaimCorpse final : public ClientPacket
        {
        public:
            explicit ReclaimCorpse(WorldPacket&& packet) : ClientPacket(CMSG_RECLAIM_CORPSE, std::move(packet)) { }

            void Read() override;

            ObjectGuid CorpseGUID;
        };

        class RepopRequest final : public ClientPacket
        {
        public:
            explicit RepopRequest(WorldPacket&& packet) : ClientPacket(CMSG_REPOP_REQUEST, std::move(packet)) { }

            void Read() override;

            bool CheckInstance = false;
        };

        class RequestCemeteryList final : public ClientPacket
        {
        public:
            explicit RequestCemeteryList(WorldPacket&& packet) : ClientPacket(CMSG_REQUEST_CEMETERY_LIST, std::move(packet)) { }

            void Read() override { }
        };

        class RequestCemeteryListResponse final : public ServerPacket
        {
        public:
            explicit RequestCemeteryListResponse() : ServerPacket(SMSG_REQUEST_CEMETERY_LIST_RESPONSE, 1) { }

            WorldPacket const* Write() override;

            bool IsGossipTriggered = false;
            std::vector<uint32> CemeteryID;
        };

        class ResurrectResponse final : public ClientPacket
        {
        public:
            explicit ResurrectResponse(WorldPacket&& packet) : ClientPacket(CMSG_RESURRECT_RESPONSE, std::move(packet)) { }

            void Read() override;

            ObjectGuid Resurrecter;
            uint32 Response = 0;
        };

        class TC_GAME_API Weather final : public ServerPacket
        {
        public:
            explicit Weather() : ServerPacket(SMSG_WEATHER, 4 + 4 + 1) { }
            explicit Weather(WeatherState weatherID, float intensity = 0.0f, bool abrupt = false) : ServerPacket(SMSG_WEATHER, 4 + 4 + 1),
                Abrupt(abrupt), Intensity(intensity), WeatherID(weatherID) { }

            WorldPacket const* Write() override;

            bool Abrupt = false;
            float Intensity = 0.0f;
            WeatherState WeatherID = WeatherState(0);
        };

        class StandStateChange final : public ClientPacket
        {
        public:
            explicit StandStateChange(WorldPacket&& packet) : ClientPacket(CMSG_STAND_STATE_CHANGE, std::move(packet)) { }

            void Read() override;

            UnitStandStateType StandState = UnitStandStateType(0);
        };

        class StandStateUpdate final : public ServerPacket
        {
        public:
            explicit StandStateUpdate() : ServerPacket(SMSG_STAND_STATE_UPDATE, 4 + 1) { }
            explicit StandStateUpdate(UnitStandStateType state, uint32 animKitID) : ServerPacket(SMSG_STAND_STATE_UPDATE, 4 + 1), AnimKitID(animKitID), State(state) { }

            WorldPacket const* Write() override;

            uint32 AnimKitID = 0;
            UnitStandStateType State = UnitStandStateType(0);
        };

        class SetAnimTier final : public ServerPacket
        {
        public:
            explicit SetAnimTier(): ServerPacket(SMSG_SET_ANIM_TIER, 16 + 1) { }

            WorldPacket const* Write() override;

            ObjectGuid Unit;
            int32 Tier = 0;
        };

        class StartMirrorTimer final : public ServerPacket
        {
        public:
            explicit StartMirrorTimer() : ServerPacket(SMSG_START_MIRROR_TIMER, 21) { }
            explicit StartMirrorTimer(int32 timer, int32 value, int32 maxValue, int32 scale, int32 spellID, bool paused) :
                ServerPacket(SMSG_START_MIRROR_TIMER, 21), Scale(scale), MaxValue(maxValue), Timer(timer), SpellID(spellID), Value(value), Paused(paused) { }

            WorldPacket const* Write() override;

            int32 Scale = 0;
            int32 MaxValue = 0;
            int32 Timer = 0;
            int32 SpellID = 0;
            int32 Value = 0;
            bool Paused = false;
        };

        class PauseMirrorTimer final : public ServerPacket
        {
        public:
            explicit PauseMirrorTimer() : ServerPacket(SMSG_PAUSE_MIRROR_TIMER, 5) { }
            explicit PauseMirrorTimer(int32 timer, bool paused) : ServerPacket(SMSG_PAUSE_MIRROR_TIMER, 5), Paused(paused), Timer(timer) { }

            WorldPacket const* Write() override;

            bool Paused = true;
            int32 Timer = 0;
        };

        class StopMirrorTimer final : public ServerPacket
        {
        public:
            explicit StopMirrorTimer() : ServerPacket(SMSG_STOP_MIRROR_TIMER, 4) { }
            explicit StopMirrorTimer(int32 timer) : ServerPacket(SMSG_STOP_MIRROR_TIMER, 4), Timer(timer) { }

            WorldPacket const* Write() override;

            int32 Timer = 0;
        };

        class ExplorationExperience final : public ServerPacket
        {
        public:
            explicit ExplorationExperience() : ServerPacket(SMSG_EXPLORATION_EXPERIENCE, 8) { }
            explicit ExplorationExperience(int32 experience, int32 areaID) : ServerPacket(SMSG_EXPLORATION_EXPERIENCE, 8), Experience(experience), AreaID(areaID) { }

            WorldPacket const* Write() override;

            int32 Experience = 0;
            int32 AreaID = 0;
        };

        class LevelUpInfo final : public ServerPacket
        {
        public:
            explicit LevelUpInfo() : ServerPacket(SMSG_LEVEL_UP_INFO, 56) { }

            WorldPacket const* Write() override;

            int32 Level = 0;
            int32 HealthDelta = 0;
            std::array<int32, 6> PowerDelta = { };
            std::array<int32, MAX_STATS> StatDelta = { };
            int32 Cp = 0;
        };

        class PlayMusic final : public ServerPacket
        {
        public:
            explicit PlayMusic() : ServerPacket(SMSG_PLAY_MUSIC, 4) { }
            explicit PlayMusic(uint32 soundKitID) : ServerPacket(SMSG_PLAY_MUSIC, 4), SoundKitID(soundKitID) { }

            WorldPacket const* Write() override;

            uint32 SoundKitID = 0;
        };

        class RandomRollClient final : public ClientPacket
        {
        public:
            explicit RandomRollClient(WorldPacket&& packet) : ClientPacket(CMSG_RANDOM_ROLL, std::move(packet)) { }

            void Read() override;

            int32 Min = 0;
            int32 Max = 0;
            uint8 PartyIndex = 0;
        };

        class RandomRoll final : public ServerPacket
        {
        public:
            explicit RandomRoll() : ServerPacket(SMSG_RANDOM_ROLL, 16 + 16 + 4 + 4 + 4) { }

            WorldPacket const* Write() override;

            ObjectGuid Roller;
            ObjectGuid RollerWowAccount;
            int32 Min = 0;
            int32 Max = 0;
            int32 Result = 0;
        };

        class EnableBarberShop final : public ServerPacket
        {
        public:
            explicit EnableBarberShop() : ServerPacket(SMSG_ENABLE_BARBER_SHOP, 0) { }

            WorldPacket const* Write() override { return &_worldPacket; }
        };

        struct PhaseShiftDataPhase
        {
            uint16 PhaseFlags = 0;
            uint16 Id = 0;
        };

        struct PhaseShiftData
        {
            uint32 PhaseShiftFlags = 0;
            std::vector<PhaseShiftDataPhase> Phases;
            ObjectGuid PersonalGUID;
        };

        class PhaseShiftChange final : public ServerPacket
        {
        public:
            explicit PhaseShiftChange() : ServerPacket(SMSG_PHASE_SHIFT_CHANGE, 16 + 4 + 4 + 16 + 4 + 4 + 4) { }

            WorldPacket const* Write() override;

            ObjectGuid Client;
            PhaseShiftData Phaseshift;
            std::vector<uint16> PreloadMapIDs;
            std::vector<uint16> UiWorldMapAreaIDSwaps;
            std::vector<uint16> VisibleMapIDs;
        };

        class ZoneUnderAttack final : public ServerPacket
        {
        public:
            explicit ZoneUnderAttack() : ServerPacket(SMSG_ZONE_UNDER_ATTACK, 4) { }

            WorldPacket const* Write() override;

            int32 AreaID = 0;
        };

        class DurabilityDamageDeath final : public ServerPacket
        {
        public:
            explicit DurabilityDamageDeath() : ServerPacket(SMSG_DURABILITY_DAMAGE_DEATH, 4) { }

            WorldPacket const* Write() override;

            int32 Percent = 0;
        };

        class ObjectUpdateFailed final : public ClientPacket
        {
        public:
            explicit ObjectUpdateFailed(WorldPacket&& packet) : ClientPacket(CMSG_OBJECT_UPDATE_FAILED, std::move(packet)) { }

            void Read() override;

            ObjectGuid ObjectGUID;
        };

        class ObjectUpdateRescued final : public ClientPacket
        {
        public:
            explicit ObjectUpdateRescued(WorldPacket&& packet) : ClientPacket(CMSG_OBJECT_UPDATE_RESCUED, std::move(packet)) { }

            void Read() override;

            ObjectGuid ObjectGUID;
        };

        class PlayObjectSound final : public ServerPacket
        {
        public:
            explicit PlayObjectSound() : ServerPacket(SMSG_PLAY_OBJECT_SOUND, 16 + 16 + 4 + 4 * 3) { }
            explicit PlayObjectSound(ObjectGuid targetObjectGUID, ObjectGuid sourceObjectGUID, int32 soundKitID, TaggedPosition<::Position::XYZ> position)
                : ServerPacket(SMSG_PLAY_OBJECT_SOUND, 16 + 16 + 4 + 4 * 3), TargetObjectGUID(targetObjectGUID), SourceObjectGUID(sourceObjectGUID), SoundKitID(soundKitID), Position(position) { }

            WorldPacket const* Write() override;

            ObjectGuid TargetObjectGUID;
            ObjectGuid SourceObjectGUID;
            int32 SoundKitID = 0;
            TaggedPosition<::Position::XYZ> Position;
        };

        class TC_GAME_API PlaySound final : public ServerPacket
        {
        public:
            explicit PlaySound() : ServerPacket(SMSG_PLAY_SOUND, 16 + 4) { }
            explicit PlaySound(ObjectGuid sourceObjectGuid, int32 soundKitID) : ServerPacket(SMSG_PLAY_SOUND, 16 + 4), SourceObjectGuid(sourceObjectGuid), SoundKitID(soundKitID) { }

            WorldPacket const* Write() override;

            ObjectGuid SourceObjectGuid;
            int32 SoundKitID = 0;
        };

        class PlaySpeakerbotSound final : public ServerPacket
        {
        public:
            explicit PlaySpeakerbotSound(ObjectGuid const& sourceObjectGUID, int32 soundKitID)
                : ServerPacket(SMSG_PLAY_SPEAKERBOT_SOUND, 16 + 4), SourceObjectGUID(sourceObjectGUID), SoundKitID(soundKitID) { }

            WorldPacket const* Write() override;

            ObjectGuid SourceObjectGUID;
            int32 SoundKitID = 0;
        };

        class StopSpeakerbotSound final : public ServerPacket
        {
        public:
            explicit StopSpeakerbotSound(ObjectGuid const& sourceObjectGUID)
                : ServerPacket(SMSG_STOP_SPEAKERBOT_SOUND, 16), SourceObjectGUID(sourceObjectGUID) { }

            WorldPacket const* Write() override;

            ObjectGuid SourceObjectGUID;
        };

        class CompleteCinematic final : public ClientPacket
        {
        public:
            explicit CompleteCinematic(WorldPacket&& packet) : ClientPacket(CMSG_COMPLETE_CINEMATIC, std::move(packet)) { }

            void Read() override { }
        };

        class NextCinematicCamera final : public ClientPacket
        {
        public:
            explicit NextCinematicCamera(WorldPacket&& packet) : ClientPacket(CMSG_NEXT_CINEMATIC_CAMERA, std::move(packet)) { }

            void Read() override { }
        };

        class CompleteMovie final : public ClientPacket
        {
        public:
            explicit CompleteMovie(WorldPacket&& packet) : ClientPacket(CMSG_COMPLETE_MOVIE, std::move(packet)) { }

            void Read() override { }
        };

        class FarSight final : public ClientPacket
        {
        public:
            explicit FarSight(WorldPacket&& packet) : ClientPacket(CMSG_FAR_SIGHT, std::move(packet)) { }

            void Read() override;

            bool Enable = false;
        };

        class Dismount final : public ServerPacket
        {
        public:
            explicit Dismount() : ServerPacket(SMSG_DISMOUNT, 16) { }

            WorldPacket const* Write() override;

            ObjectGuid Guid;
        };

        class SaveCUFProfiles final : public ClientPacket
        {
        public:
            explicit SaveCUFProfiles(WorldPacket&& packet) : ClientPacket(CMSG_SAVE_CUF_PROFILES, std::move(packet)) { }

            void Read() override;

            Array<std::unique_ptr<CUFProfile>, MAX_CUF_PROFILES> CUFProfiles;
        };

        class LoadCUFProfiles final : public ServerPacket
        {
        public:
            explicit LoadCUFProfiles() : ServerPacket(SMSG_LOAD_CUF_PROFILES, 20) { }

            WorldPacket const* Write() override;

            std::vector<CUFProfile const*> CUFProfiles;
        };

        class PlayOneShotAnimKit final : public ServerPacket
        {
        public:
            explicit PlayOneShotAnimKit() : ServerPacket(SMSG_PLAY_ONE_SHOT_ANIM_KIT, 7 + 2) { }

            WorldPacket const* Write() override;

            ObjectGuid Unit;
            uint16 AnimKitID = 0;
        };

        class SetAIAnimKit final : public ServerPacket
        {
        public:
            explicit SetAIAnimKit() : ServerPacket(SMSG_SET_AI_ANIM_KIT, 16 + 2) { }

            WorldPacket const* Write() override;

            ObjectGuid Unit;
            uint16 AnimKitID = 0;
        };

        class SetMovementAnimKit final : public ServerPacket
        {
        public:
            explicit SetMovementAnimKit() : ServerPacket(SMSG_SET_MOVEMENT_ANIM_KIT, 16 + 2) { }

            WorldPacket const* Write() override;

            ObjectGuid Unit;
            uint16 AnimKitID = 0;
        };

        class SetMeleeAnimKit final : public ServerPacket
        {
        public:
            explicit SetMeleeAnimKit() : ServerPacket(SMSG_SET_MELEE_ANIM_KIT, 16 + 2) { }

            WorldPacket const* Write() override;

            ObjectGuid Unit;
            uint16 AnimKitID = 0;
        };

        class SetPlayHoverAnim final : public ServerPacket
        {
        public:
            explicit SetPlayHoverAnim() : ServerPacket(SMSG_SET_PLAY_HOVER_ANIM, 16 + 1) { }

            WorldPacket const* Write() override;

            ObjectGuid UnitGUID;
            bool PlayHoverAnim = false;
        };

        class OpeningCinematic final : public ClientPacket
        {
        public:
            explicit OpeningCinematic(WorldPacket&& packet) : ClientPacket(CMSG_OPENING_CINEMATIC, std::move(packet)) { }

            void Read() override { }
        };

        class TogglePvP final : public ClientPacket
        {
        public:
            explicit TogglePvP(WorldPacket&& packet) : ClientPacket(CMSG_TOGGLE_PVP, std::move(packet)) { }

            void Read() override { }
        };

        class SetPvP final : public ClientPacket
        {
        public:
            explicit SetPvP(WorldPacket&& packet) : ClientPacket(CMSG_SET_PVP, std::move(packet)) { }

            void Read() override;

            bool EnablePVP = false;
        };

        class AccountHeirloomUpdate final : public ServerPacket
        {
        public:
            explicit AccountHeirloomUpdate() : ServerPacket(SMSG_ACCOUNT_HEIRLOOM_UPDATE) { }

            WorldPacket const* Write() override;

            bool IsFullUpdate = false;
            std::map<uint32, HeirloomData> const* Heirlooms = nullptr;
            int32 ItemCollectionType = 0;
        };

        class MountSpecial final : public ClientPacket
        {
        public:
            explicit MountSpecial(WorldPacket&& packet) : ClientPacket(CMSG_MOUNT_SPECIAL_ANIM, std::move(packet)) { }

            void Read() override { }
        };

        class SpecialMountAnim final : public ServerPacket
        {
        public:
            explicit SpecialMountAnim() : ServerPacket(SMSG_SPECIAL_MOUNT_ANIM, 16) { }

            WorldPacket const* Write() override;

            ObjectGuid UnitGUID;
        };

        class CrossedInebriationThreshold final : public ServerPacket
        {
        public:
            explicit CrossedInebriationThreshold() : ServerPacket(SMSG_CROSSED_INEBRIATION_THRESHOLD, 16 + 4 + 4) { }

            WorldPacket const* Write() override;

            ObjectGuid Guid;
            int32 ItemID = 0;
            int32 Threshold = 0;
        };

        class SetTaxiBenchmarkMode final : public ClientPacket
        {
        public:
            explicit SetTaxiBenchmarkMode(WorldPacket&& packet) : ClientPacket(CMSG_SET_TAXI_BENCHMARK_MODE, std::move(packet)) { }

            void Read() override;

            bool Enable = false;
        };

        class OverrideLight final : public ServerPacket
        {
        public:
            explicit OverrideLight() : ServerPacket(SMSG_OVERRIDE_LIGHT, 4 + 4 + 4) { }

            WorldPacket const* Write() override;

            int32 AreaLightID = 0;
            int32 TransitionMilliseconds = 0;
            int32 OverrideLightID = 0;
        };

        class TC_GAME_API DisplayGameError final : public ServerPacket
        {
        public:
            explicit DisplayGameError(GameError error) : ServerPacket(SMSG_DISPLAY_GAME_ERROR, 4 + 1), Error(error) { }
            explicit DisplayGameError(GameError error, int32 arg) : ServerPacket(SMSG_DISPLAY_GAME_ERROR, 4 + 1 + 4), Error(error), Arg(arg) { }
            explicit DisplayGameError(GameError error, int32 arg1, int32 arg2) : ServerPacket(SMSG_DISPLAY_GAME_ERROR, 4 + 1 + 4 + 4), Error(error), Arg(arg1), Arg2(arg2) { }

            WorldPacket const* Write() override;

            GameError Error;
            Optional<int32> Arg;
            Optional<int32> Arg2;
        };

        class AccountMountUpdate final : public ServerPacket
        {
        public:
            explicit AccountMountUpdate() : ServerPacket(SMSG_ACCOUNT_MOUNT_UPDATE) { }

            WorldPacket const* Write() override;

            bool IsFullUpdate = false;
            MountContainer const* Mounts = nullptr;
        };

        class MountSetFavorite final : public ClientPacket
        {
        public:
            explicit MountSetFavorite(WorldPacket&& packet) : ClientPacket(CMSG_MOUNT_SET_FAVORITE, std::move(packet)) { }

            void Read() override;

            uint32 MountSpellID = 0;
            bool IsFavorite = false;
        };

        class PvpPrestigeRankUp final : public ClientPacket
        {
        public:
            explicit PvpPrestigeRankUp(WorldPacket&& packet) : ClientPacket(CMSG_PVP_PRESTIGE_RANK_UP, std::move(packet)) { }

            void Read() override { }
        };

        class CloseInteraction final : public ClientPacket
        {
        public:
            explicit CloseInteraction(WorldPacket&& packet) : ClientPacket(CMSG_CLOSE_INTERACTION, std::move(packet)) { }

            void Read() override;

            ObjectGuid SourceGuid;
        };

        class StartTimer final : public ServerPacket
        {
        public:
            explicit StartTimer() : ServerPacket(SMSG_START_TIMER, 12) { }

            WorldPacket const* Write() override;

            CountdownTimerType Type = {};
            Duration<Seconds> TimeLeft;
            Duration<Seconds> TotalTime;
        };

        class QueryCountdownTimer final : public ClientPacket
        {
        public:
            explicit QueryCountdownTimer(WorldPacket&& packet) : ClientPacket(CMSG_QUERY_COUNTDOWN_TIMER, std::move(packet)) { }

            void Read() override;

            CountdownTimerType TimerType = {};
        };

        class ConversationLineStarted final : public ClientPacket
        {
        public:
            explicit ConversationLineStarted(WorldPacket&& packet) : ClientPacket(CMSG_CONVERSATION_LINE_STARTED, std::move(packet)) { }

            void Read() override;

            ObjectGuid ConversationGUID;
            uint32 LineID = 0;
        };

        class DisplayToast final : public ServerPacket
        {
        public:
            explicit DisplayToast() : ServerPacket(SMSG_DISPLAY_TOAST) { }

            WorldPacket const* Write() override;

            uint64 Quantity = 0;
            uint32 QuestID = 0;
            ::DisplayToastMethod DisplayToastMethod = { };
            bool Mailed = false;
            DisplayToastType Type = { };
            bool IsSecondaryResult = false;
            Item::ItemInstance Item;
            int32 LootSpec = 0;
            uint32 ItemQuantity = 0;
            bool BonusRoll = false;
            uint32 CurrencyID = 0;
        };
    }
}

#endif // TRINITYCORE_MISC_PACKETS_H
