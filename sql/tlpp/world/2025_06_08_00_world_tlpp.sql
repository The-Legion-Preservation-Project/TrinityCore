-- Fix Felsaber npc spellclick spell
UPDATE `creature_template` SET `npcflag` = 16777216 WHERE `entry` = 101518;

UPDATE `creature_template_addon` SET `auras`='188485' WHERE `entry`=98497; -- 98497 (Imp Mother) - Fel Channelling
