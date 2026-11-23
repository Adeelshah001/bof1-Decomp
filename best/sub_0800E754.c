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

M2C_UNK sub_080017EC(s32);                          /* extern */
M2C_UNK sub_0803ADA8(s32);                          /* extern */

void sub_0800E754(void) {
    sub_080017EC(0x4C);
    sub_0803ADA8(0x1C);
    *(s8 *)0x0300485D = 1;
    *(u8 *)0x03002B68 |= 4;
}
