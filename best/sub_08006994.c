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

M2C_UNK sub_08005218(s32, s32, s32);                /* extern */
M2C_UNK sub_0803ADA8(s32);                          /* extern */

void sub_08006994(void) {
    s16 var_r0;
    s32 temp_r0;
    u32 var_r3;

    var_r3 = 1;
    if (M2C_FIELD((void *)0x03002AB0, u16 *, 2) == 0x9D8) {
        temp_r0 = M2C_FIELD((void *)0x03002AB0, u16 *, 6) ^ 0x526C;
        var_r3 = (u32) ((0 - temp_r0) | temp_r0) >> 0x1F;
    }
    if (var_r3 != 0) {
        var_r0 = 0;
    } else {
        *(s8 *)0x0300485A = 5;
        *(s8 *)0x0300485B = 6;
        M2C_FIELD((void *)0x03002AB0, u8 *, 0xB8) = (u8) (4 | M2C_FIELD((void *)0x03002AB0, u8 *, 0xB8));
        sub_0803ADA8(6);
        if (*(u16 *)0x0202DE60 == 0x1C) {
            *(u16 *)0x0202DE60 = 0x4F;
            M2C_FIELD((void *)0x0202DBD0, s16 *, 0x16) = 0x178;
            M2C_FIELD((void *)0x0202DBD0, s16 *, 0x1A) = 0x337C;
            M2C_FIELD((void *)0x0202DBD0, s8 *, 0x2B9) = 0;
        }
        sub_08005218(0, 0xB58, 0x7DC);
        var_r0 = 1;
    }
    *(s16 *)0x03004114 = var_r0;
}
