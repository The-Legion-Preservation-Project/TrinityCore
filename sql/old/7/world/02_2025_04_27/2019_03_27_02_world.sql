--

UPDATE `quest_poi` `poi` JOIN `bfa_map_conversion` `map` ON `poi`.`UiMapId` = `map`.`UiMapID`
SET `poi`.`WorldMapAreaId` = `map`.`WorldMapAreaID`, `poi`.`Floor` = `map`.`DungeonFloor`;

ALTER TABLE `quest_poi`
    DROP `UiMapId`;
