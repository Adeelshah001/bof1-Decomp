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

M2C_UNK sub_08073CFC(s32 *, s32 *, s32);            /* extern */

void sub_08073CCC(s32 arg0, s32 arg1) {
    s32 sp0;
    s32 sp4;

    sp0 = arg0;
    sp4 = arg1;
    sub_08073CFC(&sp0, &sp4, 3);
    sub_08073CFC(&sp0, &sp4, 4);
    sub_08073CFC(&sp0, &sp4, 1);
}
