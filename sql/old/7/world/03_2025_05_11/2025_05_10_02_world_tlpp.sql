# no creature should have a scaling expansion newer than legion
UPDATE `creature_template_difficulty` SET HealthScalingExpansion = 6, VerifiedBuild = -1 WHERE HealthScalingExpansion > 6;

# remove spawn tracking for maps that are newer than legion
DELETE FROM `spawn_tracking_template` WHERE `MapId` IN (1929, 1917, 2066, 1954, 1932, 2081, 2147, 2163, 2155, 2169, 2175, 2179, 2207, 2209, 2096, 2215, 2210, 2214, 2222, 2263, 2197, 2217, 2258, 2284, 2268, 2282, 2257, 2187, 2285, 2297, 2290, 2364, 2368, 2363, 2291, 2296, 2162, 2453, 2441, 2450, 2456, 2472, 2374, 2482, 2444, 2504, 2512, 2451, 2556, 2527, 2519, 2454, 2522, 2579, 2600, 2549, 2668, 2548, 2635);
DELETE FROM `spawn_tracking_template` WHERE `MapId` IN (1642, 1643, 1718, 1763, 1754, 1862, 1861, 1841, 1877);

# game_event_creature has no record in creature
DELETE FROM `game_event_creature` WHERE `guid` IN (396678, 850277, 850278, 850279, 850280, 850376, 850377, 850378, 850379, 850380, 850381, 850382, 850383, 850384, 850385, 850386, 850387);

# remove world states for maps that are newer than legion
DELETE FROM `world_state` WHERE MapIDs IN ('2097', '2070', '2096', '2164', '2106', '2212', '2235', '2236', '2217', '2285', '2284', '2293', '2213', '2287', '2289', '2296', '2286', '2290', '2291', '2360', '2441', '2450', '2162', '2481');

# remove creature_static_flags_override for creatures newer than legion
DELETE FROM `creature_static_flags_override` WHERE `SpawnId` IN (850856, 850858, 850861, 850862, 850864, 850865, 850866, 850867, 850868, 850871, 850973, 851014, 851023, 851084, 851100, 851115, 851127, 851155, 851158, 851182, 851194, 851201, 1050851, 1050886, 1050973, 1050980, 1050981, 1051014, 8000023, 8000024, 9000012, 9000013, 9000211, 9000224, 9001454, 9001469);

