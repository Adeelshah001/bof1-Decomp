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

M2C_UNK sub_0803ADA8(s32);                          /* extern */
M2C_UNK sub_0804B2AC(s32, s32, s32);                /* extern */

void sub_0804B164(s32 arg0) {
    sub_0804B2AC(arg0, 0x5A0, 0xB4A0);
    sub_0804B2AC(arg0, 0x600, 0xB490);
    sub_0804B2AC(arg0, 0x600, 0xB4A0);
    sub_0804B2AC(arg0, 0x5F0, 0xB4B0);
    sub_0803ADA8(7);
}
