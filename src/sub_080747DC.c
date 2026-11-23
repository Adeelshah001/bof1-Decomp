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

M2C_UNK sub_0805A9FC();                             /* extern */
M2C_UNK sub_080821A4(void *);                       /* extern */

void sub_080747DC(void *arg0) {
    sub_0805A9FC();
    if (*(s32 *)0x03004550 == M2C_FIELD(arg0, s32 *, 0x1C)) {
        sub_080821A4(arg0);
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) - 2);
        M2C_FIELD(arg0, s8 *, 2) = 0x14;
    }
    *(s8 *)0x03004754 = 1;
}
