--
-- Table structure for table `item_context_picker_entry`
--

DROP TABLE IF EXISTS `item_context_picker_entry`;
CREATE TABLE `item_context_picker_entry` (
  `ID` int(10) unsigned NOT NULL DEFAULT '0',
  `ItemCreationContext` tinyint(3) unsigned NOT NULL DEFAULT '0',
  `OrderIndex` tinyint(3) unsigned NOT NULL DEFAULT '0',
  `PVal` int(11) NOT NULL DEFAULT '0',
  `Flags` int(10) unsigned NOT NULL DEFAULT '0',
  `PlayerConditionID` int(10) unsigned NOT NULL DEFAULT '0',
  `ItemContextPickerID` int(10) unsigned NOT NULL DEFAULT '0',
  `VerifiedBuild` int(11) NOT NULL DEFAULT '0',
  PRIMARY KEY (`ID`,`VerifiedBuild`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;
