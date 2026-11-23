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

void sub_08070150(void) {
    s16 sp0;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r2;
    s32 var_r2_2;

    temp_r1 = M2C_FIELD((void *)0x08150C68, s32 *, 4);
    var_r2 = (temp_r1 * 0xE) + M2C_FIELD((void *)0x08150C68, s32 *, 0);
    var_r1 = 9;
    do {
        sp0 = 0x8040;
        M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp0;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = var_r2;
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x8100001E;
        var_r2 += temp_r1 * 2;
        var_r1 -= 1;
    } while (var_r1 >= 0);
    sub_080739D0(0);
    temp_r1_2 = M2C_FIELD((void *)0x08150C68, s32 *, 0xC);
    var_r2_2 = (temp_r1_2 * 0xE) + M2C_FIELD((void *)0x08150C68, s32 *, 8);
    var_r1_2 = 7;
    do {
        sp0 = 0x8040;
        M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp0;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = var_r2_2;
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x8100001E;
        var_r2_2 += temp_r1_2 * 2;
        var_r1_2 -= 1;
    } while (var_r1_2 >= 0);
    sub_080739D0(1);
}
