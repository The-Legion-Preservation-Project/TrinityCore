ALTER TABLE `gameobject_template` ADD `Data33` int(11) NOT NULL DEFAULT '0' AFTER `Data32`;

ALTER TABLE `quest_poi`
  CHANGE `WoDUnk1` `SpawnTrackingID` int(11) NOT NULL DEFAULT '0' AFTER `PlayerConditionID`;

ALTER TABLE `quest_template`
  CHANGE `QuestRewardID` `TreasurePickerID` int(11) NOT NULL DEFAULT '0' AFTER `AllowableRaces`;

ALTER TABLE `spell_areatrigger`
  ADD `AnimId` int(11) NOT NULL DEFAULT '0' AFTER `FacingCurveId`,
  ADD `AnimKitId` int(11) NOT NULL DEFAULT '0' AFTER `AnimId`;
