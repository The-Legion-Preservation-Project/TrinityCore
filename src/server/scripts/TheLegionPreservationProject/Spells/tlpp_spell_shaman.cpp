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
#include "SpellInfo.h"

// 188070 Healing Surge
class tlpp_spell_sha_healing_surge: public SpellScript
{
    PrepareSpellScript(tlpp_spell_sha_healing_surge);

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

void AddCustomShamanSpellScripts()
{
    RegisterSpellScript(tlpp_spell_sha_healing_surge);
}
