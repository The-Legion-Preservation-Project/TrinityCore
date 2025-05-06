UPDATE `creature_template` SET `npcflag` = 0x200000003 WHERE `entry` = 79243; -- Baros Alexston (Garrison Architect)

DELETE FROM `creature_template_gossip` WHERE `CreatureID` = 79243;
INSERT INTO `creature_template_gossip` (`CreatureID`, `MenuID`, `VerifiedBuild`) VALUES
(79243, 16871, -1);

