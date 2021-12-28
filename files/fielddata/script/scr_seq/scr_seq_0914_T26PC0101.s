#include "constants/scrcmd.h"
	.include "asm/macros/script.inc"

	.rodata

	scrdef scr_seq_0914_T26PC0101_0016 ; 000
	scrdef scr_seq_0914_T26PC0101_010C ; 001
	scrdef scr_seq_0914_T26PC0101_011F ; 002
	scrdef scr_seq_0914_T26PC0101_0132 ; 003
	scrdef scr_seq_0914_T26PC0101_0022 ; 004
	scrdef_end

scr_seq_0914_T26PC0101_0016:
	setvar VAR_SPECIAL_x8007, 0
	callstd 2002
	end

scr_seq_0914_T26PC0101_0022:
	checktrainerflag 728
	gotoif eq, scr_seq_0914_T26PC0101_00E6
	comparevartovalue VAR_TEMP_x4007, 77
	gotoif eq, scr_seq_0914_T26PC0101_00C4
	play_se SEQ_SE_DP_SELECT
	lockall
	npc_msg 3
	setvar VAR_TEMP_x4007, 77
	scrcmd_386 VAR_SPECIAL_x800C
	comparevartovalue VAR_SPECIAL_x800C, 2
	gotoif ne, scr_seq_0914_T26PC0101_0068
	apply_movement 7, scr_seq_0914_T26PC0101_00FC
	goto scr_seq_0914_T26PC0101_007D

scr_seq_0914_T26PC0101_0068:
	comparevartovalue VAR_SPECIAL_x800C, 0
	gotoif ne, scr_seq_0914_T26PC0101_007D
	apply_movement 7, scr_seq_0914_T26PC0101_0104
scr_seq_0914_T26PC0101_007D:
	wait_movement
	npc_msg 4
scr_seq_0914_T26PC0101_0082:
	scrcmd_746
	getmenuchoice VAR_SPECIAL_x800C
	scrcmd_747
	comparevartovalue VAR_SPECIAL_x800C, 1
	gotoif eq, scr_seq_0914_T26PC0101_00D5
	npc_msg 5
	closemsg
	trainer_battle 728, 0, 0, 0
	scrcmd_220 VAR_SPECIAL_x800C
	comparevartovalue VAR_SPECIAL_x800C, 0
	gotoif eq, scr_seq_0914_T26PC0101_00E0
	settrainerflag 728
	npc_msg 6
	waitbutton
	closemsg
	releaseall
	end

scr_seq_0914_T26PC0101_00C4:
	play_se SEQ_SE_DP_SELECT
	lockall
	faceplayer
	npc_msg 8
	goto scr_seq_0914_T26PC0101_0082

scr_seq_0914_T26PC0101_00D5:
	npc_msg 7
	waitbutton
	closemsg
	releaseall
	end

scr_seq_0914_T26PC0101_00E0:
	scrcmd_219
	releaseall
	end

scr_seq_0914_T26PC0101_00E6:
	play_se SEQ_SE_DP_SELECT
	lockall
	faceplayer
	npc_msg 6
	waitbutton
	closemsg
	releaseall
	end

scr_seq_0914_T26PC0101_00F9:
	.byte 0x00, 0x00, 0x00

scr_seq_0914_T26PC0101_00FC:
	.short 35, 1
	.short 254, 0

scr_seq_0914_T26PC0101_0104:
	.short 33, 1
	.short 254, 0
scr_seq_0914_T26PC0101_010C:
	play_se SEQ_SE_DP_SELECT
	lockall
	faceplayer
	npc_msg 0
	waitbutton
	closemsg
	releaseall
	end

scr_seq_0914_T26PC0101_011F:
	play_se SEQ_SE_DP_SELECT
	lockall
	faceplayer
	npc_msg 1
	waitbutton
	closemsg
	releaseall
	end

scr_seq_0914_T26PC0101_0132:
	play_se SEQ_SE_DP_SELECT
	lockall
	faceplayer
	npc_msg 2
	waitbutton
	closemsg
	releaseall
	end
	.balign 4, 0
