--
-- Table structure for table `quest_reward_choice_items`
--
DROP TABLE IF EXISTS `quest_reward_choice_items`;
CREATE TABLE `quest_reward_choice_items` (
  `QuestID` int(10) unsigned NOT NULL,
  `Type1` tinyint(3) unsigned DEFAULT '0',
  `Type2` tinyint(3) unsigned DEFAULT '0',
  `Type3` tinyint(3) unsigned DEFAULT '0',
  `Type4` tinyint(3) unsigned DEFAULT '0',
  `Type5` tinyint(3) unsigned DEFAULT '0',
  `Type6` tinyint(3) unsigned DEFAULT '0',
  `VerifiedBuild` int(11) NOT NULL DEFAULT '0',
  PRIMARY KEY (`QuestID`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

--
-- Table structure for table `quest_reward_display_spell`
--
DROP TABLE IF EXISTS `quest_reward_display_spell`;
CREATE TABLE `quest_reward_display_spell` (
  `QuestID` int(10) unsigned NOT NULL,
  `Idx` int(10) unsigned NOT NULL,
  `SpellID` int(10) unsigned DEFAULT '0',
  `PlayerConditionID` int(10) unsigned DEFAULT '0',
  `VerifiedBuild` int(11) NOT NULL DEFAULT '0',
  PRIMARY KEY (`QuestID`,`Idx`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;
