DROP TABLE IF EXISTS `creature_template_model`;
CREATE TABLE `creature_template_model`(
  `CreatureID` int(10) unsigned NOT NULL,
  `Idx` int(10) unsigned NOT NULL DEFAULT '0',
  `CreatureDisplayID` int(10) unsigned NOT NULL,
  `Probability` float NOT NULL DEFAULT '0',
  `VerifiedBuild` smallint(5) NOT NULL DEFAULT '0',
  PRIMARY KEY (`CreatureID`,`CreatureDisplayID`)
) ENGINE=MYISAM CHARSET=utf8mb4;

INSERT IGNORE INTO `creature_template_model` (`CreatureID`,`Idx`,`CreatureDisplayID`,`Probability`,`VerifiedBuild`) SELECT `entry`,0,`modelid1`,1,`VerifiedBuild` FROM `creature_template` WHERE `modelid1`!=0;
INSERT IGNORE INTO `creature_template_model` (`CreatureID`,`Idx`,`CreatureDisplayID`,`Probability`,`VerifiedBuild`) SELECT `entry`,1,`modelid2`,1,`VerifiedBuild` FROM `creature_template` WHERE `modelid2`!=0;
INSERT IGNORE INTO `creature_template_model` (`CreatureID`,`Idx`,`CreatureDisplayID`,`Probability`,`VerifiedBuild`) SELECT `entry`,2,`modelid3`,1,`VerifiedBuild` FROM `creature_template` WHERE `modelid3`!=0;
INSERT IGNORE INTO `creature_template_model` (`CreatureID`,`Idx`,`CreatureDisplayID`,`Probability`,`VerifiedBuild`) SELECT `entry`,3,`modelid4`,1,`VerifiedBuild` FROM `creature_template` WHERE `modelid4`!=0;

ALTER TABLE `creature_template`
  DROP `modelid1`,
  DROP `modelid2`,
  DROP `modelid3`,
  DROP `modelid4`;
