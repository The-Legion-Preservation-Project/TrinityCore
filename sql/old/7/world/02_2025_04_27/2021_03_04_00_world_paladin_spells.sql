-- Spell Scripts
DELETE FROM `spell_script_names` WHERE `ScriptName` IN 
('spell_pal_judgment',
 'spell_pal_selfless_healer',
 'spell_pal_crusader_might',
 'spell_pal_righteous_protector',
 'spell_pal_fist_of_justice',
 'spell_pal_grand_crusader',
 'spell_pal_judgement',
 'spell_pal_judgment');
INSERT INTO `spell_script_names` (`spell_id`,`ScriptName`) VALUES
(85804, 'spell_pal_selfless_healer'),       -- Selfless Healer     (85804)
(196926, 'spell_pal_crusader_might'),       -- Crusader's Might    (196926)
(204074, 'spell_pal_righteous_protector'),  -- Righteous Protector (204074)
(234299, 'spell_pal_fist_of_justice'),      -- Fist of Justice     (234299)
(-85043, 'spell_pal_grand_crusader');       -- Grand Crusader      (85043)

-- Spell Procs -- 
DELETE FROM `spell_proc` WHERE `SpellId` IN
(85804,     -- Selfless Healer    (85804)
 114250,    -- Selfless Healer    (114250)
 183778,    -- Judgment of Light  (183778)
 196926     -- Crusader's Might   (196926)
);
INSERT INTO `spell_proc` (`SpellId`,`SchoolMask`,`SpellFamilyName`,`SpellFamilyMask0`,`SpellFamilyMask1`,`SpellFamilyMask2`,`SpellFamilyMask3`,`ProcFlags`,`SpellTypeMask`,`SpellPhaseMask`,`HitMask`,`AttributesMask`,`DisableEffectsMask`,`ProcsPerMinute`,`Chance`,`Cooldown`,`Charges`) VALUES
(85804,0,10,0x0,0x0,0x0,0x0,0x15510,7,1,0x403,0x4,0,0,0,0,0),       -- Selfless Healer    (85804),  Proc on power spending abilities
(114250,0,10,0x40000000,0x0,0x0,0x0,0x4000,2,2,0x403,0,0,0,0,0,1),  -- Selfless Healer    (114250), Proc to consume on Flash of Light (19750)
(183778,0,10,0x00800000,0x0,0x0,0x0,0x10,1,2,0x403,0,0,0,0,0,0),    -- Judgment of Light  (183778), proc to trigger from Judgment
(196926,0,10,0x0,0x00008000,0x0,0x0,0x10,1,2,0x403,0,0,0,0,0,0);    -- Crusader's Might   (196926), proc to trigger from Crusader Strike

-- Spell Areatriggers --
DELETE FROM `spell_areatrigger` WHERE (`AreaTriggerId`=9228);
INSERT INTO `spell_areatrigger` (`SpellMiscId`, `AreaTriggerId`, `MoveCurveId`, `ScaleCurveId`, `MorphCurveId`, `FacingCurveId`, `AnimId`, `AnimKitId`, `DecalPropertiesId`, `TimeToTarget`, `TimeToTargetScale`, `VerifiedBuild`) VALUES
(4488, 9228, 0, 0, 0, 0, 0, 0, 0, 0, 12000, 37474); -- for Consecration (26573)
