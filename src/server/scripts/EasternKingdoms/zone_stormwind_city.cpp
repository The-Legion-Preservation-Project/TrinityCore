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

#include "AreaTrigger.h"
#include "AreaTriggerAI.h"
#include "Conversation.h"
#include "CreatureAIImpl.h"
#include "MotionMaster.h"
#include "PhasingHandler.h"
#include "Player.h"
#include "ScriptMgr.h"
#include "ScriptedCreature.h"
#include "ScriptedGossip.h"
#include "Spell.h"
#include "SpellScript.h"
#include "TemporarySummon.h"

namespace Scripts::EasternKingdoms::StormwindCity
{
namespace Spells
{
    // The King's Command
    static constexpr uint32 MOPAllianceIntroMoviePlay = 130805;
    static constexpr uint32 FadeToBlack               = 130411;

    // The Mission
    static constexpr uint32 TeleportPrep              = 130832;
    static constexpr uint32 TeleportTimer             = 132032;
    static constexpr uint32 TheMissionTeleportPlayer  = 130321;
}

// 130804 - The King's Command Movie Aura
class spell_the_kings_command_movie_aura : public SpellScript
{
    bool Validate(SpellInfo const* /*spellInfo*/) override
    {
        return ValidateSpellInfo({
            Spells::FadeToBlack
        });
    }

    void HandleHitTarget(SpellEffIndex /*effIndex*/) const
    {
        GetHitUnit()->CastSpell(nullptr, Spells::FadeToBlack, CastSpellExtraArgsInit{
            .TriggerFlags = TRIGGERED_IGNORE_CAST_IN_PROGRESS | TRIGGERED_DONT_REPORT_CAST_ERROR,
            .TriggeringSpell = GetSpell()
        });
    }

    void Register() override
    {
        OnEffectHitTarget += SpellEffectFn(spell_the_kings_command_movie_aura::HandleHitTarget, EFFECT_0, SPELL_EFFECT_APPLY_AURA);
    }
};

// 130804 - The King's Command Movie Aura
class spell_the_kings_command_movie_aura_aura : public AuraScript
{
    bool Validate(SpellInfo const* /*spellInfo*/) override
    {
        return ValidateSpellInfo({
            Spells::MOPAllianceIntroMoviePlay
        });
    }

    void HandleAfterEffectRemove(AuraEffect const* /*aurEff*/, AuraEffectHandleModes /*mode*/) const
    {
        GetTarget()->CastSpell(nullptr, Spells::MOPAllianceIntroMoviePlay, CastSpellExtraArgsInit{
            .TriggerFlags = TRIGGERED_IGNORE_CAST_IN_PROGRESS | TRIGGERED_DONT_REPORT_CAST_ERROR
        });
    }

    void Register() override
    {
        AfterEffectRemove += AuraEffectRemoveFn(spell_the_kings_command_movie_aura_aura::HandleAfterEffectRemove, EFFECT_0, SPELL_AURA_DUMMY, AURA_EFFECT_HANDLE_REAL);
    }
};

// 140885 - Admiral Rogers Script Effect
class spell_admiral_rogers_script_effect : public SpellScript
{
    bool Validate(SpellInfo const* /*spellInfo*/) override
    {
        return ValidateSpellInfo({
            Spells::TeleportPrep
        });
    }

    void HandleHitTarget(SpellEffIndex /*effIndex*/) const
    {
        GetHitUnit()->CastSpell(nullptr, Spells::TeleportPrep, CastSpellExtraArgsInit{
            .TriggerFlags = TRIGGERED_IGNORE_CAST_IN_PROGRESS | TRIGGERED_DONT_REPORT_CAST_ERROR,
            .TriggeringSpell = GetSpell()
        });
    }

    void Register() override
    {
        OnEffectHitTarget += SpellEffectFn(spell_admiral_rogers_script_effect::HandleHitTarget, EFFECT_0, SPELL_EFFECT_SCRIPT_EFFECT);
    }
};

// 130832 - Teleport Prep
class spell_teleport_prep_alliance : public SpellScript
{
    bool Validate(SpellInfo const* /*spellInfo*/) override
    {
        return ValidateSpellInfo({
            Spells::TeleportTimer
        });
    }

    void HandleHitTarget(SpellEffIndex /*effIndex*/) const
    {
        Unit* hitUnit = GetHitUnit();

        hitUnit->CancelMountAura();
        hitUnit->CastSpell(nullptr, Spells::TeleportTimer, CastSpellExtraArgsInit{
            .TriggerFlags = TRIGGERED_IGNORE_CAST_IN_PROGRESS | TRIGGERED_DONT_REPORT_CAST_ERROR,
            .TriggeringSpell = GetSpell()
        });
    }

    void Register() override
    {
        OnEffectHitTarget += SpellEffectFn(spell_teleport_prep_alliance::HandleHitTarget, EFFECT_0, SPELL_EFFECT_APPLY_AURA);
    }
};

// 132032 - Teleport Timer
class spell_teleport_timer_alliance : public AuraScript
{
    bool Validate(SpellInfo const* /*spellInfo*/) override
    {
        return ValidateSpellInfo({
            Spells::TheMissionTeleportPlayer
        });
    }

    void HandleAfterEffectRemove(AuraEffect const* /*aurEff*/, AuraEffectHandleModes /*mode*/) const
    {
        Unit* target = GetTarget();

        target->CancelTravelShapeshiftForm();
        target->CastSpell(nullptr, Spells::TheMissionTeleportPlayer, CastSpellExtraArgsInit{
            .TriggerFlags = TRIGGERED_IGNORE_CAST_IN_PROGRESS | TRIGGERED_DONT_REPORT_CAST_ERROR
        });
    }

    void Register() override
    {
        AfterEffectRemove += AuraEffectRemoveFn(spell_teleport_timer_alliance::HandleAfterEffectRemove, EFFECT_0, SPELL_AURA_DUMMY, AURA_EFFECT_HANDLE_REAL);
    }
};
}

void AddSC_stormwind_city()
{
    using namespace Scripts::EasternKingdoms::StormwindCity;

    // Spells
    RegisterSpellAndAuraScriptPair(spell_the_kings_command_movie_aura, spell_the_kings_command_movie_aura_aura);
    RegisterSpellScript(spell_admiral_rogers_script_effect);
    RegisterSpellScript(spell_teleport_prep_alliance);
    RegisterSpellScript(spell_teleport_timer_alliance);
}
