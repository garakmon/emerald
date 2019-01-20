Tester_MapBorder::
	.incbin "data/layouts/Tester/border.bin"

Tester_MapBlockdata::
	.incbin "data/layouts/Tester/map.bin"

	.align 2
Tester_Layout::
	.4byte 38
	.4byte 20
	.4byte Tester_MapBorder
	.4byte Tester_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Petalburg

