ALTER TABLE `creature_template_scaling`
    ADD COLUMN `DifficultyID` TINYINT(3) UNSIGNED NOT NULL DEFAULT '0' AFTER `Entry`,
    DROP PRIMARY KEY,
    ADD PRIMARY KEY (`Entry`, `DifficultyID`);
