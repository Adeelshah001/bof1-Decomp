/* machine draft (m2c) for agbcc -O2, tried by autopilot */
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

M2C_UNK sub_0800312C(s32, s32);                     /* extern */
M2C_UNK sub_080050B4(s32, s32, s32, s32);           /* extern */

void sub_0800BE44(void) {
    *(s16 *)0x03001670 = 0;
    sub_0800312C(0x10, 8);
    sub_0800312C(0x10, 0);
    sub_080050B4(1, 0x18F, 0x180, 0x718C);
    *(u8 *)0x03002B68 |= 8;
    *(u8 *)0x03002C8C |= 8;
    *(u8 *)0x03002DB0 |= 8;
    *(s8 *)0x0300485C = 0x14;
    *(u8 *)0x0300485B += 1;
}
