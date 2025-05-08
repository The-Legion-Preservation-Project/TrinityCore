ALTER TABLE `achievement_category` MODIFY `UiOrder` tinyint NOT NULL DEFAULT 0 AFTER `Parent`;

ALTER TABLE `adventure_journal` MODIFY `PlayerConditionID` int UNSIGNED NOT NULL DEFAULT 0 AFTER `CurrencyQuantity`;
ALTER TABLE `adventure_journal` MODIFY `ItemQuantity` int UNSIGNED NOT NULL DEFAULT 0 AFTER `PlayerConditionID`;

ALTER TABLE `adventure_map_poi` MODIFY `RewardItemID` int NOT NULL DEFAULT 0 AFTER `WorldPositionY`;
ALTER TABLE `adventure_map_poi` MODIFY `Type` tinyint NOT NULL DEFAULT 0 AFTER `RewardItemID`;

ALTER TABLE `chr_class_ui_display` MODIFY `AdvGuidePlayerConditionID` int UNSIGNED NOT NULL DEFAULT 0 AFTER `ChrClassesID`;
ALTER TABLE `chr_class_ui_display` MODIFY `SplashPlayerConditionID` int UNSIGNED NOT NULL DEFAULT 0 AFTER `AdvGuidePlayerConditionID`;

ALTER TABLE `creature_display_info` MODIFY `CreatureGeosetData` int NOT NULL DEFAULT 0 AFTER `ParticleColorID`;

ALTER TABLE `faction` MODIFY `ReputationClassMask1` smallint UNSIGNED NOT NULL DEFAULT 0 AFTER `ReputationIndex`;
ALTER TABLE `faction` MODIFY `ReputationClassMask2` smallint UNSIGNED NOT NULL DEFAULT 0 AFTER `ReputationClassMask1`;
ALTER TABLE `faction` MODIFY `ReputationClassMask3` smallint UNSIGNED NOT NULL DEFAULT 0 AFTER `ReputationClassMask2`;
ALTER TABLE `faction` MODIFY `ReputationClassMask4` smallint UNSIGNED NOT NULL DEFAULT 0 AFTER `ReputationClassMask3`;

DROP TABLE `garr_plot_locale`;

ALTER TABLE `item_modified_appearance_extra` MODIFY `DisplayWeaponSubclassID` tinyint NOT NULL DEFAULT 0 AFTER `SheatheType`;
ALTER TABLE `item_modified_appearance_extra` MODIFY `DisplayInventoryType` tinyint NOT NULL DEFAULT 0 AFTER `DisplayWeaponSubclassID`;

ALTER TABLE `language_words` MODIFY `LanguageID` tinyint UNSIGNED NOT NULL DEFAULT 0 AFTER `Word`;

ALTER TABLE `lfg_dungeons` MODIFY `Flags` int UNSIGNED NOT NULL DEFAULT 0 AFTER `Description`;

ALTER TABLE `spell_label` MODIFY `SpellID` int NOT NULL DEFAULT 0 AFTER `LabelID`;
