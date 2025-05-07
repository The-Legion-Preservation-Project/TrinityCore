DROP TABLE IF EXISTS `pvp_stat`;

CREATE TABLE `pvp_stat`  (
  `MapID` int UNSIGNED NOT NULL,
  `PVPStatID` int UNSIGNED NOT NULL,
  `Comment` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  PRIMARY KEY (`MapID`, `PVPStatID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

INSERT INTO `pvp_stat` (MapID, PVPStatID, Comment) VALUES
(529, 122, 'Arathi Basin - Bases Assaulted'),
(529, 123, 'Arathi Basin - Bases Defended'),
(30, 61, 'Alterac Valley - Towers Assaulted'),
(30, 63, 'Alterac Valley - Graveyards Assaulted'),
(30, 64, 'Alterac Valley - Towers Defended'),
(30, 65, 'Alterac Valley - Graveyards Defended'),
(30, 82, 'Alterac Valley - Secondary Objectives'),
(607, 231, 'Strand of the Ancients - Gates Destroyed'),
(607, 232, 'Strand of the Ancients - Demolishers Destroyed'),
(726, 290, 'Twin Peaks - Flag Captures'),
(726, 291, 'Twin Peaks - Flag Returns'),
(489, 42, 'Warsong Gulch - Flag Captures'),
(489, 44, 'Warsong Gulch - Flag Returns'),
(628, 245, 'Isle of Conquest - Bases Assaulted'),
(628, 246, 'Isle of Conquest - Bases Defended'),
(566, 183, 'Eye of the Storm - Flag Captures'),
(761, 370, 'The Battle for Gilneas - Bases Assaulted'),
(761, 371, 'The Battle for Gilneas - Bases Defended');
