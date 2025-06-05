-- The Ruined Sanctum
DELETE FROM `creature_equip_template` WHERE (`CreatureID`=106782 AND `ID`=1);
INSERT INTO `creature_equip_template` (`CreatureID`, `ID`, `ItemID1`, `AppearanceModID1`, `ItemVisual1`, `ItemID2`, `AppearanceModID2`, `ItemVisual2`, `ItemID3`, `AppearanceModID3`, `ItemVisual3`, `VerifiedBuild`) VALUES
(106782, 1, 132170, 0, 0, 0, 0, 0, 0, 0, 0, 23222); -- Nightborne Foehunter

DELETE FROM `creature_template_addon` WHERE `entry` IN (109349 /*109349 (Veil Shadowrunner) - Mod Scale 105-110%, Aura of Lethargy*/, 106695 /*106695 (Nightborne Animator) - Arcane Channeling*/, 106689 /*106689 (Inactive Construct)*/, 106873 /*106873 (Font of Arcane Energy) - Arcane Font Area Aura*/, 62050 /*62050 (Grey Moth)*/, 106782 /*106782 (Nightborne Foehunter)*/);
INSERT INTO `creature_template_addon` (`entry`, `PathId`, `mount`, `StandState`, `AnimTier`, `VisFlags`, `SheathState`, `PvpFlags`, `emote`, `aiAnimKit`, `movementAnimKit`, `meleeAnimKit`, `visibilityDistanceType`, `auras`) VALUES
(109349, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, '123169 221736'), -- 109349 (Veil Shadowrunner) - Mod Scale 105-110%, Aura of Lethargy
(106695, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, '39550'), -- 106695 (Nightborne Animator) - Arcane Channeling
(106689, 0, 0, 0, 0, 0, 1, 0, 0, 10630, 0, 0, 0, ''), -- 106689 (Inactive Construct)
(106873, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, '212102'), -- 106873 (Font of Arcane Energy) - Arcane Font Area Aura
(62050, 0, 0, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, ''), -- 62050 (Grey Moth)
(106782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, ''); -- 106782 (Nightborne Foehunter)

UPDATE `creature_template` SET `faction`=16, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=106695; -- Nightborne Animator
UPDATE `creature_template` SET `faction`=190, `npcflag`=16777216, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x4000800, `unit_flags3`=0x0 WHERE `entry`=106689; -- Inactive Construct
UPDATE `creature_template` SET `faction`=16, `speed_run`=0.992062866687774658, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=106782; -- Nightborne Foehunter
UPDATE `creature_template` SET `faction`=190, `speed_walk`=0.66666799783706665, `BaseAttackTime`=2000, `unit_flags2`=0x800, `VehicleId`=3963 WHERE `entry`=105838; -- Redcrested Heron
UPDATE `creature_template` SET `faction`=16, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=106788; -- Animated Construct
UPDATE `creature_template` SET `BaseAttackTime`=2000, `unit_flags`=0x2000300, `unit_flags2`=0x4000800, `unit_flags3`=0x1 WHERE `entry`=106873; -- Font of Arcane Energy
UPDATE `creature_template` SET `faction`=188, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=93725; -- Slithering Brownscale
UPDATE `creature_template` SET `speed_run`=1, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=109349; -- Veil Shadowrunner


-- Oceanus Cove
DELETE FROM `creature_equip_template` WHERE (`ID`=1 AND `CreatureID` IN (91544,91528,89110,88094,90109,89104,89112,89113,89111,109334,89097));
INSERT INTO `creature_equip_template` (`CreatureID`, `ID`, `ItemID1`, `AppearanceModID1`, `ItemVisual1`, `ItemID2`, `AppearanceModID2`, `ItemVisual2`, `ItemID3`, `AppearanceModID3`, `ItemVisual3`, `VerifiedBuild`) VALUES
(91544, 1, 2179, 0, 0, 0, 0, 0, 0, 0, 0, 23222), -- Captain Blindside
(91528, 1, 2179, 0, 0, 0, 0, 0, 0, 0, 0, 23222), -- Southsea Smuggler
(89110, 1, 1910, 0, 0, 0, 0, 0, 0, 0, 0, 23222), -- Shipwrecked Captive
(88094, 1, 42509, 0, 0, 0, 0, 0, 0, 0, 0, 23222), -- Sea Skrog
(90109, 1, 54820, 0, 0, 0, 0, 0, 0, 0, 0, 23222), -- Hatecoil Slavemaster
(89104, 1, 1910, 0, 0, 0, 0, 0, 0, 0, 0, 23222), -- Shipwrecked Captive
(89112, 1, 1910, 0, 0, 0, 0, 0, 0, 0, 0, 23222), -- Shipwrecked Captive
(89113, 1, 1910, 0, 0, 0, 0, 0, 0, 0, 0, 23222), -- Shipwrecked Captive
(89111, 1, 1910, 0, 0, 0, 0, 0, 0, 0, 0, 23222), -- Shipwrecked Captive
(109334, 1, 88553, 0, 0, 0, 0, 0, 0, 0, 0, 23222), -- Okuna Longtusk
(89097, 1, 34058, 0, 0, 0, 0, 0, 0, 0, 0, 23222); -- Cove Skrog

DELETE FROM `creature_template_addon` WHERE `entry` IN (91524 /*91524 (Cannon)*/, 97020 /*97020 (Albatross Chick)*/, 88094 /*88094 (Sea Skrog)*/, 89386 /*89386 (Cliffwing Hippogryph)*/, 109334 /*109334 (Okuna Longtusk)*/, 89097 /*89097 (Cove Skrog)*/, 89051 /*89051 (Okuna Longtusk)*/);
INSERT INTO `creature_template_addon` (`entry`, `PathId`, `mount`, `StandState`, `AnimTier`, `VisFlags`, `SheathState`, `PvpFlags`, `emote`, `aiAnimKit`, `movementAnimKit`, `meleeAnimKit`, `visibilityDistanceType`, `auras`) VALUES
(91524, 0, 0, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, ''), -- 91524 (Cannon)
(97020, 0, 0, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, ''), -- 97020 (Albatross Chick)
(88094, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 3, ''), -- 88094 (Sea Skrog)
(89386, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, ''), -- 89386 (Cliffwing Hippogryph)
(109334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, ''), -- 109334 (Okuna Longtusk)
(89097, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 3, ''), -- 89097 (Cove Skrog)
(89051, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, ''); -- 89051 (Okuna Longtusk)

UPDATE `creature_template` SET `BaseAttackTime`=2000, `unit_flags`=0x200, `unit_flags2`=0x800 WHERE `entry`=97020; -- Albatross Chick
UPDATE `creature_template` SET `BaseAttackTime`=2000, `unit_flags`=0x200, `unit_flags2`=0x800 WHERE `entry`=97289; -- Juvenile Scuttleback
UPDATE `creature_template` SET `faction`=2000, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags2`=0x800, `family`=160 WHERE `entry`=89386; -- Cliffwing Hippogryph
UPDATE `creature_template` SET `faction`=16, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=88094; -- Sea Skrog
UPDATE `creature_template` SET `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=91544; -- Captain Blindside
UPDATE `creature_template` SET `BaseAttackTime`=2000, `unit_flags`=0x2000000, `unit_flags2`=0x800, `unit_flags3`=0x1 WHERE `entry`=91524; -- Cannon
UPDATE `creature_template` SET `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=91528; -- Southsea Smuggler
UPDATE `creature_template` SET `speed_run`=1 WHERE `entry`=89884; -- Flog the Captain-Eater
UPDATE `creature_template` SET `faction`=190, `BaseAttackTime`=2000, `unit_flags`=0x100, `unit_flags2`=0x800 WHERE `entry` IN (89110, 89111, 89112, 89113, 89104); -- Shipwrecked Captive
UPDATE `creature_template` SET `faction`=14, `speed_run`=0.992062866687774658, `BaseAttackTime`=2000, `unit_flags`=0x40, `unit_flags2`=0x800 WHERE `entry`=111682; -- Savage Great White
UPDATE `creature_template` SET `speed_run`=1, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=90109; -- Hatecoil Slavemaster
UPDATE `creature_template` SET `faction`=190, `speed_run`=1.190475702285766601, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=89104; -- Shipwrecked Captive
UPDATE `creature_template` SET `faction`=190, `speed_walk`=0.66666799783706665, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=89113; -- Shipwrecked Captive
UPDATE `creature_template` SET `npcflag`=3, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=109334; -- Okuna Longtusk
UPDATE `creature_template` SET `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x40, `unit_flags2`=0x800, `KillCredit1`=90109 WHERE `entry`=89097; -- Cove Skrog
UPDATE `creature_template` SET `npcflag`=1073741824, `speed_run`=0.857142865657806396, `BaseAttackTime`=2000, `unit_flags`=0x200, `unit_flags2`=0x800 WHERE `entry`=97283; -- Juvenile Scuttleback
UPDATE `creature_template` SET `faction`=190, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=101554; -- Spikebacked Scuttler
UPDATE `creature_template` SET `unit_flags3`=0x1 WHERE `entry`=55370; -- General Purpose Bunny ZTO
UPDATE `creature_template` SET `npcflag`=3, `BaseAttackTime`=2000, `unit_flags`=0x100, `unit_flags3`=0x0 WHERE `entry`=89051; -- Okuna Longtusk
UPDATE `creature_template` SET `faction`=190, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=93487; -- Gentle Rosh
UPDATE `creature_template` SET `faction`=190, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=93475; -- Cleave Thunderhill
UPDATE `creature_template` SET `faction`=190, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=93492; -- Grace the Green
UPDATE `creature_template` SET `faction`=190, `npcflag`=2, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=88863; -- Seska Seafang
UPDATE `creature_template` SET `faction`=16, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x40, `unit_flags2`=0x800 WHERE `entry`=93513; -- Skrog Ambassador
UPDATE `creature_template` SET `faction`=74, `speed_run`=0.992062866687774658, `BaseAttackTime`=2000, `unit_flags`=0x40, `unit_flags2`=0x800 WHERE `entry`=89199; -- Lady Sssurine
UPDATE `creature_template` SET `npcflag`=1073741824, `BaseAttackTime`=2000, `unit_flags`=0x200, `unit_flags2`=0x800 WHERE `entry`=97018; -- Albatross Chick

UPDATE `creature_template_difficulty` SET `TypeFlags`=0x1 WHERE (`Entry`=89386 AND `DifficultyID`=0); -- Cliffwing Hippogryph


-- Illidari Stand
DELETE FROM `creature_equip_template` WHERE (`ID`=1 AND `CreatureID` IN (101943,101944,114110,114109,114814,89278,86969,90472,90317,101946,90230,89398,89362,91629));
INSERT INTO `creature_equip_template` (`CreatureID`, `ID`, `ItemID1`, `AppearanceModID1`, `ItemVisual1`, `ItemID2`, `AppearanceModID2`, `ItemVisual2`, `ItemID3`, `AppearanceModID3`, `ItemVisual3`, `VerifiedBuild`) VALUES
(101943, 1, 138481, 0, 0, 0, 0, 0, 0, 0, 0, 23877), -- Felguard Shocktrooper
(101944, 1, 138481, 0, 0, 0, 0, 0, 0, 0, 0, 23877), -- Felguard Shocktrooper
(114110, 1, 128358, 0, 0, 128372, 0, 0, 0, 0, 0, 23877), -- Demon Hunter
(114109, 1, 128358, 0, 0, 128372, 0, 0, 0, 0, 0, 23877), -- Demon Hunter
(114814, 1, 128358, 0, 0, 128372, 0, 0, 0, 0, 0, 23877), -- Demon Hunter
(89278, 1, 128358, 0, 0, 128372, 0, 0, 0, 0, 0, 23877), -- Demon Hunter
(86969, 1, 128358, 0, 0, 128372, 0, 0, 0, 0, 0, 23877), -- Demon Hunter
(90472, 1, 127651, 0, 0, 0, 0, 0, 0, 0, 0, 23877), -- Wrathguard Invader
(90317, 1, 128360, 0, 0, 128370, 0, 0, 0, 0, 0, 23877), -- Jace Darkweaver
(101946, 1, 127651, 0, 0, 127651, 0, 0, 0, 0, 0, 23877), -- Wrathguard Invader
(90230, 1, 127651, 0, 0, 127651, 0, 0, 0, 0, 0, 23877), -- Wrathguard Invader
(89398, 1, 122430, 0, 0, 0, 0, 0, 0, 0, 0, 23877), -- Allari the Souleater
(89362, 1, 128359, 0, 0, 128371, 0, 0, 0, 0, 0, 23877), -- Kayn Sunfury
(91629, 1, 128361, 0, 0, 128369, 0, 0, 0, 0, 0, 23877); -- Illidari Enforcer

DELETE FROM `creature_template_addon` WHERE `entry` IN (93619 /*93619 (Infernal Brutalizer)*/, 101945 /*101945 (Vile Stalker) - Permanent Feign Death (NO Stun, Untrackable, Immune)*/, 101944 /*101944 (Felguard Shocktrooper) - Permanent Feign Death (NO Stun, Untrackable, Immune)*/, 114110 /*114110 (Demon Hunter) - Glaive Anim Replacement, Permanent Feign Death (NO Stun, Untrackable, Immune)*/, 114109 /*114109 (Demon Hunter) - Glaive Anim Replacement, Permanent Feign Death (NO Stun, Untrackable, Immune)*/, 114814 /*114814 (Demon Hunter) - Glaive Anim Replacement*/, 89278 /*89278 (Demon Hunter) - Glaive Anim Replacement*/, 86969 /*86969 (Demon Hunter) - Glaive Anim Replacement*/, 90472 /*90472 (Wrathguard Invader) - Permanent Feign Death (NO Stun, Untrackable, Immune)*/, 90317 /*90317 (Jace Darkweaver)*/, 101946 /*101946 (Wrathguard Invader) - Permanent Feign Death (NO Stun, Untrackable, Immune)*/, 89398 /*89398 (Allari the Souleater)*/, 89362 /*89362 (Kayn Sunfury) - Dual Wield*/, 91629 /*91629 (Illidari Enforcer) - Invisibility and Stealth Detection*/, 93556 /*93556 (Savage Felbat)*/);
INSERT INTO `creature_template_addon` (`entry`, `PathId`, `mount`, `StandState`, `AnimTier`, `VisFlags`, `SheathState`, `PvpFlags`, `emote`, `aiAnimKit`, `movementAnimKit`, `meleeAnimKit`, `visibilityDistanceType`, `auras`) VALUES
(93619, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 4, ''), -- 93619 (Infernal Brutalizer)
(101945, 0, 0, 0, 0, 4, 1, 0, 0, 0, 0, 0, 0, '159474'), -- 101945 (Vile Stalker) - Permanent Feign Death (NO Stun, Untrackable, Immune)
(101944, 0, 0, 0, 0, 4, 1, 0, 0, 0, 0, 0, 0, '159474'), -- 101944 (Felguard Shocktrooper) - Permanent Feign Death (NO Stun, Untrackable, Immune)
(114110, 0, 0, 0, 0, 4, 1, 0, 0, 0, 0, 0, 0, '222589 159474'), -- 114110 (Demon Hunter) - Glaive Anim Replacement, Permanent Feign Death (NO Stun, Untrackable, Immune)
(114109, 0, 0, 0, 0, 4, 1, 0, 0, 0, 0, 0, 0, '222589 159474'), -- 114109 (Demon Hunter) - Glaive Anim Replacement, Permanent Feign Death (NO Stun, Untrackable, Immune)
(114814, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, '222589'), -- 114814 (Demon Hunter) - Glaive Anim Replacement
(89278, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, '222589'), -- 89278 (Demon Hunter) - Glaive Anim Replacement
(86969, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, '222589'), -- 86969 (Demon Hunter) - Glaive Anim Replacement
(90472, 0, 0, 0, 0, 4, 1, 0, 0, 0, 0, 0, 0, '159474'), -- 90472 (Wrathguard Invader) - Permanent Feign Death (NO Stun, Untrackable, Immune)
(90317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, ''), -- 90317 (Jace Darkweaver)
(101946, 0, 0, 0, 0, 4, 1, 0, 0, 0, 0, 0, 0, '159474'), -- 101946 (Wrathguard Invader) - Permanent Feign Death (NO Stun, Untrackable, Immune)
(89398, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 3, ''), -- 89398 (Allari the Souleater)
(89362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, '42459'), -- 89362 (Kayn Sunfury) - Dual Wield
(91629, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, '18950'), -- 91629 (Illidari Enforcer) - Invisibility and Stealth Detection
(93556, 0, 0, 0, 3, 0, 1, 0, 0, 0, 0, 0, 3, ''); -- 93556 (Savage Felbat)

UPDATE `creature_template` SET `faction`=2856, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=101943; -- Felguard Shocktrooper
UPDATE `creature_template` SET `faction`=14, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=101945; -- Vile Stalker
UPDATE `creature_template` SET `faction`=14, `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=101944; -- Felguard Shocktrooper
UPDATE `creature_template` SET `faction`=2843, `BaseAttackTime`=1000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry` IN (114110, 114109); -- Demon Hunter
UPDATE `creature_template` SET `faction`=2843, `BaseAttackTime`=1000, `unit_flags2`=0x800 WHERE `entry`=114814; -- Demon Hunter
UPDATE `creature_template` SET `faction`=2838, `npcflag`=65537, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=89639; -- Belath Dawnblade
UPDATE `creature_template` SET `faction`=2732, `BaseAttackTime`=2000, `unit_flags`=0x100, `unit_flags2`=0x800 WHERE `entry`=90308; -- Wrathguard Prisoner
UPDATE `creature_template` SET `faction`=2732, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=90472; -- Wrathguard Invader
UPDATE `creature_template` SET `faction`=2838, `npcflag`=3, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=90317; -- Jace Darkweaver
UPDATE `creature_template` SET `faction`=14, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=101946; -- Wrathguard Invader
UPDATE `creature_template` SET `faction`=2856, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=90230; -- Wrathguard Invader
UPDATE `creature_template` SET `faction`=2856, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=90241; -- Vile Stalker
UPDATE `creature_template` SET `faction`=2838, `npcflag`=3, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=89398; -- Allari the Souleater
UPDATE `creature_template` SET `faction`=2838, `npcflag`=3, `BaseAttackTime`=2000, `unit_flags`=0x140, `unit_flags2`=0x800 WHERE `entry`=89362; -- Kayn Sunfury
UPDATE `creature_template` SET `faction`=2838, `npcflag`=4225, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=89640; -- Falara Nightsong
UPDATE `creature_template` SET `faction`=2843, `BaseAttackTime`=1000, `unit_flags`=0x200, `unit_flags2`=0x800 WHERE `entry` IN (86969, 89278); -- Demon Hunter
UPDATE `creature_template` SET `faction`=2838, `npcflag`=8192, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=88110; -- Izal Whitemoon
UPDATE `creature_template` SET `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x200, `unit_flags2`=0x800 WHERE `entry`=93556; -- Savage Felbat
UPDATE `creature_template` SET `BaseAttackTime`=2000, `unit_flags2`=0x4000800, `unit_flags3`=0x0 WHERE `entry`=101942; -- Demon Ward
UPDATE `creature_template` SET `faction`=2846, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=91629; -- Illidari Enforcer
UPDATE `creature_template` SET `speed_run`=1, `BaseAttackTime`=2000, `unit_flags`=0x140, `unit_flags2`=0x800 WHERE `entry`=93622; -- Mortiferous
UPDATE `creature_template` SET `faction`=2856, `speed_walk`=0.888799965381622314, `speed_run`=1.587142825126647949, `BaseAttackTime`=2000, `unit_flags2`=0x800 WHERE `entry`=93619; -- Infernal Brutalizer


-- Crumbled Palace
DELETE FROM `creature_equip_template` WHERE (`ID`=1 AND `CreatureID` IN (88797,89023,89341));
INSERT INTO `creature_equip_template` (`CreatureID`, `ID`, `ItemID1`, `AppearanceModID1`, `ItemVisual1`, `ItemID2`, `AppearanceModID2`, `ItemVisual2`, `ItemID3`, `AppearanceModID3`, `ItemVisual3`, `VerifiedBuild`) VALUES
(88797, 1, 104096, 0, 0, 0, 0, 0, 0, 0, 0, 23877), -- Elder Aldryth
(89023, 1, 49687, 0, 0, 0, 0, 0, 0, 0, 0, 23877), -- Nightwatcher Idri
(89341, 1, 13612, 0, 0, 2716, 0, 0, 0, 0, 0, 23877); -- Magister Garuhod

DELETE FROM `creature_template_addon` WHERE `entry` IN (89023 /*89023 (Nightwatcher Idri)*/, 89341 /*89341 (Magister Garuhod)*/);
INSERT INTO `creature_template_addon` (`entry`, `PathId`, `mount`, `StandState`, `AnimTier`, `VisFlags`, `SheathState`, `PvpFlags`, `emote`, `aiAnimKit`, `movementAnimKit`, `meleeAnimKit`, `visibilityDistanceType`, `auras`) VALUES
(89023, 0, 0, 0, 0, 0, 1, 0, 0, 7685, 0, 0, 3, ''), -- 89023 (Nightwatcher Idri)
(89341, 0, 0, 0, 0, 0, 1, 0, 0, 7702, 0, 0, 0, ''); -- 89341 (Magister Garuhod)

UPDATE `creature_template` SET `npcflag`=3, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry` IN (91403, 89009, 88890, 88115); -- Prince Farondis
UPDATE `creature_template` SET `npcflag`=16777216, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800, `unit_flags3`=0x80 WHERE `entry`=88797; -- Elder Aldryth
UPDATE `creature_template` SET `BaseAttackTime`=2000, `unit_flags`=0x300 WHERE `entry`=89023; -- Nightwatcher Idri
UPDATE `creature_template` SET `npcflag`=3, `BaseAttackTime`=2000, `unit_flags`=0x300, `unit_flags2`=0x800 WHERE `entry`=89341; -- Magister Garuhod
