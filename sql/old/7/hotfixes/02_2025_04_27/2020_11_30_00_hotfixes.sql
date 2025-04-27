--
-- Table structure for table `character_loadout`
--
DROP TABLE IF EXISTS `character_loadout`;
CREATE TABLE `character_loadout` (
  `ID` int(10) unsigned NOT NULL DEFAULT '0',
  `RaceMask` bigint(20) NOT NULL DEFAULT '0',
  `ChrClassID` tinyint(4) NOT NULL DEFAULT '0',
  `Purpose` tinyint(4) NOT NULL DEFAULT '0',
  `VerifiedBuild` int(11) NOT NULL DEFAULT '0',
  PRIMARY KEY (`ID`,`VerifiedBuild`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Table structure for table `character_loadout_item`
--
DROP TABLE IF EXISTS `character_loadout_item`;
CREATE TABLE `character_loadout_item` (
  `ID` int(10) unsigned NOT NULL DEFAULT '0',
  `ItemID` int(10) unsigned NOT NULL DEFAULT '0',
  `CharacterLoadoutID` smallint(5) unsigned NOT NULL DEFAULT '0',
  `VerifiedBuild` int(11) NOT NULL DEFAULT '0',
  PRIMARY KEY (`ID`,`VerifiedBuild`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;
