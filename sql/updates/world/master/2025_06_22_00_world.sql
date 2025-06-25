ALTER TABLE `playerchoice`
  ADD `InfiniteRange` tinyint(1) UNSIGNED NOT NULL DEFAULT 0 AFTER `Question`,
  MODIFY `HideWarboardHeader` tinyint(1) UNSIGNED NOT NULL DEFAULT 0 AFTER `Question`,
  ADD `MaxResponses` int unsigned DEFAULT NULL AFTER `HideWarboardHeader`,
  ADD `ScriptName` varchar(64) CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci NULL DEFAULT NULL AFTER `MaxResponses`;
