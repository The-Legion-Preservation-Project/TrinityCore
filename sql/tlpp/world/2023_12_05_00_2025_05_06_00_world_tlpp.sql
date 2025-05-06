DROP TABLE IF EXISTS `pvp_stat`;

CREATE TABLE `pvp_stat`  (
  `MapID` int UNSIGNED NOT NULL,
  `PVPStatID` int UNSIGNED NOT NULL,
  `Comment` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  PRIMARY KEY (`MapID`, `PVPStatID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

INSERT INTO `pvp_stat` (MapID, PVPStatID, Comment) VALUES
(529, 122, 'Arathi Basin - Bases Assaulted'),
(529, 123, 'Arathi Basin - Bases Defended');
