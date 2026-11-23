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

s32 sub_0806BDE0(s32 arg0, s32 arg1, s32 arg2, u8 *arg3, s32 arg4) {
    s16 sp0;
    s16 *var_r2;
    s32 temp_r6;
    s32 var_r5;
    s32 var_r7;
    u8 *var_r3;
    u8 var_r1;

    var_r3 = arg3;
    var_r5 = arg4;
    if ((u32) (var_r5 - 1) > 0x3FU) {
        var_r5 = 0x40;
    }
    temp_r6 = (arg0 + 8) << 0xC;
    var_r7 = 0;
    if (var_r5 > 0) {
        var_r1 = *var_r3;
        if (var_r1 != 0) {
            var_r2 = &sp0;
loop_5:
            if ((u32) var_r1 <= 0x1FU) {
                *var_r2 = temp_r6 | 0x840;
            } else {
                *var_r2 = (*var_r3 + 0x5E) | temp_r6;
            }
            var_r3 += 1;
            var_r2 += 2;
            var_r7 += 1;
            if (var_r7 < var_r5) {
                var_r1 = *var_r3;
                if (var_r1 != 0) {
                    goto loop_5;
                }
            }
        }
    }
    if (var_r7 != 0) {
        M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp0;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) (M2C_FIELD((void *)0x08150C68, s32 *, 0) + (arg2 * M2C_FIELD((void *)0x08150C68, s32 *, 4) * 2) + (arg1 * 2));
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = (s32) (((s32) (var_r7 * 2) >> 1) | 0x80000000);
        sub_080739D0(0);
    }
    return var_r7;
}
