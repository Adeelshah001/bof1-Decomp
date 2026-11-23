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

s32 sub_0805A9FC();                                 /* extern */
s32 sub_080739B8();                                 /* extern */
M2C_UNK sub_080749A0(s32);                          /* extern */

void sub_080748EC(s32 arg0) {
    if (sub_0805A9FC() == 0) {
        *(s8 *)0x03004754 = 1;
        return;
    }
    if ((sub_080739B8() << 0x18) != 0) {
        sub_080749A0(arg0);
    }
}
