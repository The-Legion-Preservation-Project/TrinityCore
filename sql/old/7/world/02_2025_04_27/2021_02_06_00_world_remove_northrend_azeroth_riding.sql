-- Delete the following spells from the trainer: Cold Weather Flying, Flight Masters License
DELETE FROM `trainer_spell` WHERE `SpellId` IN (54198, 90269);
