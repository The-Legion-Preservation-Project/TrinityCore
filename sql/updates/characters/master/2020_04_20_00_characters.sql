ALTER TABLE `auctionhouse` ADD `auctionHouseId` int(10) unsigned NOT NULL DEFAULT '0' AFTER `id`;
ALTER TABLE `auctionhouse` DROP `auctioneerguid`;

-- temporarily mark all auctions as coming from neutral AH (not goblin one) and expired
UPDATE `auctionhouse` SET `auctionHouseId`=1, `time`=UNIX_TIMESTAMP();

ALTER TABLE `auctionhouse` CHANGE `itemguid` `itemGuid` bigint(20) unsigned NOT NULL DEFAULT '0' AFTER `auctionHouseId`;
ALTER TABLE `auctionhouse` CHANGE `itemowner` `owner` bigint(20) unsigned NOT NULL DEFAULT '0' AFTER `itemGuid`;
ALTER TABLE `auctionhouse` CHANGE `buyguid` `bidder` bigint(20) unsigned NOT NULL DEFAULT '0' AFTER `owner`;
ALTER TABLE `auctionhouse` CHANGE `startbid` `minBid` bigint(20) unsigned NOT NULL DEFAULT '0' AFTER `bidder`;
ALTER TABLE `auctionhouse` CHANGE `buyoutprice` `buyoutPrice` bigint(20) unsigned NOT NULL DEFAULT '0' AFTER `minBid`;
ALTER TABLE `auctionhouse` MODIFY `deposit` bigint(20) unsigned NOT NULL DEFAULT '0' AFTER `buyoutPrice`;
ALTER TABLE `auctionhouse` CHANGE `lastbid` `bidAmount` bigint(20) unsigned NOT NULL DEFAULT '0' AFTER `deposit`;
ALTER TABLE `auctionhouse` ADD `startTime` int(10) unsigned NOT NULL DEFAULT '0' AFTER `deposit`;
ALTER TABLE `auctionhouse` CHANGE `time` `endTime` int(10) unsigned NOT NULL DEFAULT '0' AFTER `startTime`;
