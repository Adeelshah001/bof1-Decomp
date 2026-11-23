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
M2C_UNK sub_08001F80(s32, s32, s32);                /* extern */
M2C_UNK sub_0800312C(s32, s32);                     /* extern */
M2C_UNK sub_08004EA0(s32);                          /* extern */
M2C_UNK sub_0807E3CC(s32, s32);                     /* extern */

void sub_08022C64(void) {
    sub_0800312C(0x10, 0);
    sub_08001F80(0, 0, 0);
    sub_080017EC(0x29);
    sub_0800312C(0x10, 2);
    *(s8 *)0x0300360F = 2;
    sub_0807E3CC(0x030035A0, 2);
    sub_08004EA0(0x8049);
    *(u8 *)0x03002B68 &= 0xFB;
    *(s8 *)0x0300486F = 0;
    *(s8 *)0x03004870 = 0;
}
