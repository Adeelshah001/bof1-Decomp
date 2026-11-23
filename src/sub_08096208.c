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

M2C_UNK sub_08073470();                             /* extern */
M2C_UNK sub_08073964();                             /* extern */
s32 sub_08082E3C();                                 /* extern */
M2C_UNK sub_08096CBC(s32);                          /* extern */

void sub_08096208(s32 arg0) {
    if (sub_08082E3C() != 0) {
        sub_08096CBC(arg0);
        *(s32 *)0x03004FF0 = 0;
        sub_08073470();
        sub_08073964();
    }
}
