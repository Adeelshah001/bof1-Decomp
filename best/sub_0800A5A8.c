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

M2C_UNK sub_0800B104(s32);                          /* extern */

void sub_0800A5A8(void *arg0) {
    *(s32 *)0x03002B38 += 1;
    sub_0800B104(0x03003520);
    sub_0800B104(0x030035A0);
    sub_0800B104(0x03003820);
    sub_0800B104(0x03003720);
    sub_0800B104(0x03003620);
    sub_0800B104(0x030036A0);
    sub_0800B104(0x030037A0);
    *(s32 *)0x03002B44 = 0x801B;
    *(s8 *)0x030023D0 = 2;
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) + 2);
}
