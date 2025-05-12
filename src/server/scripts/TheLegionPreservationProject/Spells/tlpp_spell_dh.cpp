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
            if (!caster->IsFalling() || caster->IsInWater())
            {
                caster->CastSpell(caster, SPELL_DH_FEL_RUSH_DASH, true);
                caster->CastSpell(caster, SPELL_DH_FEL_RUSH_DAMAGE, true);
            }
    }

    void HandleDashAir(SpellEffIndex /*effIndex*/)
    {
        if (Unit* caster = GetCaster())
            if (caster->IsFalling())
            {
                caster->SetDisableGravity(true);
                caster->CastSpell(caster, SPELL_DH_FEL_RUSH_AIR, true);
                caster->CastSpell(caster, SPELL_DH_FEL_RUSH_DAMAGE, true);
            }
    }

    void Register() override
    {
        OnEffectHitTarget += SpellEffectFn(tlpp_spell_dh_fel_rush::HandleDashGround, EFFECT_0, SPELL_EFFECT_DUMMY);
        OnEffectHitTarget += SpellEffectFn(tlpp_spell_dh_fel_rush::HandleDashAir, EFFECT_1, SPELL_EFFECT_DUMMY);
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
    RegisterSpellScript(tlpp_spell_dh_fel_rush_air);
}
