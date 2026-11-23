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

s32 sub_08037C98(s32, s32);                         /* extern */
M2C_UNK sub_0803A8EC(s32);                          /* extern */
M2C_UNK sub_0803EE6C(s32);                          /* extern */

void sub_0804B444(s32 arg0) {
    if ((sub_08037C98(arg0, 1) << 0x10) == 0) {
        sub_0803EE6C(arg0);
        return;
    }
    sub_0803A8EC(arg0);
}
