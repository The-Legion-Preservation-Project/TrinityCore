ALTER TABLE `character_battleground_data` MODIFY `mountSpell` int(10) unsigned NOT NULL DEFAULT '0';
ALTER TABLE `character_pet` MODIFY `CreatedBySpell` int(10) unsigned NOT NULL DEFAULT '0';
ALTER TABLE `character_pvp_talent` MODIFY `talentId` int(10) unsigned NOT NULL;
ALTER TABLE `character_spell` MODIFY `spell` int(10) unsigned NOT NULL DEFAULT '0' COMMENT 'Spell Identifier';
ALTER TABLE `character_talent` MODIFY `talentId` int(10) unsigned NOT NULL;
ALTER TABLE `character_void_storage` MODIFY `itemEntry` int(10) unsigned NOT NULL;
ALTER TABLE `characters` MODIFY `latency` int(10) unsigned NOT NULL DEFAULT '0';
ALTER TABLE `guild_rank` MODIFY `rights` int(10) unsigned NOT NULL DEFAULT '0';
ALTER TABLE `item_instance` MODIFY `itemEntry` int(10) unsigned NOT NULL DEFAULT '0';
ALTER TABLE `item_instance` MODIFY `flags` int(10) unsigned NOT NULL DEFAULT '0';
ALTER TABLE `pet_spell` MODIFY `spell` int(10) unsigned NOT NULL DEFAULT '0' COMMENT 'Spell Identifier';
ALTER TABLE `quest_tracker` MODIFY `id` int(10) unsigned NOT NULL DEFAULT '0';
