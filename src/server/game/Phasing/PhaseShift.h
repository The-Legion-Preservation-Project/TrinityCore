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

#ifndef PhaseShift_h__
#define PhaseShift_h__

#include "Define.h"
#include "EnumFlag.h"
#include "ObjectGuid.h"
#include <boost/container/flat_set.hpp>
#include <map>

class PhasingHandler;
struct Condition;
struct TerrainSwapInfo;

#define DEFAULT_PHASE 169

enum class PhaseShiftFlags : uint32
{
    None            = 0x00,
    AlwaysVisible   = 0x01, // Ignores all phasing, can see everything and be seen by everything
    Inverse         = 0x02, // By default having at least one shared phase for two objects means they can see each other
                            // this flag makes objects see each other if they have at least one non-shared phase
    InverseUnphased = 0x04,
    Unphased        = 0x08,
    NoCosmetic      = 0x10  // This flag ignores shared cosmetic phases (two players that both have shared cosmetic phase but no other phase cannot see each other)
};

enum class PhaseFlags : uint16
{
    None        = 0x0,
    Cosmetic    = 0x1,
    Personal    = 0x2
};

DEFINE_ENUM_FLAG(PhaseShiftFlags);
DEFINE_ENUM_FLAG(PhaseFlags);

class TC_GAME_API PhaseShift
{
public:
    struct PhaseRef
    {
        PhaseRef(uint32 id, PhaseFlags flags, std::vector<Condition*> const* conditions)
            : Id(id), Flags(flags), References(0), AreaConditions(conditions) { }

        uint16 Id;
        EnumFlag<PhaseFlags> Flags;
        int32 References;
        std::vector<Condition*> const* AreaConditions;
        bool operator<(PhaseRef const& right) const { return Id < right.Id; }
        bool operator==(PhaseRef const& right) const { return Id == right.Id; }
        bool IsPersonal() const { return Flags.HasFlag(PhaseFlags::Personal); }
    };
    struct VisibleMapIdRef
    {
        int32 References = 0;
        TerrainSwapInfo const* VisibleMapInfo = nullptr;
    };
    struct UiWorldMapAreaIdSwapRef
    {
        int32 References = 0;
    };
    template<typename Container>
    struct EraseResult
    {
        typename Container::iterator Iterator;
        bool Erased;
    };
    using PhaseContainer = boost::container::flat_set<PhaseRef>;
    using VisibleMapIdContainer = std::map<uint32, VisibleMapIdRef>;
    using UiWorldMapAreaIdSwapContainer = std::map<uint32, UiWorldMapAreaIdSwapRef>;

    PhaseShift();
    PhaseShift(PhaseShift const& right);
    PhaseShift(PhaseShift&& right) noexcept;
    PhaseShift& operator=(PhaseShift const& right);
    PhaseShift& operator=(PhaseShift&& right) noexcept;
    ~PhaseShift();

    ObjectGuid GetPersonalGuid() const { return PersonalGuid; }

    bool AddPhase(uint32 phaseId, PhaseFlags flags, std::vector<Condition*> const* areaConditions, int32 references = 1);
    EraseResult<PhaseContainer> RemovePhase(uint32 phaseId);
    bool HasPhase(uint32 phaseId) const { return Phases.find(PhaseRef(phaseId, PhaseFlags::None, nullptr)) != Phases.end(); }
    PhaseContainer const& GetPhases() const { return Phases; }

    bool AddVisibleMapId(uint32 visibleMapId, TerrainSwapInfo const* visibleMapInfo, int32 references = 1);
    EraseResult<VisibleMapIdContainer> RemoveVisibleMapId(uint32 visibleMapId);
    bool HasVisibleMapId(uint32 visibleMapId) const { return VisibleMapIds.find(visibleMapId) != VisibleMapIds.end(); }
    VisibleMapIdContainer const& GetVisibleMapIds() const { return VisibleMapIds; }

    bool AddUiWorldMapAreaIdSwap(uint32 uiWorldMapAreaId, int32 references = 1);
    EraseResult<UiWorldMapAreaIdSwapContainer> RemoveUiWorldMapAreaIdSwap(uint32 uiWorldMapAreaId);
    bool HasUiWorldMapAreaIdSwap(uint32 uiWorldMapAreaId) const { return UiWorldMapAreaIdSwaps.find(uiWorldMapAreaId) != UiWorldMapAreaIdSwaps.end(); }
    UiWorldMapAreaIdSwapContainer const& GetUiWorldMapAreaIdSwaps() const { return UiWorldMapAreaIdSwaps; }

    void Clear();
    void ClearPhases();

    bool CanSee(PhaseShift const& other) const;

    bool HasPersonalPhase() const;

protected:
    friend class PhasingHandler;

    EnumFlag<PhaseShiftFlags> Flags = PhaseShiftFlags::Unphased;
    ObjectGuid PersonalGuid;
    PhaseContainer Phases;
    VisibleMapIdContainer VisibleMapIds;
    UiWorldMapAreaIdSwapContainer UiWorldMapAreaIdSwaps;

    void ModifyPhasesReferences(PhaseContainer::iterator itr, int32 references);
    void UpdateUnphasedFlag();
    void UpdatePersonalGuid();
    int32 NonCosmeticReferences = 0;
    int32 CosmeticReferences = 0;
    int32 PersonalReferences = 0;
    int32 DefaultReferences = 0;
    bool IsDbPhaseShift = false;
};

#endif // PhaseShift_h__
