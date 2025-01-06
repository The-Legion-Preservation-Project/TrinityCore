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
#include "SpellScript.h"
#include "SpellHistory.h"
#include "SpellInfo.h"

enum ShamanSpells
{
    SPELL_SHAMAN_STORMBRINGER           = 201845,
    SPELL_SHAMAN_STORMBRINGER_PROC      = 201846,
    SPELL_SHAMAN_STORMSTRIKE            = 17364,
    SPELL_SHAMAN_MAELSTROM_WEAPON_POWER = 187890,
    SPELL_SHAMAN_WINDFURY_ATTACK        = 25504
};

// 188070 - Healing Surge
class tlpp_spell_sha_healing_surge: public SpellScript
{
    PrepareSpellScript(tlpp_spell_sha_healing_surge);

public:
    void HandleCalcCastTime(int32& castTime)
    {
        int32 requiredMaelstrom = GetEffectInfo(EFFECT_2)->BasePoints;
        if (GetCaster()->GetPower(POWER_MAELSTROM) >= requiredMaelstrom)
        {
            castTime = 0;
            _takenPower = requiredMaelstrom;
        }
    }

    void HandleEnergize(SpellEffIndex /*effIndex*/)
    {
        SetEffectValue(-_takenPower);
    }

    void Register() override
    {
        OnCalcCastTime += SpellOnCalcCastTimeFn(tlpp_spell_sha_healing_surge::HandleCalcCastTime);
        OnEffectHitTarget += SpellEffectFn(tlpp_spell_sha_healing_surge::HandleEnergize, EFFECT_1, SPELL_EFFECT_ENERGIZE);
    }
private:
    int32 _takenPower = 0;
};

// 187880 - Maelstrom Weapon
class tlpp_spell_sha_maelstrom_weapon : public AuraScript
{
    PrepareAuraScript(tlpp_spell_sha_maelstrom_weapon);

    bool Validate(SpellInfo const* /*spellInfo*/) override
    {
        return ValidateSpellInfo({ SPELL_SHAMAN_MAELSTROM_WEAPON_POWER });
    }

    void HandleEffectProc(AuraEffect const* /*aurEff*/, ProcEventInfo& /*eventInfo*/)
    {
        if (Unit* caster = GetCaster())
            caster->CastSpell(caster, SPELL_SHAMAN_MAELSTROM_WEAPON_POWER, true);
    }

    void Register() override
    {
        OnEffectProc += AuraEffectProcFn(tlpp_spell_sha_maelstrom_weapon::HandleEffectProc, EFFECT_0, SPELL_AURA_DUMMY);
    }
};

// 201845 - Stormbringer
class tlpp_spell_sha_stormbringer : public AuraScript
{
    PrepareAuraScript(tlpp_spell_sha_stormbringer);

public:
    bool Validate(SpellInfo const* /*spellInfo*/) override
    {
        return ValidateSpellInfo({ SPELL_SHAMAN_STORMBRINGER_PROC, SPELL_SHAMAN_STORMSTRIKE });
    }

    bool CheckProc(ProcEventInfo& eventInfo)
    {
        return eventInfo.GetDamageInfo()->GetAttackType() == BASE_ATTACK;
    }

    void HandleProc(AuraEffect const* /*aurEff*/, ProcEventInfo& /*eventInfo*/)
    {
        if (Unit* caster = GetCaster())
        {
            caster->CastSpell(caster, SPELL_SHAMAN_STORMBRINGER_PROC, true);
            caster->GetSpellHistory()->ResetCooldown(SPELL_SHAMAN_STORMSTRIKE, true);
        }
    }

    void Register() override
    {
        DoCheckProc += AuraCheckProcFn(tlpp_spell_sha_stormbringer::CheckProc);
        OnEffectProc += AuraEffectProcFn(tlpp_spell_sha_stormbringer::HandleProc, EFFECT_0, SPELL_AURA_DUMMY);
    }
};

void AddCustomShamanSpellScripts()
{
    RegisterSpellScript(tlpp_spell_sha_healing_surge);
    RegisterAuraScript(tlpp_spell_sha_maelstrom_weapon);
    RegisterAuraScript(tlpp_spell_sha_stormbringer);
}
