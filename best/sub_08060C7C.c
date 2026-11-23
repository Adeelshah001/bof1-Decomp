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

M2C_UNK sub_0805D5E4(s32, M2C_UNK *, s32);          /* extern */

s32 sub_08060C7C(void) {
    M2C_UNK sp0;
    s32 spC;
    s32 *temp_r1_2;
    s32 *var_r4;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 var_r5;
    u8 temp_r1;

    sub_0805D5E4(M2C_FIELD((void *)0x0202DBD0, s32 *, 0x20), &sp0, 6);
    var_r5 = 0;
    var_r4 = (s32 *)0x08100EC8;
    do {
        temp_r1 = *(&sp0 + var_r5);
        if (temp_r1 == 2) {
            temp_r2 = *var_r4;
            spC = 0;
            M2C_FIELD((void *)0x040000D4, s32 **, 0) = &spC;
            M2C_FIELD((void *)0x040000D4, s32 *, 4) = temp_r2;
            M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x85000008;
            spC = 0;
            M2C_FIELD((void *)0x040000D4, s32 **, 0) = &spC;
            M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) (temp_r2 + 0x400);
            M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x85000008;
        } else {
            temp_r1_2 = ((u32) ((temp_r1 - 0x20) << 0x18) >> 0x13) + 0x08231668;
            temp_r2_2 = *var_r4;
            M2C_FIELD((void *)0x040000D4, s32 **, 0) = temp_r1_2;
            M2C_FIELD((void *)0x040000D4, s32 *, 4) = temp_r2_2;
            M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
            M2C_FIELD((void *)0x040000D4, s32 **, 0) = (s32 *) (temp_r1_2 + 0x400);
            M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) (temp_r2_2 + 0x400);
            M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
        }
        var_r4 += 4;
        var_r5 += 1;
    } while (var_r5 <= 5);
    return M2C_FIELD((void *)0x040000D4, s32 *, 8);
}
