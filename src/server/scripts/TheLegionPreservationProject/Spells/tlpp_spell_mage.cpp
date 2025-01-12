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

#include "Player.h"
#include "ScriptMgr.h"
#include "SpellAuraEffects.h"
#include "Spell.h"
#include "SpellScript.h"

enum MageSpells
{
    SPELL_MAGE_ICE_LANCE_TRIGGER                 = 228598,
    SPELL_MAGE_THERMAL_VOID                      = 155149,
    SPELL_MAGE_ICY_VEINS                         = 12472,
    SPELL_MAGE_FINGERS_OF_FROST                  = 44544,
};

// 30455 - Ice Lance
class tlpp_spell_mage_ice_lance : public SpellScript
{
    PrepareSpellScript(tlpp_spell_mage_ice_lance);

    bool Validate(SpellInfo const* /*spellInfo*/) override
    {
        return ValidateSpellInfo
        ({
            SPELL_MAGE_ICE_LANCE_TRIGGER,
            SPELL_MAGE_THERMAL_VOID,
            SPELL_MAGE_ICY_VEINS,
            SPELL_MAGE_FINGERS_OF_FROST
        });
    }

    void IndexTarget(SpellEffIndex /*effIndex*/)
    {
        _orderedTargets.push_back(GetHitUnit()->GetGUID());
    }

    void HandleOnHit(SpellEffIndex /*effIndex*/)
    {
        Unit* caster = GetCaster();
        Unit* target = GetHitUnit();

        std::ptrdiff_t index = std::distance(_orderedTargets.begin(), std::find(_orderedTargets.begin(), _orderedTargets.end(), target->GetGUID()));

        if (index == 0 // only primary target triggers these benefits
            && target->HasAuraState(AURA_STATE_FROZEN, GetSpellInfo(), caster))
        {
            // Thermal Void
            if (Aura const* thermalVoid = caster->GetAura(SPELL_MAGE_THERMAL_VOID))
                if (SpellEffectInfo const* thermalVoidEffect = thermalVoid->GetSpellInfo()->GetEffect(EFFECT_0))
                    if (Aura* icyVeins = caster->GetAura(SPELL_MAGE_ICY_VEINS))
                        icyVeins->SetDuration(icyVeins->GetDuration() + thermalVoidEffect->CalcValue(caster) * IN_MILLISECONDS);
        }

        // put target index for chain value multiplier into EFFECT_1 base points, otherwise triggered spell doesn't know which damage multiplier to apply
        CastSpellExtraArgs args;
        args.TriggerFlags = TRIGGERED_FULL_MASK;
        args.AddSpellMod(SPELLVALUE_BASE_POINT1, index);
        caster->CastSpell(target, SPELL_MAGE_ICE_LANCE_TRIGGER, args);
    }

    void Register() override
    {
        OnEffectLaunchTarget += SpellEffectFn(tlpp_spell_mage_ice_lance::IndexTarget, EFFECT_0, SPELL_EFFECT_SCRIPT_EFFECT);
        OnEffectHitTarget += SpellEffectFn(tlpp_spell_mage_ice_lance::HandleOnHit, EFFECT_0, SPELL_EFFECT_SCRIPT_EFFECT);
    }

    std::vector<ObjectGuid> _orderedTargets;
};

// 228598 - Ice Lance
class tlpp_spell_mage_ice_lance_damage : public SpellScript
{
    PrepareSpellScript(tlpp_spell_mage_ice_lance_damage);

    void ApplyDamageMultiplier(SpellEffIndex /*effIndex*/)
    {
        SpellValue const* spellValue = GetSpellValue();
        if (spellValue->CustomBasePointsMask & (1 << EFFECT_1))
        {
            int32 originalDamage = GetHitDamage();
            float targetIndex = float(spellValue->EffectBasePoints[EFFECT_1]);
            float multiplier = std::pow(GetEffectInfo()->CalcDamageMultiplier(GetCaster(), GetSpell()), targetIndex);
            SetHitDamage(int32(originalDamage * multiplier));
        }
    }

    void Register() override
    {
        OnEffectHitTarget += SpellEffectFn(tlpp_spell_mage_ice_lance_damage::ApplyDamageMultiplier, EFFECT_0, SPELL_EFFECT_SCHOOL_DAMAGE);
    }
};

void AddCustomMageSpellScripts()
{
    RegisterSpellScript(tlpp_spell_mage_ice_lance);
    RegisterSpellScript(tlpp_spell_mage_ice_lance_damage);
}