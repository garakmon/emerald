Tester_MapWarps::
	warp_def 9, 6, 3, 0, MAP_TESTER
	warp_def 28, 6, 3, 0, MAP_TESTER

Tester_MapBGEvents::
	bg_event 18, 8, 3, BG_EVENT_PLAYER_FACING_NORTH, NULL

Tester_MapEvents::
	map_events 0x0, Tester_MapWarps, 0x0, Tester_MapBGEvents
