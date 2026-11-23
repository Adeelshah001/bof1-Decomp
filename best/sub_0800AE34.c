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

M2C_UNK sub_08033B88(s32, s32);                     /* extern */

void sub_0800AE34(void *arg0) {
    sub_080547DC((void *)0x03003420, 0);
    sub_080547DC((void *)0x030034A0, 0);
    sub_080547DC((void *)0x03003520, 0);
    sub_080547DC((void *)0x030035A0, 0);
    sub_080547DC((void *)0x03003620, 0);
    sub_080547DC((void *)0x030036A0, 0);
    sub_080547DC((void *)0x03003720, 0);
    sub_080547DC((void *)0x03003820, 0);
    sub_08033B88(0x03002AB0, 0);
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) + 2);
}
