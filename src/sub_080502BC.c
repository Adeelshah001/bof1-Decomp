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

s32 sub_08037C98(void *, s32);                      /* extern */
M2C_UNK sub_0803A974(void *);                       /* extern */
M2C_UNK sub_0803EE6C(void *);                       /* extern */

void sub_080502BC(void *arg0) {
    if ((sub_08037C98(arg0, 1) << 0x10) != 0) {
        M2C_FIELD(arg0, u16 *, 2) = (u16) (M2C_FIELD(arg0, u16 *, 2) - 1);
        sub_0803A974(arg0);
        return;
    }
    sub_0803EE6C(arg0);
}
