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

M2C_UNK sub_0803A8EC();                             /* extern */
M2C_UNK sub_0803EE38(void *);                       /* extern */

void sub_08045E90(void *arg0) {
    sub_0803A8EC();
    if (*(u8 *)0x03001850 == M2C_FIELD(arg0, u8 *, 0x5C)) {
        sub_0803EE38(arg0);
    }
}
