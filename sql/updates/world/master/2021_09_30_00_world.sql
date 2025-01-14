-- Reclaiming Sunstrider Isle
UPDATE `quest_details` SET `Emote2`=1, `Emote3`=5 WHERE `ID`=8325;

UPDATE `quest_request_items` SET `EmoteOnComplete`=0, `EmoteOnIncomplete`=1, `CompletionText`='Our work in rebuilding our society begins here, $n.  Once we are able to secure our home, we can look outward and upward.' WHERE `ID`=8325;

UPDATE `quest_template` SET `FlagsEx`=512 WHERE `ID`=8325;
