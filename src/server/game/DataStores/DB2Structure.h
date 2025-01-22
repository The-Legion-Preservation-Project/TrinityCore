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

#ifndef TRINITY_DB2STRUCTURE_H
#define TRINITY_DB2STRUCTURE_H

#include "Common.h"
#include "DBCEnums.h"
#include "FlagsArray.h"
#include "RaceMask.h"

#pragma pack(push, 1)

struct AchievementEntry
{
    LocalizedString Title;
    LocalizedString Description;
    LocalizedString Reward;
    int32 Flags;
    int16 InstanceID;                                               // -1 = none
    int16 Supercedes;                                               // its Achievement parent (can`t start while parent uncomplete, use its Criteria if don`t have own, use its progress on begin)
    int16 Category;
    int16 UiOrder;
    int16 SharesCriteria;                                           // referenced achievement (counting of all completed criterias)
    int8 Faction;                                                   // -1 = all, 0 = horde, 1 = alliance
    int8 Points;
    int8 MinimumCriteria;                                           // need this count of completed criterias (own or referenced achievement criterias)
    uint32 ID;
    int32 IconFileID;
    uint32 CriteriaTree;
};

struct Achievement_CategoryEntry
{
    LocalizedString Name;
    int16 Parent;
    uint8 UiOrder;
    uint32 ID;
};

struct AdventureJournalEntry
{
    int32 ID;
    LocalizedString Name;
    LocalizedString Description;
    LocalizedString ButtonText;
    LocalizedString RewardDescription;
    LocalizedString ContinueDescription;
    int32 TextureFileDataID;
    int32 ItemID;
    uint16 LfgDungeonID;
    uint16 QuestID;
    uint16 BattleMasterListID;
    std::array<uint16, 2> BonusPlayerConditionID;
    uint16 CurrencyType;
    uint16 WorldMapAreaID;
    uint8 Type;
    uint8 Flags;
    uint8 ButtonActionType;
    uint8 PriorityMin;
    uint8 PriorityMax;
    std::array<uint8, 2> BonusValue;
    uint8 CurrencyQuantity;
    int32 PlayerConditionID;
    int32 ItemQuantity;
};

struct AdventureMapPOIEntry
{
    int32 ID;
    LocalizedString Title;
    LocalizedString Description;
    DBCPosition2D WorldPosition;
    uint8 Type;
    uint32 PlayerConditionID;
    uint32 QuestID;
    uint32 LfgDungeonID;
    uint32 RewardItemID;
    uint32 UiTextureAtlasMemberID;
    uint32 UiTextureKitID;
    uint32 WorldMapAreaID;
    uint32 DungeonMapID;
    uint32 AreaTableID;
};

struct AnimationDataEntry
{
    int32 ID;
    int32 Flags;
    uint16 Fallback;
    uint16 BehaviorID;
    uint8 BehaviorTier;
};

struct AnimKitEntry
{
    uint32 ID;
    uint32 OneShotDuration;
    uint16 OneShotStopAnimKitID;
    uint16 LowDefAnimKitID;
};

struct AreaGroupMemberEntry
{
    uint32 ID;
    uint16 AreaID;
    uint16 AreaGroupID;
};

struct AreaTableEntry
{
    uint32 ID;
    char const* ZoneName;
    LocalizedString AreaName;
    std::array<int32, 2> Flags;
    float AmbientMultiplier;
    uint16 ContinentID;
    uint16 ParentAreaID;
    int16 AreaBit;
    uint16 AmbienceID;
    uint16 ZoneMusic;
    uint16 IntroSound;
    std::array<uint16, 4> LiquidTypeID;
    uint16 UwZoneMusic;
    uint16 UwAmbience;
    int16 PvpCombatWorldStateID;
    uint8 SoundProviderPref;
    uint8 SoundProviderPrefUnderwater;
    int8 ExplorationLevel;
    uint8 FactionGroupMask;
    uint8 MountFlags;
    uint8 WildBattlePetLevelMin;
    uint8 WildBattlePetLevelMax;
    uint8 WindSettingsID;
    uint32 UwIntroSound;

    // helpers
    bool IsSanctuary() const
    {
        if (ContinentID == 609)
            return true;
        return (Flags[0] & AREA_FLAG_SANCTUARY) != 0;
    }

    bool IsFlyable() const
    {
        if (Flags[0] & AREA_FLAG_OUTLAND)
        {
            if (!(Flags[0] & AREA_FLAG_NO_FLY_ZONE))
                return true;
        }

        return false;
    }
};

struct AreaTriggerEntry
{
    DBCPosition3D Pos;
    float Radius;
    float BoxLength;
    float BoxWidth;
    float BoxHeight;
    float BoxYaw;
    int16 ContinentID;
    int16 PhaseID;
    int16 PhaseGroupID;
    int16 ShapeID;
    int16 AreaTriggerActionSetID;
    int8 PhaseUseFlags;
    int8 ShapeType;
    int8 Flags;
    uint32 ID;
};

struct ArmorLocationEntry
{
    uint32 ID;
    float Clothmodifier;
    float Leathermodifier;
    float Chainmodifier;
    float Platemodifier;
    float Modifier;
};

struct ArtifactEntry
{
    uint32 ID;
    LocalizedString Name;
    int32 UiBarOverlayColor;
    int32 UiBarBackgroundColor;
    int32 UiNameColor;
    uint16 UiTextureKitID;
    uint16 ChrSpecializationID;
    uint8 ArtifactCategoryID;
    uint8 Flags;
    uint32 UiModelSceneID;
    uint32 SpellVisualKitID;
};

struct ArtifactAppearanceEntry
{
    LocalizedString Name;
    int32 UiSwatchColor;
    float UiModelSaturation;
    float UiModelOpacity;
    uint32 OverrideShapeshiftDisplayID;
    uint16 ArtifactAppearanceSetID;
    uint16 UiCameraID;
    uint8 DisplayIndex;
    uint8 ItemAppearanceModifierID;
    uint8 Flags;
    uint8 OverrideShapeshiftFormID;
    uint32 ID;
    uint32 UnlockPlayerConditionID;
    uint32 UiItemAppearanceID;
    uint32 UiAltItemAppearanceID;
};

struct ArtifactAppearanceSetEntry
{
    LocalizedString Name;
    LocalizedString Description;
    uint16 UiCameraID;
    uint16 AltHandUICameraID;
    uint8 DisplayIndex;
    int8 ForgeAttachmentOverride;
    uint8 Flags;
    uint32 ID;
    uint8 ArtifactID;
};

struct ArtifactCategoryEntry
{
    uint32 ID;
    int16 XpMultCurrencyID;
    int16 XpMultCurveID;
};

struct ArtifactPowerEntry
{
    DBCPosition2D Pos;
    uint8 ArtifactID;
    uint8 Flags;
    uint8 MaxPurchasableRank;
    uint8 Tier;
    uint32 ID;
    int32 Label;
};

struct ArtifactPowerLinkEntry
{
    uint32 ID;
    uint16 PowerA;
    uint16 PowerB;
};

struct ArtifactPowerPickerEntry
{
    uint32 ID;
    uint32 PlayerConditionID;
};

struct ArtifactPowerRankEntry
{
    uint32 ID;
    int32 SpellID;
    float AuraPointsOverride;
    uint16 ItemBonusListID;
    uint8 RankIndex;
    uint16 ArtifactPowerID;
};

struct ArtifactQuestXPEntry
{
    uint32 ID;
    std::array<uint32, 10> Difficulty;
};

struct ArtifactTierEntry
{
    uint32 ID;
    uint32 ArtifactTier;
    uint32 MaxNumTraits;
    uint32 MaxArtifactKnowledge;
    uint32 KnowledgePlayerCondition;
    uint32 MinimumEmpowerKnowledge;
};

struct ArtifactUnlockEntry
{
    uint32 ID;
    uint16 ItemBonusListID;
    uint8 PowerRank;
    uint32 PowerID;
    uint32 PlayerConditionID;
    uint8 ArtifactID;
};

struct AuctionHouseEntry
{
    uint32 ID;
    LocalizedString Name;
    uint16 FactionID;                                               // id of faction.dbc for player factions associated with city
    uint8 DepositRate;
    uint8 ConsignmentRate;
};

struct BankBagSlotPricesEntry
{
    uint32 ID;
    uint32 Cost;
};

struct BannedAddonsEntry
{
    uint32 ID;
    char const* Name;
    char const* Version;
    uint8 Flags;
};

struct BarberShopStyleEntry
{
    LocalizedString DisplayName;
    LocalizedString Description;
    float CostModifier;
    uint8 Type;                                                     // value 0 -> hair, value 2 -> facialhair
    uint8 Race;
    uint8 Sex;
    uint8 Data;                                                     // real ID to hair/facial hair
    uint32 ID;
};

struct BattlePetBreedQualityEntry
{
    uint32 ID;
    float StateMultiplier;
    uint8 QualityEnum;
};

struct BattlePetBreedStateEntry
{
    uint32 ID;
    uint16 Value;
    uint8 BattlePetStateID;
    uint8 BattlePetBreedID;
};

struct BattlePetSpeciesEntry
{
    LocalizedString SourceText;
    LocalizedString Description;
    int32 CreatureID;
    int32 IconFileDataID;
    int32 SummonSpellID;
    uint16 Flags;
    uint8 PetTypeEnum;
    int8 SourceTypeEnum;
    uint32 ID;
    int32 CardUIModelSceneID;
    int32 LoadoutUIModelSceneID;

    EnumFlag<BattlePetSpeciesFlags> GetFlags() const { return static_cast<BattlePetSpeciesFlags>(Flags); }
};

struct BattlePetSpeciesStateEntry
{
    uint32 ID;
    int32 Value;
    uint8 BattlePetStateID;
    uint16 BattlePetSpeciesID;
};

struct BattlemasterListEntry
{
    uint32 ID;
    LocalizedString Name;
    LocalizedString GameType;
    LocalizedString ShortDescription;
    LocalizedString LongDescription;
    int32 IconFileDataID;
    std::array<int16, 16> MapID;
    int16 HolidayWorldState;
    int16 RequiredPlayerConditionID;
    int8 InstanceType;
    int8 GroupsAllowed;
    int8 MaxGroupSize;
    int8 MinLevel;
    int8 MaxLevel;
    int8 RatedPlayers;
    int8 MinPlayers;
    int8 MaxPlayers;
    int8 Flags;

    EnumFlag<BattlemasterListFlags> GetFlags() const { return static_cast<BattlemasterListFlags>(Flags); }
};

#define MAX_BROADCAST_TEXT_EMOTES 3

struct BroadcastTextEntry
{
    uint32 ID;
    LocalizedString Text;
    LocalizedString Text1;
    std::array<uint16, MAX_BROADCAST_TEXT_EMOTES> EmoteID;
    std::array<uint16, MAX_BROADCAST_TEXT_EMOTES> EmoteDelay;
    uint16 EmotesID;
    uint8 LanguageID;
    uint8 Flags;
    int32 ConditionID;
    std::array<uint32, 2> SoundKitID;
};

struct Cfg_RegionsEntry
{
    uint32 ID;
    char const* Tag;
    uint32 Raidorigin;                                              // Date of first raid reset, all other resets are calculated as this date plus interval
    uint32 ChallengeOrigin;
    uint16 RegionID;
    uint8 RegionGroupMask;
};

struct CharacterFacialHairStylesEntry
{
    uint32 ID;
    std::array<int32, 5> Geoset;
    uint8 RaceID;
    uint8 SexID;
    uint8 VariationID;
};

struct CharBaseSectionEntry
{
    uint32 ID;
    uint8 VariationEnum;
    uint8 ResolutionVariationEnum;
    uint8 LayoutResType;
};

struct CharSectionsEntry
{
    uint32 ID;
    std::array<int32, 3> MaterialResourcesID;
    int16 Flags;
    int8 RaceID;
    int8 SexID;
    int8 BaseSection;
    int8 VariationIndex;
    int8 ColorIndex;
};

#define MAX_OUTFIT_ITEMS 24

struct CharStartOutfitEntry
{
    uint32 ID;
    std::array<int32, MAX_OUTFIT_ITEMS> ItemID;
    uint32 PetDisplayID;                                            // Pet Model ID for starting pet
    uint8 ClassID;
    uint8 SexID;
    uint8 OutfitID;
    uint8 PetFamilyID;                                              // Pet Family Entry for starting pet
    uint8 RaceID;
};

struct CharTitlesEntry
{
    uint32 ID;
    LocalizedString Name;
    LocalizedString Name1;
    int16 MaskID;
    int8 Flags;
};

struct CharacterLoadoutEntry
{
    uint32 ID;
    Trinity::RaceMask<int64> RaceMask;
    int8 ChrClassID;
    int8 Purpose;

    bool IsForNewCharacter() const { return Purpose == 9; }
};

struct CharacterLoadoutItemEntry
{
    uint32 ID;
    uint32 ItemID;
    uint16 CharacterLoadoutID;
};

struct ChatChannelsEntry
{
    uint32 ID;
    LocalizedString Name;
    LocalizedString Shortcut;
    int32 Flags;
    int8 FactionGroup;
};

struct ChrClassUIDisplayEntry
{
    int32 ID;
    uint8 ChrClassesID;
    int32 AdvGuidePlayerConditionID;
    int32 SplashPlayerConditionID;
};

struct ChrClassesEntry
{
    char const* PetNameToken;
    LocalizedString Name;
    LocalizedString NameFemale;
    LocalizedString NameMale;
    char const* Filename;
    uint32 CreateScreenFileDataID;
    uint32 SelectScreenFileDataID;
    uint32 LowResScreenFileDataID;
    uint32 IconFileDataID;
    int32 StartingLevel;
    uint16 Flags;
    uint16 CinematicSequenceID;
    uint16 DefaultSpec;
    uint8 DisplayPower;
    uint8 SpellClassSet;
    uint8 AttackPowerPerStrength;
    uint8 AttackPowerPerAgility;
    uint8 RangedAttackPowerPerAgility;
    uint8 PrimaryStatPriority;
    uint32 ID;
};

struct ChrClassesXPowerTypesEntry
{
    uint32 ID;
    uint8 PowerType;
    uint8 ClassID;
};

struct ChrRacesEntry
{
    char const* ClientPrefix;
    char const* ClientFileString;
    LocalizedString Name;
    LocalizedString NameFemale;
    LocalizedString NameLowercase;
    LocalizedString NameFemaleLowercase;
    int32 Flags;
    uint32 MaleDisplayId;
    uint32 FemaleDisplayId;
    int32 CreateScreenFileDataID;
    int32 SelectScreenFileDataID;
    std::array<float, 3> MaleCustomizeOffset;
    std::array<float, 3> FemaleCustomizeOffset;
    int32 LowResScreenFileDataID;
    int32 StartingLevel;
    int32 UiDisplayOrder;
    int16 FactionID;
    int16 ResSicknessSpellID;
    int16 SplashSoundID;
    int16 CinematicSequenceID;
    int8 BaseLanguage;
    int8 CreatureType;
    int8 Alliance;
    int8 RaceRelated;
    int8 UnalteredVisualRaceID;
    int8 CharComponentTextureLayoutID;
    int8 DefaultClassID;
    int8 NeutralRaceID;
    int8 DisplayRaceID;
    int8 CharComponentTexLayoutHiResID;
    uint32 ID;
    uint32 HighResMaleDisplayId;
    uint32 HighResFemaleDisplayId;
    int32 HeritageArmorAchievementID;
    int32 MaleSkeletonFileDataID;
    int32 FemaleSkeletonFileDataID;
    std::array<uint32, 3> AlteredFormStartVisualKitID;
    std::array<uint32, 3> AlteredFormFinishVisualKitID;

    EnumFlag<ChrRacesFlag> GetFlags() const { return static_cast<ChrRacesFlag>(Flags); }
};

#define MAX_MASTERY_SPELLS 2

struct ChrSpecializationEntry
{
    LocalizedString Name;
    LocalizedString FemaleName;
    LocalizedString Description;
    std::array<int32, MAX_MASTERY_SPELLS> MasterySpellID;
    int8 ClassID;
    int8 OrderIndex;
    int8 PetTalentType;
    int8 Role;
    int8 PrimaryStatPriority;
    uint32 ID;
    int32 SpellIconFileID;
    uint32 Flags;
    int32 AnimReplacements;

    bool IsPetSpecialization() const
    {
        return ClassID == 0;
    }
};

struct CinematicCameraEntry
{
    uint32 ID;
    uint32 SoundID;                                         // Sound ID       (voiceover for cinematic)
    DBCPosition3D Origin;                                   // Position in map used for basis for M2 co-ordinates
    float OriginFacing;                                     // Orientation in map used for basis for M2 co-
    uint32 FileDataID;                                      // Model
};

struct CinematicSequencesEntry
{
    uint32 ID;
    uint32 SoundID;
    std::array<uint16, 8> Camera;
};

struct ConversationLineEntry
{
    uint32 ID;
    uint32 BroadcastTextID;
    uint32 SpellVisualKitID;
    int32 AdditionalDuration;
    uint16 NextConversationLineID;
    uint16 AnimKitID;
    uint8 SpeechType;
    uint8 StartAnimation;
    uint8 EndAnimation;
};

struct CreatureDisplayInfoEntry
{
    uint32 ID;
    float CreatureModelScale;
    uint16 ModelID;
    uint16 NPCSoundID;
    int8 SizeClass;
    uint8 Flags;
    int8 Gender;
    int32 ExtendedDisplayInfoID;
    int32 PortraitTextureFileDataID;
    uint8 CreatureModelAlpha;
    uint16 SoundID;
    float PlayerOverrideScale;
    int32 PortraitCreatureDisplayInfoID;
    uint8 BloodID;
    uint16 ParticleColorID;
    uint32 CreatureGeosetData;
    uint16 ObjectEffectPackageID;
    uint16 AnimReplacementSetID;
    int8 UnarmedWeaponType;
    int32 StateSpellVisualKitID;
    float PetInstanceScale;                                         // scale of not own player pets inside dungeons/raids/scenarios
    int32 MountPoofSpellVisualKitID;
    std::array<int32, 3> TextureVariationFileDataID;
};

struct CreatureDisplayInfoExtraEntry
{
    uint32 ID;
    int32 BakeMaterialResourcesID;
    int32 HDBakeMaterialResourcesID;
    int8 DisplayRaceID;
    int8 DisplaySexID;
    int8 DisplayClassID;
    int8 SkinID;
    int8 FaceID;
    int8 HairStyleID;
    int8 HairColorID;
    int8 FacialHairID;
    std::array<uint8, 3> CustomDisplayOption;
    int8 Flags;
};

struct CreatureFamilyEntry
{
    uint32 ID;
    LocalizedString Name;
    float MinScale;
    float MaxScale;
    int32 IconFileID;
    std::array<int16, 2> SkillLine;
    int16 PetFoodMask;
    int8 MinScaleLevel;
    int8 MaxScaleLevel;
    int8 PetTalentType;
};

struct CreatureModelDataEntry
{
    uint32 ID;
    float ModelScale;
    float FootprintTextureLength;
    float FootprintTextureWidth;
    float FootprintParticleScale;
    float CollisionWidth;
    float CollisionHeight;
    float MountHeight;
    std::array<float, 6> GeoBox;
    float WorldEffectScale;
    float AttachedEffectScale;
    float MissileCollisionRadius;
    float MissileCollisionPush;
    float MissileCollisionRaise;
    float OverrideLootEffectScale;
    float OverrideNameScale;
    float OverrideSelectionRadius;
    float TamedPetBaseScale;
    float HoverHeight;
    uint32 Flags;
    uint32 FileDataID;
    uint32 SizeClass;
    uint32 BloodID;
    uint32 FootprintTextureID;
    uint32 FoleyMaterialID;
    uint32 FootstepCameraEffectID;
    uint32 DeathThudCameraEffectID;
    uint32 SoundID;
    uint32 CreatureGeosetDataID;

    EnumFlag<CreatureModelDataFlags> GetFlags() const { return static_cast<CreatureModelDataFlags>(Flags); }
};

struct CreatureTypeEntry
{
    uint32 ID;
    LocalizedString Name;
    uint8 Flags;
};

struct CriteriaEntry
{
    uint32 ID;
    union AssetNameAlias
    {
        int32 ID;
        // CriteriaType::KillCreature                               = 0
        // CriteriaType::KilledByCreature                           = 20
        // CriteriaType::AccountKnownPet                            = 96
        // CriteriaType::KillCreatureScenario                       = 208
        int32 CreatureID;

        // CriteriaType::WinBattleground                            = 1
        // CriteriaType::ParticipateInBattleground                  = 15
        // CriteriaType::DieOnMap                                   = 16
        // CriteriaType::WinArena                                   = 32
        // CriteriaType::ParticipateInArena                         = 33
        // CriteriaType::CompleteChallengeMode                      = 71
        int32 MapID;

        // CriteriaType::CompleteResearchProject                    = 2
        int32 ResearchProjectID;

        // CriteriaType::FindResearchObject                         = 4
        // CriteriaType::UseGameobject                              = 68
        // CriteriaType::CatchFishInFishingHole                     = 72
        int32 GameObjectID;

        // CriteriaType::SkillRaised                                = 7
        // CriteriaType::AchieveSkillStep                           = 40
        // CriteriaType::LearnSpellFromSkillLine                    = 75
        // CriteriaType::LearnTradeskillSkillLine                   = 112
        int32 SkillID;

        // CriteriaType::EarnAchievement                            = 8
        int32 AchievementID;

        // CriteriaType::CompleteQuestsInZone                       = 11
        int32 ZoneID;

        // CriteriaType::CurrencyGained                             = 12
        // CriteriaType::ObtainAnyItemWithCurrencyValue             = 229
        int32 CurrencyID;

        // CriteriaType::DieInInstance                              = 18
        // CriteriaType::RunInstance                                = 19
        int32 GroupSize;

        // CriteriaType::CompleteInternalCriteria                   = 21
        int32 CriteriaID;

        // CriteriaType::DieFromEnviromentalDamage                  = 26
        int32 EnviromentalDamageType;

        // CriteriaType::CompleteQuest                              = 27
        int32 QuestID;

        // CriteriaType::BeSpellTarget                              = 28
        // CriteriaType::CastSpell                                  = 29
        // CriteriaType::LearnOrKnowSpell                           = 34
        // CriteriaType::GainAura                                   = 69
        // CriteriaType::LandTargetedSpellOnTarget                  = 110
        // CriteriaType::MemorizeSpell                              = 222
        int32 SpellID;

        // CriteriaType::TrackedWorldStateUIModified                = 30
        int32 WorldStateUIID;

        // CriteriaType::PVPKillInArea                              = 31
        // CriteriaType::EnterArea                                  = 163
        // CriteriaType::LeaveArea                                  = 164
        // CriteriaType::EnterTopLevelArea                          = 225
        // CriteriaType::LeaveTopLevelArea                          = 226
        int32 AreaID;

        // CriteriaType::AcquireItem                                = 36
        // CriteriaType::UseItem                                    = 41
        // CriteriaType::LootItem                                   = 42
        // CriteriaType::EquipItem                                  = 57
        // CriteriaType::LearnToy                                   = 185
        // CriteriaType::LearnHeirloom                              = 188
        int32 ItemID;

        // CriteriaType::EarnTeamArenaRating                        = 38
        // CriteriaType::EarnPersonalArenaRating                    = 39
        int32 TeamType;

        // CriteriaType::RevealWorldMapOverlay                      = 43
        int32 WorldMapOverlayID;

        // CriteriaType::ReputationGained                           = 46
        // CriteriaType::ParagonLevelIncreaseWithFaction            = 206
        int32 FactionID;

        // CriteriaType::EquipItemInSlot                            = 49
        // CriteriaType::LearnAnyTransmogInSlot                     = 199
        int32 EquipmentSlot;

        // CriteriaType::RollNeed                                   = 50
        // CriteriaType::RollGreed                                  = 51
        // CriteriaType::RollDisenchant                             = 116
        int32 RollValue;

        // CriteriaType::DeliverKillingBlowToClass                  = 52
        int32 ClassID;

        // CriteriaType::DeliverKillingBlowToRace                   = 53
        int32 RaceID;

        // CriteriaType::DoEmote                                    = 54
        int32 EmoteID;

        // CriteriaType::CompleteQuestsInSort                       = 58
        int32 QuestSortID;

        // CriteriaType::KilledAllUnitsInSpawnRegion                = 64
        int32 SpawnRegionID;

        // CriteriaType::PlayerTriggerGameEvent                     = 73
        // CriteriaType::AnyoneTriggerGameEventScenario             = 92
        int32 EventID;

        // CriteriaType::DefeatDungeonEncounterWhileElegibleForLoot = 97
        // CriteriaType::DefeatDungeonEncounter                     = 165
        int32 DungeonEncounterID;

        // CriteriaType::GetLootByType                              = 109
        int32 LootType;

        // CriteriaType::CompleteGuildChallenge                     = 138
        int32 GuildChallengeType;

        // CriteriaType::CompleteScenario                           = 152
        int32 ScenarioID;

        // CriteriaType::EnterAreaTriggerWithActionSet              = 153
        // CriteriaType::LeaveAreaTriggerWithActionSet              = 154
        int32 AreaTriggerActionSetID;

        // CriteriaType::BattlePetReachLevel                        = 160
        // CriteriaType::ActivelyEarnPetLevel                       = 162
        int32 PetLevel;

        // CriteriaType::PlaceGarrisonBuilding                      = 167
        // CriteriaType::ActivateGarrisonBuilding                   = 169
        // CriteriaType::LearnGarrisonBlueprint                     = 179
        int32 GarrBuildingID;

        // CriteriaType::UpgradeGarrison                            = 170
        int32 GarrisonLevel;

        // CriteriaType::StartAnyGarrisonMissionWithFollowerType    = 171
        // CriteriaType::SucceedAnyGarrisonMissionWithFollowerType  = 173
        int32 GarrFollowerTypeID;

        // CriteriaType::StartGarrisonMission                       = 172
        // CriteriaType::SucceedGarrisonMission                     = 174
        int32 GarrMissionID;

        // CriteriaType::RecruitGarrisonFollower                    = 176
        int32 GarrFollowerID;

        // CriteriaType::LearnGarrisonSpecialization                = 181
        int32 GarrSpecializationID;

        // CriteriaType::CollectGarrisonShipment                    = 182
        int32 CharShipmentContainerID;

        // CriteriaType::LearnTransmog                              = 192
        int32 ItemModifiedAppearanceID;

        // CriteriaType::ActivelyReachLevel                         = 196
        int32 PlayerLevel;

        // CriteriaType::CompleteResearchGarrisonTalent             = 198
        // CriteriaType::StartResearchGarrisonTalent                = 202
        // CriteriaType::SocketGarrisonTalent                       = 227
        int32 GarrTalentID;

        // CriteriaType::EarnLicense                                = 204
        int32 BattlePayDeliverableID;

        // CriteriaType::CollectTransmogSetFromGroup                = 205
        int32 TransmogSetGroupID;

        // CriteriaType::ArtifactPowerRankPurchased                 = 209
        // CriteriaType::ChooseRelicTalent                          = 211
        int32 ArtifactPowerID;

        // CriteriaType::EarnExpansionLevel                         = 212
        int32 ExpansionLevel;

        // CriteriaType::AccountHonorLevelReached                   = 213
        int32 AccountHonorLevel;

        // CriteriaType::AzeriteLevelReached                        = 215
        int32 AzeriteLevel;

        // CriteriaType::MythicPlusRatingAttained                   = 230
        int32 DungeonScore;
    } Asset;
    int32 StartAsset;
    int32 FailAsset;
    uint32 ModifierTreeId;
    uint16 StartTimer;
    int16 EligibilityWorldStateID;
    uint8 Type;
    uint8 StartEvent;
    uint8 FailEvent;
    uint8 Flags;
    int8 EligibilityWorldStateValue;

    EnumFlag<CriteriaFlags> GetFlags() const { return static_cast<CriteriaFlags>(Flags); }
};

struct CriteriaTreeEntry
{
    uint32 ID;
    LocalizedString Description;
    int32 Amount;
    int16 Flags;
    int8 Operator;
    uint32 CriteriaID;
    uint32 Parent;
    int32 OrderIndex;

    EnumFlag<CriteriaTreeFlags> GetFlags() const { return static_cast<CriteriaTreeFlags>(Flags); }
};

struct CurrencyTypesEntry
{
    uint32 ID;
    LocalizedString Name;
    LocalizedString Description;
    uint32 MaxQty;
    uint32 MaxEarnablePerWeek;
    uint32 Flags;
    uint8 CategoryID;
    uint8 SpellCategory;
    uint8 Quality;
    int32 InventoryIconFileID;
    uint32 SpellWeight;
};

struct CurveEntry
{
    uint32 ID;
    uint8 Type;
    uint8 Flags;
};

struct CurvePointEntry
{
    uint32 ID;
    DBCPosition2D Pos;
    uint16 CurveID;
    uint8 OrderIndex;
};

struct DestructibleModelDataEntry
{
    uint32 ID;
    uint16 State0Wmo;
    uint16 State1Wmo;
    uint16 State2Wmo;
    uint16 State3Wmo;
    uint16 HealEffectSpeed;
    int8 State0ImpactEffectDoodadSet;
    uint8 State0AmbientDoodadSet;
    int8 State0NameSet;
    int8 State1DestructionDoodadSet;
    int8 State1ImpactEffectDoodadSet;
    uint8 State1AmbientDoodadSet;
    int8 State1NameSet;
    int8 State2DestructionDoodadSet;
    int8 State2ImpactEffectDoodadSet;
    uint8 State2AmbientDoodadSet;
    int8 State2NameSet;
    uint8 State3InitDoodadSet;
    uint8 State3AmbientDoodadSet;
    int8 State3NameSet;
    uint8 EjectDirection;
    uint8 DoNotHighlight;
    uint8 HealEffect;
};

struct DifficultyEntry
{
    uint32 ID;
    LocalizedString Name;
    uint16 GroupSizeHealthCurveID;
    uint16 GroupSizeDmgCurveID;
    uint16 GroupSizeSpellPointsCurveID;
    uint8 FallbackDifficultyID;
    uint8 InstanceType;
    uint8 MinPlayers;
    uint8 MaxPlayers;
    int8 OldEnumValue;
    uint8 Flags;
    uint8 ToggleDifficultyID;
    uint8 ItemContext;
    uint8 OrderIndex;
};

struct DungeonEncounterEntry
{
    LocalizedString Name;
    int32 CreatureDisplayID;
    int16 MapID;
    int8 DifficultyID;
    int8 Bit;
    uint8 Flags;
    uint32 ID;
    int32 OrderIndex;
    int32 SpellIconFileID;
};

struct DurabilityCostsEntry
{
    uint32 ID;
    std::array<uint16, 21> WeaponSubClassCost;
    std::array<uint16, 8> ArmorSubClassCost;
};

struct DurabilityQualityEntry
{
    uint32 ID;
    float Data;
};

struct EmotesEntry
{
    uint32 ID;
    Trinity::RaceMask<int64> RaceMask;
    char const* EmoteSlashCommand;
    uint32 EmoteFlags;
    uint32 SpellVisualKitID;
    int16 AnimID;
    uint8 EmoteSpecProc;
    int32 ClassMask;
    uint32 EmoteSpecProcParam;
    uint32 EventSoundID;
};

struct EmotesTextEntry
{
    uint32 ID;
    char const* Name;
    uint16 EmoteID;
};

struct EmotesTextSoundEntry
{
    uint32 ID;
    uint8 RaceID;
    uint8 SexID;
    uint8 ClassID;
    uint32 SoundID;
    uint16 EmotesTextID;
};

struct FactionEntry
{
    std::array<Trinity::RaceMask<int64>, 4> ReputationRaceMask;
    LocalizedString Name;
    LocalizedString Description;
    uint32 ID;
    std::array<int32, 4> ReputationBase;
    std::array<float, 2> ParentFactionMod;                        // Faction outputs rep * ParentFactionModOut as spillover reputation
    std::array<int32, 4> ReputationMax;
    int16 ReputationIndex;
    std::array<int16, 4> ReputationClassMask;
    std::array<uint16, 4> ReputationFlags;
    uint16 ParentFactionID;
    uint16 ParagonFactionID;
    std::array<uint8, 2> ParentFactionCap;                        // The highest rank the faction will profit from incoming spillover
    uint8 Expansion;
    uint8 Flags;
    uint8 FriendshipRepID;

    // helpers
    bool CanHaveReputation() const
    {
        return ReputationIndex >= 0;
    }
};

#define MAX_FACTION_RELATIONS 4

struct FactionTemplateEntry
{
    uint32 ID;
    uint16 Faction;
    uint16 Flags;
    std::array<uint16, MAX_FACTION_RELATIONS> Enemies;
    std::array<uint16, MAX_FACTION_RELATIONS> Friend;
    uint8 FactionGroup;
    uint8 FriendGroup;
    uint8 EnemyGroup;

    //-------------------------------------------------------  end structure

    // helpers
    bool IsFriendlyTo(FactionTemplateEntry const* entry) const
    {
        if (this == entry)
            return true;
        if (entry->Faction)
        {
            for (int32 i = 0; i < MAX_FACTION_RELATIONS; ++i)
                if (Enemies[i] == entry->Faction)
                    return false;
            for (int32 i = 0; i < MAX_FACTION_RELATIONS; ++i)
                if (Friend[i] == entry->Faction)
                    return true;
        }
        return (FriendGroup & entry->FactionGroup) || (FactionGroup & entry->FriendGroup);
    }
    bool IsHostileTo(FactionTemplateEntry const* entry) const
    {
        if (this == entry)
            return false;
        if (entry->Faction)
        {
            for (int32 i = 0; i < MAX_FACTION_RELATIONS; ++i)
                if (Enemies[i] == entry->Faction)
                    return true;
            for (int32 i = 0; i < MAX_FACTION_RELATIONS; ++i)
                if (Friend[i] == entry->Faction)
                    return false;
        }
        return (EnemyGroup & entry->FactionGroup) != 0;
    }
    bool IsHostileToPlayers() const { return (EnemyGroup & FACTION_MASK_PLAYER) !=0; }
    bool IsNeutralToAll() const
    {
        for (int i = 0; i < MAX_FACTION_RELATIONS; ++i)
            if (Enemies[i] != 0)
                return false;
        return EnemyGroup == 0 && FriendGroup == 0;
    }
    bool IsContestedGuardFaction() const { return (Flags & FACTION_TEMPLATE_FLAG_CONTESTED_GUARD) != 0; }
};

struct FriendshipRepReactionEntry
{
    uint32 ID;
    LocalizedString Reaction;
    uint16 ReactionThreshold;
    uint8 FriendshipRepID;
};

struct FriendshipReputationEntry
{
    LocalizedString Description;
    int32 TextureFileID;
    uint16 FactionID;
    uint32 ID;
};

struct GameObjectArtKitEntry
{
    uint32 ID;
    int32 AttachModelFileID;
    std::array<int32, 3> TextureVariationFileID;
};

struct GameObjectDisplayInfoEntry
{
    uint32 ID;
    int32 FileDataID;
    DBCPosition3D GeoBoxMin;
    DBCPosition3D GeoBoxMax;
    float OverrideLootEffectScale;
    float OverrideNameScale;
    int16 ObjectEffectPackageID;
};

struct GameObjectsEntry
{
    LocalizedString Name;
    DBCPosition3D Pos;
    std::array<float, 4> Rot;
    float Scale;
    std::array<int32, 8> PropValue;
    uint16 OwnerID;
    uint16 DisplayID;
    uint16 PhaseID;
    uint16 PhaseGroupID;
    uint8 PhaseUseFlags;
    uint8 TypeID;
    uint32 ID;
};

struct GarrAbilityEntry
{
    LocalizedString Name;
    LocalizedString Description;
    int32 IconFileDataID;
    uint16 Flags;
    uint16 FactionChangeGarrAbilityID;
    uint8 GarrAbilityCategoryID;
    uint8 GarrFollowerTypeID;
    uint32 ID;
};

struct GarrBuildingEntry
{
    uint32 ID;
    LocalizedString AllianceName;
    LocalizedString HordeName;
    LocalizedString Description;
    LocalizedString Tooltip;
    int32 HordeGameObjectID;
    int32 AllianceGameObjectID;
    int32 IconFileDataID;
    uint16 CurrencyTypeID;
    uint16 HordeUiTextureKitID;
    uint16 AllianceUiTextureKitID;
    uint16 AllianceSceneScriptPackageID;
    uint16 HordeSceneScriptPackageID;
    uint16 GarrAbilityID;
    uint16 BonusGarrAbilityID;
    uint16 GoldCost;
    uint8 GarrSiteID;
    uint8 BuildingType;
    uint8 UpgradeLevel;
    uint8 Flags;
    uint8 ShipmentCapacity;
    uint8 GarrTypeID;
    int32 BuildSeconds;
    int32 CurrencyQty;
    int32 MaxAssignments;
};

struct GarrBuildingPlotInstEntry
{
    DBCPosition2D MapOffset;
    uint16 UiTextureAtlasMemberID;
    uint16 GarrSiteLevelPlotInstID;
    uint8 GarrBuildingID;
    uint32 ID;
};

struct GarrClassSpecEntry
{
    LocalizedString ClassSpec;
    LocalizedString ClassSpecMale;
    LocalizedString ClassSpecFemale;
    uint16 UiTextureAtlasMemberID;
    uint16 GarrFollItemSetID;
    uint8 FollowerClassLimit;
    uint8 Flags;
    uint32 ID;
};

struct GarrFollowerEntry
{
    LocalizedString HordeSourceText;
    LocalizedString AllianceSourceText;
    LocalizedString TitleName;
    int32 HordeCreatureID;
    int32 AllianceCreatureID;
    int32 HordeIconFileDataID;
    int32 AllianceIconFileDataID;
    uint32 HordeSlottingBroadcastTextID;
    uint32 AllySlottingBroadcastTextID;
    uint16 HordeGarrFollItemSetID;
    uint16 AllianceGarrFollItemSetID;
    uint16 ItemLevelWeapon;
    uint16 ItemLevelArmor;
    uint16 HordeUITextureKitID;
    uint16 AllianceUITextureKitID;
    uint8 GarrFollowerTypeID;
    uint8 HordeGarrFollRaceID;
    uint8 AllianceGarrFollRaceID;
    uint8 Quality;
    uint8 HordeGarrClassSpecID;
    uint8 AllianceGarrClassSpecID;
    uint8 FollowerLevel;
    uint8 Gender;
    uint8 Flags;
    int8 HordeSourceTypeEnum;
    int8 AllianceSourceTypeEnum;
    uint8 GarrTypeID;
    uint8 Vitality;
    uint8 ChrClassID;
    uint8 HordeFlavorGarrStringID;
    uint8 AllianceFlavorGarrStringID;
    uint32 ID;
};

struct GarrFollowerXAbilityEntry
{
    uint32 ID;
    uint16 GarrAbilityID;
    uint8 FactionIndex;
    uint16 GarrFollowerID;
};

struct GarrMissionEntry
{
    LocalizedString Name;
    LocalizedString Description;
    LocalizedString Location;
    int32 MissionDuration;
    uint32 OfferDuration;
    DBCPosition2D MapPos;
    DBCPosition2D WorldPos;
    uint16 TargetItemLevel;
    uint16 UiTextureKitID;
    uint16 MissionCostCurrencyTypesID;
    int8 TargetLevel;
    uint8 EnvGarrMechanicTypeID;
    uint8 MaxFollowers;
    uint8 OfferedGarrMissionTextureID;
    uint8 GarrMissionTypeID;
    uint8 GarrFollowerTypeID;
    uint8 BaseCompletionChance;
    uint8 FollowerDeathChance;
    uint8 GarrTypeID;
    uint32 ID;
    int32 TravelDuration;
    uint32 PlayerConditionID;
    uint32 MissionCost;
    uint32 Flags;
    uint32 BaseFollowerXP;
    uint32 AreaID;
    uint32 OvermaxRewardPackID;
    uint32 EnvGarrMechanicID;
    uint32 GarrMissionSetID;
};

struct GarrPlotEntry
{
    uint32 ID;
    LocalizedString Name;
    int32 AllianceConstructObjID;
    int32 HordeConstructObjID;
    uint8 UiCategoryID;
    uint8 PlotType;
    uint8 Flags;
    std::array<uint32, 2> UpgradeRequirement;
};

struct GarrPlotBuildingEntry
{
    uint32 ID;
    uint8 GarrPlotID;
    uint8 GarrBuildingID;
};

struct GarrPlotInstanceEntry
{
    uint32 ID;
    char const* Name;
    uint8 GarrPlotID;
};

struct GarrSiteLevelEntry
{
    uint32 ID;
    DBCPosition2D TownHallUiPos;
    uint16 MapID;
    uint16 UiTextureKitID;
    uint16 UpgradeMovieID;
    uint16 UpgradeCost;
    uint16 UpgradeGoldCost;
    uint8 GarrLevel;
    uint8 GarrSiteID;
    uint8 MaxBuildingLevel;
};

struct GarrSiteLevelPlotInstEntry
{
    uint32 ID;
    DBCPosition2D UiMarkerPos;
    uint16 GarrSiteLevelID;
    uint8 GarrPlotInstanceID;
    uint8 UiMarkerSize;
};

struct GemPropertiesEntry
{
    uint32 ID;
    uint32 Type;
    uint16 EnchantId;
    uint16 MinItemLevel;
};

struct GlyphBindableSpellEntry
{
    uint32 ID;
    int32 SpellID;
    int16 GlyphPropertiesID;
};

struct GlyphPropertiesEntry
{
    uint32 ID;
    uint32 SpellID;
    uint16 SpellIconID;
    uint8 GlyphType;
    uint8 GlyphExclusiveCategoryID;
};

struct GlyphRequiredSpecEntry
{
    uint32 ID;
    uint16 ChrSpecializationID;
    uint16 GlyphPropertiesID;
};

struct GuildColorBackgroundEntry
{
    uint32 ID;
    uint8 Red;
    uint8 Green;
    uint8 Blue;
};

struct GuildColorBorderEntry
{
    uint32 ID;
    uint8 Red;
    uint8 Green;
    uint8 Blue;
};

struct GuildColorEmblemEntry
{
    uint32 ID;
    uint8 Red;
    uint8 Green;
    uint8 Blue;
};

struct GuildPerkSpellsEntry
{
    uint32 ID;
    int32 SpellID;
};

struct HeirloomEntry
{
    LocalizedString SourceText;
    int32 ItemID;
    int32 LegacyItemID;
    int32 LegacyUpgradedItemID;
    int32 StaticUpgradedItemID;
    std::array<int32, 3> UpgradeItemID;
    std::array<uint16, 3> UpgradeItemBonusListID;
    uint8 Flags;
    int8 SourceTypeEnum;
    uint32 ID;
};

#define MAX_HOLIDAY_DURATIONS 10
#define MAX_HOLIDAY_DATES 16
#define MAX_HOLIDAY_FLAGS 10

struct HolidaysEntry
{
    uint32 ID;
    std::array<uint32, MAX_HOLIDAY_DATES> Date;                                 // dates in unix time starting at January, 1, 2000
    std::array<uint16, MAX_HOLIDAY_DURATIONS> Duration;
    uint16 Region;
    uint8 Looping;
    std::array<uint8, MAX_HOLIDAY_FLAGS> CalendarFlags;
    uint8 Priority;
    int8 CalendarFilterType;
    uint8 Flags;
    uint32 HolidayNameID;
    uint32 HolidayDescriptionID;
    std::array<int32, 3> TextureFileDataID;
};

struct ImportPriceArmorEntry
{
    uint32 ID;
    float ClothModifier;
    float LeatherModifier;
    float ChainModifier;
    float PlateModifier;
};

struct ImportPriceQualityEntry
{
    uint32 ID;
    float Data;
};

struct ImportPriceShieldEntry
{
    uint32 ID;
    float Data;
};

struct ImportPriceWeaponEntry
{
    uint32 ID;
    float Data;
};

struct ItemEntry
{
    uint32 ID;
    int32 IconFileDataID;
    uint8 ClassID;
    uint8 SubclassID;
    int8 SoundOverrideSubclassID;
    uint8 Material;
    uint8 InventoryType;
    uint8 SheatheType;
    uint8 ItemGroupSoundsID;
};

struct ItemAppearanceEntry
{
    uint32 ID;
    int32 ItemDisplayInfoID;
    int32 DefaultIconFileDataID;
    int32 UiOrder;
    uint8 DisplayType;
};

struct ItemArmorQualityEntry
{
    uint32 ID;
    std::array<float, 7> Qualitymod;
    int16 ItemLevel;
};

struct ItemArmorShieldEntry
{
    uint32 ID;
    std::array<float, 7> Quality;
    uint16 ItemLevel;
};

struct ItemArmorTotalEntry
{
    uint32 ID;
    float Cloth;
    float Leather;
    float Mail;
    float Plate;
    int16 ItemLevel;
};

struct ItemBagFamilyEntry
{
    uint32 ID;
    LocalizedString Name;
};

struct ItemBonusEntry
{
    uint32 ID;
    std::array<int32, 3> Value;
    uint16 ParentItemBonusListID;
    uint8 Type;
    uint8 OrderIndex;
};

struct ItemBonusListLevelDeltaEntry
{
    int16 ItemLevelDelta;
    uint32 ID;
};

struct ItemBonusTreeNodeEntry
{
    uint32 ID;
    uint16 ChildItemBonusTreeID;
    uint16 ChildItemBonusListID;
    uint16 ChildItemLevelSelectorID;
    uint8 ItemContext;
    uint16 ParentItemBonusTreeID;
};

struct ItemChildEquipmentEntry
{
    uint32 ID;
    int32 ChildItemID;
    uint8 ChildItemEquipSlot;
    int32 ParentItemID;
};

struct ItemClassEntry
{
    uint32 ID;
    LocalizedString ClassName;
    float PriceModifier;
    int8 ClassID;
    uint8 Flags;
};

struct ItemCurrencyCostEntry
{
    uint32 ID;
    int32 ItemID;
};

struct ItemDamageAmmoEntry
{
    uint32 ID;
    std::array<float, 7> Quality;
    uint16 ItemLevel;
};

struct ItemDamageOneHandEntry
{
    uint32 ID;
    std::array<float, 7> Quality;
    uint16 ItemLevel;
};

struct ItemDamageOneHandCasterEntry
{
    uint32 ID;
    std::array<float, 7> Quality;
    uint16 ItemLevel;
};

struct ItemDamageTwoHandEntry
{
    uint32 ID;
    std::array<float, 7> Quality;
    uint16 ItemLevel;
};

struct ItemDamageTwoHandCasterEntry
{
    uint32 ID;
    std::array<float, 7> Quality;
    uint16 ItemLevel;
};

struct ItemDisenchantLootEntry
{
    uint32 ID;
    uint16 MinLevel;
    uint16 MaxLevel;
    uint16 SkillRequired;
    int8 Subclass;
    uint8 Quality;
    int8 ExpansionID;
    uint8 Class;
};

struct ItemEffectEntry
{
    uint32 ID;
    int32 SpellID;
    int32 CoolDownMSec;
    int32 CategoryCoolDownMSec;
    int16 Charges;
    uint16 SpellCategoryID;
    uint16 ChrSpecializationID;
    uint8 LegacySlotIndex;
    int8 TriggerType;
    int32 ParentItemID;
};

#define MAX_ITEM_EXT_COST_ITEMS         5
#define MAX_ITEM_EXT_COST_CURRENCIES    5

struct ItemExtendedCostEntry
{
    uint32 ID;
    std::array<int32, MAX_ITEM_EXT_COST_ITEMS> ItemID;                          // required item id
    std::array<uint32, MAX_ITEM_EXT_COST_CURRENCIES> CurrencyCount;             // required curency count
    std::array<uint16, MAX_ITEM_EXT_COST_ITEMS> ItemCount;                      // required count of 1st item
    uint16 RequiredArenaRating;                                     // required personal arena rating
    std::array<uint16, MAX_ITEM_EXT_COST_CURRENCIES> CurrencyID;                // required curency id
    uint8 ArenaBracket;                                             // arena slot restrictions (min slot value)
    uint8 MinFactionID;
    uint8 MinReputation;
    uint8 Flags;
    uint8 RequiredAchievement;
};

struct ItemLevelSelectorEntry
{
    uint32 ID;
    uint16 MinItemLevel;
    uint16 ItemLevelSelectorQualitySetID;
};

struct ItemLevelSelectorQualityEntry
{
    uint32 ID;
    int32 QualityItemBonusListID;
    int8 Quality;
    int16 ParentILSQualitySetID;
};

struct ItemLevelSelectorQualitySetEntry
{
    uint32 ID;
    int16 IlvlRare;
    int16 IlvlEpic;
};

struct ItemLimitCategoryEntry
{
    uint32 ID;
    LocalizedString Name;
    uint8 Quantity;
    uint8 Flags;
};

struct ItemLimitCategoryConditionEntry
{
    uint32 ID;
    int8 AddQuantity;
    uint32 PlayerConditionID;
    int32 ParentItemLimitCategoryID;
};

struct ItemModifiedAppearanceEntry
{
    int32 ItemID;
    uint32 ID;
    uint8 ItemAppearanceModifierID;
    uint16 ItemAppearanceID;
    uint8 OrderIndex;
    int8 TransmogSourceTypeEnum;
};

struct ItemModifiedAppearanceExtraEntry
{
    uint32 ID;
    int32 IconFileDataID;
    int32 UnequippedIconFileDataID;
    uint8 SheatheType;
    uint8 DisplayWeaponSubclassID;
    uint8 DisplayInventoryType;
};

struct ItemNameDescriptionEntry
{
    uint32 ID;
    LocalizedString Description;
    int32 Color;
};

struct ItemPriceBaseEntry
{
    uint32 ID;
    float Armor;
    float Weapon;
    uint16 ItemLevel;
};

#define MAX_ITEM_RANDOM_PROPERTIES 5

struct ItemRandomPropertiesEntry
{
    uint32 ID;
    LocalizedString Name;
    std::array<uint16, MAX_ITEM_RANDOM_PROPERTIES> Enchantment;
};

struct ItemRandomSuffixEntry
{
    uint32 ID;
    LocalizedString Name;
    std::array<uint16, MAX_ITEM_RANDOM_PROPERTIES> Enchantment;
    std::array<uint16, MAX_ITEM_RANDOM_PROPERTIES> AllocationPct;
};

struct ItemSearchNameEntry
{
    Trinity::RaceMask<int64> AllowableRace;
    LocalizedString Display;
    uint32 ID;
    std::array<int32, 3> Flags;
    uint16 ItemLevel;
    uint8 OverallQualityID;
    uint8 ExpansionID;
    int8 RequiredLevel;
    uint16 MinFactionID;
    uint8 MinReputation;
    int32 AllowableClass;
    uint16 RequiredSkill;
    uint16 RequiredSkillRank;
    uint32 RequiredAbility;
};

#define MAX_ITEM_SET_ITEMS 17

struct ItemSetEntry
{
    uint32 ID;
    LocalizedString Name;
    std::array<uint32, MAX_ITEM_SET_ITEMS> ItemID;
    uint16 RequiredSkillRank;
    uint32 RequiredSkill;
    uint32 SetFlags;
};

struct ItemSetSpellEntry
{
    uint32 ID;
    uint32 SpellID;
    uint16 ChrSpecID;
    uint8 Threshold;
    uint16 ItemSetID;
};

struct ItemSparseEntry
{
    uint32 ID;
    Trinity::RaceMask<int64> AllowableRace;
    LocalizedString Display;
    LocalizedString Display1;
    LocalizedString Display2;
    LocalizedString Display3;
    LocalizedString Description;
    std::array<int32, MAX_ITEM_PROTO_FLAGS> Flags;
    float PriceRandomValue;
    float PriceVariance;
    uint32 VendorStackCount;
    uint32 BuyPrice;
    uint32 SellPrice;
    uint32 RequiredAbility;
    int32 MaxCount;
    int32 Stackable;
    std::array<int32, MAX_ITEM_PROTO_STATS> StatPercentEditor;
    std::array<float, MAX_ITEM_PROTO_STATS> StatPercentageOfSocket;
    float ItemRange;
    uint32 BagFamily;
    float QualityModifier;
    uint32 DurationInInventory;
    float DmgVariance;
    int16 AllowableClass;
    uint16 ItemLevel;
    uint16 RequiredSkill;
    uint16 RequiredSkillRank;
    uint16 MinFactionID;
    std::array<int16, MAX_ITEM_PROTO_STATS> ItemStatValue;
    uint16 ScalingStatDistributionID;
    uint16 ItemDelay;
    uint16 PageID;
    uint16 StartQuestID;
    uint16 LockID;
    uint16 RandomSelect;
    uint16 ItemRandomSuffixGroupID;
    uint16 ItemSet;
    uint16 ZoneBound;
    uint16 InstanceBound;
    uint16 TotemCategoryID;
    uint16 SocketMatchEnchantmentId;
    uint16 GemProperties;
    uint16 LimitCategory;
    uint16 RequiredHoliday;
    uint16 RequiredTransmogHoliday;
    uint16 ItemNameDescriptionID;
    uint8 OverallQualityID;
    uint8 InventoryType;
    int8 RequiredLevel;
    uint8 RequiredPVPRank;
    uint8 RequiredPVPMedal;
    uint8 MinReputation;
    uint8 ContainerSlots;
    std::array<int8, MAX_ITEM_PROTO_STATS> StatModifierBonusStat;
    uint8 DamageDamageType;
    uint8 Bonding;
    uint8 LanguageID;
    uint8 PageMaterialID;
    uint8 Material;
    uint8 SheatheType;
    std::array<uint8, MAX_ITEM_PROTO_SOCKETS> SocketType;
    uint8 SpellWeightCategory;
    uint8 SpellWeight;
    uint8 ArtifactID;
    uint8 ExpansionID;
};

struct ItemSpecEntry
{
    uint32 ID;
    uint16 SpecializationID;
    uint8 MinLevel;
    uint8 MaxLevel;
    uint8 ItemType;
    uint8 PrimaryStat;
    uint8 SecondaryStat;
};

struct ItemSpecOverrideEntry
{
    uint32 ID;
    uint16 SpecID;
    int32 ItemID;
};

struct ItemUpgradeEntry
{
    uint32 ID;
    uint32 CurrencyAmount;
    uint16 PrerequisiteID;
    uint16 CurrencyType;
    uint8 ItemUpgradePathID;
    uint8 ItemLevelIncrement;
};

struct ItemXBonusTreeEntry
{
    uint32 ID;
    uint16 ItemBonusTreeID;
    int32 ItemID;
};

struct JournalEncounterEntry
{
    uint32 ID;
    LocalizedString Name;
    LocalizedString Description;
    DBCPosition2D Map;
    uint16 DungeonMapID;
    uint16 WorldMapAreaID;
    uint16 FirstSectionID;
    uint16 JournalInstanceID;
    int8 DifficultyMask;
    uint8 Flags;
    uint32 OrderIndex;
    uint32 MapDisplayConditionID;
};

struct JournalEncounterSectionEntry
{
    uint32 ID;
    LocalizedString Title;
    LocalizedString BodyText;
    uint32 IconCreatureDisplayInfoID;
    int32 UiModelSceneID;
    int32 SpellID;
    int32 IconFileDataID;
    uint16 JournalEncounterID;
    uint16 NextSiblingSectionID;
    uint16 FirstChildSectionID;
    uint16 ParentSectionID;
    uint16 Flags;
    uint16 IconFlags;
    uint8 OrderIndex;
    uint8 Type;
    int8 DifficultyMask;
};

struct JournalInstanceEntry
{
    LocalizedString Name;
    LocalizedString Description;
    int32 ButtonFileDataID;
    int32 ButtonSmallFileDataID;
    int32 BackgroundFileDataID;
    int32 LoreFileDataID;
    uint16 MapID;
    uint16 AreaID;
    uint8 OrderIndex;
    uint8 Flags;
    uint32 ID;
};

struct JournalTierEntry
{
    uint32 ID;
    LocalizedString Name;
};

#define KEYCHAIN_SIZE   32

struct KeychainEntry
{
    uint32 ID;
    std::array<uint8, KEYCHAIN_SIZE> Key;
};

struct KeystoneAffixEntry
{
    uint32 ID;
    LocalizedString Name;
    LocalizedString Description;
    int32 FiledataID;
};

struct LanguageWordsEntry
{
    uint32 ID;
    char const* Word;
    uint32 LanguageID;
};

struct LanguagesEntry
{
    LocalizedString Name;
    uint32 ID;
};

struct LFGDungeonsEntry
{
    uint32 ID;
    LocalizedString Name;
    LocalizedString Description;
    int32 Flags;
    float MinGear;
    uint16 MaxLevel;
    uint16 TargetLevelMax;
    int16 MapID;
    uint16 RandomID;
    uint16 ScenarioID;
    uint16 FinalEncounterID;
    uint16 BonusReputationAmount;
    uint16 MentorItemLevel;
    uint16 RequiredPlayerConditionId;
    uint8 MinLevel;
    uint8 TargetLevel;
    uint8 TargetLevelMin;
    uint8 DifficultyID;
    uint8 TypeID;
    int8 Faction;
    uint8 ExpansionLevel;
    uint8 OrderIndex;
    uint8 GroupID;
    uint8 CountTank;
    uint8 CountHealer;
    uint8 CountDamage;
    uint8 MinCountTank;
    uint8 MinCountHealer;
    uint8 MinCountDamage;
    uint8 Subtype;
    uint8 MentorCharLevel;
    int32 IconTextureFileID;
    int32 RewardsBgTextureFileID;
    int32 PopupBgTextureFileID;

    // Helpers
    uint32 Entry() const { return ID + (TypeID << 24); }
};

struct LightEntry
{
    uint32 ID;
    DBCPosition3D GameCoords;
    float GameFalloffStart;
    float GameFalloffEnd;
    int16 ContinentID;
    std::array<uint16, 8> LightParamsID;
};

struct LiquidTypeEntry
{
    uint32 ID;
    char const* Name;
    std::array<char const*, 6> Texture;
    uint32 SpellID;
    float MaxDarkenDepth;
    float FogDarkenIntensity;
    float AmbDarkenIntensity;
    float DirDarkenIntensity;
    float ParticleScale;
    std::array<int32, 2> Color;
    std::array<float, 18> Float;
    std::array<uint32, 4> Int;
    uint16 Flags;
    uint16 LightID;
    uint8 SoundBank;                                                // used to be "type", maybe needs fixing (works well for now)
    uint8 ParticleMovement;
    uint8 ParticleTexSlots;
    uint8 MaterialID;
    std::array<uint8, 6> FrameCountTexture;
    uint32 SoundID;
};

#define MAX_LOCK_CASE 8

struct LockEntry
{
    uint32 ID;
    std::array<int32, MAX_LOCK_CASE> Index;
    std::array<uint16, MAX_LOCK_CASE> Skill;
    std::array<uint8, MAX_LOCK_CASE> Type;
    std::array<uint8, MAX_LOCK_CASE> Action;
};

struct MailTemplateEntry
{
    uint32 ID;
    LocalizedString Body;
};

struct MapEntry
{
    uint32 ID;
    char const* Directory;
    LocalizedString MapName;
    LocalizedString MapDescription0;                               // Horde
    LocalizedString MapDescription1;                               // Alliance
    LocalizedString PvpShortDescription;
    LocalizedString PvpLongDescription;
    std::array<int32, 2> Flags;
    float MinimapIconScale;
    DBCPosition2D Corpse;                                           // entrance coordinates in ghost mode  (in most cases = normal entrance)
    uint16 AreaTableID;
    int16 LoadingScreenID;
    int16 CorpseMapID;                                              // map_id of entrance map in ghost mode (continent always and in most cases = normal entrance)
    int16 TimeOfDayOverride;
    int16 ParentMapID;
    int16 CosmeticParentMapID;
    int16 WindSettingsID;
    uint8 InstanceType;
    uint8 MapType;
    uint8 ExpansionID;
    uint8 MaxPlayers;
    uint8 TimeOffset;

    // Helpers
    uint8 Expansion() const { return ExpansionID; }

    bool IsDungeon() const { return (InstanceType == MAP_INSTANCE || InstanceType == MAP_RAID || InstanceType == MAP_SCENARIO) && !IsGarrison(); }
    bool IsNonRaidDungeon() const { return InstanceType == MAP_INSTANCE; }
    bool Instanceable() const { return InstanceType == MAP_INSTANCE || InstanceType == MAP_RAID || InstanceType == MAP_BATTLEGROUND || InstanceType == MAP_ARENA || InstanceType == MAP_SCENARIO; }
    bool IsRaid() const { return InstanceType == MAP_RAID; }
    bool IsBattleground() const { return InstanceType == MAP_BATTLEGROUND; }
    bool IsBattleArena() const { return InstanceType == MAP_ARENA; }
    bool IsBattlegroundOrArena() const { return InstanceType == MAP_BATTLEGROUND || InstanceType == MAP_ARENA; }
    bool IsScenario() const { return InstanceType == MAP_SCENARIO; }
    bool IsWorldMap() const { return InstanceType == MAP_COMMON; }

    bool GetEntrancePos(int32& mapid, float& x, float& y) const
    {
        if (CorpseMapID < 0)
            return false;

        mapid = CorpseMapID;
        x = Corpse.X;
        y = Corpse.Y;
        return true;
    }

    bool IsContinent() const
    {
        return ID == 0 || ID == 1 || ID == 530 || ID == 571 || ID == 870 || ID == 1116 || ID == 1220;
    }

    bool IsDynamicDifficultyMap() const { return (Flags[0] & MAP_FLAG_CAN_TOGGLE_DIFFICULTY) != 0; }
    bool IsGarrison() const { return (Flags[0] & MAP_FLAG_GARRISON) != 0; }
};

struct MapChallengeModeEntry
{
    LocalizedString Name;
    uint32 ID;
    uint16 MapID;
    std::array<int16, 3> CriteriaCount;
    uint8 Flags;
};

struct MapDifficultyEntry
{
    uint32 ID;
    LocalizedString Message;                               // m_message_lang (text showed when transfer to map failed)
    uint8 DifficultyID;
    uint8 ResetInterval;
    uint8 MaxPlayers;
    uint8 LockID;
    uint8 Flags;
    uint8 ItemContext;
    uint32 ItemContextPickerID;
    uint16 MapID;

    uint32 GetRaidDuration() const
    {
        if (ResetInterval == 1)
            return 86400;
        if (ResetInterval == 2)
            return 604800;
        return 0;
    }
};

struct MapDifficultyXConditionEntry
{
    int32 ID;
    LocalizedString FailureDescription;
    uint32 PlayerConditionID;
    int32 OrderIndex;
    uint32 MapDifficultyID;
};

struct ModifierTreeEntry
{
    uint32 ID;
    int32 Asset;
    int32 SecondaryAsset;
    uint32 Parent;
    uint8 Type;
    int8 TertiaryAsset;
    int8 Operator;
    int8 Amount;
};

struct MountEntry
{
    LocalizedString Name;
    LocalizedString Description;
    LocalizedString SourceText;
    int32 SourceSpellID;
    float MountFlyRideHeight;
    uint16 MountTypeID;
    uint16 Flags;
    int8 SourceTypeEnum;
    uint32 ID;
    uint32 PlayerConditionID;
    int32 UiModelSceneID;

    bool IsSelfMount() const { return (Flags & MOUNT_FLAG_SELF_MOUNT) != 0; }
};

struct MountCapabilityEntry
{
    int32 ReqSpellKnownID;
    int32 ModSpellAuraID;
    uint16 ReqRidingSkill;
    uint16 ReqAreaID;
    int16 ReqMapID;
    uint8 Flags;
    uint32 ID;
    uint32 ReqSpellAuraID;
};

struct MountTypeXCapabilityEntry
{
    uint32 ID;
    uint16 MountTypeID;
    uint16 MountCapabilityID;
    uint8 OrderIndex;
};

struct MountXDisplayEntry
{
    uint32 ID;
    int32 CreatureDisplayInfoID;
    uint32 PlayerConditionID;
    int32 MountID;
};

struct MovieEntry
{
    uint32 ID;
    uint32 AudioFileDataID;
    uint32 SubtitleFileDataID;
    uint8 Volume;
    uint8 KeyID;
};

struct NameGenEntry
{
    uint32 ID;
    char const* Name;
    uint8 RaceID;
    uint8 Sex;
};

struct NamesProfanityEntry
{
    uint32 ID;
    char const* Name;
    int8 Language;
};

struct NamesReservedEntry
{
    uint32 ID;
    char const* Name;
};

struct NamesReservedLocaleEntry
{
    uint32 ID;
    char const* Name;
    uint8 LocaleMask;
};

#define MAX_OVERRIDE_SPELL 10

struct OverrideSpellDataEntry
{
    uint32 ID;
    std::array<int32, MAX_OVERRIDE_SPELL> Spells;
    int32 PlayerActionBarFileDataID;
    uint8 Flags;
};

struct ParagonReputationEntry
{
    uint32 ID;
    int32 LevelThreshold;
    int32 QuestID;
    uint32 FactionID;
};

struct PhaseEntry
{
    uint32 ID;
    uint16 Flags;

    EnumFlag<PhaseEntryFlags> GetFlags() const { return static_cast<PhaseEntryFlags>(Flags); }
};

struct PhaseXPhaseGroupEntry
{
    uint32 ID;
    uint16 PhaseID;
    uint16 PhaseGroupID;
};

struct PlayerConditionEntry
{
    Trinity::RaceMask<int64> RaceMask;
    LocalizedString FailureDescription;
    uint32 ID;
    uint8 Flags;
    uint16 MinLevel;
    uint16 MaxLevel;
    int32 ClassMask;
    int8 Gender;
    int8 NativeGender;
    uint32 SkillLogic;
    uint8 LanguageID;
    uint8 MinLanguage;
    int32 MaxLanguage;
    uint16 MaxFactionID;
    uint8 MaxReputation;
    uint32 ReputationLogic;
    int8 CurrentPvpFaction;
    uint8 MinPVPRank;
    uint8 MaxPVPRank;
    uint8 PvpMedal;
    uint32 PrevQuestLogic;
    uint32 CurrQuestLogic;
    uint32 CurrentCompletedQuestLogic;
    uint32 SpellLogic;
    uint32 ItemLogic;
    uint8 ItemFlags;
    uint32 AuraSpellLogic;
    uint16 WorldStateExpressionID;
    uint8 WeatherID;
    uint8 PartyStatus;
    uint8 LifetimeMaxPVPRank;
    uint32 AchievementLogic;
    uint32 LfgLogic;
    uint32 AreaLogic;
    uint32 CurrencyLogic;
    uint16 QuestKillID;
    uint32 QuestKillLogic;
    int8 MinExpansionLevel;
    int8 MaxExpansionLevel;
    int8 MinExpansionTier;
    int8 MaxExpansionTier;
    uint8 MinGuildLevel;
    uint8 MaxGuildLevel;
    uint8 PhaseUseFlags;
    uint16 PhaseID;
    uint32 PhaseGroupID;
    int32 MinAvgItemLevel;
    int32 MaxAvgItemLevel;
    uint16 MinAvgEquippedItemLevel;
    uint16 MaxAvgEquippedItemLevel;
    int8 ChrSpecializationIndex;
    int8 ChrSpecializationRole;
    int8 PowerType;
    uint8 PowerTypeComp;
    uint8 PowerTypeValue;
    uint32 ModifierTreeID;
    int32 WeaponSubclassMask;
    std::array<uint16, 4> SkillID;
    std::array<uint16, 4> MinSkill;
    std::array<uint16, 4> MaxSkill;
    std::array<uint32, 3> MinFactionID;
    std::array<uint8, 3> MinReputation;
    std::array<uint16, 4> PrevQuestID;
    std::array<uint16, 4> CurrQuestID;
    std::array<uint16, 4> CurrentCompletedQuestID;
    std::array<int32, 4> SpellID;
    std::array<int32, 4> ItemID;
    std::array<uint32, 4> ItemCount;
    std::array<uint16, 2> Explored;
    std::array<uint32, 2> Time;
    std::array<int32, 4> AuraSpellID;
    std::array<uint8, 4> AuraStacks;
    std::array<uint16, 4> Achievement;
    std::array<uint8, 4> LfgStatus;
    std::array<uint8, 4> LfgCompare;
    std::array<uint32, 4> LfgValue;
    std::array<uint16, 4> AreaID;
    std::array<uint32, 4> CurrencyID;
    std::array<uint32, 4> CurrencyCount;
    std::array<uint32, 6> QuestKillMonster;
    std::array<int32, 2> MovementFlags;
};

struct PowerDisplayEntry
{
    uint32 ID;
    char const* GlobalStringBaseTag;
    uint8 ActualType;
    uint8 Red;
    uint8 Green;
    uint8 Blue;
};

struct PowerTypeEntry
{
    uint32 ID;
    char const* NameGlobalStringTag;
    char const* CostGlobalStringTag;
    float RegenPeace;
    float RegenCombat;
    int16 MaxBasePower;
    int16 RegenInterruptTimeMS;
    int16 Flags;
    int8 PowerTypeEnum;
    int8 MinPower;
    int8 CenterPower;
    int8 DefaultPower;
    int8 DisplayModifier;
};

struct PrestigeLevelInfoEntry
{
    uint32 ID;
    LocalizedString Name;
    int32 BadgeTextureFileDataID;
    uint8 PrestigeLevel;
    uint8 Flags;

    bool IsDisabled() const { return (Flags & PRESTIGE_FLAG_DISABLED) != 0; }
};

struct PVPDifficultyEntry
{
    uint32 ID;
    uint8 RangeIndex;
    uint8 MinLevel;
    uint8 MaxLevel;
    uint16 MapID;

    // helpers
    BattlegroundBracketId GetBracketId() const { return BattlegroundBracketId(RangeIndex); }
};

struct PVPItemEntry
{
    uint32 ID;
    int32 ItemID;
    uint8 ItemLevelDelta;
};

struct PvpRewardEntry
{
    uint32 ID;
    int32 HonorLevel;
    int32 PrestigeLevel;
    int32 RewardPackID;
};

struct PvpTalentEntry
{
    uint32 ID;
    LocalizedString Description;
    int32 SpellID;
    int32 OverridesSpellID;
    int32 ActionBarSpellID;
    int32 TierID;
    int32 ColumnIndex;
    int32 Flags;
    int32 ClassID;
    int32 SpecID;
    int32 Role;
};

struct PvpTalentUnlockEntry
{
    uint32 ID;
    int32 TierID;
    int32 ColumnIndex;
    int32 HonorLevel;
};

struct QuestFactionRewardEntry
{
    uint32 ID;
    std::array<int16, 10> Difficulty;
};

struct QuestInfoEntry
{
    int32 ID;
    LocalizedString InfoName;
    uint16 Profession;
    uint8 Type;
    uint8 Modifiers;
};

struct QuestLineXQuestEntry
{
    uint32 ID;
    uint16 QuestLineID;
    uint16 QuestID;
    uint8 OrderIndex;
};

struct QuestMoneyRewardEntry
{
    uint32 ID;
    std::array<uint32, 10> Difficulty;
};

struct QuestPackageItemEntry
{
    uint32 ID;
    int32 ItemID;
    uint16 PackageID;
    uint8 DisplayType;
    uint32 ItemQuantity;
};

struct QuestSortEntry
{
    uint32 ID;
    LocalizedString SortName;
    int8 UiOrderIndex;
};

struct QuestV2Entry
{
    uint32 ID;
    uint16 UniqueBitFlag;
};

struct QuestXPEntry
{
    uint32 ID;
    std::array<uint16, 10> Difficulty;
};

struct RandPropPointsEntry
{
    uint32 ID;
    std::array<uint32, 5> Epic;
    std::array<uint32, 5> Superior;
    std::array<uint32, 5> Good;
};

struct RewardPackEntry
{
    uint32 ID;
    uint32 Money;
    float ArtifactXPMultiplier;
    int8 ArtifactXPDifficulty;
    uint8 ArtifactXPCategoryID;
    int32 CharTitleID;
    uint32 TreasurePickerID;
};

struct RewardPackXCurrencyTypeEntry
{
    uint32 ID;
    uint32 CurrencyTypeID;
    int32 Quantity;
    uint32 RewardPackID;
};

struct RewardPackXItemEntry
{
    uint32 ID;
    int32 ItemID;
    int32 ItemQuantity;
    int32 RewardPackID;
};

struct RulesetItemUpgradeEntry
{
    uint32 ID;
    int32 ItemID;
    uint16 ItemUpgradeID;
};

struct SandboxScalingEntry
{
    uint32 ID;
    int32 MinLevel;
    int32 MaxLevel;
    int32 Flags;
};

struct ScalingStatDistributionEntry
{
    uint32 ID;
    uint16 PlayerLevelToItemLevelCurveID;
    int32 MinLevel;
    int32 MaxLevel;
};

struct ScenarioEntry
{
    uint32 ID;
    LocalizedString Name;
    uint16 AreaTableID;
    uint8 Flags;
    uint8 Type;
};

struct ScenarioStepEntry
{
    uint32 ID;
    LocalizedString Description;
    LocalizedString Title;
    uint16 ScenarioID;
    uint16 Supersedes;                                              // Used in conjunction with Proving Grounds scenarios, when sequencing steps (Not using step order?)
    uint16 RewardQuestID;
    uint8 OrderIndex;
    uint8 Flags;
    uint32 Criteriatreeid;
    int32 RelatedStep;                                              // Bonus step can only be completed if scenario is in the step specified in this field

    // helpers
    bool IsBonusObjective() const
    {
        return Flags & SCENARIO_STEP_FLAG_BONUS_OBJECTIVE;
    }
};

struct SceneScriptEntry
{
    uint32 ID;
    uint16 FirstSceneScriptID;
    uint16 NextSceneScriptID;
};

struct SceneScriptGlobalTextEntry
{
    uint32 ID;
    char const* Name;
    char const* Script;
};

struct SceneScriptPackageEntry
{
    uint32 ID;
    char const* Name;
};

struct SceneScriptTextEntry
{
    uint32 ID;
    char const* Name;
    char const* Script;
};

struct SkillLineEntry
{
    uint32 ID;
    LocalizedString DisplayName;
    LocalizedString Description;
    LocalizedString AlternateVerb;
    uint16 Flags;
    int8 CategoryID;
    int8 CanLink;
    int32 SpellIconFileID;
    uint32 ParentSkillLineID;

    EnumFlag<SkillLineFlags> GetFlags() const { return static_cast<SkillLineFlags>(Flags); }
};

struct SkillLineAbilityEntry
{
    Trinity::RaceMask<int64> RaceMask;
    uint32 ID;
    int32 Spell;
    int32 SupercedesSpell;
    int16 SkillLine;
    int16 TrivialSkillLineRankHigh;
    int16 TrivialSkillLineRankLow;
    int16 UniqueBit;
    int16 TradeSkillCategoryID;
    int8 NumSkillUps;
    int32 ClassMask;
    int16 MinSkillLineRank;
    int8 AcquireMethod;
    int8 Flags;
};

struct SkillRaceClassInfoEntry
{
    uint32 ID;
    Trinity::RaceMask<int64> RaceMask;
    int16 SkillID;
    uint16 Flags;
    int16 SkillTierID;
    int8 Availability;
    int8 MinLevel;
    int32 ClassMask;
};

struct SoundKitEntry
{
    uint32 ID;
    float VolumeFloat;
    float MinDistance;
    float DistanceCutoff;
    uint16 Flags;
    uint16 SoundEntriesAdvancedID;
    uint8 SoundType;
    uint8 DialogType;
    uint8 EAXDef;
    float VolumeVariationPlus;
    float VolumeVariationMinus;
    float PitchVariationPlus;
    float PitchVariationMinus;
    float PitchAdjust;
    uint16 BusOverwriteID;
    uint8 MaxInstances;
};

struct SpecializationSpellsEntry
{
    LocalizedString Description;
    int32 SpellID;
    int32 OverridesSpellID;
    uint16 SpecID;
    uint8 DisplayOrder;
    uint32 ID;
};

struct SpellEntry
{
    uint32 ID;
    LocalizedString Name;
    LocalizedString NameSubtext;
    LocalizedString Description;
    LocalizedString AuraDescription;
};

struct SpellAuraOptionsEntry
{
    uint32 ID;
    int32 ProcCharges;
    int32 ProcTypeMask;
    int32 ProcCategoryRecovery;
    uint16 CumulativeAura;
    uint16 SpellProcsPerMinuteID;
    uint8 DifficultyID;
    uint8 ProcChance;
    int32 SpellID;
};

struct SpellAuraRestrictionsEntry
{
    uint32 ID;
    int32 CasterAuraSpell;
    int32 TargetAuraSpell;
    int32 ExcludeCasterAuraSpell;
    int32 ExcludeTargetAuraSpell;
    uint8 DifficultyID;
    uint8 CasterAuraState;
    uint8 TargetAuraState;
    uint8 ExcludeCasterAuraState;
    uint8 ExcludeTargetAuraState;
    int32 SpellID;
};

struct SpellCastTimesEntry
{
    uint32 ID;
    int32 Base;
    int32 Minimum;
    int16 PerLevel;
};

struct SpellCastingRequirementsEntry
{
    uint32 ID;
    int32 SpellID;
    uint16 MinFactionID;
    uint16 RequiredAreasID;
    uint16 RequiresSpellFocus;
    uint8 FacingCasterFlags;
    int8 MinReputation;
    uint8 RequiredAuraVision;
};

struct SpellCategoriesEntry
{
    uint32 ID;
    int16 Category;
    int16 StartRecoveryCategory;
    int16 ChargeCategory;
    uint8 DifficultyID;
    int8 DefenseType;
    int8 DispelType;
    int8 Mechanic;
    int8 PreventionType;
    int32 SpellID;
};

struct SpellCategoryEntry
{
    uint32 ID;
    LocalizedString Name;
    int32 ChargeRecoveryTime;
    int8 Flags;
    uint8 UsesPerWeek;
    int8 MaxCharges;
    int32 TypeMask;
};

struct SpellClassOptionsEntry
{
    uint32 ID;
    int32 SpellID;
    flag128 SpellClassMask;
    uint8 SpellClassSet;
    uint32 ModalNextSpell;
};

struct SpellCooldownsEntry
{
    uint32 ID;
    int32 CategoryRecoveryTime;
    int32 RecoveryTime;
    int32 StartRecoveryTime;
    uint8 DifficultyID;
    int32 SpellID;
};

struct SpellDurationEntry
{
    uint32 ID;
    int32 Duration;
    int32 MaxDuration;
    uint32 DurationPerLevel;
};

struct SpellEffectEntry
{
    uint32 ID;
    uint32 Effect;
    int32 EffectBasePoints;
    int32 EffectIndex;
    int32 EffectAura;
    int32 DifficultyID;
    float EffectAmplitude;
    int32 EffectAuraPeriod;
    float EffectBonusCoefficient;
    float EffectChainAmplitude;
    int32 EffectChainTargets;
    int32 EffectDieSides;
    int32 EffectItemType;
    int32 EffectMechanic;
    float EffectPointsPerResource;
    float EffectRealPointsPerLevel;
    int32 EffectTriggerSpell;
    float EffectPosFacing;
    int32 EffectAttributes;
    float BonusCoefficientFromAP;
    float PvpMultiplier;
    float Coefficient;
    float Variance;
    float ResourceCoefficient;
    float GroupSizeBasePointsCoefficient;
    flag128 EffectSpellClassMask;
    std::array<int32, 2> EffectMiscValue;
    std::array<uint32, 2> EffectRadiusIndex;
    std::array<uint32, 2> ImplicitTarget;
    int32 SpellID;

    SpellEffectAttributes GetEffectAttributes() const { return static_cast<SpellEffectAttributes>(EffectAttributes); }
};

struct SpellEquippedItemsEntry
{
    uint32 ID;
    int32 SpellID;
    int32 EquippedItemInvTypes;
    int32 EquippedItemSubclass;
    int8 EquippedItemClass;
};

struct SpellFocusObjectEntry
{
    uint32 ID;
    LocalizedString Name;
};

struct SpellInterruptsEntry
{
    uint32 ID;
    uint8 DifficultyID;
    int16 InterruptFlags;
    std::array<int32, MAX_SPELL_AURA_INTERRUPT_FLAGS> AuraInterruptFlags;
    std::array<int32, MAX_SPELL_AURA_INTERRUPT_FLAGS> ChannelInterruptFlags;
    int32 SpellID;
};

#define MAX_ITEM_ENCHANTMENT_EFFECTS 3

struct SpellItemEnchantmentEntry
{
    uint32 ID;
    LocalizedString Name;
    std::array<uint32, MAX_ITEM_ENCHANTMENT_EFFECTS> EffectArg;
    std::array<float, MAX_ITEM_ENCHANTMENT_EFFECTS> EffectScalingPoints;
    uint32 TransmogCost;
    uint32 IconFileDataID;
    std::array<int16, MAX_ITEM_ENCHANTMENT_EFFECTS> EffectPointsMin;
    uint16 ItemVisual;
    uint16 Flags;
    uint16 RequiredSkillID;
    uint16 RequiredSkillRank;
    uint16 ItemLevel;
    uint8 Charges;
    std::array<uint8, MAX_ITEM_ENCHANTMENT_EFFECTS> Effect;
    uint8 ConditionID;
    uint8 MinLevel;
    uint8 MaxLevel;
    int8 ScalingClass;
    int8 ScalingClassRestricted;
    uint32 TransmogUseConditionID;

    EnumFlag<SpellItemEnchantmentFlags> GetFlags() const { return static_cast<SpellItemEnchantmentFlags>(Flags); }
};

struct SpellItemEnchantmentConditionEntry
{
    uint32 ID;
    std::array<uint32, 5> LtOperand;
    std::array<uint8, 5> LtOperandType;
    std::array<uint8, 5> Operator;
    std::array<uint8, 5> RtOperandType;
    std::array<uint8, 5> RtOperand;
    std::array<uint8, 5> Logic;
};

struct SpellLabelEntry
{
    uint32 ID;
    uint32 LabelID;
    uint32 SpellID;
};

struct SpellLearnSpellEntry
{
    uint32 ID;
    int32 SpellID;
    int32 LearnSpellID;
    int32 OverridesSpellID;
};

struct SpellLevelsEntry
{
    uint32 ID;
    int16 BaseLevel;
    int16 MaxLevel;
    int16 SpellLevel;
    uint8 DifficultyID;
    uint8 MaxPassiveAuraLevel;
    int32 SpellID;
};

struct SpellMiscEntry
{
    uint32 ID;
    uint16 CastingTimeIndex;
    uint16 DurationIndex;
    uint16 RangeIndex;
    uint8 SchoolMask;
    int32 SpellIconFileDataID;
    float Speed;
    int32 ActiveIconFileDataID;
    float LaunchDelay;
    uint8 DifficultyID;
    std::array<int32, 14> Attributes;
    int32 SpellID;
};

struct SpellPowerEntry
{
    int32 ManaCost;
    float PowerCostPct;
    float PowerPctPerSecond;
    int32 RequiredAuraSpellID;
    float PowerCostMaxPct;
    uint8 OrderIndex;
    int8 PowerType;
    uint32 ID;
    int32 ManaCostPerLevel;
    int32 ManaPerSecond;
    uint32 OptionalCost;                                            // Spell uses [ManaCost, ManaCost+ManaCostAdditional] power - affects tooltip parsing as multiplier on SpellEffectEntry::EffectPointsPerResource
                                                                    //   only SPELL_EFFECT_WEAPON_DAMAGE_NOSCHOOL, SPELL_EFFECT_WEAPON_PERCENT_DAMAGE, SPELL_EFFECT_WEAPON_DAMAGE, SPELL_EFFECT_NORMALIZED_WEAPON_DMG
    uint32 PowerDisplayID;
    int32 AltPowerBarID;
    int32 SpellID;
};

struct SpellPowerDifficultyEntry
{
    uint8 DifficultyID;
    uint8 OrderIndex;
    uint32 ID;
};

struct SpellProcsPerMinuteEntry
{
    uint32 ID;
    float BaseProcRate;
    uint8 Flags;
};

struct SpellProcsPerMinuteModEntry
{
    uint32 ID;
    float Coeff;
    int16 Param;
    uint8 Type;
    uint16 SpellProcsPerMinuteID;
};

struct SpellRadiusEntry
{
    uint32 ID;
    float Radius;
    float RadiusPerLevel;
    float RadiusMin;
    float RadiusMax;
};

struct SpellRangeEntry
{
    uint32 ID;
    LocalizedString DisplayName;
    LocalizedString DisplayNameShort;
    std::array<float, 2> RangeMin;
    std::array<float, 2> RangeMax;
    uint8 Flags;
};

#define MAX_SPELL_REAGENTS 8

struct SpellReagentsEntry
{
    uint32 ID;
    int32 SpellID;
    std::array<int32, MAX_SPELL_REAGENTS> Reagent;
    std::array<int16, MAX_SPELL_REAGENTS> ReagentCount;
};

struct SpellReagentsCurrencyEntry
{
    uint32 ID;
    int32 SpellID;
    uint16 CurrencyTypesID;
    uint16 CurrencyCount;
};

struct SpellScalingEntry
{
    uint32 ID;
    int32 SpellID;
    int16 ScalesFromItemLevel;
    int32 Class;
    uint32 MinScalingLevel;
    uint32 MaxScalingLevel;
};

struct SpellShapeshiftEntry
{
    uint32 ID;
    int32 SpellID;
    std::array<int32, 2> ShapeshiftExclude;
    std::array<int32, 2> ShapeshiftMask;
    int8 StanceBarOrder;
};

#define MAX_SHAPESHIFT_SPELLS 8

struct SpellShapeshiftFormEntry
{
    uint32 ID;
    LocalizedString Name;
    float DamageVariance;
    int32 Flags;
    int16 CombatRoundTime;
    uint16 MountTypeID;
    int8 CreatureType;
    int8 BonusActionBar;
    int32 AttackIconFileID;
    std::array<uint32, 4> CreatureDisplayID;
    std::array<uint32, MAX_SHAPESHIFT_SPELLS> PresetSpellID;

    EnumFlag<SpellShapeshiftFormFlags> GetFlags() const { return static_cast<SpellShapeshiftFormFlags>(Flags); }
};

struct SpellTargetRestrictionsEntry
{
    uint32 ID;
    float ConeDegrees;
    float Width;
    int32 Targets;
    int16 TargetCreatureType;
    uint8 DifficultyID;
    uint8 MaxTargets;
    uint32 MaxTargetLevel;
    int32 SpellID;
};

#define MAX_SPELL_TOTEMS 2

struct SpellTotemsEntry
{
    uint32 ID;
    int32 SpellID;
    std::array<int32, MAX_SPELL_TOTEMS> Totem;
    std::array<uint16, MAX_SPELL_TOTEMS> RequiredTotemCategoryID;
};

struct SpellVisualEntry
{
    uint32 ID;
    std::array<float, 3> MissileCastOffset;
    std::array<float, 3> MissileImpactOffset;
    int32 Flags;
    uint16 SpellVisualMissileSetID;
    int8 MissileDestinationAttachment;
    int8 MissileAttachment;
    uint32 MissileCastPositionerID;
    uint32 MissileImpactPositionerID;
    int32 MissileTargetingKit;
    uint32 AnimEventSoundID;
    uint16 DamageNumberDelay;
    uint32 HostileSpellVisualID;
    uint32 CasterSpellVisualID;
    uint32 LowViolenceSpellVisualID;
};

struct SpellVisualEffectNameEntry
{
    uint32 ID;
    float EffectRadius;
    float BaseMissileSpeed;
    float Scale;
    float MinAllowedScale;
    float MaxAllowedScale;
    float Alpha;
    uint32 Flags;
    int32 GenericID;
    int32 TextureFileDataID;
    uint8 Type;
    int32 ModelFileDataID;
    uint32 RibbonQualityID;
    int32 DissolveEffectID;
};

struct SpellVisualMissileEntry
{
    int32 FollowGroundHeight;
    uint32 FollowGroundDropSpeed;
    uint32 Flags;
    std::array<float, 3> CastOffset;
    std::array<float, 3> ImpactOffset;
    uint16 SpellVisualEffectNameID;
    uint16 CastPositionerID;
    uint16 ImpactPositionerID;
    uint16 FollowGroundApproach;
    uint16 SpellMissileMotionID;
    int8 Attachment;
    int8 DestinationAttachment;
    uint32 ID;
    uint32 SoundEntriesID;
    uint32 AnimKitID;
    uint16 SpellVisualMissileSetID;
};

struct SpellVisualKitEntry
{
    uint32 ID;
    int32 Flags;
    float FallbackPriority;
    uint32 FallbackSpellVisualKitId;
    uint16 DelayMin;
    uint16 DelayMax;
};

struct SpellXSpellVisualEntry
{
    uint32 SpellVisualID;
    uint32 ID;
    float Probability;
    uint16 CasterPlayerConditionID;
    uint16 CasterUnitConditionID;
    uint16 ViewerPlayerConditionID;
    uint16 ViewerUnitConditionID;
    int32 SpellIconFileID;
    int32 ActiveIconFileID;
    uint8 Flags;
    uint8 DifficultyID;
    uint8 Priority;
    int32 SpellID;
};

struct SummonPropertiesEntry
{
    uint32 ID;
    int32 Flags;
    int32 Control;
    int32 Faction;
    int32 Title;
    int32 Slot;

    EnumFlag<SummonPropertiesFlags> GetFlags() const { return static_cast<SummonPropertiesFlags>(Flags); }
};

#define TACTKEY_SIZE 16

struct TactKeyEntry
{
    uint32 ID;
    std::array<uint8, TACTKEY_SIZE> Key;
};

struct TalentEntry
{
    uint32 ID;
    LocalizedString Description;
    uint32 SpellID;
    uint32 OverridesSpellID;
    uint16 SpecID;
    uint8 TierID;
    uint8 ColumnIndex;
    uint8 Flags;
    std::array<uint8, 2> CategoryMask;
    uint8 ClassID;
};

struct TaxiNodesEntry
{
    uint32 ID;
    LocalizedString Name;
    DBCPosition3D Pos;
    std::array<int32, 2> MountCreatureID;
    DBCPosition2D MapOffset;
    float Facing;
    DBCPosition2D FlightMapOffset;
    uint16 ContinentID;
    uint16 ConditionID;
    uint16 CharacterBitNumber;
    uint8 Flags;
    int32 UiTextureKitID;
    uint32 SpecialIconConditionID;
};

struct TaxiPathEntry
{
    uint16 FromTaxiNode;
    uint16 ToTaxiNode;
    uint32 ID;
    uint32 Cost;
};

struct TaxiPathNodeEntry
{
    DBCPosition3D Loc;
    uint16 PathID;
    uint16 ContinentID;
    uint8 NodeIndex;
    uint32 ID;
    uint8 Flags;
    uint32 Delay;
    uint16 ArrivalEventID;
    uint16 DepartureEventID;
};

struct TotemCategoryEntry
{
    uint32 ID;
    LocalizedString Name;
    int32 TotemCategoryMask;
    uint8 TotemCategoryType;
};

struct ToyEntry
{
    LocalizedString SourceText;
    int32 ItemID;
    uint8 Flags;
    int8 SourceTypeEnum;
    uint32 ID;
};

struct TransmogHolidayEntry
{
    uint32 ID;
    int32 RequiredTransmogHoliday;
};

struct TransmogSetEntry
{
    LocalizedString Name;
    uint16 ParentTransmogSetID;
    int16 UiOrder;
    uint8 ExpansionID;
    uint32 ID;
    int32 Flags;
    uint32 TrackingQuestID;
    int32 ClassMask;
    int32 ItemNameDescriptionID;
    uint32 TransmogSetGroupID;
};

struct TransmogSetGroupEntry
{
    LocalizedString Name;
    uint32 ID;
};

struct TransmogSetItemEntry
{
    uint32 ID;
    uint32 TransmogSetID;
    uint32 ItemModifiedAppearanceID;
    int32 Flags;
};

struct TransportAnimationEntry
{
    uint32 ID;
    uint32 TimeIndex;
    DBCPosition3D Pos;
    uint8 SequenceID;
    int32 TransportID;
};

struct TransportRotationEntry
{
    uint32 ID;
    uint32 TimeIndex;
    std::array<float, 4> Rot;
    int32 GameObjectsID;
};

#define MAX_UNIT_CONDITION_VALUES 8

struct UnitConditionEntry
{
    uint32 ID;
    std::array<int32, MAX_UNIT_CONDITION_VALUES> Value;
    uint8 Flags;
    std::array<uint8, MAX_UNIT_CONDITION_VALUES> Variable;
    std::array<int8, MAX_UNIT_CONDITION_VALUES> Op;

    EnumFlag<UnitConditionFlags> GetFlags() const { return static_cast<UnitConditionFlags>(Flags); }
};

struct UnitPowerBarEntry
{
    uint32 ID;
    LocalizedString Name;
    LocalizedString Cost;
    LocalizedString OutOfError;
    LocalizedString ToolTip;
    float RegenerationPeace;
    float RegenerationCombat;
    std::array<int32, 6> FileDataID;
    std::array<int32, 6> Color;
    float StartInset;
    float EndInset;
    uint16 StartPower;
    uint16 Flags;
    uint8 CenterPower;
    uint8 BarType;
    uint32 MinPower;
    uint32 MaxPower;
};

#define MAX_VEHICLE_SEATS 8

struct VehicleEntry
{
    uint32 ID;
    int32 Flags;
    float TurnSpeed;
    float PitchSpeed;
    float PitchMin;
    float PitchMax;
    float MouseLookOffsetPitch;
    float CameraFadeDistScalarMin;
    float CameraFadeDistScalarMax;
    float CameraPitchOffset;
    float FacingLimitRight;
    float FacingLimitLeft;
    float CameraYawOffset;
    std::array<uint16, MAX_VEHICLE_SEATS> SeatID;
    uint16 VehicleUIIndicatorID;
    std::array<uint16, 3> PowerDisplayID;
    uint8 FlagsB;
    uint8 UiLocomotionType;
    int32 MissileTargetingID;
};

struct VehicleSeatEntry
{
    uint32 ID;
    int32 Flags;
    int32 FlagsB;
    int32 FlagsC;
    DBCPosition3D AttachmentOffset;
    float EnterPreDelay;
    float EnterSpeed;
    float EnterGravity;
    float EnterMinDuration;
    float EnterMaxDuration;
    float EnterMinArcHeight;
    float EnterMaxArcHeight;
    float ExitPreDelay;
    float ExitSpeed;
    float ExitGravity;
    float ExitMinDuration;
    float ExitMaxDuration;
    float ExitMinArcHeight;
    float ExitMaxArcHeight;
    float PassengerYaw;
    float PassengerPitch;
    float PassengerRoll;
    float VehicleEnterAnimDelay;
    float VehicleExitAnimDelay;
    float CameraEnteringDelay;
    float CameraEnteringDuration;
    float CameraExitingDelay;
    float CameraExitingDuration;
    DBCPosition3D CameraOffset;
    float CameraPosChaseRate;
    float CameraFacingChaseRate;
    float CameraEnteringZoom;
    float CameraSeatZoomMin;
    float CameraSeatZoomMax;
    int32 UiSkinFileDataID;
    int16 EnterAnimStart;
    int16 EnterAnimLoop;
    int16 RideAnimStart;
    int16 RideAnimLoop;
    int16 RideUpperAnimStart;
    int16 RideUpperAnimLoop;
    int16 ExitAnimStart;
    int16 ExitAnimLoop;
    int16 ExitAnimEnd;
    int16 VehicleEnterAnim;
    int16 VehicleExitAnim;
    int16 VehicleRideAnimLoop;
    int16 EnterAnimKitID;
    int16 RideAnimKitID;
    int16 ExitAnimKitID;
    int16 VehicleEnterAnimKitID;
    int16 VehicleRideAnimKitID;
    int16 VehicleExitAnimKitID;
    int16 CameraModeID;
    int8 AttachmentID;
    int8 PassengerAttachmentID;
    int8 VehicleEnterAnimBone;
    int8 VehicleExitAnimBone;
    int8 VehicleRideAnimLoopBone;
    int8 VehicleAbilityDisplay;
    uint32 EnterUISoundID;
    uint32 ExitUISoundID;

    inline bool HasFlag(VehicleSeatFlags flag) const { return !!(Flags & flag); }
    inline bool HasFlag(VehicleSeatFlagsB flag) const { return !!(Flags & flag); }

    inline bool CanEnterOrExit() const { return HasFlag(VehicleSeatFlags(VEHICLE_SEAT_FLAG_CAN_ENTER_OR_EXIT | VEHICLE_SEAT_FLAG_CAN_CONTROL | VEHICLE_SEAT_FLAG_SHOULD_USE_VEH_SEAT_EXIT_ANIM_ON_VOLUNTARY_EXIT)); }
    inline bool CanSwitchFromSeat() const { return HasFlag(VEHICLE_SEAT_FLAG_CAN_SWITCH); }
    inline bool IsUsableByOverride() const {
        return HasFlag(VehicleSeatFlags(VEHICLE_SEAT_FLAG_UNCONTROLLED | VEHICLE_SEAT_FLAG_UNK18))
            || HasFlag(VehicleSeatFlagsB(VEHICLE_SEAT_FLAG_B_USABLE_FORCED | VEHICLE_SEAT_FLAG_B_USABLE_FORCED_2 |
                VEHICLE_SEAT_FLAG_B_USABLE_FORCED_3 | VEHICLE_SEAT_FLAG_B_USABLE_FORCED_4));
    }
    inline bool IsEjectable() const { return HasFlag(VEHICLE_SEAT_FLAG_B_EJECTABLE); }
};

struct WMOAreaTableEntry
{
    LocalizedString AreaName;
    int32 WmoGroupID;                                               //  used in group WMO
    uint16 AmbienceID;
    uint16 ZoneMusic;
    uint16 IntroSound;
    uint16 AreaTableID;
    uint16 UwIntroSound;
    uint16 UwAmbience;
    uint8 NameSetID;                                                //  used in adt file
    uint8 SoundProviderPref;
    uint8 SoundProviderPrefUnderwater;
    uint8 Flags;
    uint32 ID;
    uint32 UwZoneMusic;
    uint16 WmoID;                                                   //  used in root WMO
};

struct WorldEffectEntry
{
    uint32 ID;
    int32 TargetAsset;
    uint16 CombatConditionID;
    uint8 TargetType;
    uint8 WhenToDisplay;
    uint32 QuestFeedbackEffectID;
    uint32 PlayerConditionID;
};

struct WorldMapAreaEntry
{
    char const* AreaName;
    float LocLeft;
    float LocRight;
    float LocTop;
    float LocBottom;
    uint32 Flags;
    int16 MapID;
    uint16 AreaID;
    int16 DisplayMapID;
    uint16 DefaultDungeonFloor;
    uint16 ParentWorldMapID;
    uint8 LevelRangeMin;
    uint8 LevelRangeMax;
    uint8 BountySetID;
    uint8 BountyDisplayLocation;
    uint32 ID;
    uint32 VisibilityPlayerConditionID;
};

#define MAX_WORLD_MAP_OVERLAY_AREA_IDX 4

struct WorldMapOverlayEntry
{
    char const* TextureName;
    uint32 ID;
    uint16 TextureWidth;
    uint16 TextureHeight;
    uint32 MapAreaID;                                               // idx in WorldMapArea.dbc
    int32 OffsetX;
    int32 OffsetY;
    int32 HitRectTop;
    int32 HitRectLeft;
    int32 HitRectBottom;
    int32 HitRectRight;
    uint32 PlayerConditionID;
    uint32 Flags;
    std::array<uint32, MAX_WORLD_MAP_OVERLAY_AREA_IDX> AreaID;
};

struct WorldMapTransformsEntry
{
    uint32 ID;
    DBCPosition3D RegionMin;
    DBCPosition3D RegionMax;
    DBCPosition2D RegionOffset;
    float RegionScale;
    uint16 MapID;
    uint16 AreaID;
    uint16 NewMapID;
    uint16 NewDungeonMapID;
    uint16 NewAreaID;
    uint8 Flags;
    int32 Priority;
};

struct WorldSafeLocsEntry
{
    uint32 ID;
    LocalizedString AreaName;
    DBCPosition3D Loc;
    float Facing;
    uint16 MapID;
};

struct WorldStateExpressionEntry
{
    uint32 ID;
    char const* Expression;
};

#pragma pack(pop)
#endif
