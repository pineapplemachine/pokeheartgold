
	thumb_func_start MOD25_022598C0
MOD25_022598C0: @ 0x022598C0
	push {r4, r5, r6, r7, lr}
	sub sp, #0x184
	adds r5, r0, #0
	ldr r0, [r5, #0xc]
	adds r4, r1, #0
	bl FUN_0203277C
	adds r2, r0, #0
	cmp r4, #0xa
	bne _022598FE
	add r0, sp, #4
	bl FUN_02259948
	adds r0, r5, #0
	add r1, sp, #4
	bl FUN_02259AAC
	adds r6, r0, #0
	adds r4, r6, #0
	adds r4, #0x5c
	adds r0, r4, #0
	ldr r1, _02259940 @ =0x02259D8C
	adds r0, #0x24
	bl FUN_0201585C
	adds r4, #0x2c
	ldr r1, _02259944 @ =0x02259D94
	adds r0, r4, #0
	bl FUN_0201585C
	b _0225990E
_022598FE:
	movs r1, #6
	lsls r1, r1, #6
	muls r1, r4, r1
	adds r0, r5, #0
	adds r1, r2, r1
	bl FUN_02259AAC
	adds r6, r0, #0
_0225990E:
	adds r0, r5, #0
	movs r1, #0
	adds r0, #0xa0
	str r1, [r0]
	adds r0, r6, #0
	bl FUN_020517E8
	adds r4, r0, #0
	adds r0, r6, #0
	bl FUN_020517FC
	adds r7, r0, #0
	adds r0, r5, #0
	movs r1, #0x18
	bl FUN_020402F0
	str r0, [sp]
	ldr r0, [r5, #0x10]
	adds r1, r6, #0
	adds r2, r4, #0
	adds r3, r7, #0
	bl FUN_02050AAC
	add sp, #0x184
	pop {r4, r5, r6, r7, pc}
	.align 2, 0
_02259940: .4byte 0x02259D8C
_02259944: .4byte 0x02259D94
	thumb_func_end MOD25_022598C0

	thumb_func_start FUN_02259948
FUN_02259948: @ 0x02259948
	push {r3, r4, r5, r6, r7, lr}
	adds r5, r0, #0
	movs r2, #6
	ldr r0, _02259A24 @ =0x02259D9C
	adds r1, r5, #0
	lsls r2, r2, #6
	blx FUN_020D47B8
	ldr r2, _02259A28 @ =0x000002D6
	movs r0, #1
	movs r1, #0x1b
	movs r3, #0xb
	bl FUN_0200BAF8
	adds r6, r0, #0
	bne _0225996C
	bl FUN_0202551C
_0225996C:
	cmp r6, #0
	beq _022599C4
	adds r0, r6, #0
	movs r1, #3
	bl FUN_0200BBA0
	adds r4, r0, #0
	adds r0, r6, #0
	bl FUN_0200BB44
	cmp r4, #0
	bne _02259988
	bl FUN_0202551C
_02259988:
	cmp r4, #0
	beq _022599C4
	adds r0, r4, #0
	bl FUN_02026800
	adds r6, r0, #0
	cmp r6, #7
	bls _0225999C
	bl FUN_0202551C
_0225999C:
	cmp r6, #7
	bls _022599A2
	movs r6, #7
_022599A2:
	adds r1, r5, #0
	ldr r0, _02259A2C @ =0x0000FFFF
	adds r1, #8
	movs r2, #0x10
	blx FUN_020D4790
	adds r0, r4, #0
	bl FUN_02026AA4
	adds r1, r5, #0
	adds r1, #8
	lsls r2, r6, #1
	blx FUN_020D47B8
	adds r0, r4, #0
	bl FUN_02026380
_022599C4:
	movs r7, #0
	adds r5, #0x30
_022599C8:
	ldrh r0, [r5]
	lsls r0, r0, #0x15
	lsrs r0, r0, #0x15
	beq _02259A1A
	movs r1, #0xb
	bl FUN_0200BCDC
	adds r4, r0, #0
	bne _022599DE
	bl FUN_0202551C
_022599DE:
	cmp r4, #0
	beq _02259A1A
	adds r0, r4, #0
	bl FUN_02026800
	adds r6, r0, #0
	cmp r6, #0xa
	bls _022599F2
	bl FUN_0202551C
_022599F2:
	cmp r6, #0xa
	bls _022599F8
	movs r6, #0xa
_022599F8:
	adds r1, r5, #0
	ldr r0, _02259A2C @ =0x0000FFFF
	adds r1, #0x24
	movs r2, #0x14
	blx FUN_020D4790
	adds r0, r4, #0
	bl FUN_02026AA4
	adds r1, r5, #0
	adds r1, #0x24
	lsls r2, r6, #1
	blx FUN_020D47B8
	adds r0, r4, #0
	bl FUN_02026380
_02259A1A:
	adds r7, r7, #1
	adds r5, #0x38
	cmp r7, #6
	blt _022599C8
	pop {r3, r4, r5, r6, r7, pc}
	.align 2, 0
_02259A24: .4byte 0x02259D9C
_02259A28: .4byte 0x000002D6
_02259A2C: .4byte 0x0000FFFF
	thumb_func_end FUN_02259948
_02259A30:
	.byte 0x38, 0xB5, 0x86, 0xB0, 0x05, 0x1C, 0xE6, 0xF5, 0xF9, 0xF9, 0x01, 0x1C, 0x28, 0x1C, 0x80, 0x30
	.byte 0x00, 0x68, 0xE6, 0xF5, 0xB3, 0xFC, 0x04, 0x1C, 0x28, 0x1C, 0x80, 0x30, 0x00, 0x68, 0xC0, 0x68
	.byte 0xD8, 0xF5, 0x94, 0xFE, 0x0A, 0x2C, 0x09, 0xD1, 0x12, 0x49, 0x02, 0xA8, 0xBB, 0xF5, 0xFE, 0xFE
	.byte 0x02, 0xA8, 0x04, 0xA9, 0x08, 0x22, 0x7A, 0xF6, 0xA8, 0xEE, 0x08, 0xE0, 0x06, 0x21, 0x89, 0x01
	.byte 0x61, 0x43, 0x40, 0x18, 0x18, 0x30, 0x04, 0xA9, 0x08, 0x22, 0x7A, 0xF6, 0x9E, 0xEE, 0x02, 0xAB
	.byte 0x0E, 0x20, 0x18, 0x5E, 0x00, 0x90, 0x01, 0x20, 0x01, 0x90, 0x19, 0x89, 0x5A, 0x89, 0x9B, 0x89
	.byte 0x28, 0x1C, 0x95, 0xF7, 0x67, 0xFD, 0x04, 0x49, 0x28, 0x1C, 0xE6, 0xF5, 0x5D, 0xF9, 0x01, 0x20
	.byte 0x06, 0xB0, 0x38, 0xBD, 0x84, 0x9D, 0x25, 0x02, 0x49, 0xF3, 0x1E, 0x02

	thumb_func_start FUN_02259AAC
FUN_02259AAC: @ 0x02259AAC
	push {r4, r5, r6, r7, lr}
	sub sp, #0x14
	str r1, [sp, #8]
	adds r4, r0, #0
	ldr r1, _02259B8C @ =0x00002081
	movs r0, #0xb
	bl FUN_020518D8
	ldr r5, [r4, #0xc]
	adds r6, r0, #0
	adds r0, r5, #0
	bl FUN_02074904
	str r0, [sp, #0xc]
	adds r0, r4, #0
	adds r0, #0x94
	ldr r0, [r0]
	adds r1, r4, #0
	str r0, [sp]
	adds r0, r4, #0
	adds r0, #0xb0
	ldr r0, [r0]
	adds r2, r5, #0
	str r0, [sp, #4]
	ldr r3, [r4, #0x20]
	adds r0, r6, #0
	ldr r3, [r3]
	bl FUN_02051D18
	movs r0, #0x53
	movs r1, #6
	lsls r0, r0, #2
	str r1, [r6, r0]
	movs r1, #9
	adds r0, r0, #4
	str r1, [r6, r0]
	movs r0, #0xb
	bl FUN_0206DD2C
	adds r5, r0, #0
	ldr r0, [sp, #0xc]
	bl FUN_02074640
	adds r7, r0, #0
	ldr r0, [r6, #4]
	movs r1, #6
	bl FUN_020744DC
	movs r4, #0
	cmp r7, #0
	ble _02259B60
_02259B12:
	ldr r0, [sp, #0xc]
	adds r1, r4, #0
	bl FUN_02074644
	adds r1, r5, #0
	bl FUN_0207188C
	adds r0, r5, #0
	movs r1, #0xa1
	movs r2, #0
	bl FUN_0206E540
	cmp r0, #0x32
	bls _02259B50
	adds r0, r5, #0
	movs r1, #5
	movs r2, #0
	bl FUN_0206E540
	movs r1, #0x32
	bl FUN_0206FD00
	str r0, [sp, #0x10]
	adds r0, r5, #0
	movs r1, #8
	add r2, sp, #0x10
	bl FUN_0206EC40
	adds r0, r5, #0
	bl FUN_0206E250
_02259B50:
	adds r0, r6, #0
	adds r1, r5, #0
	movs r2, #0
	bl FUN_02051C9C
	adds r4, r4, #1
	cmp r4, r7
	blt _02259B12
_02259B60:
	adds r0, r5, #0
	bl FUN_0201AB0C
	adds r0, r6, #0
	bl FUN_02052580
	ldr r1, [sp, #8]
	adds r0, r6, #0
	movs r2, #1
	bl FUN_02259D14
	movs r2, #0
	adds r1, r6, #0
	movs r0, #7
_02259B7C:
	adds r2, r2, #1
	str r0, [r1, #0x34]
	adds r1, #0x34
	cmp r2, #4
	blt _02259B7C
	adds r0, r6, #0
	add sp, #0x14
	pop {r4, r5, r6, r7, pc}
	.align 2, 0
_02259B8C: .4byte 0x00002081
	thumb_func_end FUN_02259AAC

	thumb_func_start FUN_02259B90
FUN_02259B90: @ 0x02259B90
	push {r3, r4, r5, r6, r7, lr}
	sub sp, #0x28
	adds r4, r1, #0
	adds r6, r0, #0
	adds r0, r4, #0
	bl FUN_0206DCE4
	adds r0, r6, #0
	adds r0, #0x22
	ldrb r0, [r0]
	cmp r0, #0x32
	bls _02259BAA
	movs r0, #0x32
_02259BAA:
	add r2, sp, #8
	strb r0, [r2, #1]
	ldr r0, [r6, #0x10]
	ldr r3, _02259CC0 @ =0x3FFFFFFF
	str r0, [sp]
	ldrh r1, [r6]
	ldr r5, [r6, #0x14]
	ldrb r2, [r2, #1]
	lsls r1, r1, #0x15
	adds r0, r4, #0
	lsrs r1, r1, #0x15
	ands r3, r5
	bl FUN_0206E21C
	ldrh r0, [r6]
	add r2, sp, #8
	adds r2, #1
	lsls r0, r0, #0x10
	lsrs r1, r0, #0x1b
	add r0, sp, #8
	strb r1, [r0, #1]
	adds r0, r4, #0
	movs r1, #0x70
	bl FUN_0206EC40
	adds r0, r4, #0
	movs r1, #6
	adds r2, r6, #2
	bl FUN_0206EC40
	movs r5, #0
	str r6, [sp, #4]
	adds r7, r5, #0
_02259BEC:
	ldr r0, [sp, #4]
	add r2, sp, #8
	ldrh r1, [r0, #4]
	add r0, sp, #8
	adds r2, #2
	strh r1, [r0, #2]
	adds r1, r5, #0
	adds r0, r4, #0
	adds r1, #0x36
	bl FUN_0206EC40
	ldrb r0, [r6, #0x1e]
	add r2, sp, #8
	adds r2, #1
	adds r1, r0, #0
	asrs r1, r7
	movs r0, #3
	ands r1, r0
	add r0, sp, #8
	strb r1, [r0, #1]
	adds r1, r5, #0
	adds r0, r4, #0
	adds r1, #0x3e
	bl FUN_0206EC40
	adds r1, r5, #0
	adds r0, r4, #0
	adds r1, #0x42
	movs r2, #0
	bl FUN_0206E540
	add r1, sp, #8
	strb r0, [r1]
	adds r1, r5, #0
	adds r0, r4, #0
	adds r1, #0x3a
	add r2, sp, #8
	bl FUN_0206EC40
	ldr r0, [sp, #4]
	adds r5, r5, #1
	adds r0, r0, #2
	adds r7, r7, #2
	str r0, [sp, #4]
	cmp r5, #4
	blt _02259BEC
	ldr r0, [r6, #0xc]
	movs r1, #7
	str r0, [sp, #0xc]
	adds r0, r4, #0
	add r2, sp, #0xc
	bl FUN_0206EC40
	movs r5, #0
	add r7, sp, #8
_02259C5A:
	adds r0, r6, r5
	ldrb r0, [r0, #0x18]
	adds r1, r5, #0
	add r2, sp, #8
	strb r0, [r7, #1]
	adds r0, r4, #0
	adds r1, #0xd
	adds r2, #1
	bl FUN_0206EC40
	adds r5, r5, #1
	cmp r5, #6
	blt _02259C5A
	adds r2, r6, #0
	adds r0, r4, #0
	movs r1, #0xa
	adds r2, #0x20
	bl FUN_0206EC40
	adds r2, r6, #0
	adds r0, r4, #0
	movs r1, #9
	adds r2, #0x21
	bl FUN_0206EC40
	add r0, sp, #0x10
	movs r1, #0xb
	bl FUN_0200210C
	adds r1, r6, #0
	add r0, sp, #0x10
	adds r1, #0x24
	movs r2, #0xa
	bl FUN_02002048
	adds r0, r4, #0
	movs r1, #0x75
	add r2, sp, #0x10
	bl FUN_0206EC40
	adds r6, #0x1f
	adds r0, r4, #0
	movs r1, #0xc
	adds r2, r6, #0
	bl FUN_0206EC40
	adds r0, r4, #0
	bl FUN_0206E250
	add sp, #0x28
	pop {r3, r4, r5, r6, r7, pc}
	.align 2, 0
_02259CC0: .4byte 0x3FFFFFFF
	thumb_func_end FUN_02259B90

	thumb_func_start FUN_02259CC4
FUN_02259CC4: @ 0x02259CC4
	push {r3, r4, r5, lr}
	adds r4, r1, #0
	adds r5, r0, #0
	adds r0, r4, #0
	movs r1, #0
	movs r2, #0x34
	blx FUN_020D4994
	ldrb r0, [r5, #7]
	ldrb r1, [r5, #4]
	movs r2, #1
	bl FUN_0205B46C
	strb r0, [r4, #1]
	movs r0, #0
	strb r0, [r4, #2]
	subs r0, r0, #1
	str r0, [r4, #0xc]
	adds r0, r4, #0
	adds r1, r5, #0
	adds r0, #0x14
	adds r1, #8
	bl FUN_02002028
	adds r0, r4, #0
	adds r1, r5, #0
	adds r0, #0x24
	adds r1, #0x20
	bl FUN_02015A24
	adds r0, r4, #0
	adds r5, #0x28
	adds r0, #0x2c
	adds r1, r5, #0
	bl FUN_02015A24
	movs r0, #0
	str r0, [r4, #0x10]
	pop {r3, r4, r5, pc}
	.align 2, 0
	thumb_func_end FUN_02259CC4

	thumb_func_start FUN_02259D14
FUN_02259D14: @ 0x02259D14
	push {r3, r4, r5, r6, r7, lr}
	sub sp, #8
	str r0, [sp]
	str r2, [sp, #4]
	adds r5, r1, #0
	ldr r3, [sp]
	ldr r1, [sp, #4]
	movs r2, #0x34
	adds r3, #0x28
	muls r2, r1, r2
	adds r0, r5, #0
	adds r1, r3, r2
	bl FUN_02259CC4
	ldr r0, [sp, #4]
	ldr r1, [r5]
	lsls r4, r0, #2
	ldr r0, [sp]
	adds r0, r0, r4
	str r1, [r0, #0x18]
	movs r0, #0xb
	bl FUN_0206DD2C
	adds r6, r0, #0
	ldr r0, [sp]
	movs r1, #6
	adds r0, r0, r4
	ldr r0, [r0, #4]
	bl FUN_020744DC
	adds r5, #0x30
	movs r7, #0
	adds r4, r5, #0
_02259D56:
	ldrh r0, [r5]
	lsls r0, r0, #0x15
	lsrs r0, r0, #0x15
	beq _02259D7A
	adds r0, r4, #0
	adds r1, r6, #0
	bl FUN_02259B90
	ldr r0, [sp]
	ldr r2, [sp, #4]
	adds r1, r6, #0
	bl FUN_02051C9C
	adds r7, r7, #1
	adds r5, #0x38
	adds r4, #0x38
	cmp r7, #6
	blt _02259D56
_02259D7A:
	adds r0, r6, #0
	bl FUN_0201AB0C
	add sp, #8
	pop {r3, r4, r5, r6, r7, pc}
	thumb_func_end FUN_02259D14