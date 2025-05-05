DROP TABLE IF EXISTS `instance_final_encounter`;

CREATE TABLE `instance_final_encounter`  (
  `JournalEncounterID` int UNSIGNED NOT NULL,
  `FinalDungeonEncounterID` int UNSIGNED NOT NULL,
  PRIMARY KEY (`JournalEncounterID`, `FinalDungeonEncounterID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

