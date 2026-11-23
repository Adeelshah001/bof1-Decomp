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

M2C_UNK sub_080379D4(s32);                          /* extern */
M2C_UNK sub_0804FD48(void *);                       /* extern */
M2C_UNK sub_0804FDC0();                             /* extern */

void sub_0804F91C(void *arg0) {
    sub_0804FDC0();
    sub_080379D4(0x2D);
    M2C_FIELD(arg0, s32 *, 0x64) = 0x0804EF39;
    M2C_FIELD(arg0, s8 *, 0x54) = 0;
    sub_0804FD48(arg0);
}
