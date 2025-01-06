DELETE FROM `spell_script_names` WHERE `spell_id` = 201845;
INSERT INTO `spell_script_names` (`spell_id`, `ScriptName`) VALUES (201845, 'tlpp_spell_sha_stormbringer');

DELETE FROM `spell_proc` WHERE `SpellId` = 201846;
INSERT INTO `spell_proc` (`SpellId`, `SchoolMask`, `SpellFamilyName`, `SpellFamilyMask0`, `SpellFamilyMask1`, `SpellFamilyMask2`, `SpellFamilyMask3`, `ProcFlags`, `SpellTypeMask`, `SpellPhaseMask`, `HitMask`, `AttributesMask`, `ProcsPerMinute`, `Chance`, `Cooldown`, `Charges`) VALUES
(201846, 0, 0, 0, 0, 0, 0, 16, 0, 1, 0, 0, 0, 0, 0, 0);

DELETE FROM `spell_script_names` WHERE `spell_id` = 187880;
INSERT INTO `spell_script_names` (`spell_id`, `ScriptName`) VALUES (187880, 'tlpp_spell_sha_maelstrom_weapon');
