#include "constants/scrcmd.h"
	.include "asm/macros/script.inc"

	.rodata

	scrdef scr_seq_0201_R13_000E ; 000
	scrdef scr_seq_0201_R13_0023 ; 001
	scrdef scr_seq_0201_R13_003A ; 002
	scrdef_end

scr_seq_0201_R13_000E:
	scrcmd_056 3, 0
	scrcmd_057 3
	scrcmd_058
	scrcmd_059 0, VAR_SPECIAL_x800C
	callstd 2000
	end

scr_seq_0201_R13_0023:
	scrcmd_055 1, 1, 10, VAR_SPECIAL_x800C
	scrcmd_057 3
	scrcmd_058
	scrcmd_060 VAR_SPECIAL_x800C
	callstd 2000
	end

scr_seq_0201_R13_003A:
	scrcmd_055 2, 1, 14, VAR_SPECIAL_x800C
	scrcmd_057 3
	scrcmd_058
	scrcmd_060 VAR_SPECIAL_x800C
	callstd 2000
	end
	.balign 4, 0
