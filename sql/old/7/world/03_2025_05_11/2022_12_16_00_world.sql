--
-- Table structure for table `serverside_spell`
--
ALTER TABLE `serverside_spell`
  ADD `CasterAuraType` int NOT NULL DEFAULT 0 AFTER `ExcludeTargetAuraSpell`,
  ADD `TargetAuraType` int NOT NULL DEFAULT 0 AFTER `CasterAuraType`,
  ADD `ExcludeCasterAuraType` int NOT NULL DEFAULT 0 AFTER `TargetAuraType`,
  ADD `ExcludeTargetAuraType` int NOT NULL DEFAULT 0 AFTER `ExcludeCasterAuraType`;
