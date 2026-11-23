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

M2C_UNK sub_080298F0(u16 *);                        /* extern */
M2C_UNK sub_0802A02C(u16 *, u16);                   /* extern */
M2C_UNK sub_0802ABCC(s32, s32);                     /* extern */
M2C_UNK sub_0802AFAC(s32, s32);                     /* extern */

void sub_0802B128(s32 arg0, s32 arg1) {
    u16 *temp_r0;

    sub_0802AFAC(arg1, arg0);
    *(s8 *)0x0300418C = 8;
    sub_0802ABCC(0x03002430, 2);
    temp_r0 = *(u16 **)0x03004190;
    sub_0802A02C(temp_r0, *temp_r0);
    sub_080298F0(*(u16 **)0x03004190);
}
