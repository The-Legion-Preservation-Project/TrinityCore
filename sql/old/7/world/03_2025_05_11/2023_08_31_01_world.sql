-- 
ALTER TABLE `areatrigger` ADD COLUMN `SpellForVisuals` int NULL DEFAULT NULL AFTER `ShapeData5`;
ALTER TABLE `areatrigger` ADD COLUMN `VerifiedBuild` int NOT NULL DEFAULT '0' AFTER `Comment`;
