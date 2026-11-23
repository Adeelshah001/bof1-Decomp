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

M2C_UNK sub_0803CAF0(u8, u16, u16);                 /* extern */

void sub_0803D510(void) {
    u8 var_r4;

    var_r4 = 0;
    do {
        sub_0803CAF0(var_r4, *(u16 *)0x03004E18, *(u16 *)0x03004E08);
        var_r4 += 1;
    } while ((u32) var_r4 <= 0xFU);
    *(s8 *)0x03000978 = 0;
    *(s8 *)0x030043DC = 1;
}
