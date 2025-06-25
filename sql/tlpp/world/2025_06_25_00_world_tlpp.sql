DELETE FROM `playerchoice` WHERE `ChoiceId`=248;
INSERT INTO `playerchoice` (`ChoiceId`, `UiTextureKitId`, `Question`, `HideWarboardHeader`, `VerifiedBuild`) VALUES
(248, 0, 'Which weapon should we pursue first?', 0, 24742);

DELETE FROM `playerchoice_response` WHERE (`ChoiceId`=248 AND `ResponseId`=534 AND `Index`=2) OR (`ChoiceId`=248 AND `ResponseId`=533 AND `Index`=1) OR (`ChoiceId`=248 AND `ResponseId`=532 AND `Index`=0);
INSERT INTO `playerchoice_response` (`ChoiceId`, `ResponseId`, `Index`, `ChoiceArtFileId`, `Header`, `Answer`, `Description`, `Confirmation`, `VerifiedBuild`) VALUES
(248, 534, 2, 1389392, 'Discipline', 'Select', 'Obsessed with cleansing undead from Azeroth, the fanatical Scarlet Crusade tried to create a second Ashbringer in the form of a staff. However, due to treachery from within, the ritual failed in a great fiery explosion. The damaged staff\'s power proved nearly uncontrollable.^M\n^M\nFearing its destructive power, the elite magi of the Kirin Tor hid it away from the hands of men.', 'CONFIRM_ARTIFACT_CHOICE', 24742),
(248, 533, 1, 1389394, 'Shadow', 'Select', 'An ancient dagger of the Old Gods has resurfaced in a bid to restore the Twilight\'s Hammer to power. They are performing an unholy ritual nearby that must be stopped.^M\n^M\nThe Blade of the Black Empire is a powerful void-attuned sacrificial dagger that has been used in horrific rites to the Old Gods since time immemorial. It enhances its owners with powerful shadow energy.', 'CONFIRM_ARTIFACT_CHOICE', 24742),
(248, 532, 0, 1389393, 'Holy', 'Select', 'The Draenei had to flee from many worlds as the Legion chased after them across the heavens. It is upon one of these worlds where a valiant few remained with the radiant jewel of healing, T\'uure, to face the Legion and allow their friends to escape.^M\n^M\nA rumor is spreading that a soldier in Dalaran has seen the lost crystal in possession of the Legion. If this is true it must be retrieved!', 'CONFIRM_ARTIFACT_CHOICE', 24742);

DELETE FROM `playerchoice_response_reward` WHERE (`ChoiceId`=248 AND `ResponseId` IN (534,533,532));
INSERT INTO `playerchoice_response_reward` (`ChoiceId`, `ResponseId`, `TitleId`, `PackageId`, `SkillLineId`, `SkillPointCount`, `ArenaPointCount`, `HonorPointCount`, `Money`, `Xp`, `VerifiedBuild`) VALUES
(248, 534, 0, 0, 0, 0, 0, 0, 0, 0, 24742),
(248, 533, 0, 0, 0, 0, 0, 0, 0, 0, 24742),
(248, 532, 0, 0, 0, 0, 0, 0, 0, 0, 24742);

DELETE FROM `playerchoice_response_reward_item` WHERE (`ChoiceId`=248 AND `ResponseId`=534 AND `Index`=0) OR (`ChoiceId`=248 AND `ResponseId`=533 AND `Index`=0) OR (`ChoiceId`=248 AND `ResponseId`=532 AND `Index`=0);
INSERT INTO `playerchoice_response_reward_item` (`ChoiceId`, `ResponseId`, `Index`, `ItemId`, `BonusListIDs`, `Quantity`, `VerifiedBuild`) VALUES
(248, 534, 0, 128868, '', 1, 24742),
(248, 533, 0, 128827, '', 1, 24742),
(248, 532, 0, 128825, '', 1, 24742);
