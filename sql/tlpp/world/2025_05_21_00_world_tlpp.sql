UPDATE `creature_template` SET `npcflag`=0 WHERE `entry`=72559; -- Thunder Bluff Protector
UPDATE `creature_template_addon` SET `StandState`=0, `SheathState`=0, `PvpFlags`=1, `auras`='' WHERE `entry`=72559; -- 72559 (Thunder Bluff Protector)

-- Pathing for Thunder Bluff Protector Entry: 72559 (guid 452644)
SET @ENTRY := 72559;
SET @PATHOFFSET := 0;
SET @PATH := @ENTRY * 100 + @PATHOFFSET;
DELETE FROM `waypoint_path` WHERE `PathId`= @PATH;
INSERT INTO `waypoint_path` (`PathId`, `MoveType`, `Flags`, `Comment`) VALUES
(@PATH, 0, 0, 'Thunder Bluff Protector');

DELETE FROM `waypoint_path_node` WHERE `PathId`= @PATH;
INSERT INTO `waypoint_path_node` (`PathId`, `NodeId`, `PositionX`, `PositionY`, `PositionZ`, `Orientation`, `Delay`) VALUES
(@PATH, 0, 1549.595, -4329.565, 26.091911, NULL, 0),
(@PATH, 1, 1550.845, -4331.565, 26.091911, NULL, 0),
(@PATH, 2, 1553.095, -4335.815, 22.841911, NULL, 0),
(@PATH, 3, 1562.845, -4346.815, 20.841911, NULL, 0),
(@PATH, 4, 1567.845, -4356.315, 21.091911, NULL, 0),
(@PATH, 5, 1573.095, -4367.065, 20.591911, NULL, 0),
(@PATH, 6, 1582.595, -4373.815, 20.841911, NULL, 0),
(@PATH, 7, 1594.095, -4372.065, 21.341911, NULL, 0);

-- protector 1
SET @CGUID=452644;
UPDATE `creature` SET `position_x` = 1546.4, `position_y` = -4325.35, `position_z` = 25.954325, `orientation` = 2.1387, `MovementType` = 2 WHERE `guid` = @CGUID;
DELETE FROM `creature_addon` WHERE `guid` = @CGUID;
INSERT INTO creature_addon (`guid`, `PathId`, `mount`, `MountCreatureID`, `StandState`, `AnimTier`, `VisFlags`, `SheathState`, `PvPFlags`, `emote`, `aiAnimKit`, `movementAnimKit`, `meleeAnimKit`, `visibilityDistanceType`, `auras`)
VALUES  (@CGUID, @PATH, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, '');

-- protector 2
SET @CGUID=452643;
UPDATE `creature` SET `position_x` = 1679.15, `position_y` = -4441.36, `position_z` = 22.747234, `orientation` = 3.54301 WHERE `guid` = @CGUID;
DELETE FROM `creature_addon` WHERE `guid` = @CGUID;
INSERT INTO creature_addon (`guid`, `PathId`, `mount`, `MountCreatureID`, `StandState`, `AnimTier`, `VisFlags`, `SheathState`, `PvPFlags`, `emote`, `aiAnimKit`, `movementAnimKit`, `meleeAnimKit`, `visibilityDistanceType`, `auras`)
VALUES  (@CGUID, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0, 0, 0, 0, '55701'); -- Cosmetic - Sleep Zzz Breakable

