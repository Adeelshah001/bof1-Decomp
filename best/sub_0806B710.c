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

M2C_UNK sub_080739D0(s32);                          /* extern */
s32 sub_080A0844(s32, s32);                         /* extern */

void sub_0806B710(s32 arg0, s32 arg1, s32 arg2) {
    s16 *var_r1;
    s16 *var_r1_10;
    s16 *var_r1_11;
    s16 *var_r1_2;
    s16 *var_r1_3;
    s16 *var_r1_4;
    s16 *var_r1_5;
    s16 *var_r1_6;
    s16 *var_r1_7;
    s16 *var_r1_8;
    s16 *var_r1_9;
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r5_4;
    s32 temp_r5_5;
    s32 temp_r5_6;
    s32 temp_r5_7;
    s32 temp_r5_8;
    s32 temp_r5_9;
    s32 temp_r9;
    s32 var_r2;
    s32 var_r4;
    u16 *var_r3;
    u16 *var_r3_10;
    u16 *var_r3_2;
    u16 *var_r3_3;
    u16 *var_r3_4;
    u16 *var_r3_5;
    u16 *var_r3_6;
    u16 *var_r3_7;
    u16 *var_r3_8;
    u16 *var_r3_9;
    u16 *var_r4_2;
    u16 temp_r0_10;
    u16 temp_r0_11;
    u16 temp_r0_2;
    u16 temp_r0_3;
    u16 temp_r0_4;
    u16 temp_r0_5;
    u16 temp_r0_6;
    u16 temp_r0_7;
    u16 temp_r0_8;
    u16 temp_r0_9;
    u16 var_r2_2;

    var_r4 = arg2;
    if (arg2 < (s32) (arg2 + 9)) {
        temp_r9 = sub_080A0844(arg1, 6);
        do {
            var_r2 = temp_r9 - sub_080A0844(var_r4, 6);
            if (var_r2 < 0) {
                var_r2 += 6;
            }
            M2C_FIELD((void *)0x040000D4, s32 *, 0) = (s32) ((var_r2 * 2) + 0x08150C78);
            M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) (M2C_FIELD((void *)0x08150C68, s32 *, 8) + (M2C_FIELD((void *)0x08150C68, s32 *, 0xC) * var_r4 * 2) + (arg1 * 2));
            M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x8000000A;
            sub_080739D0(1);
            var_r4 += 1;
        } while (var_r4 < (s32) (arg2 + 9));
    }
    temp_r5 = arg2 + 1;
    temp_r3 = arg0 << 0xC;
    var_r4_2 = (u16 *)0x08150CC0;
    temp_r0 = arg1 * 2;
    var_r1 = M2C_FIELD((void *)0x08150C68, s32 *, 0) + (M2C_FIELD((void *)0x08150C68, s32 *, 4) * arg2 * 2) + temp_r0;
    var_r2_2 = *(u16 *)0x08150CC0;
    if (var_r2_2 != 0) {
        do {
            *var_r1 = var_r2_2 + ((0x40 | temp_r3) + 0x8000);
            var_r4_2 += 2;
            var_r1 += 2;
            var_r2_2 = *var_r4_2;
        } while (var_r2_2 != 0);
    }
    sub_080739D0(0);
    temp_r5_2 = temp_r5 + 1;
    var_r3 = (u16 *)0x08150CD6;
    var_r1_2 = M2C_FIELD((void *)0x08150C68, s32 *, 0) + (temp_r5 * M2C_FIELD((void *)0x08150C68, s32 *, 4) * 2) + temp_r0;
loop_9:
    temp_r0_2 = *var_r3;
    if (temp_r0_2 != 0) {
        *var_r1_2 = temp_r0_2 + ((0x40 | temp_r3) + 0x8000);
        var_r3 += 2;
        var_r1_2 += 2;
        goto loop_9;
    }
    sub_080739D0(0);
    temp_r5_3 = temp_r5_2 + 1;
    var_r3_2 = (u16 *)0x08150CEC;
    var_r1_3 = M2C_FIELD((void *)0x08150C68, s32 *, 0) + (temp_r5_2 * M2C_FIELD((void *)0x08150C68, s32 *, 4) * 2) + temp_r0;
loop_12:
    temp_r0_3 = *var_r3_2;
    if (temp_r0_3 != 0) {
        *var_r1_3 = temp_r0_3 + ((0x40 | temp_r3) + 0x8000);
        var_r3_2 += 2;
        var_r1_3 += 2;
        goto loop_12;
    }
    sub_080739D0(0);
    temp_r5_4 = temp_r5_3 + 1;
    var_r3_3 = (u16 *)0x08150CEC;
    var_r1_4 = M2C_FIELD((void *)0x08150C68, s32 *, 0) + (temp_r5_3 * M2C_FIELD((void *)0x08150C68, s32 *, 4) * 2) + temp_r0;
loop_15:
    temp_r0_4 = *var_r3_3;
    if (temp_r0_4 != 0) {
        *var_r1_4 = temp_r0_4 + ((0x40 | temp_r3) + 0x8000);
        var_r3_3 += 2;
        var_r1_4 += 2;
        goto loop_15;
    }
    sub_080739D0(0);
    temp_r5_5 = temp_r5_4 + 1;
    var_r3_4 = (u16 *)0x08150CEC;
    var_r1_5 = M2C_FIELD((void *)0x08150C68, s32 *, 0) + (temp_r5_4 * M2C_FIELD((void *)0x08150C68, s32 *, 4) * 2) + temp_r0;
loop_18:
    temp_r0_5 = *var_r3_4;
    if (temp_r0_5 != 0) {
        *var_r1_5 = temp_r0_5 + ((0x40 | temp_r3) + 0x8000);
        var_r3_4 += 2;
        var_r1_5 += 2;
        goto loop_18;
    }
    sub_080739D0(0);
    temp_r5_6 = temp_r5_5 + 1;
    var_r3_5 = (u16 *)0x08150CEC;
    var_r1_6 = M2C_FIELD((void *)0x08150C68, s32 *, 0) + (temp_r5_5 * M2C_FIELD((void *)0x08150C68, s32 *, 4) * 2) + temp_r0;
loop_21:
    temp_r0_6 = *var_r3_5;
    if (temp_r0_6 != 0) {
        *var_r1_6 = temp_r0_6 + ((0x40 | temp_r3) + 0x8000);
        var_r3_5 += 2;
        var_r1_6 += 2;
        goto loop_21;
    }
    sub_080739D0(0);
    temp_r5_7 = temp_r5_6 + 1;
    var_r3_6 = (u16 *)0x08150CEC;
    var_r1_7 = M2C_FIELD((void *)0x08150C68, s32 *, 0) + (temp_r5_6 * M2C_FIELD((void *)0x08150C68, s32 *, 4) * 2) + temp_r0;
loop_24:
    temp_r0_7 = *var_r3_6;
    if (temp_r0_7 != 0) {
        *var_r1_7 = temp_r0_7 + ((0x40 | temp_r3) + 0x8000);
        var_r3_6 += 2;
        var_r1_7 += 2;
        goto loop_24;
    }
    sub_080739D0(0);
    temp_r5_8 = temp_r5_7 + 1;
    var_r3_7 = (u16 *)0x08150CEC;
    var_r1_8 = M2C_FIELD((void *)0x08150C68, s32 *, 0) + (temp_r5_7 * M2C_FIELD((void *)0x08150C68, s32 *, 4) * 2) + temp_r0;
loop_27:
    temp_r0_8 = *var_r3_7;
    if (temp_r0_8 != 0) {
        *var_r1_8 = temp_r0_8 + ((0x40 | temp_r3) + 0x8000);
        var_r3_7 += 2;
        var_r1_8 += 2;
        goto loop_27;
    }
    sub_080739D0(0);
    temp_r5_9 = temp_r5_8 + 1;
    var_r3_8 = (u16 *)0x08150CEC;
    var_r1_9 = M2C_FIELD((void *)0x08150C68, s32 *, 0) + (temp_r5_8 * M2C_FIELD((void *)0x08150C68, s32 *, 4) * 2) + temp_r0;
loop_30:
    temp_r0_9 = *var_r3_8;
    if (temp_r0_9 != 0) {
        *var_r1_9 = temp_r0_9 + ((0x40 | temp_r3) + 0x8000);
        var_r3_8 += 2;
        var_r1_9 += 2;
        goto loop_30;
    }
    sub_080739D0(0);
    var_r3_9 = (u16 *)0x08150CEC;
    var_r1_10 = M2C_FIELD((void *)0x08150C68, s32 *, 0) + (temp_r5_9 * M2C_FIELD((void *)0x08150C68, s32 *, 4) * 2) + temp_r0;
loop_33:
    temp_r0_10 = *var_r3_9;
    if (temp_r0_10 != 0) {
        *var_r1_10 = temp_r0_10 + ((0x40 | temp_r3) + 0x8000);
        var_r3_9 += 2;
        var_r1_10 += 2;
        goto loop_33;
    }
    sub_080739D0(0);
    var_r3_10 = (u16 *)0x08150D02;
    var_r1_11 = M2C_FIELD((void *)0x08150C68, s32 *, 0) + ((temp_r5_9 + 1) * M2C_FIELD((void *)0x08150C68, s32 *, 4) * 2) + temp_r0;
loop_36:
    temp_r0_11 = *var_r3_10;
    if (temp_r0_11 != 0) {
        *var_r1_11 = temp_r0_11 + ((0x40 | temp_r3) + 0x8000);
        var_r3_10 += 2;
        var_r1_11 += 2;
        goto loop_36;
    }
    sub_080739D0(0);
}
