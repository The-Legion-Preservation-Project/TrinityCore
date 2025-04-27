DELETE FROM `playercreateinfo_cast_spell` WHERE `spell` IN (259086, 259085, 259087, 259084);
INSERT INTO `playercreateinfo_cast_spell` (`raceMask`, `ClassMask`, `spell`, `note`) VALUES
(0x10000000, 0x4, 259086, 'Void Elf summon Voidstalker Pet'), -- Voidelf
(0x20000000, 0x4, 259085, 'Lightforged Draenei summon Lightforged Talbuk Pet'), -- Lightforged Draenei
(0x4000000, 0x4, 259087, 'Nightborne summon Manasaber Pet'), -- Nightborn
(0x8000000, 0x4, 259084, 'Highmountain Tauren summon Great Eagle Pet'); -- Highmountain Tauren
