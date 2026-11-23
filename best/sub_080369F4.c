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

u8 sub_0803601C(s32, u16, u16);                     /* extern */
s32 sub_08036384(u16, u16, s32);                    /* extern */
s32 sub_08036590(s32, u16, u16, s32);               /* extern */
M2C_UNK sub_080A0A68(M2C_UNK *, s32, s32);          /* extern */

u16 sub_080369F4(s32 arg0, u16 arg1, u16 arg2, s32 arg3) {
    M2C_UNK sp0;
    u16 temp_r4;
    u16 temp_r5;
    u8 temp_r5_2;
    u8 var_r4;

    temp_r5 = arg1;
    temp_r4 = arg2;
    if (((sub_08036384(temp_r5, temp_r4, 0) << 0x18) != 0) || ((sub_08036590(arg0, temp_r5, temp_r4, arg3) << 0x18) == 0)) {
        return *(u16 *)0x0300089C;
    }
    var_r4 = sub_0803601C(arg0, temp_r5, temp_r4);
    temp_r5_2 = var_r4;
    sub_080A0A68(&sp0, 0x080A64C0, 0x10);
    if (*(u16 *)0x03002480 == 2) {
        var_r4 = *(&sp0 + var_r4);
    }
    if (var_r4 == 0xFF) {
        var_r4 = temp_r5_2;
    }
    return (u16) var_r4;
}
