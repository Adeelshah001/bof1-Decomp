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

s32 sub_08001770(s32);                              /* extern */

s32 sub_08067CD4(s32 arg0, s32 arg1, s32 arg2) {
    u16 sp0;
    s32 var_r3;
    s32 var_r3_2;
    s32 var_r4;
    s32 var_r5;
    u16 *var_r0;
    u16 *var_r1;
    u16 *var_r1_2;
    u16 *var_r2;
    u16 *var_r2_2;

    var_r4 = arg1;
    if ((var_r4 == 2) && ((sub_08001770(0x1D) << 0x18) != 0)) {
        var_r4 = 0xB;
    }
    if (*(u8 *)0x0300169C != 0) {
        var_r0 = (u16 *)0x081505A8;
    } else {
        var_r0 = (var_r4 << 5) + 0x081505A8;
    }
    if (arg2 != 0) {
        var_r5 = arg0 << 5;
        var_r1 = var_r0;
        var_r2 = &sp0;
        var_r3 = 0xF;
        do {
            *var_r2 = ((u16) *var_r1 >> 1) & 0x3DEF;
            var_r1 += 2;
            var_r2 += 2;
            var_r3 -= 1;
        } while (var_r3 >= 0);
    } else {
        var_r5 = arg0 << 5;
        var_r1_2 = var_r0;
        var_r2_2 = &sp0;
        var_r3_2 = 0xF;
        do {
            *var_r2_2 = *var_r1_2;
            var_r1_2 += 2;
            var_r2_2 += 2;
            var_r3_2 -= 1;
        } while (var_r3_2 >= 0);
    }
    M2C_FIELD((void *)0x040000D4, u16 **, 0) = &sp0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) (var_r5 + 0x05000300);
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x84000008;
    return M2C_FIELD((void *)0x040000D4, s32 *, 8);
}
