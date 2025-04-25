DELETE FROM `creature_template_spell` WHERE (`CreatureID`=416 AND `Index` IN (4,3,2,1)) OR (`CreatureID`=1860 AND `Index` IN (7,6,5,4,3,2,1,0)) OR (`CreatureID`=26125 AND `Index` IN (7,6,5,4)) OR (`CreatureID` IN (34840,123640,131613) AND `Index`=1) OR (`CreatureID` IN (55335,89089,128521,129591,130573,134460,138699,141294,148640,161927,165147,166553,166554,172876,185842) AND `Index` IN (1,0)) OR (`CreatureID` IN (66299,111608,122012,123414,123640,126808,131271,131613,131945,132191,138069,146503,148769,167445,170455,170630,171109,171960,173342,178396) AND `Index`=0) OR (`CreatureID` IN (97817,110681,124988,138901,155527,157956,162221,166551,170400,170521,170577,173551,173553,178126,182445) AND `Index` IN (2,1,0)) OR (`CreatureID`=113042 AND `Index` IN (4,3,2,1,0)) OR (`CreatureID` IN (135227,169600) AND `Index` IN (3,2,1,0)) OR (`CreatureID`=157017 AND `Index` IN (5,4,3,2,1,0)) OR (`CreatureID`=165189 AND `Index` IN (7,6,4,3,2,1,0));
INSERT INTO `creature_template_spell`(`CreatureID`, `Index`, `Spell`, `VerifiedBuild`) VALUES 
(416, 1, 4, 44325), -- Imp
(416, 2, 3110, 44325), -- Imp
(416, 3, 3, 44325), -- Imp
(416, 4, 4, 44325), -- Imp
(1860, 0, 1, 44325), -- Voidwalker
(1860, 1, 4, 44325), -- Voidwalker
(1860, 2, 3716, 44325), -- Voidwalker
(1860, 3, 17735, 44325), -- Voidwalker
(1860, 4, 112042, 44325), -- Voidwalker
(1860, 5, 17767, 44325), -- Voidwalker
(1860, 6, 3, 44325), -- Voidwalker
(1860, 7, 4, 44325), -- Voidwalker
(26125, 4, 47482, 44325), -- Risen Ghoul
(26125, 5, 47484, 44325), -- Risen Ghoul
(26125, 6, 3, 44325), -- Risen Ghoul
(26125, 7, 4, 44325), -- Risen Ghoul
(34840, 1, 66299, 44325), -- Hot Rod
(55335, 0, 103695, 44325), -- Rell Nightwind
(55335, 1, 103696, 44325), -- Rell Nightwind
(66299, 0, 130396, 44325), -- Gyrocopter Turret
(89089, 0, 179215, 44325), -- Prince Farondis
(89089, 1, 225948, 44325), -- Prince Farondis
(97817, 0, 193718, 44325), -- Highmountain Survivalist
(97817, 1, 193016, 44325), -- Highmountain Survivalist
(97817, 2, 197342, 44325), -- Highmountain Survivalist
(110681, 0, 220148, 44325), -- Enhanced Illusion
(110681, 1, 220081, 44325), -- Enhanced Illusion
(110681, 2, 220207, 44325), -- Enhanced Illusion
(111608, 0, 203379, 44325), -- Moonfall Riding Hippogryph
(113042, 0, 227160, 44325), -- Illidan Stormrage
(113042, 1, 227154, 44325), -- Illidan Stormrage
(113042, 2, 227161, 44325), -- Illidan Stormrage
(113042, 3, 224934, 44325), -- Illidan Stormrage
(113042, 4, 227153, 44325), -- Illidan Stormrage
(124988, 0, 251509, 44325), -- Lightforged Warframe
(124988, 1, 251485, 44325), -- Lightforged Warframe
(124988, 2, 251569, 44325); -- Lightforged Warframe

