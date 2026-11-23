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

void sub_0806BBDC(void) {
    s16 sp0;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r3;
    s32 var_r4;

    temp_r2 = M2C_FIELD((void *)0x08150C68, s32 *, 4);
    var_r1 = (0x16 * temp_r2) + M2C_FIELD((void *)0x08150C68, s32 *, 0);
    var_r4 = 3;
    do {
        sp0 = 0x8040;
        M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp0;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) (var_r1 + 2);
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x81000008;
        var_r1 += temp_r2 * 2;
        var_r4 -= 1;
    } while (var_r4 != 0);
    sub_080739D0(0);
    var_r3 = 0xB;
    if (0xB < 0xE) {
        temp_r2_2 = M2C_FIELD((void *)0x08150C68, s32 *, 0xC);
        var_r1_2 = (0x16 * temp_r2_2) + M2C_FIELD((void *)0x08150C68, s32 *, 8);
        do {
            sp0 = 0x8040;
            M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp0;
            M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) (var_r1_2 + 2);
            M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x81000008;
            var_r1_2 += temp_r2_2 * 2;
            var_r3 += 1;
        } while (var_r3 < 0xE);
    }
    sub_080739D0(1);
}
