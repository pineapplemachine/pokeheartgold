#include "constants/scrcmd.h"
	.include "asm/macros/script.inc"

	.rodata

	scrdef scr_seq_0008_D02R0102_0006 ; 000
	scrdef_end

scr_seq_0008_D02R0102_0006:
	checkflag FLAG_UNK_AB5
	gotoif TRUE, scr_seq_0008_D02R0102_004D
	get_weekday VAR_TEMP_x4000
	comparevartovalue VAR_TEMP_x4000, 1
	gotoif ne, scr_seq_0008_D02R0102_002E
	goto scr_seq_0008_D02R0102_004F

scr_seq_0008_D02R0102_0028:
	.byte 0x16, 0x00, 0x1f, 0x00, 0x00, 0x00
scr_seq_0008_D02R0102_002E:
	comparevartovalue VAR_TEMP_x4000, 2
	gotoif ne, scr_seq_0008_D02R0102_0047
	goto scr_seq_0008_D02R0102_008E

scr_seq_0008_D02R0102_0041:
	.byte 0x16, 0x00, 0x06, 0x00, 0x00, 0x00
scr_seq_0008_D02R0102_0047:
	goto scr_seq_0008_D02R0102_004D

scr_seq_0008_D02R0102_004D:
	end

scr_seq_0008_D02R0102_004F:
	scrcmd_379 VAR_TEMP_x4001
	comparevartovalue VAR_TEMP_x4001, 3
	gotoif ne, scr_seq_0008_D02R0102_0086
	scrcmd_342 1, 1, 7
	scrcmd_342 4, 5, 6
	scrcmd_342 2, 1, 26
	scrcmd_342 5, 5, 25
	goto scr_seq_0008_D02R0102_008C

scr_seq_0008_D02R0102_0086:
	goto scr_seq_0008_D02R0102_004D

scr_seq_0008_D02R0102_008C:
	end

scr_seq_0008_D02R0102_008E:
	scrcmd_379 VAR_TEMP_x4001
	comparevartovalue VAR_TEMP_x4001, 4
	gotoif ne, scr_seq_0008_D02R0102_00C5
	scrcmd_342 1, 1, 7
	scrcmd_342 4, 5, 6
	scrcmd_342 2, 1, 26
	scrcmd_342 5, 5, 25
	goto scr_seq_0008_D02R0102_00CB

scr_seq_0008_D02R0102_00C5:
	goto scr_seq_0008_D02R0102_004D

scr_seq_0008_D02R0102_00CB:
	end

scr_seq_0008_D02R0102_00CD:
	.byte 0x02, 0x00, 0x00
	.balign 4, 0
