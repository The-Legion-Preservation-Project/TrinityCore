ALTER TABLE `areatrigger_template`
  DROP PRIMARY KEY,
  ADD COLUMN `IsServerSide` tinyint(1) unsigned NOT NULL AFTER `Id`,
  ADD PRIMARY KEY (`Id`, `IsServerSide`);

ALTER TABLE `areatrigger_template_actions`
  DROP PRIMARY KEY,
  ADD COLUMN `IsServerSide` tinyint(1) unsigned NOT NULL AFTER `AreaTriggerId`,
  ADD PRIMARY KEY (`AreaTriggerId`, `IsServerSide`);

CREATE TABLE `areatrigger` (
  `SpawnId` bigint(20) unsigned NOT NULL,
  `AreaTriggerId` int(10) unsigned NOT NULL,
  `IsServerSide` tinyint(1) unsigned NOT NULL,
  `MapId` int(10) unsigned NOT NULL,
  `PosX` float NOT NULL,
  `PosY` float NOT NULL,
  `PosZ` float NOT NULL,
  `Orientation` float NOT NULL,
  `PhaseUseFlags` tinyint(3) unsigned DEFAULT '0',
  `PhaseId` int(10) unsigned DEFAULT '0',
  `PhaseGroup` int(10) unsigned DEFAULT '0',
  `Comment` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`SpawnId`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;

