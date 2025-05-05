-- update template
UPDATE `creature_template` SET `ScriptName` = '' WHERE `entry` = 19232;

-- Gossip Menu Options
DELETE FROM `gossip_menu_option` WHERE `MenuID`=7949;
INSERT INTO `gossip_menu_option` (`MenuID`, `OptionID`, `OptionNpc`, `OptionText`, `OptionBroadcastTextId`, `ActionMenuID`, `ActionPoiID`, `BoxCoded`, `BoxMoney`, `BoxText`, `BoxBroadcastTextID`, `VerifiedBuild`) VALUES
(7949, 1, 1, 'Let me browse your goods.', 0, 0, 0, 0, 0, NULL, 0, 50747), -- for Innkeeper Haelthol
(7949, 0, 5, 'Make this inn your home.', 0, 0, 0, 0, 0, NULL, 0, 50747); -- for Innkeeper Haelthol
