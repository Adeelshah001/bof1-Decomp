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

void sub_0806BA58(s32 arg0, s32 arg1, s32 arg2) {
    s16 *var_r1;
    s16 *var_r1_2;
    s16 *var_r1_3;
    s16 *var_r1_4;
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r9;
    s32 var_r2;
    s32 var_r4;
    u16 *var_r3;
    u16 *var_r3_2;
    u16 *var_r3_3;
    u16 *var_r4_2;
    u16 temp_r0_2;
    u16 temp_r0_3;
    u16 temp_r0_4;
    u16 var_r2_2;

    var_r4 = arg2;
    if (arg2 < (s32) (arg2 + 4)) {
        temp_r9 = sub_080A0844(arg1, 6);
        do {
            var_r2 = temp_r9 - sub_080A0844(var_r4, 6);
            if (var_r2 < 0) {
                var_r2 += 6;
            }
            M2C_FIELD((void *)0x040000D4, s32 *, 0) = (s32) ((var_r2 * 2) + 0x08150C78);
            M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) (M2C_FIELD((void *)0x08150C68, s32 *, 8) + (M2C_FIELD((void *)0x08150C68, s32 *, 0xC) * var_r4 * 2) + (arg1 * 2));
            M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
            sub_080739D0(1);
            var_r4 += 1;
        } while (var_r4 < (s32) (arg2 + 4));
    }
    temp_r5 = arg2 + 1;
    temp_r3 = arg0 << 0xC;
    var_r4_2 = (u16 *)0x08150D18;
    temp_r0 = arg1 * 2;
    var_r1 = M2C_FIELD((void *)0x08150C68, s32 *, 0) + (M2C_FIELD((void *)0x08150C68, s32 *, 4) * arg2 * 2) + temp_r0;
    var_r2_2 = *(u16 *)0x08150D18;
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
    var_r3 = (u16 *)0x08150D3A;
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
    var_r3_2 = (u16 *)0x08150D3A;
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
    var_r3_3 = (u16 *)0x08150D5C;
    var_r1_4 = M2C_FIELD((void *)0x08150C68, s32 *, 0) + ((temp_r5_2 + 1) * M2C_FIELD((void *)0x08150C68, s32 *, 4) * 2) + temp_r0;
loop_15:
    temp_r0_4 = *var_r3_3;
    if (temp_r0_4 != 0) {
        *var_r1_4 = temp_r0_4 + ((0x40 | temp_r3) + 0x8000);
        var_r3_3 += 2;
        var_r1_4 += 2;
        goto loop_15;
    }
    sub_080739D0(0);
}
