-- Unfortunate Measures
DELETE FROM `quest_poi` WHERE (`QuestID`=8326 AND `BlobIndex`=0 AND `Idx1`=2) OR (`QuestID`=8326 AND `BlobIndex`=0 AND `Idx1`=1) OR (`QuestID`=8326 AND `BlobIndex`=0 AND `Idx1`=0);
INSERT INTO `quest_poi` (`QuestID`, `BlobIndex`, `Idx1`, `ObjectiveIndex`, `QuestObjectiveID`, `QuestObjectID`, `MapID`, `WorldMapAreaId`, `Floor`, `Priority`, `Flags`, `WorldEffectID`, `PlayerConditionID`, `SpawnTrackingID`, `AlwaysAllowMergingBlobs`, `VerifiedBuild`) VALUES
(8326, 0, 2, 32, 0, 0, 530, 893, 0, 0, 0, 0, 0, 120146, 0, 40120),
(8326, 0, 1, 0, 256445, 20797, 530, 893, 0, 0, 1, 0, 0, 0, 0, 40120),
(8326, 0, 0, -1, 0, 0, 530, 893, 0, 0, 1, 0, 0, 0, 0, 40120);

DELETE FROM `quest_poi_points` WHERE (`QuestID`=8326 AND `Idx1`=2 AND `Idx2`=0) OR (`QuestID`=8326 AND `Idx1`=1 AND `Idx2`=6) OR (`QuestID`=8326 AND `Idx1`=1 AND `Idx2`=5) OR (`QuestID`=8326 AND `Idx1`=1 AND `Idx2`=4) OR (`QuestID`=8326 AND `Idx1`=1 AND `Idx2`=3) OR (`QuestID`=8326 AND `Idx1`=1 AND `Idx2`=2) OR (`QuestID`=8326 AND `Idx1`=1 AND `Idx2`=1) OR (`QuestID`=8326 AND `Idx1`=1 AND `Idx2`=0) OR (`QuestID`=8326 AND `Idx1`=0 AND `Idx2`=0);
INSERT INTO `quest_poi_points` (`QuestID`, `Idx1`, `Idx2`, `X`, `Y`, `VerifiedBuild`) VALUES
(8326, 2, 0, 10352, -6360, 40120),
(8326, 1, 6, 10457, -6375, 40120),
(8326, 1, 5, 10493, -6418, 40120),
(8326, 1, 4, 10518, -6449, 40120),
(8326, 1, 3, 10521, -6483, 40120),
(8326, 1, 2, 10345, -6522, 40120),
(8326, 1, 1, 10313, -6474, 40120),
(8326, 1, 0, 10360, -6453, 40120),
(8326, 0, 0, 10358, -6370, 40120);
