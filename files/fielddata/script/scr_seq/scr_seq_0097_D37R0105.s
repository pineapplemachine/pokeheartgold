#include "constants/scrcmd.h"
	.include "asm/macros/script.inc"

	.rodata

	scrdef scr_seq_0097_D37R0105_000A ; 000
	scrdef scr_seq_0097_D37R0105_0029 ; 001
	scrdef_end

scr_seq_0097_D37R0105_000A:
	setflag FLAG_UNK_1B7
	setflag FLAG_UNK_1B8
	comparevartovalue VAR_UNK_4077, 4
	gotoif ne, scr_seq_0097_D37R0105_0027
	clearflag FLAG_UNK_1B7
	clearflag FLAG_UNK_1B8
scr_seq_0097_D37R0105_0027:
	end

scr_seq_0097_D37R0105_0029:
	play_se SEQ_SE_DP_SELECT
	lockall
	faceplayer
	getitemquantity 475, 32780
	comparevartovalue VAR_SPECIAL_x800C, 0
	gotoif ne, scr_seq_0097_D37R0105_005B
	npc_msg 0
	setflag FLAG_UNK_1C1
	setvar VAR_SPECIAL_x8004, 475
	setvar VAR_SPECIAL_x8005, 1
	callstd std_give_item_verbose
scr_seq_0097_D37R0105_005B:
	npc_msg 2
	npc_msg 3
	waitbutton
	closemsg
	releaseall
	end
	.balign 4, 0
