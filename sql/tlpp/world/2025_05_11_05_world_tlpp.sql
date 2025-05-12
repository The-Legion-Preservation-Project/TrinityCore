UPDATE `creature_queststarter` SET `VerifiedBuild` = 0 WHERE `VerifiedBuild` > 26972;
UPDATE `creature_questender` SET `VerifiedBuild` = 0 WHERE `VerifiedBuild` > 26972;

UPDATE `creature_template` SET `VerifiedBuild` = 0 WHERE `VerifiedBuild` > 26972;
UPDATE `creature_equip_template` SET `VerifiedBuild` = 0 WHERE `VerifiedBuild` > 26972;
UPDATE `gameobject_template` SET `VerifiedBuild` = 0 WHERE `VerifiedBuild` > 26972;
UPDATE `conversation_actors` SET `VerifiedBuild` = 0 WHERE `VerifiedBuild` > 26972;
UPDATE `conversation_line_template` SET `VerifiedBuild` = 0 WHERE `VerifiedBuild` > 26972;
UPDATE `conversation_template` SET `VerifiedBuild` = 0 WHERE `VerifiedBuild` > 26972;

# verify kezan quests
UPDATE `creature_queststarter` SET `VerifiedBuild`=26972 WHERE (`id`=8576 AND `quest` IN (14118,14117)) OR (`id`=35086 AND `quest`=14129) OR (`id`=3310 AND `quest`=26804) OR (`id`=3144 AND `quest`=26803) OR (`id`=86884 AND `quest`=25267) OR (`id`=38935 AND `quest` IN (25266,25099,25024)) OR (`id`=38387 AND `quest` IN (25265,25251,25243,25098,25066,25058,24940,24924,24901)) OR (`id`=38120 AND `quest` IN (25214,24958,24954,24856,24816,24744,24671)) OR (`id`=38124 AND `quest` IN (25213,25204,25200,25110,24946,24817)) OR (`id`=38441 AND `quest`=25203) OR (`id`=38738 AND `quest` IN (25201,24952,24942)) OR (`id`=39341 AND `quest`=25184) OR (`id`=39199 AND `quest` IN (25125,25123,25122)) OR (`id`=38517 AND `quest`=25109) OR (`id`=39066 AND `quest`=25100) OR (`id`=39065 AND `quest`=25093) OR (`id`=38928 AND `quest`=25023) OR (`id`=36471 AND `quest` IN (24945,27139)) OR (`id`=38647 AND `quest` IN (24937,24925,24929)) OR (`id`=38432 AND `quest` IN (24897,24868,24864,24858)) OR (`id`=38381 AND `quest`=24859) OR (`id`=38122 AND `quest`=24741) OR (`id`=36470 AND `quest`=14245) OR (`id`=36425 AND `quest`=14244) OR (`id`=36188 AND `quest`=14445) OR (`id`=36161 AND `quest`=14243) OR (`id`=36145 AND `quest`=14326) OR (`id`=36127 AND `quest`=14242) OR (`id`=36112 AND `quest`=14241) OR (`id`=35917 AND `quest` IN (14240,14238)) OR (`id`=35875 AND `quest` IN (14237,14235)) OR (`id`=35893 AND `quest` IN (14303,14236)) OR (`id`=35650 AND `quest` IN (14234,14248,14014)) OR (`id`=35837 AND `quest`=14233) OR (`id`=35769 AND `quest` IN (14031,14021)) OR (`id`=35758 AND `quest`=14019) OR (`id`=35786 AND `quest`=14473) OR (`id`=36600 AND `quest`=14474) OR (`id`=34668 AND `quest` IN (14126,14125,14122,14116,14115,14070,28349,14138)) OR (`id`=34872 AND `quest` IN (14124,25473,14069,14075)) OR (`id`=34874 AND `quest` IN (14121,24567,14071)) OR (`id`=34693 AND `quest`=14123) OR (`id`=35222 AND `quest`=14120) OR (`id`=35053 AND `quest` IN (14113,26712)) OR (`id`=35120 AND `quest`=14109) OR (`id`=37106 AND `quest` IN (24520,24502,24488));
UPDATE `creature_questender` SET `VerifiedBuild`=26972 WHERE (`id`=35086 AND `quest`=25275) OR (`id`=3310 AND `quest`=26803) OR (`id`=14720 AND `quest`=25267) OR (`id`=86884 AND `quest`=25266) OR (`id`=38935 AND `quest` IN (25265,25098,25024,25023)) OR (`id`=38387 AND `quest` IN (25251,25243,25213,25066,25058,24937,24901,24897)) OR (`id`=38120 AND `quest` IN (25214,24954,24952,24817,24744,24671,27139)) OR (`id`=38441 AND `quest`=25203) OR (`id`=38124 AND `quest` IN (25207,25200,25184,25110,25109,24946,24816)) OR (`id`=38738 AND `quest` IN (25201,24942,24940)) OR (`id`=39341 AND `quest`=25125) OR (`id`=39199 AND `quest` IN (25122,25123)) OR (`id`=38517 AND `quest`=25100) OR (`id`=39066 AND `quest`=25099) OR (`id`=39065 AND `quest`=25093) OR (`id`=38928 AND `quest`=24958) OR (`id`=36471 AND `quest` IN (24945,14245)) OR (`id`=38647 AND `quest` IN (24929,24925,24924)) OR (`id`=38432 AND `quest` IN (24868,24864,24858,24856)) OR (`id`=38381 AND `quest`=24859) OR (`id`=38122 AND `quest`=24741) OR (`id`=36470 AND `quest`=14244) OR (`id`=36425 AND `quest`=14445) OR (`id`=36188 AND `quest`=14243) OR (`id`=36161 AND `quest`=14326) OR (`id`=36145 AND `quest`=14242) OR (`id`=36127 AND `quest`=14241) OR (`id`=36112 AND `quest`=14240) OR (`id`=35917 AND `quest` IN (14238,14237)) OR (`id`=35875 AND `quest` IN (14303,14234)) OR (`id`=35893 AND `quest` IN (14236,14235)) OR (`id`=35650 AND `quest` IN (14031,14233,14014,14474)) OR (`id`=35769 AND `quest` IN (14021,14248)) OR (`id`=35758 AND `quest`=14019) OR (`id`=35786 AND `quest`=14473) OR (`id`=36608 AND `quest`=14239) OR (`id`=35222 AND `quest` IN (14126,14116)) OR (`id`=37602 AND `quest`=14125) OR (`id`=34874 AND `quest` IN (14121,14071,28349)) OR (`id`=34668 AND `quest` IN (14122,14120,14115,14113,14070,24520,25473)) OR (`id`=34693 AND `quest`=14123) OR (`id`=34872 AND `quest` IN (14124,14075,14069,14138)) OR (`id`=35053 AND `quest`=14109) OR (`id`=35120 AND `quest`=26712) OR (`id`=37106 AND `quest` IN (24503,24488,24567));

# mardum updates from 7.2.5.24367
DELETE FROM `creature_equip_template` WHERE (`ID`=1 AND `CreatureID` IN (92718,92776,96656,97069,96847,97303,98713,98714,97965,97964,97244,97962,97959,97297,98712,97971,99045,97459,99787,96562,108408,98160,108409,98165,96402,96277,98158,103432,97057,98711,99423,99419,100543,100549,97881,97058,97676,100548,97770,97771,101597,96561,100545,101317,96888,97601,96499,102726,97597,96473,96494,97598,96441,96493,101397,101790,98157,101789,101788,101787,96436,96501,96502,96504,96500,97034,102905,96653,102906,95450,95449,95447,90247,96650,99920,96253,97604,96420,113924,96655,96652,102724,102909,93127,113927,97599,97014,93693,96231,96230,96654,96931,96930,97603,93716,99915,98611,93221,95046,102714,94654,93759,99917,96877,93105,96400,94704,94705,100982,93112,97592,94410,99916,98229,98622,98354,98457,98456,98458,99919,98459,98460,98484,98486,98228,98227,98292,98290,93011,99918,97712)) OR (`ID`=2 AND `CreatureID` IN (96494,93716)) OR (`ID`=3 AND `CreatureID`=93716);
INSERT INTO `creature_equip_template` (`CreatureID`, `ID`, `ItemID1`, `AppearanceModID1`, `ItemVisual1`, `ItemID2`, `AppearanceModID2`, `ItemVisual2`, `ItemID3`, `AppearanceModID3`, `ItemVisual3`, `VerifiedBuild`) VALUES
(92718, 1, 32425, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- 92718
(92776, 1, 119458, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Fel Shocktrooper
(96656, 1, 128359, 0, 0, 128371, 0, 0, 0, 0, 0, 24367), -- Freed Illidari
(97069, 1, 124026, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Wrath-Lord Lekos
(96847, 1, 97129, 0, 0, 95791, 0, 0, 0, 0, 0, 24367), -- Drelanim Whisperwind
(97303, 1, 128359, 0, 0, 128371, 0, 0, 0, 0, 0, 24367), -- 97303
(98713, 1, 128359, 0, 0, 128371, 0, 0, 0, 0, 0, 24367), -- 98713
(98714, 1, 128359, 0, 0, 128371, 0, 0, 0, 0, 0, 24367), -- 98714
(97965, 1, 122430, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- 97965
(97964, 1, 128360, 0, 0, 128370, 0, 0, 0, 0, 0, 24367), -- 97964
(97244, 1, 128359, 0, 0, 128371, 0, 0, 0, 0, 0, 24367), -- Kayn Sunfury
(97962, 1, 122430, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Allari the Souleater
(97959, 1, 128360, 0, 0, 128370, 0, 0, 0, 0, 0, 24367), -- Jace Darkweaver
(97297, 1, 128359, 0, 0, 128371, 0, 0, 0, 0, 0, 24367), -- Cyana Nightglaive
(98712, 1, 128359, 0, 0, 128371, 0, 0, 0, 0, 0, 24367), -- Kor'vas Bloodthorn
(97971, 1, 128360, 0, 0, 128370, 0, 0, 0, 0, 0, 24367), -- Jace Darkweaver Clone
(99045, 1, 128359, 0, 0, 128371, 0, 0, 0, 0, 0, 24367), -- Kor'vas Bloodthorn
(97459, 1, 17383, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Battlelord Gaardoun
(99787, 1, 128358, 0, 0, 128372, 0, 0, 0, 0, 0, 24367), -- 99787
(96562, 1, 31669, 0, 0, 31669, 0, 0, 0, 0, 0, 24367), -- Ashtongue Stalker
(108408, 1, 128360, 0, 0, 128370, 0, 0, 0, 0, 0, 24367), -- Ariana Fireheart
(98160, 1, 128361, 0, 0, 128369, 0, 0, 0, 0, 0, 24367), -- 98160
(108409, 1, 127651, 0, 0, 127651, 0, 0, 0, 0, 0, 24367), -- Fury Champion
(98165, 1, 128359, 0, 0, 128371, 0, 0, 0, 0, 0, 24367), -- 98165
(96402, 1, 128519, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Hulking Forgefiend
(96277, 1, 126276, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Queen's Centurion
(98158, 1, 128359, 0, 0, 128371, 0, 0, 0, 0, 0, 24367), -- 98158
(103432, 1, 126276, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Queen's Centurion
(97057, 1, 138740, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Overseer Brutarg
(98711, 1, 128359, 0, 0, 128371, 0, 0, 0, 0, 0, 24367), -- Kor'vas Bloodthorn
(99423, 1, 128361, 0, 0, 128369, 0, 0, 0, 0, 0, 24367), -- 99423
(99419, 1, 128361, 0, 0, 128369, 0, 0, 0, 0, 0, 24367), -- 99419
(100543, 1, 128358, 0, 0, 128372, 0, 0, 0, 0, 0, 24367), -- Demon Hunter
(100549, 1, 128358, 0, 0, 128372, 0, 0, 0, 0, 0, 24367), -- Demon Hunter
(97881, 1, 124542, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Male Naga (scale 2.00)
(97058, 1, 138757, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Count Nefarious
(97676, 1, 120477, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Lady S'theno
(100548, 1, 128358, 0, 0, 128372, 0, 0, 0, 0, 0, 24367), -- Demon Hunter
(97770, 1, 14535, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Coilskar Harpooner
(97771, 1, 28965, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Coilskar Myrmidon
(101597, 1, 128358, 0, 0, 128372, 0, 0, 0, 0, 0, 24367), -- 101597
(96561, 1, 14535, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Coilskar Harpooner
(100545, 1, 128358, 0, 0, 128372, 0, 0, 0, 0, 0, 24367), -- Demon Hunter
(101317, 1, 128360, 0, 0, 128370, 0, 0, 0, 0, 0, 24367), -- 101317
(96888, 1, 28133, 0, 0, 28133, 0, 0, 0, 0, 0, 24367), -- Shivarra Destroyer
(97601, 1, 28133, 0, 0, 28133, 0, 0, 0, 0, 0, 24367), -- Shivarra Destroyer
(96499, 1, 128360, 0, 0, 128370, 0, 0, 0, 0, 0, 24367), -- Jace Darkweaver
(102726, 1, 138749, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Eredar Sorcerer
(97597, 1, 138749, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Eredar Sorcerer
(96494, 2, 133332, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Felguard Butcher
(96473, 1, 138749, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Eredar Sorcerer
(96494, 1, 124360, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Felguard Butcher
(97598, 1, 124360, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Felguard Butcher
(96441, 1, 124524, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Fel Lord Caza
(96493, 1, 124360, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Felguard Butcher
(101397, 1, 128359, 0, 0, 128371, 0, 0, 0, 0, 0, 24367), -- 101397
(101790, 1, 128358, 0, 0, 128372, 0, 0, 0, 0, 0, 24367), -- Demon Hunter
(98157, 1, 128359, 0, 0, 128371, 0, 0, 0, 0, 0, 24367), -- 98157
(101789, 1, 128358, 0, 0, 128372, 0, 0, 0, 0, 0, 24367), -- Demon Hunter
(101788, 1, 128358, 0, 0, 128372, 0, 0, 0, 0, 0, 24367), -- Demon Hunter
(101787, 1, 128358, 0, 0, 128372, 0, 0, 0, 0, 0, 24367), -- Demon Hunter
(96436, 1, 128360, 0, 0, 128370, 0, 0, 0, 0, 0, 24367), -- Jace Darkweaver
(96501, 1, 29685, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Ashtongue Mystic
(96502, 1, 28965, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Coilskar Myrmidon
(96504, 1, 28133, 0, 0, 28133, 0, 0, 0, 0, 0, 24367), -- Shivarra Destroyer
(96500, 1, 17383, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Ashtongue Warrior
(97034, 1, 127651, 0, 0, 127651, 0, 0, 0, 0, 0, 24367), -- Fury Champion
(93716, 3, 133005, 0, 0, 138751, 0, 0, 0, 0, 0, 24367), -- Doom Slayer
(102905, 1, 29685, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Ashtongue Mystic
(96653, 1, 128358, 0, 0, 128372, 0, 0, 0, 0, 0, 24367), -- 96653
(102906, 1, 31669, 0, 0, 31669, 0, 0, 0, 0, 0, 24367), -- Ashtongue Stalker
(95450, 1, 31669, 0, 0, 31669, 0, 0, 0, 0, 0, 24367), -- 95450
(95449, 1, 29685, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- 95449
(95447, 1, 17383, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- 95447
(90247, 1, 17383, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Battlelord Gaardoun
(96650, 1, 128361, 0, 0, 128369, 0, 0, 0, 0, 0, 24367), -- Falara Nightsong
(99920, 1, 128361, 0, 0, 128369, 0, 0, 0, 0, 0, 24367), -- 99920
(96253, 1, 28133, 0, 0, 28133, 0, 0, 0, 0, 0, 24367), -- 96253
(97604, 1, 126276, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Queen's Centurion
(96420, 1, 128359, 0, 0, 128371, 0, 0, 0, 0, 0, 24367), -- Cyana Nightglaive
(113924, 1, 128358, 0, 0, 128372, 0, 0, 0, 0, 0, 24367), -- Illidari Starr
(96655, 1, 122430, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Allari the Souleater
(96652, 1, 128361, 0, 0, 128369, 0, 0, 0, 0, 0, 24367), -- Mannethrel Darkstar
(102724, 1, 138747, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Vile Soulmaster
(102909, 1, 14535, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Coilskar Harpooner
(93127, 1, 128359, 0, 0, 128371, 0, 0, 0, 0, 0, 24367), -- Kayn Sunfury
(113927, 1, 128358, 0, 0, 128372, 0, 0, 0, 0, 0, 24367), -- Illidari Kilbride
(97599, 1, 128358, 0, 0, 128372, 0, 0, 0, 0, 0, 24367), -- Demon Hunter
(97014, 1, 138747, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Vile Soulmaster
(93693, 1, 120477, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Lady S'theno
(96231, 1, 14535, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- 96231
(96230, 1, 28965, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- 96230
(96654, 1, 128361, 0, 0, 128369, 0, 0, 0, 0, 0, 24367), -- 96654
(96931, 1, 128358, 0, 0, 128372, 0, 0, 0, 0, 0, 24367), -- Demon Hunter
(93716, 2, 32743, 0, 0, 138751, 0, 0, 0, 0, 0, 24367), -- Doom Slayer
(96930, 1, 128358, 0, 0, 128372, 0, 0, 0, 0, 0, 24367), -- Demon Hunter
(97603, 1, 138751, 0, 0, 138751, 0, 0, 0, 0, 0, 24367), -- 97603
(93716, 1, 138751, 0, 0, 138751, 0, 0, 0, 0, 0, 24367), -- Doom Slayer
(99915, 1, 128361, 0, 0, 128369, 0, 0, 0, 0, 0, 24367), -- Sevis Brightflame
(98611, 1, 50043, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Doomguard Eradicator
(93221, 1, 138481, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Doom Commander Beliash
(95046, 1, 138749, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Eredar Summoner
(102714, 1, 138749, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Eredar Summoner
(94654, 1, 138754, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Doomguard Eradicator
(93759, 1, 128360, 0, 0, 128370, 0, 0, 0, 0, 0, 24367), -- Jace Darkweaver
(99917, 1, 128361, 0, 0, 128369, 0, 0, 0, 0, 0, 24367), -- Sevis Brightflame
(96877, 1, 31669, 0, 0, 31669, 0, 0, 0, 0, 0, 24367), -- Ashtongue Stalker
(93105, 1, 128093, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Inquisitor Baleful
(96400, 1, 128521, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Mo'arg Brute
(94704, 1, 128358, 0, 0, 128372, 0, 0, 0, 0, 0, 24367), -- Demon Hunter
(94705, 1, 128358, 0, 0, 128372, 0, 0, 0, 0, 0, 24367), -- Demon Hunter
(100982, 1, 128369, 0, 0, 128369, 0, 0, 0, 0, 0, 24367), -- Sevis Brightflame
(93112, 1, 136788, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Felguard Sentry
(97592, 1, 136788, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Felguard Sentry
(94410, 1, 122430, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Allari the Souleater
(99916, 1, 128361, 0, 0, 128369, 0, 0, 0, 0, 0, 24367), -- Sevis Brightflame
(98229, 1, 128359, 0, 0, 128371, 0, 0, 0, 0, 0, 24367), -- Kayn Sunfury
(98622, 1, 128521, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Mo'arg Brute
(98354, 1, 128359, 0, 0, 128371, 0, 0, 0, 0, 0, 24367), -- Kor'vas Bloodthorn
(98457, 1, 128359, 0, 0, 128371, 0, 0, 0, 0, 0, 24367), -- Cyana Nightglaive
(98456, 1, 122430, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Allari the Souleater
(98458, 1, 128360, 0, 0, 128370, 0, 0, 0, 0, 0, 24367), -- Jace Darkweaver
(99919, 1, 128361, 0, 0, 128369, 0, 0, 0, 0, 0, 24367), -- Sevis Brightflame
(98459, 1, 128359, 0, 0, 128371, 0, 0, 0, 0, 0, 24367), -- Kayn Sunfury
(98460, 1, 128359, 0, 0, 128371, 0, 0, 0, 0, 0, 24367), -- Kor'vas Bloodthorn
(98484, 1, 128521, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Mo'arg Brute
(98486, 1, 127651, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- Wrath Warrior
(98228, 1, 128360, 0, 0, 128370, 0, 0, 0, 0, 0, 24367), -- 98228
(98227, 1, 122430, 0, 0, 0, 0, 0, 0, 0, 0, 24367), -- 98227
(98292, 1, 128359, 0, 0, 128371, 0, 0, 0, 0, 0, 24367), -- 98292
(98290, 1, 128359, 0, 0, 128371, 0, 0, 0, 0, 0, 24367), -- 98290
(93011, 1, 128359, 0, 0, 128371, 0, 0, 0, 0, 0, 24367), -- 93011
(99918, 1, 128361, 0, 0, 128369, 0, 0, 0, 0, 0, 24367), -- 99918
(97712, 1, 127651, 0, 0, 0, 0, 0, 0, 0, 0, 24367); -- Wrath Warrior

UPDATE `creature_template` SET `npcflag`=3, `speed_run`=1, `BaseAttackTime`=2000, `unit_class`=2, `unit_flags`=0x100, `unit_flags2`=0x800, `unit_flags3`=0x80 WHERE `entry`=92718; -- 92718
UPDATE `creature_template` SET `faction`=954, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=92782; -- Savage Felstalker
UPDATE `creature_template` SET `faction`=954, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=92776; -- Fel Shocktrooper
UPDATE `creature_template` SET `faction`=2804, `BaseAttackTime`=2000, `unit_flags`=0x40, `unit_flags2`=0x800 WHERE `entry`=96656; -- Freed Illidari
UPDATE `creature_template` SET `faction`=31, `speed_run`=0.857142865657806396, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=101648; -- Vault Roach
UPDATE `creature_template` SET `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x2000300, `unit_flags2`=0x800 WHERE `entry`=100168; -- 100168
UPDATE `creature_template` SET `faction`=954, `BaseAttackTime`=2500, `unit_flags`=0x40, `unit_flags2`=0x800 WHERE `entry`=97069; -- Wrath-Lord Lekos
UPDATE `creature_template` SET `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=103658; -- 103658
UPDATE `creature_template` SET `faction`=2643, `speed_run`=1, `BaseAttackTime`=2000, `unit_class`=2, `unit_flags`=0x100, `unit_flags2`=0x800 WHERE `entry`=96847; -- Drelanim Whisperwind
UPDATE `creature_template` SET `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=103655; -- 103655
UPDATE `creature_template` SET `npcflag`=3, `BaseAttackTime`=2000, `unit_flags`=0x40, `unit_flags2`=0x800 WHERE `entry`=97303; -- 97303
UPDATE `creature_template` SET `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=98713; -- 98713
UPDATE `creature_template` SET `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=98714; -- 98714
UPDATE `creature_template` SET `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=97965; -- 97965
UPDATE `creature_template` SET `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=97964; -- 97964
UPDATE `creature_template` SET `speed_run`=1.428571462631225585, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=100333; -- 100333
UPDATE `creature_template` SET `speed_run`=1.428571462631225585, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=100334; -- 100334
UPDATE `creature_template` SET `faction`=2843, `BaseAttackTime`=1000 WHERE `entry`=97244; -- Kayn Sunfury
UPDATE `creature_template` SET `faction`=2843, `BaseAttackTime`=1000 WHERE `entry`=97962; -- Allari the Souleater
UPDATE `creature_template` SET `faction`=2843, `BaseAttackTime`=1000 WHERE `entry`=97959; -- Jace Darkweaver
UPDATE `creature_template` SET `faction`=2838, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=97297; -- Cyana Nightglaive
UPDATE `creature_template` SET `faction`=2843, `BaseAttackTime`=1000 WHERE `entry`=98712; -- Kor'vas Bloodthorn
UPDATE `creature_template` SET `faction`=1786, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=100243; -- Wicked Crawler
UPDATE `creature_template` SET `faction`=1786, `BaseAttackTime`=2000, `unit_class`=2, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=100244; -- Aranasi Maiden
UPDATE `creature_template` SET `BaseAttackTime`=2000, `unit_flags`=0x2000300, `unit_flags2`=0x4000800 WHERE `entry`=101760; -- "The Keystone" Make Your Way Downstairs Quest Kill Credit
UPDATE `creature_template` SET `faction`=2838, `npcflag`=3, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=99045; -- Kor'vas Bloodthorn
UPDATE `creature_template` SET `BaseAttackTime`=2000, `unit_class`=2, `unit_flags`=0x2000300, `unit_flags2`=0x4000800 WHERE `entry`=96768; -- Broken
UPDATE `creature_template` SET `faction`=1786, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags2`=0x800, `unit_flags3`=0x1 WHERE `entry`=100719; -- Spider Eggs
UPDATE `creature_template` SET `faction`=1786, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags2`=0x800, `unit_flags3`=0x1 WHERE `entry`=100703; -- Leeching Spider
UPDATE `creature_template` SET `faction`=2804, `speed_walk`=1.20000004768371582, `speed_run`=1.428571462631225585, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=97459; -- Battlelord Gaardoun
UPDATE `creature_template` SET `faction`=954, `speed_run`=1, `BaseAttackTime`=2000, `unit_class`=2, `unit_flags`=0x2000000 WHERE `entry`=100717; -- Spider Egg
UPDATE `creature_template` SET `BaseAttackTime`=1000, `unit_flags2`=0x800 WHERE `entry`=99787; -- 99787
UPDATE `creature_template` SET `faction`=14, `npcflag`=16777216, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x4800, `unit_flags3`=0x1 WHERE `entry`=101947; -- Doom Fortress Stabilizer
UPDATE `creature_template` SET `faction`=2804, `speed_run`=0.992062866687774658, `BaseAttackTime`=2000, `unit_class`=4, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=96562; -- Ashtongue Stalker
UPDATE `creature_template` SET `faction`=954, `speed_walk`=1.111111998558044433, `BaseAttackTime`=2000, `unit_flags`=0x40 WHERE `entry`=97059; -- King Voras
UPDATE `creature_template` SET `faction`=14, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x2000100, `unit_flags2`=0x800 WHERE `entry`=101781; -- Spider Scene Stalker Controller
UPDATE `creature_template` SET `faction`=2110, `BaseAttackTime`=2000, `unit_class`=2, `unit_flags2`=0x800 WHERE `entry`=97425; -- Matron Mother Malevolence
UPDATE `creature_template` SET `speed_run`=1.031745672225952148, `BaseAttackTime`=2000, `unit_class`=2, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=97607; -- Priestess of Dementia
UPDATE `creature_template` SET `faction`=954, `speed_walk`=0.60000002384185791, `speed_run`=0.214285716414451599, `BaseAttackTime`=2000, `unit_flags`=0x2000300, `unit_flags2`=0x4000800 WHERE `entry` IN (101321, 101318); -- Spire of Woe
UPDATE `creature_template` SET `speed_walk`=1.111111998558044433, `BaseAttackTime`=2000, `unit_class`=2, `unit_flags2`=0x800 WHERE `entry`=97706; -- 97706
UPDATE `creature_template` SET `faction`=2843, `BaseAttackTime`=1000, `unit_flags2`=0x800 WHERE `entry`=108408; -- Ariana Fireheart
UPDATE `creature_template` SET `BaseAttackTime`=1000, `unit_flags2`=0x800 WHERE `entry`=98160; -- 98160
UPDATE `creature_template` SET `faction`=14, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=108409; -- Fury Champion
UPDATE `creature_template` SET `BaseAttackTime`=1000, `unit_flags2`=0x800 WHERE `entry`=98165; -- 98165
UPDATE `creature_template` SET `faction`=954, `BaseAttackTime`=2000, `unit_class`=2, `unit_flags`=0x40, `unit_flags2`=0x800, `VehicleId`=4497 WHERE `entry`=93802; -- Brood Queen Tyranna
UPDATE `creature_template` SET `faction`=2804, `speed_run`=1.031745672225952148, `BaseAttackTime`=2000, `unit_class`=2, `unit_flags2`=0x800 WHERE `entry`=96564; -- Priestess of Dementia
UPDATE `creature_template` SET `BaseAttackTime`=2000, `unit_class`=2, `unit_flags`=0x2000300, `unit_flags2`=0x4000800 WHERE `entry`=93764; -- Shivan
UPDATE `creature_template` SET `faction`=954, `BaseAttackTime`=2000, `unit_flags`=0x2000300, `unit_flags2`=0x4000800 WHERE `entry` IN (101320, 97624); -- Spire of Woe
UPDATE `creature_template` SET `faction`=1786, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=96402; -- Hulking Forgefiend
UPDATE `creature_template` SET `faction`=1786, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry` IN (96277, 103432); -- Queen's Centurion
UPDATE `creature_template` SET `BaseAttackTime`=1000, `unit_flags2`=0x800 WHERE `entry`=98158; -- 98158
UPDATE `creature_template` SET `faction`=1786, `speed_run`=1, `BaseAttackTime`=2000, `unit_class`=8, `unit_flags2`=0x800 WHERE `entry`=100286; -- Lesser Minion
UPDATE `creature_template` SET `faction`=954, `speed_run`=1, `BaseAttackTime`=2000, `unit_class`=2, `unit_flags`=0x2000000 WHERE `entry`=100257; -- Fel Geyser
UPDATE `creature_template` SET `faction`=90, `speed_run`=1, `BaseAttackTime`=2000, `unit_class`=8, `unit_flags2`=0x800 WHERE `entry`=98986; -- Prolifica
UPDATE `creature_template` SET `faction`=954, `BaseAttackTime`=2000, `unit_flags`=0x40, `unit_flags2`=0x800 WHERE `entry`=97057; -- Overseer Brutarg
UPDATE `creature_template` SET `faction`=2838, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry` IN (98711, 98354); -- Kor'vas Bloodthorn
UPDATE `creature_template` SET `BaseAttackTime`=2000, `unit_flags`=0x2000300, `unit_flags2`=0x4000800 WHERE `entry`=103429; -- "The Imp Mother's Tome" Cave Entrance POI Quest Kill Credit
UPDATE `creature_template` SET `faction`=14, `speed_run`=1, `BaseAttackTime`=2000, `unit_class`=8, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=99735; -- Horned Minion
UPDATE `creature_template` SET `faction`=954, `BaseAttackTime`=2000, `unit_class`=2, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=100504; -- Aranasi Maiden
UPDATE `creature_template` SET `BaseAttackTime`=1000, `unit_flags2`=0x800 WHERE `entry`=99423; -- 99423
UPDATE `creature_template` SET `BaseAttackTime`=1000, `unit_flags2`=0x800 WHERE `entry`=99419; -- 99419
UPDATE `creature_template` SET `faction`=2843, `npcflag`=16777216, `BaseAttackTime`=2000, `unit_flags`=0x200, `unit_flags2`=0x800, `unit_flags3`=0x1 WHERE `entry` IN (100543, 100549, 100545); -- Demon Hunter
UPDATE `creature_template` SET `speed_run`=1.428571462631225585, `BaseAttackTime`=1500, `unit_class`=2, `unit_flags2`=0x800 WHERE `entry`=100992; -- 100992
UPDATE `creature_template` SET `BaseAttackTime`=2000, `unit_flags`=0x2000300, `unit_flags2`=0x800 WHERE `entry`=97704; -- Well of Souls
UPDATE `creature_template` SET `faction`=14, `speed_walk`=0.888000011444091796, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=97769; -- Mardum Executioner
UPDATE `creature_template` SET `faction`=2189, `speed_walk`=2, `speed_run`=0.714285731315612792, `BaseAttackTime`=2000, `unit_flags`=0x2000000, `unit_flags2`=0x800 WHERE `entry`=100745; -- Fel Cannon
UPDATE `creature_template` SET `speed_run`=0.992062866687774658, `BaseAttackTime`=2000, `unit_class`=2, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry` IN (97772, 96884); -- Coilskar Sea-Caller
UPDATE `creature_template` SET `faction`=14, `npcflag`=16777216, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x4004800, `unit_flags3`=0x1 WHERE `entry`=97382; -- Soul Harvester
UPDATE `creature_template` SET `faction`=954, `speed_run`=1, `BaseAttackTime`=2500, `unit_class`=2, `unit_flags`=0x40, `unit_flags2`=0x800 WHERE `entry`=97058; -- Count Nefarious
UPDATE `creature_template` SET `faction`=2804, `speed_run`=0.992062866687774658, `BaseAttackTime`=2000, `unit_class`=8, `unit_flags2`=0x800 WHERE `entry`=97676; -- Lady S'theno
UPDATE `creature_template` SET `BaseAttackTime`=2000, `unit_class`=2, `unit_flags`=0x2000300, `unit_flags2`=0x4000800 WHERE `entry`=97881; -- Male Naga (scale 2.00)
UPDATE `creature_template` SET `faction`=2843, `npcflag`=16777216, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=100548; -- Demon Hunter
UPDATE `creature_template` SET `BaseAttackTime`=2000, `unit_class`=2, `unit_flags`=0x2000300, `unit_flags2`=0x4000800 WHERE `entry`=96767; -- Female Naga (scale 1.75)
UPDATE `creature_template` SET `speed_run`=1, `BaseAttackTime`=2000, `unit_class`=2, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=97770; -- Coilskar Harpooner
UPDATE `creature_template` SET `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=97771; -- Coilskar Myrmidon
UPDATE `creature_template` SET `faction`=954, `speed_walk`=1.20000004768371582, `speed_run`=0.992062866687774658, `BaseAttackTime`=2000, `unit_flags`=0x40, `unit_flags2`=0x800 WHERE `entry`=97370; -- General Volroth
UPDATE `creature_template` SET `BaseAttackTime`=1000, `unit_flags2`=0x800 WHERE `entry`=101597; -- 101597
UPDATE `creature_template` SET `BaseAttackTime`=2000, `unit_flags`=0x2000000, `unit_flags2`=0x4000800, `unit_flags3`=0x1 WHERE `entry`=93280; -- Caged Soul
UPDATE `creature_template` SET `faction`=1786, `speed_walk`=0.888000011444091796, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x40, `unit_flags2`=0x800, `VehicleId`=4318 WHERE `entry`=96279; -- Mardum Executioner
UPDATE `creature_template` SET `faction`=1786, `BaseAttackTime`=2000, `unit_class`=8, `unit_flags2`=0x800 WHERE `entry`=101753; -- Soul Fragment
UPDATE `creature_template` SET `faction`=2804, `speed_run`=1, `BaseAttackTime`=2000, `unit_class`=2, `unit_flags2`=0x800 WHERE `entry`=96561; -- Coilskar Harpooner
UPDATE `creature_template` SET `faction`=1786, `speed_run`=1, `BaseAttackTime`=2000, `unit_class`=8, `unit_flags2`=0x800 WHERE `entry`=96280; -- Volatile Minion
UPDATE `creature_template` SET `BaseAttackTime`=1000, `unit_flags2`=0x800 WHERE `entry`=101317; -- 101317
UPDATE `creature_template` SET `speed_run`=1.031745672225952148, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry` IN (96888, 97601); -- Shivarra Destroyer
UPDATE `creature_template` SET `faction`=14, `BaseAttackTime`=2000, `unit_flags`=0x2000000, `unit_flags2`=0x4000800, `unit_flags3`=0x1 WHERE `entry`=100062; -- Fel Axe
UPDATE `creature_template` SET `faction`=2843, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=96499; -- Jace Darkweaver
UPDATE `creature_template` SET `faction`=1786, `BaseAttackTime`=2000, `unit_class`=8, `unit_flags2`=0x800 WHERE `entry` IN (102726, 96473); -- Eredar Sorcerer
UPDATE `creature_template` SET `faction`=14, `BaseAttackTime`=2000, `unit_class`=8, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=97597; -- Eredar Sorcerer
UPDATE `creature_template` SET `faction`=954, `speed_run`=1, `BaseAttackTime`=2000, `unit_class`=2, `unit_flags`=0x2000000, `unit_flags3`=0x0 WHERE `entry`=100061; -- Axe Throw Stalker
UPDATE `creature_template` SET `faction`=1786, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry` IN (96494, 96493); -- Felguard Butcher
UPDATE `creature_template` SET `faction`=14, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=97598; -- Felguard Butcher
UPDATE `creature_template` SET `faction`=1786, `speed_run`=0.992062866687774658, `BaseAttackTime`=2000, `unit_flags`=0x40 WHERE `entry`=96441; -- Fel Lord Caza
UPDATE `creature_template` SET `BaseAttackTime`=1000, `unit_flags2`=0x800 WHERE `entry`=101397; -- 101397
UPDATE `creature_template` SET `faction`=2843, `BaseAttackTime`=1000 WHERE `entry` IN (101790, 101789, 101788, 101787); -- Demon Hunter
UPDATE `creature_template` SET `BaseAttackTime`=1000, `unit_flags2`=0x800 WHERE `entry`=98157; -- 98157
UPDATE `creature_template` SET `faction`=2804, `speed_run`=0.992062866687774658, `BaseAttackTime`=2000, `unit_class`=2 WHERE `entry`=96503; -- Coilskar Sea-Caller
UPDATE `creature_template` SET `faction`=1786, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=99759; -- Fiendish Creeper
UPDATE `creature_template` SET `faction`=2838, `npcflag`=3, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry` IN (96436, 93759); -- Jace Darkweaver
UPDATE `creature_template` SET `faction`=2804, `speed_run`=0.992062866687774658, `BaseAttackTime`=2000, `unit_class`=8 WHERE `entry`=96501; -- Ashtongue Mystic
UPDATE `creature_template` SET `faction`=2804, `speed_run`=1, `BaseAttackTime`=2000 WHERE `entry`=96502; -- Coilskar Myrmidon
UPDATE `creature_template` SET `faction`=2804, `speed_run`=1.031745672225952148, `BaseAttackTime`=2000 WHERE `entry`=96504; -- Shivarra Destroyer
UPDATE `creature_template` SET `faction`=2804, `speed_run`=0.992062866687774658, `BaseAttackTime`=2000 WHERE `entry`=96500; -- Ashtongue Warrior
UPDATE `creature_template` SET `faction`=1786, `speed_walk`=0.25, `speed_run`=0.285714298486709594, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=97034; -- Fury Champion
UPDATE `creature_template` SET `faction`=2838, `BaseAttackTime`=2000, `unit_flags`=0x2000300, `unit_flags2`=0x4000800 WHERE `entry`=97971; -- Jace Darkweaver Clone
UPDATE `creature_template` SET `faction`=954, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=96276; -- Legion Razorwing
UPDATE `creature_template` SET `speed_run`=0.992062866687774658, `BaseAttackTime`=2000, `unit_class`=8, `unit_flags2`=0x800 WHERE `entry`=102905; -- Ashtongue Mystic
UPDATE `creature_template` SET `npcflag`=1, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=96653; -- 96653
UPDATE `creature_template` SET `speed_run`=0.992062866687774658, `BaseAttackTime`=2000, `unit_class`=4, `unit_flags2`=0x800 WHERE `entry`=102906; -- Ashtongue Stalker
UPDATE `creature_template` SET `speed_run`=0.992062866687774658, `BaseAttackTime`=2000, `unit_class`=4, `unit_flags2`=0x800 WHERE `entry`=95450; -- 95450
UPDATE `creature_template` SET `speed_run`=0.992062866687774658, `BaseAttackTime`=2000, `unit_class`=8, `unit_flags2`=0x800 WHERE `entry`=95449; -- 95449
UPDATE `creature_template` SET `speed_run`=0.992062866687774658, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=95447; -- 95447
UPDATE `creature_template` SET `npcflag`=1, `speed_run`=0.992062866687774658, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=90247; -- Battlelord Gaardoun
UPDATE `creature_template` SET `faction`=2838, `npcflag`=4225, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=96650; -- Falara Nightsong
UPDATE `creature_template` SET `npcflag`=1, `BaseAttackTime`=2000, `unit_flags`=0x340, `unit_flags2`=0x800 WHERE `entry`=99920; -- 99920
UPDATE `creature_template` SET `npcflag`=1, `BaseAttackTime`=2000, `unit_class`=2, `unit_flags2`=0x800 WHERE `entry`=94435; -- Matron Mother Malevolence
UPDATE `creature_template` SET `faction`=954, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x4010800, `VehicleId`=4454 WHERE `entry`=96732; -- Legion Devastator
UPDATE `creature_template` SET `speed_run`=1.031745672225952148, `BaseAttackTime`=2000, `unit_class`=2, `unit_flags2`=0x800 WHERE `entry`=93707; -- 93707
UPDATE `creature_template` SET `speed_run`=1.031745672225952148, `BaseAttackTime`=2000, `unit_class`=2, `unit_flags2`=0x800 WHERE `entry`=96252; -- 96252
UPDATE `creature_template` SET `speed_run`=1.031745672225952148, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=96253; -- 96253
UPDATE `creature_template` SET `faction`=14, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=97604; -- Queen's Centurion
UPDATE `creature_template` SET `faction`=2838, `npcflag`=3, `BaseAttackTime`=2000 WHERE `entry`=96420; -- Cyana Nightglaive
UPDATE `creature_template` SET `faction`=2838, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=113924; -- Illidari Starr
UPDATE `creature_template` SET `faction`=2838, `npcflag`=3, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry` IN (96655, 94410); -- Allari the Souleater
UPDATE `creature_template` SET `faction`=2838, `npcflag`=1, `BaseAttackTime`=2000, `unit_flags`=0x300 WHERE `entry`=96652; -- Mannethrel Darkstar
UPDATE `creature_template` SET `faction`=1786, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=96278; -- Burning Soulstalker
UPDATE `creature_template` SET `faction`=1786, `BaseAttackTime`=2000, `unit_class`=8, `unit_flags2`=0x800 WHERE `entry` IN (102724, 97014); -- Vile Soulmaster
UPDATE `creature_template` SET `speed_run`=1, `BaseAttackTime`=2000, `unit_class`=2, `unit_flags2`=0x800 WHERE `entry`=102909; -- Coilskar Harpooner
UPDATE `creature_template` SET `faction`=2838, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry` IN (97600, 97599); -- Demon Hunter
UPDATE `creature_template` SET `faction`=2838, `npcflag`=3, `BaseAttackTime`=2000, `unit_flags`=0x40, `unit_flags2`=0x800 WHERE `entry`=93127; -- Kayn Sunfury
UPDATE `creature_template` SET `faction`=2838, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=113927; -- Illidari Kilbride
UPDATE `creature_template` SET `speed_run`=0.992062866687774658, `BaseAttackTime`=2000, `unit_class`=2, `unit_flags2`=0x800 WHERE `entry`=96228; -- 96228
UPDATE `creature_template` SET `npcflag`=1, `speed_run`=0.992062866687774658, `BaseAttackTime`=2000, `unit_class`=8, `unit_flags2`=0x800 WHERE `entry`=93693; -- Lady S'theno
UPDATE `creature_template` SET `speed_run`=0.992062866687774658, `BaseAttackTime`=2000, `unit_class`=2, `unit_flags2`=0x800 WHERE `entry`=102908; -- Coilskar Sea-Caller
UPDATE `creature_template` SET `faction`=14, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=97602; -- Burning Soulstalker
UPDATE `creature_template` SET `speed_run`=1, `BaseAttackTime`=2000, `unit_class`=2, `unit_flags2`=0x800 WHERE `entry`=96231; -- 96231
UPDATE `creature_template` SET `speed_run`=1, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=96230; -- 96230
UPDATE `creature_template` SET `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=96654; -- 96654
UPDATE `creature_template` SET `speed_run`=8.571428298950195312, `BaseAttackTime`=2000, `unit_flags`=0x2000000, `unit_flags2`=0x800 WHERE `entry` IN (99352, 99351, 99218); -- Legion Devastator Missile
UPDATE `creature_template` SET `faction`=2843, `BaseAttackTime`=1000, `unit_flags2`=0x800 WHERE `entry` IN (96931, 96930, 94704, 94705); -- Demon Hunter
UPDATE `creature_template` SET `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=97603; -- 97603
UPDATE `creature_template` SET `faction`=1786, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=93716; -- Doom Slayer
UPDATE `creature_template` SET `faction`=2838, `npcflag`=1, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry` IN (99915, 99917); -- Sevis Brightflame
UPDATE `creature_template` SET `faction`=14, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=98611; -- Doomguard Eradicator
UPDATE `creature_template` SET `npcflag`=16777216, `speed_run`=1.428571462631225585, `BaseAttackTime`=1500, `unit_class`=2, `unit_flags2`=0x4000800 WHERE `entry`=101696; -- 101696
UPDATE `creature_template` SET `faction`=954, `speed_walk`=0.60000002384185791, `speed_run`=0.214285716414451599, `BaseAttackTime`=2000, `unit_flags`=0x2000200, `unit_flags2`=0x4000800 WHERE `entry` IN (97634, 97629); -- Spire of Woe
UPDATE `creature_template` SET `faction`=954, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x40, `unit_flags2`=0x800 WHERE `entry`=93221; -- Doom Commander Beliash
UPDATE `creature_template` SET `faction`=954, `BaseAttackTime`=2000, `unit_class`=2, `unit_flags`=0x2000100, `unit_flags2`=0x4000800 WHERE `entry`=95048; -- Brood Queen Tyranna
UPDATE `creature_template` SET `faction`=1786, `BaseAttackTime`=2000, `unit_class`=2, `unit_flags2`=0x800 WHERE `entry` IN (95046, 102714); -- Eredar Summoner
UPDATE `creature_template` SET `speed_run`=1, `unit_class`=2, `unit_flags3`=0x0 WHERE `entry`=99160; -- Beaming Eye
UPDATE `creature_template` SET `faction`=1786, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=94654; -- Doomguard Eradicator
UPDATE `creature_template` SET `faction`=2804, `BaseAttackTime`=2000, `unit_flags`=0x2000000, `unit_flags2`=0x800 WHERE `entry`=95049; -- Demon Ward
UPDATE `creature_template` SET `faction`=2838, `BaseAttackTime`=2000, `unit_flags`=0x300 WHERE `entry`=93117; -- Izal Whitemoon
UPDATE `creature_template` SET `faction`=2838, `BaseAttackTime`=2000, `unit_flags`=0x300 WHERE `entry`=93230; -- Mannethrel Darkstar
UPDATE `creature_template` SET `faction`=1786, `speed_run`=1, `BaseAttackTime`=2000, `unit_class`=8, `unit_flags2`=0x800 WHERE `entry` IN (94651, 98483); -- Hellish Imp
UPDATE `creature_template` SET `npcflag`=1, `speed_run`=0.992062866687774658, `BaseAttackTime`=2000, `unit_class`=8, `unit_flags2`=0x800 WHERE `entry`=99914; -- Ashtongue Mystic
UPDATE `creature_template` SET `speed_run`=0.992062866687774658, `unit_class`=4, `unit_flags2`=0x800 WHERE `entry`=96877; -- Ashtongue Stalker
UPDATE `creature_template` SET `faction`=954, `speed_run`=1, `BaseAttackTime`=2000, `unit_class`=2, `unit_flags`=0x40, `unit_flags2`=0x800 WHERE `entry`=93105; -- Inquisitor Baleful
UPDATE `creature_template` SET `faction`=2838, `BaseAttackTime`=2000, `unit_flags`=0x300 WHERE `entry`=94400; -- Belath Dawnblade
UPDATE `creature_template` SET `faction`=1786, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry` IN (96400, 98484); -- Mo'arg Brute
UPDATE `creature_template` SET `faction`=2838, `BaseAttackTime`=2000, `unit_flags`=0x300 WHERE `entry`=94377; -- Cyana Nightglaive
UPDATE `creature_template` SET `faction`=954, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x4010800, `VehicleId`=4453 WHERE `entry`=96731; -- Legion Devastator
UPDATE `creature_template` SET `faction`=7, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=101288; -- Abyssal Basilisk
UPDATE `creature_template` SET `faction`=954, `speed_walk`=4, `speed_run`=3, `BaseAttackTime`=2000, `unit_flags`=0x2000040, `unit_flags2`=0x800, `unit_flags3`=0x1 WHERE `entry`=96159; -- Colossal Infernal
UPDATE `creature_template` SET `faction`=1786, `speed_walk`=0.888000011444091796, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=95226; -- Anguish Jailer
UPDATE `creature_template` SET `unit_flags2`=0x800, `unit_flags3`=0x0 WHERE `entry`=94990; -- Infernal Ball Bunny
UPDATE `creature_template` SET `faction`=954, `speed_run`=1, `BaseAttackTime`=2000, `unit_class`=8, `unit_flags`=0x140, `unit_flags2`=0x800 WHERE `entry`=105316; -- Questioner Arev'naal
UPDATE `creature_template` SET `faction`=2838, `npcflag`=2, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=100982; -- Sevis Brightflame
UPDATE `creature_template` SET `faction`=1786, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=93112; -- Felguard Sentry
UPDATE `creature_template` SET `faction`=14, `speed_walk`=2, `speed_run`=0.714285731315612792, `BaseAttackTime`=2000, `unit_flags`=0x2000000, `unit_flags2`=0x800 WHERE `entry`=99003; -- Fel Cannon
UPDATE `creature_template` SET `faction`=14, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=97592; -- Felguard Sentry
UPDATE `creature_template` SET `faction`=2792, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry` IN (93115, 98482); -- Foul Felstalker
UPDATE `creature_template` SET `faction`=14, `npcflag`=16777216, `speed_walk`=0.200000002980232238, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x4800, `unit_flags3`=0x1 WHERE `entry`=97142; -- Fel Spreader
UPDATE `creature_template` SET `npcflag`=0, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=101518; -- 101518
UPDATE `creature_template` SET `faction`=954, `BaseAttackTime`=2000, `unit_flags`=0x2000000, `unit_flags2`=0x800, `unit_flags3`=0x1 WHERE `entry`=100510; -- The Fel Hammer
UPDATE `creature_template` SET `faction`=2838, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=99916; -- Sevis Brightflame
UPDATE `creature_template` SET `unit_flags2`=0x800, `unit_flags3`=0x0 WHERE `entry`=100931; -- Fel Cannon
UPDATE `creature_template` SET `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x2000000, `unit_flags2`=0x800 WHERE `entry`=98191; -- 98191
UPDATE `creature_template` SET `faction`=954, `speed_walk`=4, `speed_run`=3, `BaseAttackTime`=2000, `unit_flags`=0x40, `unit_flags2`=0x800 WHERE `entry`=94492; -- Colossal Infernal
UPDATE `creature_template` SET `faction`=954, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x200, `unit_flags2`=0x4000800 WHERE `entry`=100161; -- Legion Devastator
UPDATE `creature_template` SET `npcflag`=16777216, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags2`=0x4000800, `unit_flags3`=0x0 WHERE `entry`=101704; -- Empowered Fel Crystal
UPDATE `creature_template` SET `faction`=14, `speed_run`=1, `BaseAttackTime`=2000, `unit_class`=8, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=98621; -- Imp Mother
UPDATE `creature_template` SET `faction`=2838, `npcflag`=3, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=98229; -- Kayn Sunfury
UPDATE `creature_template` SET `faction`=14, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=98622; -- Mo'arg Brute
UPDATE `creature_template` SET `faction`=954, `BaseAttackTime`=2000, `unit_flags`=0x2000000, `unit_flags2`=0x800, `unit_flags3`=0x1 WHERE `entry`=101748; -- Fel Geyser
UPDATE `creature_template` SET `faction`=954, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x4010800, `VehicleId`=4443 WHERE `entry`=93762; -- Legion Devastator
UPDATE `creature_template` SET `faction`=2843, `BaseAttackTime`=1000, `unit_flags2`=0x800 WHERE `entry`=98457; -- Cyana Nightglaive
UPDATE `creature_template` SET `faction`=2843, `BaseAttackTime`=1000, `unit_flags2`=0x800 WHERE `entry`=98456; -- Allari the Souleater
UPDATE `creature_template` SET `faction`=2843, `BaseAttackTime`=1000, `unit_flags2`=0x800 WHERE `entry`=98458; -- Jace Darkweaver
UPDATE `creature_template` SET `unit_flags2`=0x800 WHERE `entry`=99919; -- Sevis Brightflame
UPDATE `creature_template` SET `faction`=2843, `BaseAttackTime`=1000, `unit_flags2`=0x800 WHERE `entry`=98459; -- Kayn Sunfury
UPDATE `creature_template` SET `faction`=2843, `BaseAttackTime`=1000, `unit_flags2`=0x800 WHERE `entry`=98460; -- Kor'vas Bloodthorn
UPDATE `creature_template` SET `faction`=90, `speed_run`=1, `BaseAttackTime`=2000, `unit_class`=8, `unit_flags2`=0x800 WHERE `entry`=98497; -- Imp Mother
UPDATE `creature_template` SET `speed_run`=0.857142865657806396, `BaseAttackTime`=2000, `unit_flags`=0x200, `unit_flags2`=0x800 WHERE `entry`=99656; -- 99656
UPDATE `creature_template` SET `speed_run`=0.857142865657806396, `BaseAttackTime`=2000, `unit_flags`=0x200, `unit_flags2`=0x800 WHERE `entry`=99650; -- 99650
UPDATE `creature_template` SET `faction`=1786, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=98486; -- Wrath Warrior
UPDATE `creature_template` SET `faction`=14, `speed_run`=1, `BaseAttackTime`=2000, `unit_class`=8, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=98618; -- Hellish Imp
UPDATE `creature_template` SET `unit_flags2`=0x800, `unit_flags3`=0x0 WHERE `entry`=94580; -- Wrath Warrior
UPDATE `creature_template` SET `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=98228; -- 98228
UPDATE `creature_template` SET `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=98227; -- 98227
UPDATE `creature_template` SET `BaseAttackTime`=2000, `unit_flags`=0x340, `unit_flags2`=0x800 WHERE `entry`=98292; -- 98292
UPDATE `creature_template` SET `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=98290; -- 98290
UPDATE `creature_template` SET `npcflag`=3, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=93011; -- 93011
UPDATE `creature_template` SET `BaseAttackTime`=2000, `unit_flags`=0x340, `unit_flags2`=0x800 WHERE `entry`=99918; -- 99918
UPDATE `creature_template` SET `faction`=14, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=97712; -- Wrath Warrior
UPDATE `creature_template` SET `faction`=14, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=97594; -- Foul Felstalker
UPDATE `creature_template` SET `faction`=31, `speed_run`=0.857142865657806396, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=94655; -- Soul Leech
UPDATE `creature_template` SET `faction`=954, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=94744; -- Dread Felbat

DELETE FROM `gameobject_template_addon` WHERE `entry` IN (252405 /*Vault of the Wardens*/, 245208 /*Warden's Door*/, 245207 /*Warden's Door*/, 245206 /*Warden's Door*/, 247182 /*Warden's Door*/, 245434 /*Warden's Door*/, 245840 /*Warden's Door*/, 245757 /*Mirror Tile*/, 245756 /*Mirror Tile*/, 245759 /*Mirror Tile*/, 245758 /*Mirror Tile*/, 245753 /*Mirror Tile*/, 245752 /*Mirror Tile*/, 245755 /*Mirror Tile*/, 245754 /*Mirror Tile*/, 245749 /*Mirror Tile*/, 245748 /*Mirror Tile*/, 245751 /*Mirror Tile*/, 245750 /*Mirror Tile*/, 245745 /*Mirror Tile*/, 245744 /*Mirror Tile*/, 245747 /*Mirror Tile*/, 245746 /*Mirror Tile*/, 244653 /*Warden's Door*/, 244652 /*Warden's Door*/, 244655 /*Warden's Door*/, 244654 /*Warden's Door*/, 245761 /*Mirror Tile*/, 244661 /*Warden's Door*/, 245760 /*Mirror Tile*/, 244660 /*Warden's Door*/, 244663 /*Warden's Door*/, 244662 /*Warden's Door*/, 244657 /*Warden's Door*/, 244656 /*Warden's Door*/, 244659 /*Warden's Door*/, 244658 /*Warden's Door*/, 244404 /*Illidan's Rest*/, 245913 /*Vault of Ice*/, 245915 /*Vault of Law*/, 245914 /*Vault of Mirrors*/, 244353 /*Vault of Ice*/, 244352 /*Vault of Mirrors*/, 244355 /*Vault of Order*/, 244354 /*Warden's Door*/, 243945 /*Warden's Door*/, 243944 /*Warden's Door*/, 245741 /*Mirror Tile*/, 245740 /*Mirror Tile*/, 245743 /*Mirror Tile*/, 245611 /*Frost-Covered Bridge*/, 243943 /*Warden's Door*/, 245742 /*Mirror Tile*/, 245737 /*Mirror Tile*/, 245739 /*Mirror Tile*/, 245738 /*Mirror Tile*/, 244927 /*Collision Wall*/, 244923 /*Lever*/, 244588 /*Warden Cell*/, 244596 /*Warden Cell*/, 247411 /*Collision Wall*/, 243946 /*Warden's Door*/, 245728 /*Sargerite Keystone*/, 244700 /*Small Treasure Chest*/, 244466 /*Fel Portal*/, 245112 /*Tome of Fel Secrets*/, 243968 /*Illidari Banner*/, 244701 /*Small Treasure Chest*/, 244699 /*Small Treasure Chest*/, 245996 /*Small Treasure Chest*/, 246012 /*Spire Stabilizer*/, 246296 /*Spider Web*/, 243967 /*Illidari Banner*/, 245995 /*Spire Stabilizer*/, 245345 /*Small Treasure Chest*/, 246486 /*Spire of Woe*/, 245169 /*7LG_Legion_Book01 [scale x2]*/, 246485 /*Spire of Woe*/, 246269 /*Small Treasure Chest*/, 244638 /*Well of Souls*/, 246270 /*7LG_Legion_FloorRune01 [Scale x0.50]*/, 244698 /*Small Treasure Chest*/, 243965 /*Illidari Banner*/, 244694 /*Small Treasure Chest*/, 244692 /*Small Treasure Chest*/, 246147 /*Small Treasure Chest*/, 246249 /*Small Treasure Chest*/, 241757 /*Legion Gateway Activator*/, 244604 /*Spire Stabilizer*/, 244601 /*Spire Stabilizer*/, 246356 /*7LG_Legion_FloorRune02 (Purple) [Large]*/, 244691 /*Small Treasure Chest*/, 244689 /*Small Treasure Chest*/, 253931 /*Creature_Demoncrystal_03_fel*/, 243873 /*Legion Portal*/, 259043 /*Legion Banner 02*/, 250560 /*Legion Banner*/);
INSERT INTO `gameobject_template_addon` (`entry`, `faction`, `flags`, `WorldEffectID`, `AIAnimKitID`) VALUES
(252405, 0, 0x20, 0, 0), -- Vault of the Wardens
(245208, 0, 0x20, 0, 0), -- Warden's Door
(245207, 0, 0x20, 0, 0), -- Warden's Door
(245206, 0, 0x20, 0, 0), -- Warden's Door
(247182, 0, 0x20, 0, 0), -- Warden's Door
(245434, 0, 0x20, 0, 0), -- Warden's Door
(245840, 0, 0x20, 0, 0), -- Warden's Door
(245757, 1375, 0x20, 0, 0), -- Mirror Tile
(245756, 1375, 0x20, 0, 0), -- Mirror Tile
(245759, 1375, 0x20, 0, 0), -- Mirror Tile
(245758, 1375, 0x20, 0, 0), -- Mirror Tile
(245753, 1375, 0x20, 0, 0), -- Mirror Tile
(245752, 1375, 0x20, 0, 0), -- Mirror Tile
(245755, 1375, 0x20, 0, 0), -- Mirror Tile
(245754, 1375, 0x20, 0, 0), -- Mirror Tile
(245749, 1375, 0x20, 0, 0), -- Mirror Tile
(245748, 1375, 0x20, 0, 0), -- Mirror Tile
(245751, 1375, 0x20, 0, 0), -- Mirror Tile
(245750, 1375, 0x20, 0, 0), -- Mirror Tile
(245745, 1375, 0x20, 0, 0), -- Mirror Tile
(245744, 1375, 0x20, 0, 0), -- Mirror Tile
(245747, 1375, 0x20, 0, 0), -- Mirror Tile
(245746, 1375, 0x20, 0, 0), -- Mirror Tile
(244653, 0, 0x20, 0, 0), -- Warden's Door
(244652, 0, 0x20, 0, 0), -- Warden's Door
(244655, 0, 0x20, 0, 0), -- Warden's Door
(244654, 0, 0x20, 0, 0), -- Warden's Door
(245761, 1375, 0x20, 0, 0), -- Mirror Tile
(244661, 0, 0x20, 0, 0), -- Warden's Door
(245760, 1375, 0x20, 0, 0), -- Mirror Tile
(244660, 0, 0x20, 0, 0), -- Warden's Door
(244663, 0, 0x20, 0, 0), -- Warden's Door
(244662, 0, 0x20, 0, 0), -- Warden's Door
(244657, 0, 0x20, 0, 0), -- Warden's Door
(244656, 0, 0x20, 0, 0), -- Warden's Door
(244659, 0, 0x20, 0, 0), -- Warden's Door
(244658, 0, 0x20, 0, 0), -- Warden's Door
(244404, 114, 0x20, 0, 0), -- Illidan's Rest
(245913, 0, 0x20, 0, 0), -- Vault of Ice
(245915, 0, 0x20, 0, 0), -- Vault of Law
(245914, 0, 0x20, 0, 0), -- Vault of Mirrors
(244353, 114, 0x20, 0, 0), -- Vault of Ice
(244352, 114, 0x20, 0, 0), -- Vault of Mirrors
(244355, 114, 0x20, 0, 0), -- Vault of Order
(244354, 114, 0x20, 0, 0), -- Warden's Door
(243945, 0, 0x20, 0, 0), -- Warden's Door
(243944, 0, 0x20, 0, 0), -- Warden's Door
(245741, 1375, 0x20, 0, 0), -- Mirror Tile
(245740, 1375, 0x20, 0, 0), -- Mirror Tile
(245743, 1375, 0x20, 0, 0), -- Mirror Tile
(245611, 1375, 0x20, 0, 0), -- Frost-Covered Bridge
(243943, 0, 0x20, 0, 0), -- Warden's Door
(245742, 1375, 0x20, 0, 0), -- Mirror Tile
(245737, 1375, 0x20, 0, 0), -- Mirror Tile
(245739, 1375, 0x20, 0, 0), -- Mirror Tile
(245738, 1375, 0x20, 0, 0), -- Mirror Tile
(244927, 114, 0x0, 0, 0), -- Collision Wall
(244923, 0, 0x4, 0, 7337), -- Lever
(244588, 0, 0x48020, 0, 0), -- Warden Cell
(244596, 0, 0x2000, 0, 0), -- Warden Cell
(247411, 114, 0x0, 0, 0), -- Collision Wall
(243946, 0, 0x20, 0, 0), -- Warden's Door
(245728, 0, 0x40000, 0, 0), -- Sargerite Keystone
(244700, 0, 0x0, 2437, 0), -- Small Treasure Chest
(244466, 0, 0x4, 0, 0), -- Fel Portal
(245112, 0, 0x40000, 0, 0), -- Tome of Fel Secrets
(243968, 0, 0x40000, 0, 0), -- Illidari Banner
(244701, 0, 0x204000, 2437, 0), -- Small Treasure Chest
(244699, 0, 0x204000, 2437, 0), -- Small Treasure Chest
(245996, 0, 0x204000, 2437, 0), -- Small Treasure Chest
(246012, 0, 0x0, 2100, 0), -- Spire Stabilizer
(246296, 114, 0x0, 0, 0), -- Spider Web
(243967, 0, 0x40000, 0, 0), -- Illidari Banner
(245995, 0, 0x0, 2100, 0), -- Spire Stabilizer
(245345, 0, 0x0, 2437, 0), -- Small Treasure Chest
(246486, 114, 0x20, 0, 0), -- Spire of Woe
(245169, 114, 0x0, 0, 0), -- 7LG_Legion_Book01 [scale x2]
(246485, 114, 0x20, 0, 0), -- Spire of Woe
(246269, 0, 0x204000, 2437, 0), -- Small Treasure Chest
(244638, 0, 0x0, 2100, 0), -- Well of Souls
(246270, 114, 0x0, 0, 0), -- 7LG_Legion_FloorRune01 [Scale x0.50]
(244698, 0, 0x204000, 2437, 0), -- Small Treasure Chest
(243965, 0, 0x40000, 0, 0), -- Illidari Banner
(244694, 0, 0x206000, 2437, 0), -- Small Treasure Chest
(244692, 0, 0x206000, 2437, 0), -- Small Treasure Chest
(246147, 0, 0x204000, 2437, 0), -- Small Treasure Chest
(246249, 0, 0x204000, 2437, 0), -- Small Treasure Chest
(241757, 0, 0x40021, 0, 0), -- Legion Gateway Activator
(244604, 0, 0x20, 2100, 0), -- Spire Stabilizer
(244601, 0, 0x20, 2100, 0), -- Spire Stabilizer
(246356, 114, 0x2000, 0, 0), -- 7LG_Legion_FloorRune02 (Purple) [Large]
(244691, 0, 0x204000, 2437, 0), -- Small Treasure Chest
(244689, 0, 0x204000, 2437, 0), -- Small Treasure Chest
(253931, 114, 0x0, 0, 0), -- Creature_Demoncrystal_03_fel
(243873, 0, 0x40020, 0, 0), -- Legion Portal
(259043, 114, 0x0, 0, 0), -- Legion Banner 02
(250560, 0, 0x40001, 0, 0); -- Legion Banner

UPDATE `gameobject_template_addon` SET `flags`=0x22 WHERE `entry`=246567; -- Spire of Woe B
UPDATE `gameobject_template_addon` SET `flags`=0x22 WHERE `entry`=246566; -- Spire of Woe A
UPDATE `gameobject_template_addon` SET `flags`=0x40021 WHERE `entry`=241756; -- Legion Gateway Activator

DELETE FROM `gameobject_template` WHERE `entry`=245996;
INSERT INTO `gameobject_template` (`entry`, `name`, `type`, `displayId`, `IconName`, `unk1`, `size`, `VerifiedBuild`) VALUES
(245996, 'Small Treasure Chest', 3, 33263, '', '', 1, 24367); -- Small Treasure Chest

UPDATE `gameobject_template` SET `VerifiedBuild`=24367 WHERE `entry` IN (245345, 244943, 247411, 244596, 246486, 246485, 246269, 245686, 254868, 245728, 244698, 245045, 246012, 245995, 254867, 245170, 244588, 244927, 244923, 244944, 243946, 244582, 253189, 245112, 246567, 244604, 244601, 243944, 243945, 244638, 246280, 246401, 243335, 246249, 243059, 243968, 246270, 246147, 244689, 252405, 245840, 245208, 245434, 245207, 247182, 245206, 244644, 244654, 244655, 244658, 244659, 245915, 244653, 244652, 244354, 244355, 244657, 244662, 244656, 244663, 244353, 245913, 244352, 245751, 245750, 245749, 245756, 245914, 245747, 245748, 245755, 245754, 245757, 245752, 245758, 245753, 245611, 245746, 245761, 245760, 245745, 245759, 245741, 245744, 245742, 245740, 245743, 245739, 245737, 245738, 244661, 244660, 244404, 243943, 244701, 244440, 253931, 244699, 243965, 246356, 244441, 244466, 246566, 241757, 242989, 243873, 244692, 242987, 244700, 243967, 245169, 241756, 259043, 246296, 244694, 244691, 242990, 244916, 250560);
UPDATE `gameobject_template` SET `Data8`=0, `Data10`=0, `VerifiedBuild`=24367 WHERE `entry`=254865; -- Forge
UPDATE `gameobject_template` SET `Data3`=5 WHERE `entry`=244588;
UPDATE `gameobject_template` SET `Data0`=57, `Data2`=1, `Data13`=1, `Data14`=21400, `Data18`=110, `Data19`=3, `Data30`=64095 WHERE `entry`=245996; -- Small Treasure Chest
UPDATE `gameobject_template` SET `Data8`=0, `Data10`=0, `VerifiedBuild`=24367 WHERE `entry`=254866; -- Anvil

DELETE FROM `npc_spellclick_spells` WHERE `npc_entry` = 101518 and `spell_id` = 200255;
INSERT INTO `npc_spellclick_spells` (`npc_entry`, `spell_id`, `cast_flags`, `user_type`) VALUES
(101518, 200255, 3, 0);
