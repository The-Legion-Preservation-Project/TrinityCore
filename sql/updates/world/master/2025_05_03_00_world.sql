 UPDATE `battleground_template` SET `StartMaxDist`= 75, `Weight`= 1 WHERE `ID`= 108;
 DELETE FROM `gameobject` WHERE `id` IN (179830, 179831, 179785, 179786, 179871, 179904, 179905, 179899, 179907, 179906) AND `map`= 726;
 
 DELETE FROM `graveyard_zone` WHERE `ID` IN (1728, 1729, 1749, 1750);
 INSERT INTO `graveyard_zone` (`ID`, `GhostZone`, `Comment`) VALUES
 (1728, 5031, 'Twin Peaks - Horde Base'),
 (1729, 5031, 'Twin Peaks - Alliance Base'),
 (1749, 5031, 'Twin Peaks - Alliance Center'),
 (1750, 5031, 'Twin Peaks - Horde Center');
 
 DELETE FROM `world_state` WHERE `ID` IN (5746, 5747);
 INSERT INTO `world_state` (`ID`, `DefaultValue`, `MapIDs`, `Comment`) VALUES
 (5746, 0, '726', 'Twin Peaks - Double Jeopardy Alliance'),
 (5747, 0, '726', 'Twin Peaks - Double Jeopardy Horde');
 