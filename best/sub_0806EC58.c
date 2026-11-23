/* machine draft (m2c) for agbcc -O2 -mthumb-interwork, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK sub_0805B568(s32, M2C_UNK, s32, s32, s32);  /* extern */

void sub_0806EC58(s32 arg0, M2C_UNK arg1, u32 arg2, s32 arg3) {
    s32 temp_r2;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_6;
    s32 var_r1;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r4_3;
    s32 var_r5;
    s32 var_r6;
    s32 var_r7_2;
    u16 *var_r0_5;
    u32 temp_r0;
    u32 var_r0;
    u32 var_r7;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    var_r7 = arg2;
    var_r6 = arg3;
    if (var_r7 > 0x40U) {
        goto block_2;
    }
    if (var_r6 <= 0x40) {
        goto block_3;
    }
block_2:
    var_r6 = 0;
    var_r7 = 0;
block_3:
    var_r0 = var_r7;
    if ((s32) var_r7 >= 0) {
        goto block_5;
    }
    var_r0 = var_r7 + 7;
block_5:
    var_r7_2 = ((s32) var_r0 >> 3) * 8;
    if (var_r7_2 > 7) {
        goto block_7;
    }
    var_r7_2 = 8;
block_7:
    sub_0805B568(arg0, arg1, 0xE, 0, (s32) M2C_FIELD((void *)0x08150F1C, u16 *, 0x12));
    temp_r5 = arg0 + 8;
    sub_0805B568(temp_r5, arg1, 0xE, 0, (s32) M2C_FIELD((void *)0x08150F1C, u16 *, 0x14));
    var_r5 = temp_r5 + 8;
    if (var_r6 >= 0) {
        goto block_19;
    }
    var_r0_2 = var_r7_2;
    if (var_r7_2 >= 0) {
        goto block_10;
    }
    var_r0_2 = var_r7_2 + 7;
block_10:
    temp_r0 = (var_r0_2 >> 3) - 2;
    temp_r6 = (s32) (temp_r0 + (temp_r0 >> 0x1F)) >> 1;
    if (temp_r6 <= 0) {
        goto block_13;
    }
    var_r4 = temp_r6;
loop_12:
    sub_0805B568(var_r5, arg1, 0xE, 0, (s32) M2C_FIELD((void *)0x08150F1C, u16 *, 0));
    var_r5 += 8;
    var_r4 -= 1;
    if (var_r4 != 0) {
        goto loop_12;
    }
block_13:
    sub_0805B568(var_r5, arg1, 0xE, 0, (s32) M2C_FIELD((void *)0x08150F1C, u16 *, 0x16));
    temp_r5_2 = var_r5 + 8;
    sub_0805B568(temp_r5_2, arg1, 0xE, 0, (s32) M2C_FIELD((void *)0x08150F1C, u16 *, 0x18));
    var_r5 = temp_r5_2 + 8;
    var_r1 = var_r7_2;
    if (var_r7_2 >= 0) {
        goto block_15;
    }
    var_r1 = var_r7_2 + 7;
block_15:
    temp_r6_2 = (var_r1 >> 3) - (temp_r6 + 2);
    if (temp_r6_2 <= 0) {
        goto block_33;
    }
    var_r4_2 = temp_r6_2;
loop_17:
    sub_0805B568(var_r5, arg1, 0xE, 0, (s32) M2C_FIELD((void *)0x08150F1C, u16 *, 0));
    var_r5 += 8;
    var_r4_2 -= 1;
    if (var_r4_2 != 0) {
        goto loop_17;
    }
    goto block_33;
block_19:
    var_r4_3 = 0;
    goto loop_21;
block_20:
    sub_0805B568(var_r5, arg1, 0xE, 0, (s32) M2C_FIELD((void *)0x08150F1C, u16 *, 0x10));
    var_r5 += 8;
    var_r4_3 += 1;
loop_21:
    var_r0_3 = var_r6;
    if (var_r6 >= 0) {
        goto block_23;
    }
    var_r0_3 = var_r6 + 7;
block_23:
    temp_r2 = var_r0_3 >> 3;
    if (var_r4_3 < temp_r2) {
        goto block_20;
    }
    var_r0_4 = var_r7_2;
    if (var_r7_2 >= 0) {
        goto block_26;
    }
    var_r0_4 = var_r7_2 + 7;
block_26:
    if (var_r4_3 >= (s32) (var_r0_4 >> 3)) {
        goto block_30;
    }
    var_r0_5 = ((var_r6 - (temp_r2 * 8)) * 2) + 0x08150F1C;
    goto block_29;
block_28:
    var_r0_5 = (u16 *)0x08150F1C;
block_29:
    sub_0805B568(var_r5, arg1, 0xE, 0, (s32) *var_r0_5);
    var_r5 += 8;
    var_r4_3 += 1;
block_30:
    var_r0_6 = var_r7_2;
    if (var_r0_6 >= 0) {
        goto block_32;
    }
    var_r0_6 += 7;
block_32:
    if (var_r4_3 < (s32) (var_r0_6 >> 3)) {
        goto block_28;
    }
block_33:
    sub_0805B568(var_r5, arg1, 0xE, 0, (s32) M2C_FIELD((void *)0x08150F1C, u16 *, 0x1A));
    return;
}
