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

#include "Map.h"
#include "PathGenerator.h"
#include "Player.h"
#include "ScriptMgr.h"
#include "SpellInfo.h"
#include "SpellScript.h"

enum WarriorSpells
{
    SPELL_WARRIOR_BOUNDING_STRIDE                   = 202163,
    SPELL_WARRIOR_BOUNDING_STRIDE_SPEED             = 202164,
    SPELL_WARRIOR_HEROIC_LEAP_JUMP                  = 94954, // HACK
    //SPELL_WARRIOR_HEROIC_LEAP_JUMP                  = 178368, // wait for a809932f5017c98092a02694e86e276add03f8b9
    SPELL_WARRIOR_IGNORE_PAIN                       = 190456,
    SPELL_WARRIOR_RENEWED_FURY                      = 202288,
    SPELL_WARRIOR_RENEWED_FURY_EFFECT               = 202289,
    SPELL_WARRIOR_VENGEANCE_AURA                    = 202572,
    SPELL_WARRIOR_VENGEANCE_FOCUSED_RAGE            = 202573,
};

// 6544 - Heroic leap
class tlpp_spell_warr_heroic_leap : public SpellScript
{
    PrepareSpellScript(tlpp_spell_warr_heroic_leap);

public:
    bool Validate(SpellInfo const* /*spellInfo*/) override
    {
        return ValidateSpellInfo(
        {
            SPELL_WARRIOR_HEROIC_LEAP_JUMP,
            SPELL_WARRIOR_BOUNDING_STRIDE,
            SPELL_WARRIOR_BOUNDING_STRIDE_SPEED
        });
    }

    SpellCastResult CheckElevation()
    {
        if (WorldLocation const* dest = GetExplTargetDest())
        {
            if (GetCaster()->HasUnitMovementFlag(MOVEMENTFLAG_ROOT))
                return SPELL_FAILED_ROOTED;

            if (GetCaster()->GetMap()->Instanceable())
            {
                float range = GetSpellInfo()->GetMaxRange(true, GetCaster()) * 1.5f;

                PathGenerator generatedPath(GetCaster());
                generatedPath.SetPathLengthLimit(range);

                bool result = generatedPath.CalculatePath(dest->GetPositionX(), dest->GetPositionY(), dest->GetPositionZ(), false, true);
                if (generatedPath.GetPathType() & PATHFIND_SHORT)
                    return SPELL_FAILED_OUT_OF_RANGE;
                else if (!result || generatedPath.GetPathType() & PATHFIND_NOPATH)
                {
                    result = generatedPath.CalculatePath(dest->GetPositionX(), dest->GetPositionY(), dest->GetPositionZ(), false, false);
                    if (generatedPath.GetPathType() & PATHFIND_SHORT)
                        return SPELL_FAILED_OUT_OF_RANGE;
                    else if (!result || generatedPath.GetPathType() & PATHFIND_NOPATH)
                        return SPELL_FAILED_NOPATH;
                }
            }
            else if (dest->GetPositionZ() > GetCaster()->GetPositionZ() + 4.0f)
                return SPELL_FAILED_NOPATH;

            return SPELL_CAST_OK;
        }

        return SPELL_FAILED_NO_VALID_TARGETS;
    }

    void HandleDummy(SpellEffIndex /*effIndex*/)
    {
        if (WorldLocation* dest = GetHitDest())
            GetCaster()->CastSpell(dest->GetPositionX(), dest->GetPositionY(), dest->GetPositionZ(), SPELL_WARRIOR_HEROIC_LEAP_JUMP, true);

        if (Unit* caster = GetCaster())
            if (caster->HasAura(SPELL_WARRIOR_BOUNDING_STRIDE))
                caster->CastSpell(caster, SPELL_WARRIOR_BOUNDING_STRIDE_SPEED, true);
    }

    void Register() override
    {
        OnCheckCast += SpellCheckCastFn(tlpp_spell_warr_heroic_leap::CheckElevation);
        OnEffectHit += SpellEffectFn(tlpp_spell_warr_heroic_leap::HandleDummy, EFFECT_0, SPELL_EFFECT_DUMMY);
    }
};

// 190456 - Ignore Pain
class tlpp_spell_warr_ignore_pain : public SpellScript
{
    PrepareSpellScript(tlpp_spell_warr_ignore_pain);

    bool Validate(SpellInfo const* /*spellInfo*/) override
    {
        return ValidateSpellInfo({ SPELL_WARRIOR_RENEWED_FURY, SPELL_WARRIOR_VENGEANCE_FOCUSED_RAGE });
    }

    void HandleDummy(SpellEffIndex /*effIndex*/)
    {
        if (Unit* caster = GetCaster())
        {
            if(caster->HasAura(SPELL_WARRIOR_RENEWED_FURY))
                caster->CastSpell(caster, SPELL_WARRIOR_RENEWED_FURY_EFFECT, true);
            if (caster->HasAura(SPELL_WARRIOR_VENGEANCE_AURA))
                caster->CastSpell(caster, SPELL_WARRIOR_VENGEANCE_FOCUSED_RAGE, true);
        }
    }

    void Register() override
    {
        OnEffectHitTarget += SpellEffectFn(tlpp_spell_warr_ignore_pain::HandleDummy, EFFECT_1, SPELL_EFFECT_DUMMY);
    }
};

// 190456 - Ignore Pain
class tlpp_aura_warr_ignore_pain : public AuraScript
{
    PrepareAuraScript(tlpp_aura_warr_ignore_pain);

    int32 m_ExtraSpellCost = 400;

    bool Load() override
    {
        Unit* caster = GetCaster();
        // In this phase the initial 20 Rage cost is removed already
        // We just check for bonus.
        m_ExtraSpellCost = std::min(caster->GetPower(POWER_RAGE), 400);
        return true;
    }

    void CalcAmount(AuraEffect const* /*aurEff*/, int32& amount, bool& /*canBeRecalculated*/)
    {
        if (Unit* caster = GetCaster())
        {
            amount = (float)(22.3f * caster->GetTotalAttackPowerValue(BASE_ATTACK)) * (float(m_ExtraSpellCost + 200) / 600.0f);
            int32 m_newRage = caster->GetPower(POWER_RAGE) - m_ExtraSpellCost;
            if (m_newRage < 0)
                m_newRage = 0;
            caster->SetPower(POWER_RAGE, m_newRage);
            // if (Player* player = caster->ToPlayer())
            //     player->SendPowerUpdate(POWER_RAGE, m_newRage);
        }
    }

    void OnAbsorb(AuraEffect * /*aurEff*/, DamageInfo& dmgInfo, uint32& /*absorbAmount*/)
    {
        if (Unit* caster = GetCaster())
        {
            SpellNonMeleeDamage spell(caster, caster, GetSpellInfo(), {}, SPELL_SCHOOL_MASK_NORMAL);
            spell.damage = dmgInfo.GetDamage() - dmgInfo.GetDamage() * 0.9f;
            spell.cleanDamage = spell.damage;
            caster->DealSpellDamage(&spell, false);
            caster->SendSpellNonMeleeDamageLog(&spell);
        }
    }

    void Register() override
    {
        DoEffectCalcAmount += AuraEffectCalcAmountFn(tlpp_aura_warr_ignore_pain::CalcAmount, EFFECT_0, SPELL_AURA_SCHOOL_ABSORB);
        OnEffectAbsorb += AuraEffectAbsorbFn(tlpp_aura_warr_ignore_pain::OnAbsorb, EFFECT_0);
    }
};

void AddCustomWarriorSpellScripts()
{
    RegisterSpellScript(tlpp_spell_warr_heroic_leap);
    RegisterSpellAndAuraScriptPair(tlpp_spell_warr_ignore_pain, tlpp_aura_warr_ignore_pain);
}
