DELETE FROM `spell_script_names` WHERE `spell_id` = 51533;
INSERT INTO `spell_script_names` (`spell_id`, `ScriptName`) VALUES (51533, 'tlpp_spell_sha_feral_spirit');

UPDATE `creature_template` SET `ScriptName` = 'tlpp_npc_feral_spirit' WHERE `entry` = 29264;
