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

void sub_0806C1A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s16 sp0;
    s32 sp40;
    s32 sp44;
    s16 *sp48;
    s32 sp4C;
    s32 sp50;
    s32 sp54;
    s32 sp58;
    s16 *var_r2_2;
    s16 *var_r2_3;
    s16 *var_r2_4;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r1;
    s32 temp_r7;
    s32 var_r2;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r4_3;
    s32 var_r4_4;
    s32 var_r4_5;
    s32 var_r6;
    s32 var_r8;

    var_r8 = arg1;
    var_r6 = arg2;
    if (var_r6 > 0x1C) {
        var_r6 = 0x1C;
    }
    temp_r0 = arg0 - 1;
    temp_r0_2 = var_r8 - 1;
    temp_r7 = arg3 + 2;
    var_r4 = temp_r0_2;
    sp4C = temp_r0;
    sp50 = var_r4;
    sp54 = var_r6 + 2;
    sp48 = &sp0 + 2;
    sp58 = arg3 + arg4;
    if (var_r4 < (s32) (var_r4 + temp_r7)) {
        sp40 = sub_080A0844(sp4C, 6);
        sp44 = (s32) (sp54 * 2) >> 1;
        do {
            var_r2 = sp40 - sub_080A0844(var_r4, 6);
            if (var_r2 < 0) {
                var_r2 += 6;
            }
            M2C_FIELD((void *)0x040000D4, s16 **, 0) = (s16 *) ((var_r2 * 2) + 0x08150C78);
            M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) (M2C_FIELD((void *)0x08150C68, s32 *, 8) + (M2C_FIELD((void *)0x08150C68, s32 *, 0xC) * var_r4 * 2) + (temp_r0 * 2));
            M2C_FIELD((void *)0x040000D4, s32 *, 8) = (s32) (0x80000000 | sp44);
            sub_080739D0(1);
            var_r4 += 1;
        } while (var_r4 < (s32) (temp_r0_2 + temp_r7));
    }
    sp0 = 0x844C;
    var_r2_2 = sp48;
    if (var_r6 > 0) {
        var_r4_2 = var_r6;
        do {
            *var_r2_2 = 0x804D;
            var_r2_2 += 2;
            var_r4_2 -= 1;
        } while (var_r4_2 != 0);
    }
    *var_r2_2 = 0x804C;
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) (M2C_FIELD((void *)0x08150C68, s32 *, 0) + (M2C_FIELD((void *)0x08150C68, s32 *, 4) * sp50 * 2) + (sp4C * 2));
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = (s32) (((s32) (sp54 * 2) >> 1) | 0x80000000);
    sub_080739D0(0);
    sp0 = 0x804E;
    var_r2_3 = sp48;
    if (var_r6 > 0) {
        var_r4_3 = var_r6;
        do {
            *var_r2_3 = 0x8840;
            var_r2_3 += 2;
            var_r4_3 -= 1;
        } while (var_r4_3 != 0);
    }
    *var_r2_3 = 0x844E;
    if (sp58 > 0) {
        var_r4_4 = sp58;
        do {
            temp_r1 = var_r8;
            var_r8 += 1;
            M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp0;
            M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) (M2C_FIELD((void *)0x08150C68, s32 *, 0) + (M2C_FIELD((void *)0x08150C68, s32 *, 4) * temp_r1 * 2) + (sp4C * 2));
            M2C_FIELD((void *)0x040000D4, s32 *, 8) = (s32) (0x80000000 | ((s32) (sp54 * 2) >> 1));
            sub_080739D0(0);
            var_r4_4 -= 1;
        } while (var_r4_4 != 0);
    }
    sp0 = 0x8C4C;
    var_r2_4 = sp48;
    if (var_r6 > 0) {
        var_r4_5 = var_r6;
        do {
            *var_r2_4 = 0x884D;
            var_r2_4 += 2;
            var_r4_5 -= 1;
        } while (var_r4_5 != 0);
    }
    *var_r2_4 = 0x884C;
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) (M2C_FIELD((void *)0x08150C68, s32 *, 0) + (var_r8 * M2C_FIELD((void *)0x08150C68, s32 *, 4) * 2) + (sp4C * 2));
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = (s32) (((s32) (sp54 * 2) >> 1) | 0x80000000);
    sub_080739D0(0);
}
