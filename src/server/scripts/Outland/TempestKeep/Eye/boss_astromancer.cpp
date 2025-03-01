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

/* ScriptData
SDName: Boss_Astromancer
SD%Complete: 80
SDComment:
SDCategory: Tempest Keep, The Eye
EndScriptData */

#include "ScriptMgr.h"
#include "InstanceScript.h"
#include "MotionMaster.h"
#include "ObjectAccessor.h"
#include "ScriptedCreature.h"
#include "SpellAuras.h"
#include "SpellScript.h"
#include "TemporarySummon.h"
#include "the_eye.h"

enum Yells
{
    SAY_AGGRO                           = 0,
    SAY_SUMMON1                         = 1,
    SAY_SUMMON2                         = 2,
    SAY_KILL                            = 3,
    SAY_DEATH                           = 4,
    SAY_VOIDA                           = 5,
    SAY_VOIDB                           = 6
};

enum Spells
{
    SPELL_ARCANE_MISSILES               = 33031,
    SPELL_WRATH_OF_THE_ASTROMANCER      = 42783,
    SPELL_WRATH_OF_THE_ASTROMANCER_DOT  = 42784,
    SPELL_BLINDING_LIGHT                = 33009,
    SPELL_FEAR                          = 34322,
    SPELL_VOID_BOLT                     = 39329,

    SPELL_SPOTLIGHT                     = 25824,

    SPELL_SOLARIUM_GREAT_HEAL           = 33387,
    SPELL_SOLARIUM_HOLY_SMITE           = 25054,
    SPELL_SOLARIUM_ARCANE_TORRENT       = 33390
};

enum Creatures
{
    NPC_ASTROMANCER_SOLARIAN_SPOTLIGHT  = 18928,

    NPC_SOLARIUM_AGENT                  = 18925,
    NPC_SOLARIUM_PRIEST                 = 18806
};

enum Models
{
    MODEL_HUMAN                         = 18239,
    MODEL_VOIDWALKER                    = 18988
};

enum Misc
{
    WV_ARMOR                            = 31000
};

const float CENTER_X                    = 432.909f;
const float CENTER_Y                    = -373.424f;
const float CENTER_Z                    = 17.9608f;
const float CENTER_O                    = 1.06421f;
const float SMALL_PORTAL_RADIUS         = 12.6f;
const float LARGE_PORTAL_RADIUS         = 26.0f;
const float PORTAL_Z                    = 17.005f;

/* not used                        // x,          y,      z,         o
static float SolarianPos[4] = {432.909f, -373.424f, 17.9608f, 1.06421f};
*/

struct boss_high_astromancer_solarian : public BossAI
{
    boss_high_astromancer_solarian(Creature* creature) : BossAI(creature, DATA_SOLARIAN)
    {
        Initialize();

        defaultarmor = creature->GetArmor();
        memset(Portals, 0, sizeof(Portals));
    }

    void Initialize()
    {
        ArcaneMissiles_Timer = 2000;
        m_uiWrathOfTheAstromancer_Timer = 15000;
        BlindingLight_Timer = 41000;
        Fear_Timer = 20000;
        VoidBolt_Timer = 10000;
        Phase1_Timer = 50000;
        Phase2_Timer = 10s;
        Phase3_Timer = 15s;
        AppearDelay_Timer = 2s;
        BlindingLight = false;
        AppearDelay = false;
        Wrath_Timer = 20000 + rand32() % 5000;//twice in phase one
        Phase = 1;
    }

    uint8 Phase;

    uint32 ArcaneMissiles_Timer;
    uint32 m_uiWrathOfTheAstromancer_Timer;
    uint32 BlindingLight_Timer;
    uint32 Fear_Timer;
    uint32 VoidBolt_Timer;
    uint32 Phase1_Timer;
    Milliseconds Phase2_Timer;
    Milliseconds Phase3_Timer;
    Milliseconds AppearDelay_Timer;
    uint32 defaultarmor;
    uint32 Wrath_Timer;

    float Portals[3][3];

    bool AppearDelay;
    bool BlindingLight;

    void Reset() override
    {
        Initialize();
        _Reset();
        me->SetArmor(defaultarmor);
        me->RemoveUnitFlag(UNIT_FLAG_UNINTERACTIBLE);
        me->SetVisible(true);
        me->SetDisplayId(MODEL_HUMAN);

    }

    void KilledUnit(Unit* /*victim*/) override
    {
        Talk(SAY_KILL);
    }

    void JustDied(Unit* /*killer*/) override
    {
        me->SetDisplayId(MODEL_HUMAN);
        Talk(SAY_DEATH);
        _JustDied();
    }

    void JustEngagedWith(Unit* who) override
    {
        Talk(SAY_AGGRO);
        BossAI::JustEngagedWith(who);
        me->CallForHelp(120.0f);
    }

    void SummonMinion(uint32 entry, float x, float y, float z)
    {
        Creature* Summoned = me->SummonCreature(entry, x, y, z, 0, TEMPSUMMON_TIMED_DESPAWN_OUT_OF_COMBAT, 5s);
        if (Summoned)
        {
            if (Unit* target = SelectTarget(SelectTargetMethod::Random, 0))
                Summoned->AI()->AttackStart(target);

            summons.Summon(Summoned);
        }
    }

    float Portal_X(float radius)
    {
        if (urand(0, 1))
            radius = -radius;

        return radius * (float)(rand32() % 100) / 100.0f + CENTER_X;
    }

    float Portal_Y(float x, float radius)
    {
        float z = RAND(1.0f, -1.0f);

        return (z*std::sqrt(radius*radius - (x - CENTER_X)*(x - CENTER_X)) + CENTER_Y);
    }

    void UpdateAI(uint32 diff) override
    {
        if (!UpdateVictim())
            return;
        if (AppearDelay)
        {
            me->StopMoving();
            me->AttackStop();
            if (AppearDelay_Timer <= Milliseconds(diff))
            {
                AppearDelay = false;
                if (Phase == 2)
                {
                    me->SetUnitFlag(UNIT_FLAG_UNINTERACTIBLE);
                    me->SetVisible(false);
                }
                AppearDelay_Timer = 2s;
            }
            else
                AppearDelay_Timer -= Milliseconds(diff);
        }
        if (Phase == 1)
        {
            if (BlindingLight_Timer <= diff)
            {
                BlindingLight = true;
                BlindingLight_Timer = 45000;
            }
            else
                BlindingLight_Timer -= diff;

            if (Wrath_Timer <= diff)
            {
                me->InterruptNonMeleeSpells(false);
                if (Unit* target = SelectTarget(SelectTargetMethod::Random, 1, 100, true))
                    DoCast(target, SPELL_WRATH_OF_THE_ASTROMANCER, true);
                Wrath_Timer = 20000 + rand32() % 5000;
            }
            else
                Wrath_Timer -= diff;

            if (ArcaneMissiles_Timer <= diff)
            {
                if (BlindingLight)
                {
                    DoCastVictim(SPELL_BLINDING_LIGHT);
                    BlindingLight = false;
                }
                else
                {
                    if (Unit* target = SelectTarget(SelectTargetMethod::Random, 0))
                    {
                        if (!me->HasInArc(2.5f, target))
                            target = me->GetVictim();

                        DoCast(target, SPELL_ARCANE_MISSILES);
                    }
                }
                ArcaneMissiles_Timer = 3000;
            }
            else
                ArcaneMissiles_Timer -= diff;

            if (m_uiWrathOfTheAstromancer_Timer <= diff)
            {
                me->InterruptNonMeleeSpells(false);
                //Target the tank ?
                if (Unit* target = SelectTarget(SelectTargetMethod::Random, 1))
                {
                    if (target->GetTypeId() == TYPEID_PLAYER)
                    {
                        DoCast(target, SPELL_WRATH_OF_THE_ASTROMANCER);
                        m_uiWrathOfTheAstromancer_Timer = 25000;
                    }
                    else
                        m_uiWrathOfTheAstromancer_Timer = 1000;
                }
            }
            else
                m_uiWrathOfTheAstromancer_Timer -= diff;

            //Phase1_Timer
            if (Phase1_Timer <= diff)
            {
                Phase = 2;
                Phase1_Timer = 50000;
                //After these 50 seconds she portals to the middle of the room and disappears, leaving 3 light portals behind.
                me->GetMotionMaster()->Clear();
                me->UpdatePosition(CENTER_X, CENTER_Y, CENTER_Z, CENTER_O);
                for (uint8 i = 0; i <= 2; ++i)
                {
                    if (!i)
                    {
                        Portals[i][0] = Portal_X(SMALL_PORTAL_RADIUS);
                        Portals[i][1] = Portal_Y(Portals[i][0], SMALL_PORTAL_RADIUS);
                        Portals[i][2] = CENTER_Z;
                    }
                    else
                    {
                        Portals[i][0] = Portal_X(LARGE_PORTAL_RADIUS);
                        Portals[i][1] = Portal_Y(Portals[i][0], LARGE_PORTAL_RADIUS);
                        Portals[i][2] = PORTAL_Z;
                    }
                }
                if ((std::abs(Portals[2][0] - Portals[1][0]) < 7) && (std::abs(Portals[2][1] - Portals[1][1]) < 7))
                {
                    int i = 1;
                    if (std::abs(CENTER_X + 26.0f - Portals[2][0]) < 7)
                        i = -1;
                    Portals[2][0] = Portals[2][0] + 7 * i;
                    Portals[2][1] = Portal_Y(Portals[2][0], LARGE_PORTAL_RADIUS);
                }
                for (int i = 0; i <= 2; ++i)
                {
                    if (Creature* Summoned = me->SummonCreature(NPC_ASTROMANCER_SOLARIAN_SPOTLIGHT, Portals[i][0], Portals[i][1], Portals[i][2], CENTER_O, TEMPSUMMON_TIMED_DESPAWN, Phase2_Timer + Phase3_Timer + AppearDelay_Timer + 1700ms))
                    {
                        Summoned->SetUnitFlag(UNIT_FLAG_UNINTERACTIBLE);
                        Summoned->CastSpell(Summoned, SPELL_SPOTLIGHT, false);
                    }
                }
                AppearDelay = true;
            }
            else
                Phase1_Timer -= diff;
        }
        else if (Phase == 2)
        {
            //10 seconds after Solarian disappears, 12 mobs spawn out of the three portals.
            me->AttackStop();
            me->StopMoving();
            if (Phase2_Timer <= Milliseconds(diff))
            {
                Phase = 3;
                for (int i=0; i <= 2; ++i)
                    for (int j=1; j <= 4; j++)
                        SummonMinion(NPC_SOLARIUM_AGENT, Portals[i][0], Portals[i][1], Portals[i][2]);

                Talk(SAY_SUMMON1);
                Phase2_Timer = 10s;
            }
            else
                Phase2_Timer -= Milliseconds(diff);
        }
        else if (Phase == 3)
        {
            me->AttackStop();
            me->StopMoving();
            //Check Phase3_Timer
            if (Phase3_Timer <= Milliseconds(diff))
            {
                Phase = 1;
                //15 seconds later Solarian reappears out of one of the 3 portals. Simultaneously, 2 healers appear in the two other portals.
                int i = rand32() % 3;
                me->GetMotionMaster()->Clear();
                me->UpdatePosition(Portals[i][0], Portals[i][1], Portals[i][2], CENTER_O);

                for (int j=0; j <= 2; j++)
                    if (j != i)
                        SummonMinion(NPC_SOLARIUM_PRIEST, Portals[j][0], Portals[j][1], Portals[j][2]);

                me->RemoveUnitFlag(UNIT_FLAG_UNINTERACTIBLE);
                me->SetVisible(true);

                Talk(SAY_SUMMON2);
                AppearDelay = true;
                Phase3_Timer = 15s;
            }
            else
                Phase3_Timer -= Milliseconds(diff);
        }
        else if (Phase == 4)
        {
            //Fear_Timer
            if (Fear_Timer <= diff)
            {
                DoCast(me, SPELL_FEAR);
                Fear_Timer = 20000;
            }
            else
                Fear_Timer -= diff;
            //VoidBolt_Timer
            if (VoidBolt_Timer <= diff)
            {
                DoCastVictim(SPELL_VOID_BOLT);
                VoidBolt_Timer = 10000;
            }
            else
                VoidBolt_Timer -= diff;
        }

        //When Solarian reaches 20% she will transform into a huge void walker.
        if (Phase != 4 && me->HealthBelowPct(20))
        {
            Phase = 4;
            //To make sure she wont be invisible or not selecatble
            me->RemoveUnitFlag(UNIT_FLAG_UNINTERACTIBLE);
            me->SetVisible(true);
            Talk(SAY_VOIDA);
            Talk(SAY_VOIDB);
            me->SetArmor(WV_ARMOR);
            me->SetDisplayId(MODEL_VOIDWALKER);
        }

        DoMeleeAttackIfReady();
    }
};

struct npc_solarium_priest : public ScriptedAI
{
    npc_solarium_priest(Creature* creature) : ScriptedAI(creature)
    {
        Initialize();
        instance = creature->GetInstanceScript();
    }

    void Initialize()
    {
        healTimer = 9000;
        holysmiteTimer = 1;
        aoesilenceTimer = 15000;
    }

    InstanceScript* instance;

    uint32 healTimer;
    uint32 holysmiteTimer;
    uint32 aoesilenceTimer;

    void Reset() override
    {
        Initialize();
    }

    void JustEngagedWith(Unit* /*who*/) override { }

    void UpdateAI(uint32 diff) override
    {
        if (!UpdateVictim())
            return;

        if (healTimer <= diff)
        {
            Unit* target = nullptr;
            switch (urand(0, 1))
            {
                case 0:
                    target = ObjectAccessor::GetUnit(*me, instance->GetGuidData(DATA_SOLARIAN));
                    break;
                case 1:
                    target = me;
                    break;
            }

            if (target)
            {
                DoCast(target, SPELL_SOLARIUM_GREAT_HEAL);
                healTimer = 9000;
            }
        }
        else
            healTimer -= diff;

        if (holysmiteTimer <= diff)
        {
            DoCastVictim(SPELL_SOLARIUM_HOLY_SMITE);
            holysmiteTimer = 4000;
        }
        else
            holysmiteTimer -= diff;

        if (aoesilenceTimer <= diff)
        {
            DoCastVictim(SPELL_SOLARIUM_ARCANE_TORRENT);
            aoesilenceTimer = 13000;
        }
        else
            aoesilenceTimer -= diff;

        DoMeleeAttackIfReady();
    }
};

// 42783 - Wrath of the Astromancer
class spell_astromancer_wrath_of_the_astromancer : public AuraScript
{
    PrepareAuraScript(spell_astromancer_wrath_of_the_astromancer);

    bool Validate(SpellInfo const* spellInfo) override
    {
        return ValidateSpellInfo({ SPELL_WRATH_OF_THE_ASTROMANCER_DOT })
            && spellInfo->GetEffects().size() > EFFECT_1;
    }

    void AfterRemove(AuraEffect const* /*aurEff*/, AuraEffectHandleModes /*mode*/)
    {
        // Final heal only on duration end
        if (GetTargetApplication()->GetRemoveMode() != AURA_REMOVE_BY_EXPIRE)
            return;

        Unit* target = GetUnitOwner();
        target->CastSpell(target, GetEffectInfo(EFFECT_1).CalcValue(), false);
    }

    void Register() override
    {
        AfterEffectRemove += AuraEffectRemoveFn(spell_astromancer_wrath_of_the_astromancer::AfterRemove, EFFECT_0, SPELL_AURA_PERIODIC_TRIGGER_SPELL, AURA_EFFECT_HANDLE_REAL);
    }
};

void AddSC_boss_high_astromancer_solarian()
{
    RegisterTheEyeCreatureAI(boss_high_astromancer_solarian);
    RegisterTheEyeCreatureAI(npc_solarium_priest);
    RegisterSpellScript(spell_astromancer_wrath_of_the_astromancer);
}
