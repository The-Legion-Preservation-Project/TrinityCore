UPDATE `quest_template_addon` SET `PrevQuestID`= 14075, `NextQuestID`= 28349 WHERE `ID`= 25473;
UPDATE `quest_template_addon` SET `PrevQuestID`= 25473, `NextQuestID`= 14071 WHERE `ID`= 28349;
UPDATE `quest_template_addon` SET `PrevQuestID`= 28349, `NextQuestID`= 24567 WHERE `ID`= 14071;
UPDATE `quest_template_addon` SET `NextQuestID`= 14113 WHERE `ID`= 14110;
UPDATE `quest_template_addon` SET `NextQuestID`= 24488 WHERE `ID`= 24567;
UPDATE `quest_template_addon` SET `NextQuestID`= 24502 WHERE `ID`= 24488;
UPDATE `quest_template_addon` SET `NextQuestID`= 24503 WHERE `ID`= 24502;
UPDATE `quest_template_addon` SET `PrevQuestID`= 14109 WHERE `ID`= 14113;
UPDATE `quest_template_addon` SET `PrevQuestID`= 14110 WHERE `ID`= 14153;
UPDATE `quest_template_addon` SET `NextQuestID`= 14120 WHERE `ID`= 14116;
UPDATE `quest_template_addon` SET `NextQuestID`= 14122 WHERE `ID`= 14120;
UPDATE `quest_template_addon` SET `PrevQuestID`= 14124 WHERE `ID`= 14125;

DELETE FROM `quest_template_addon` WHERE `ID` IN (26711, 26712, 14109, 14115);
INSERT INTO `quest_template_addon` (`ID`, `PrevQuestID`, `NextQuestID`) VALUES
(26711, 24520, 14110),
(26712, 24520, 14109),
(14109, 24520, 14153),
(14115, 14153, 14116);
