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

M2C_UNK sub_080073D8(s32);                          /* extern */
M2C_UNK sub_0800B0FC(s32);                          /* extern */

void sub_08007C4C(void) {
    sub_080547DC((void *)0x03003420, 2);
    sub_080547DC((void *)0x030034A0, 2);
    sub_0800B0FC(0x03003520);
    sub_0800B0FC(0x030035A0);
    sub_0800B0FC(0x03003620);
    sub_0800B0FC(0x030036A0);
    sub_0800B0FC(0x03003720);
    sub_0800B0FC(0x030037A0);
    sub_080073D8(0x40);
    *(s8 *)0x0300485C = 0x20;
    *(u8 *)0x0300485B += 1;
}
