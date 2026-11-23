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

M2C_UNK sub_080017EC(s32);                          /* extern */
M2C_UNK sub_08037C98(s32, s32);                     /* extern */
M2C_UNK sub_0803A8EC(s32);                          /* extern */
M2C_UNK sub_0803EE38(s32);                          /* extern */

void sub_08055A64(s32 arg0) {
    sub_08037C98(arg0, 0);
    if (0x80 & *(u8 *)0x03003F98) {
        sub_080017EC(0x98);
        sub_0803EE38(arg0);
        return;
    }
    sub_0803A8EC(arg0);
}
