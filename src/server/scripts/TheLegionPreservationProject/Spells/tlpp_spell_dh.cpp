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

#include "ScriptMgr.h"
#include "SpellScript.h"

enum DemonHunterSpells
{
    SPELL_DH_FEL_RUSH                       = 195072,
    SPELL_DH_FEL_RUSH_AIR                   = 197923,
    SPELL_DH_FEL_RUSH_DAMAGE                = 192611,
    SPELL_DH_FEL_RUSH_DASH                  = 197922,
    SPELL_DH_FEL_RUSH_DASH2                 = 208101,
};

// Fel Rush - 195072
class tlpp_spell_dh_fel_rush : public SpellScript
{
    bool Validate(SpellInfo const* /*spellInfo*/) override
    {
        return ValidateSpellInfo({ SPELL_DH_FEL_RUSH_DASH, SPELL_DH_FEL_RUSH_AIR });
    }

    void HandleDashGround(SpellEffIndex /*effIndex*/)
    {
        if (Unit* caster = GetCaster())
        {
            if (!caster->IsFalling() || caster->IsInWater())
            {
                caster->CastSpell(nullptr, SPELL_DH_FEL_RUSH_DAMAGE, CastSpellExtraArgsInit{
                    .TriggerFlags = TRIGGERED_IGNORE_CAST_IN_PROGRESS | TRIGGERED_DONT_REPORT_CAST_ERROR
                });
                caster->CastSpell(nullptr, SPELL_DH_FEL_RUSH_DASH, CastSpellExtraArgsInit{
                    .TriggerFlags = TRIGGERED_IGNORE_CAST_IN_PROGRESS | TRIGGERED_DONT_REPORT_CAST_ERROR
                });
            }
        }
    }

    void HandleDashAir(SpellEffIndex /*effIndex*/)
    {
        if (Unit* caster = GetCaster())
        {
            if (caster->IsFalling())
            {
                caster->SetDisableGravity(true);
                caster->CastSpell(nullptr, SPELL_DH_FEL_RUSH_AIR, CastSpellExtraArgsInit{
                    .TriggerFlags = TRIGGERED_IGNORE_CAST_IN_PROGRESS | TRIGGERED_DONT_REPORT_CAST_ERROR
                });
                caster->CastSpell(nullptr, SPELL_DH_FEL_RUSH_DAMAGE, CastSpellExtraArgsInit{
                    .TriggerFlags = TRIGGERED_IGNORE_CAST_IN_PROGRESS | TRIGGERED_DONT_REPORT_CAST_ERROR
                });
            }
        }
    }

    void Register() override
    {
        OnEffectHitTarget += SpellEffectFn(tlpp_spell_dh_fel_rush::HandleDashGround, EFFECT_0, SPELL_EFFECT_DUMMY);
        OnEffectHitTarget += SpellEffectFn(tlpp_spell_dh_fel_rush::HandleDashAir, EFFECT_1, SPELL_EFFECT_DUMMY);
    }
};

// Fel Rush Dash - 197922
class tlpp_spell_dh_fel_rush_dash : public AuraScript
{
    void ChangeRunBackSpeed(AuraEffect const* aurEff, AuraEffectHandleModes /*mode*/)
    {
        GetTarget()->SetSpeed(MOVE_RUN, float(GetEffectInfo(EFFECT_4).CalcValue()));
        GetTarget()->SetSpeed(MOVE_RUN_BACK, float(GetEffectInfo(EFFECT_4).CalcValue()));
    }

    void RestoreRunBackSpeed(AuraEffect const* /*aurEff*/, AuraEffectHandleModes /*mode*/)
    {
        GetTarget()->UpdateSpeed(MOVE_RUN);
        GetTarget()->UpdateSpeed(MOVE_RUN_BACK);
    }

    void Register() override
    {
        AfterEffectApply += AuraEffectApplyFn(tlpp_spell_dh_fel_rush_dash::ChangeRunBackSpeed, EFFECT_4, SPELL_AURA_USE_NORMAL_MOVEMENT_SPEED, AURA_EFFECT_HANDLE_REAL);
        AfterEffectRemove += AuraEffectApplyFn(tlpp_spell_dh_fel_rush_dash::RestoreRunBackSpeed, EFFECT_4, SPELL_AURA_USE_NORMAL_MOVEMENT_SPEED, AURA_EFFECT_HANDLE_REAL);
    }
};

// Fel Rush Air - 197923
class tlpp_spell_dh_fel_rush_air : public AuraScript
{
    void AfterRemove(AuraEffect const* /*aurEff*/, AuraEffectHandleModes /*mode*/)
    {
        if (Unit* caster = GetCaster())
        {
            caster->SetDisableGravity(false);
            caster->SetFall(true);
            caster->SetPlayHoverAnim(false);
        }
    }

    void CalcSpeed(AuraEffect const* /*aurEff*/, int32& amount, bool& /*canBeRecalculated*/)
    {
        amount = 1400;
    }

    void Register() override
    {
        DoEffectCalcAmount += AuraEffectCalcAmountFn(tlpp_spell_dh_fel_rush_air::CalcSpeed, EFFECT_3, SPELL_AURA_MOD_MINIMUM_SPEED);
        AfterEffectRemove += AuraEffectRemoveFn(tlpp_spell_dh_fel_rush_air::AfterRemove, EFFECT_9, SPELL_AURA_MOD_MINIMUM_SPEED_RATE, AURA_EFFECT_HANDLE_SEND_FOR_CLIENT_MASK);
    }
};

void AddCustomDemonHunterSpellScripts()
{
    RegisterSpellScript(tlpp_spell_dh_fel_rush);
    RegisterSpellScript(tlpp_spell_dh_fel_rush_dash);
    RegisterSpellScript(tlpp_spell_dh_fel_rush_air);
}
