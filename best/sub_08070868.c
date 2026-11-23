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
s32 sub_080A07AC(s32, s32);                         /* extern */
s32 sub_080A0844(s32, s32);                         /* extern */

void sub_08070868(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg4, s32 arg5) {
    u16 sp0;
    s16 sp4;
    u16 sp8;
    s16 *var_r1;
    s16 *var_r1_2;
    s16 *var_r1_3;
    s32 temp_r5;
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;
    s32 var_r6_2;
    u16 *var_r2;
    u16 *var_r2_3;
    u16 *var_r4_2;
    u16 temp_r0;
    u16 var_r0;
    u8 *var_r2_2;

    var_r6 = arg0;
    if (arg3 >= 0) {
        M2C_FIELD(&sp0, u16 *, 0) = arg3 + 0x56;
        M2C_FIELD(&sp0, s16 *, 2) = 0;
        var_r2 = &sp0;
        var_r1 = M2C_FIELD((void *)0x08150C68, s32 *, 0) + (arg1 * M2C_FIELD((void *)0x08150C68, s32 *, 4) * 2) + (var_r6 * 2);
        var_r0 = M2C_FIELD(var_r2, u16 *, 0);
        if (var_r0 != 0) {
            do {
                *var_r1 = var_r0 + 0xB000;
                var_r2 += 2;
                var_r1 += 2;
                var_r0 = *var_r2;
            } while (var_r0 != 0);
        }
        sub_080739D0(0);
        var_r6 += 1;
    }
    var_r2_2 = arg4;
    temp_r5 = ((((s32) ((0 - arg2) | arg2) >> 0x1F) & 2) + 8) << 0xC;
    var_r4 = 0;
    if (*var_r2_2 != 0) {
        var_r1_2 = &sp4;
loop_6:
        if ((u32) *var_r2_2 <= 0x1FU) {
            *var_r1_2 = temp_r5 | 0x840;
        } else {
            *var_r1_2 = (*var_r2_2 + 0x5E) | temp_r5;
        }
        var_r2_2 += 1;
        var_r1_2 += 2;
        var_r4 += 1;
        if ((var_r4 < 8) && (*var_r2_2 != 0)) {
            goto loop_6;
        }
    }
    if (var_r4 != 0) {
        M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp4;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) (M2C_FIELD((void *)0x08150C68, s32 *, 0) + (arg1 * M2C_FIELD((void *)0x08150C68, s32 *, 4) * 2) + (var_r6 * 2));
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = (s32) (((s32) (var_r4 * 2) >> 1) | 0x80000000);
        sub_080739D0(0);
    }
    if (arg5 != 0) {
        var_r5 = arg5;
        var_r6_2 = 4;
        var_r4_2 = &sp8;
        *var_r4_2 = 0;
loop_15:
        var_r6_2 -= 1;
        if (var_r6_2 != -1) {
            var_r4_2 -= 2;
            *var_r4_2 = sub_080A0844(var_r5, 0xA) + 0x7E;
            var_r5 = sub_080A07AC(var_r5, 0xA);
            if (var_r5 != 0) {
                goto loop_15;
            }
        }
        if (var_r6_2 != 0) {
            do {
                var_r4_2 -= 2;
                *var_r4_2 = 0x840;
                var_r6_2 -= 1;
            } while (var_r6_2 != 0);
        }
        var_r2_3 = var_r4_2;
        var_r1_3 = M2C_FIELD((void *)0x08150C68, s32 *, 0) + (M2C_FIELD((void *)0x08150C68, s32 *, 4) * 0xC * 2) + 0x32;
loop_22:
        temp_r0 = *var_r2_3;
        if (temp_r0 != 0) {
            *var_r1_3 = temp_r0 + 0x8000;
            var_r2_3 += 2;
            var_r1_3 += 2;
            goto loop_22;
        }
        sub_080739D0(0);
    }
}
