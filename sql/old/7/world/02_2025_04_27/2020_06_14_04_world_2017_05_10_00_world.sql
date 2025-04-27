-- Arcatraz Sentinel (20869, 21586)
DELETE FROM `creature_template_addon` WHERE entry IN (20869, 21586);
INSERT INTO `creature_template_addon` (entry, path_id, mount, bytes1, bytes2, emote, auras) VALUES
(20869, 0, 0, 0, 1, 0, "31261 36716"),
(21586, 0, 0, 0, 1, 0, "31261 38828");

UPDATE `creature_template` SET `AIName`='SmartAI' WHERE `entry`=20869;
DELETE FROM `smart_scripts` WHERE `entryorguid`=20869 AND `source_type`=0;
INSERT INTO `smart_scripts` (`entryorguid`, `source_type`, `id`, `link`, `event_type`, `event_phase_mask`, `event_chance`, `event_flags`, `event_param1`, `event_param2`, `event_param3`, `event_param4`, `event_param5`, `event_param_string`, `action_type`, `action_param1`, `action_param2`, `action_param3`, `action_param4`, `action_param5`, `action_param6`, `target_type`, `target_param1`, `target_param2`, `target_param3`, `target_x`, `target_y`, `target_z`, `target_o`, `comment`) VALUES
(20869, 0, 0, 0, 2, 0, 100, 1, 0, 10, 0, 0, 0, '', 11, 36719, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 'Arcatraz Sentinel - Between 0-2% Health - Cast Spell Explode'),
(20869, 0, 1, 0, 6, 0, 100, 1, 0, 0, 0, 0, 0, '', 11, 37394, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 'Arcatraz Sentinel - Death - Cast Serverside - Summon Destroyed Sentinel'),
(20869, 0, 2, 3, 10, 0, 100, 1, 0, 15, 0, 0, 1, '', 28, 31261, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 'Arcatraz Sentinel - ooc los - remove aura'),
(20869, 0, 3, 0, 61, 0, 100, 0, 0, 0, 0, 0, 0, '', 49, 0, 0, 0, 0, 0, 0, 21, 50, 0, 0, 0, 0, 0, 0, 'Arcatraz Sentinel - ooc los - Start attack');

-- DELETE FROM `spelldifficulty_dbc` WHERE id IN (36719,36716);
-- INSERT INTO `spelldifficulty_dbc` (`id`,`spellid0`, `spellid1`) VALUES
-- (36719,36719,38830),
-- (36716,36716,38828);
