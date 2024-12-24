--
-- Table structure for table `animation_data`
--
DROP TABLE IF EXISTS `animation_data`;
CREATE TABLE `animation_data` (
  `ID` int(10) NOT NULL DEFAULT '0',
  `Flags` int(11) NOT NULL DEFAULT '0',
  `Fallback` smallint(5) unsigned NOT NULL DEFAULT '0',
  `BehaviorID` smallint(5) unsigned NOT NULL DEFAULT '0',
  `BehaviorTier` tinyint(3) unsigned NOT NULL DEFAULT '0',
  `VerifiedBuild` smallint(6) NOT NULL DEFAULT '0',
  PRIMARY KEY (`ID`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;
