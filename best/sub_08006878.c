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
M2C_UNK sub_0800421C(s32, s16, s16);                /* extern */
M2C_UNK sub_080067CC();                             /* extern */

void sub_08006878(void) {
    s32 temp_r0;
    u32 var_r2;

    var_r2 = 1;
    if (M2C_FIELD((void *)0x03002AB0, u16 *, 2) == 0xB88) {
        temp_r0 = M2C_FIELD((void *)0x03002AB0, u16 *, 6) ^ 0x82C;
        var_r2 = (u32) ((0 - temp_r0) | temp_r0) >> 0x1F;
    }
    if ((var_r2 != 0) || ((sub_08001770(0x2A) << 0x18) != 0) || (M2C_FIELD((void *)0x03002AB0, u8 *, 0x4C) == 0)) {
        sub_080067CC();
        return;
    }
    *(s16 *)0x03004120 = 1;
    *(s16 *)0x030040F8 = 0x708;
    *(s16 *)0x03004138 = 0x276C;
    *(s16 *)0x0300413C = 0x18;
    sub_0800421C(0x18, *(s16 *)0x030040F8, *(s16 *)0x03004138);
}
