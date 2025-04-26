--
-- Table structure for table `garr_talent_tree`
--
DROP TABLE IF EXISTS `garr_talent_tree`;
CREATE TABLE `garr_talent_tree` (
  `ID` int(10) unsigned NOT NULL DEFAULT '0',
  `UiTextureKitID` smallint(5) unsigned NOT NULL DEFAULT '0',
  `MaxTiers` tinyint(4) NOT NULL DEFAULT '0',
  `UiOrder` tinyint(4) NOT NULL DEFAULT '0',
  `ClassID` int(11) NOT NULL DEFAULT '0',
  `GarrTypeID` tinyint(3) unsigned NOT NULL DEFAULT '0',
  `VerifiedBuild` int(11) NOT NULL DEFAULT '0',
  PRIMARY KEY (`ID`,`VerifiedBuild`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;
