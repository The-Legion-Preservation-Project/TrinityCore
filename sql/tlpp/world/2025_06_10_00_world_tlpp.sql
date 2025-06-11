DELETE FROM `creature_template_difficulty` WHERE `DifficultyID`=0 AND `Entry` IN (53488,61408,61657,61658,61780,61790,61795,61825);
INSERT INTO `creature_template_difficulty` (`Entry`, `DifficultyID`, `MinLevel`, `MaxLevel`, `LevelScalingMin`, `LevelScalingMax`, `LevelScalingDeltaMin`, `LevelScalingDeltaMax`, `HealthScalingExpansion`, `HealthModifier`, `ManaModifier`, `ArmorModifier`, `DamageModifier`, `TypeFlags`, `TypeFlags2`, `StaticFlags1`, `StaticFlags2`, `StaticFlags3`, `StaticFlags4`, `StaticFlags5`, `StaticFlags6`, `StaticFlags7`, `StaticFlags8`, `VerifiedBuild`) VALUES
(53488,0,80,80,0,0,0,0,2,1,1,1,1,0,0,536871168,0,0,0,0,0,0,0,0),
(61408,0,16,16,15,60,2,2,0,35,1,1,1,2097225,128,268959744,0,0,0,0,0,0,0,0),
(61657,0,14,14,15,60,0,0,0,2.5,1,1,1,2097225,0,268959744,0,0,0,0,0,0,0,0),
(61658,0,14,14,15,60,0,0,0,5,1,1,1,2097225,0,268959744,0,0,0,0,0,0,0,0),
(61780,0,14,14,15,60,0,0,0,1,1,1,1,0,6,536871168,0,33554432,0,0,0,0,0,0),
(61790,0,14,14,15,60,0,0,0,1,1,1,1,0,6,536871168,0,33554432,0,0,0,0,0,0),
(61795,0,14,14,15,60,0,0,0,1,1,1,1,72,0,805830912,0,0,0,0,0,0,0,0),
(61825,0,1,1,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0);

UPDATE `creature_model_info` SET `BoundingRadius`=6, `CombatReach`=24, `DisplayID_Other_Gender`=0, `VerifiedBuild`=0 WHERE `DisplayID`=42247; -- 61463 (Slagmaw)
UPDATE `creature_model_info` SET `BoundingRadius`=0.918, `VerifiedBuild`=0 WHERE `DisplayID`=38759; -- 61408 (Adarogg)
UPDATE `creature_model_info` SET `BoundingRadius`=0.651, `CombatReach`=2.625, `VerifiedBuild`=0 WHERE `DisplayID`=42101; -- 61412 (Dark Shaman Koranthal)
UPDATE `creature_model_info` SET `BoundingRadius`=3.77645, `CombatReach`=5.775, `VerifiedBuild`=0 WHERE `DisplayID`=42100; -- 61528 (Lava Guard Gordoth)
UPDATE `creature_model_info` SET `BoundingRadius`=0.465, `CombatReach`=1.875, `VerifiedBuild`=0 WHERE `DisplayID`=42194; -- 61644 (Dark Shaman Researcher)
UPDATE `creature_model_info` SET `BoundingRadius`=0.295, `CombatReach`=1.875, `VerifiedBuild`=0 WHERE `DisplayID`=42210; -- 61644 (Dark Shaman Researcher)
UPDATE `creature_model_info` SET `BoundingRadius`=0.2295, `VerifiedBuild`=0 WHERE `DisplayID`=42187; -- 61657 (Adolescent Flame Hound)
UPDATE `creature_model_info` SET `BoundingRadius`=0.459, `VerifiedBuild`=0 WHERE `DisplayID`=42188; -- 61658 (Mature Flame Hound)
UPDATE `creature_model_info` SET `BoundingRadius`=0.964008, `VerifiedBuild`=0 WHERE `DisplayID`=32731; -- 61659 (Slain Trogg)
UPDATE `creature_model_info` SET `BoundingRadius`=0.465, `CombatReach`=1.875, `VerifiedBuild`=0 WHERE `DisplayID`=42191; -- 61666 (Corrupted Houndmaster)
UPDATE `creature_model_info` SET `BoundingRadius`=0.465, `CombatReach`=1.875, `VerifiedBuild`=0 WHERE `DisplayID`=42214; -- 61666 (Corrupted Houndmaster)
UPDATE `creature_model_info` SET `BoundingRadius`=0.295, `CombatReach`=1.875, `VerifiedBuild`=0 WHERE `DisplayID`=42215; -- 61666 (Corrupted Houndmaster)
UPDATE `creature_model_info` SET `BoundingRadius`=0.964008, `VerifiedBuild`=0 WHERE `DisplayID`=32731; -- 61669 (Oggleflint)
UPDATE `creature_model_info` SET `BoundingRadius`=0.465, `CombatReach`=1.875, `VerifiedBuild`=0 WHERE `DisplayID`=42194; -- 61672 (Dark Shaman Acolyte)
UPDATE `creature_model_info` SET `BoundingRadius`=0.295, `CombatReach`=1.875, `VerifiedBuild`=0 WHERE `DisplayID`=42210; -- 61672 (Dark Shaman Acolyte)
UPDATE `creature_model_info` SET `BoundingRadius`=0.465, `CombatReach`=1.875, `VerifiedBuild`=0 WHERE `DisplayID`=42196; -- 61678 (Corrupted Reaver)
UPDATE `creature_model_info` SET `BoundingRadius`=0.465, `CombatReach`=1.875, `VerifiedBuild`=0 WHERE `DisplayID`=42211; -- 61678 (Corrupted Reaver)
UPDATE `creature_model_info` SET `BoundingRadius`=0.465, `CombatReach`=1.875, `VerifiedBuild`=0 WHERE `DisplayID`=42198; -- 61680 (Kor'kron Scout)
UPDATE `creature_model_info` SET `BoundingRadius`=0.465, `CombatReach`=1.875, `VerifiedBuild`=0 WHERE `DisplayID`=42208; -- 61680 (Kor'kron Scout)
UPDATE `creature_model_info` SET `BoundingRadius`=0.465, `CombatReach`=1.875, `VerifiedBuild`=0 WHERE `DisplayID`=42209; -- 61680 (Kor'kron Scout)
UPDATE `creature_model_info` SET `BoundingRadius`=0.465, `CombatReach`=1.875, `VerifiedBuild`=0 WHERE `DisplayID`=42212; -- 61705 (Corrupted Flamecaller)
UPDATE `creature_model_info` SET `BoundingRadius`=0.465, `CombatReach`=1.875, `VerifiedBuild`=0 WHERE `DisplayID`=42213; -- 61705 (Corrupted Flamecaller)
UPDATE `creature_model_info` SET `BoundingRadius`=0.465, `CombatReach`=1.875, `VerifiedBuild`=0 WHERE `DisplayID`=42217; -- 61716 (Invoker Xorenth)
UPDATE `creature_model_info` SET `BoundingRadius`=0.465, `CombatReach`=1.875, `VerifiedBuild`=0 WHERE `DisplayID`=42219; -- 61724 (Commander Bagran)
UPDATE `creature_model_info` SET `BoundingRadius`=1, `VerifiedBuild`=0 WHERE `DisplayID`=42232; -- 61780 (Suspicious Rock)
UPDATE `creature_model_info` SET `BoundingRadius`=0.81, `CombatReach`=1.5, `VerifiedBuild`=0 WHERE `DisplayID`=42237; -- 61790 (Inconspicuous Crate)
