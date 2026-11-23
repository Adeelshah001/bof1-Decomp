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

M2C_UNK sub_0807B248(s32);                          /* extern */
s32 sub_0807B288();                                 /* extern */
M2C_UNK sub_08083BB4(s32);                          /* extern */
M2C_UNK sub_080877A4(s32);                          /* extern */

void sub_080875EC(s32 arg0) {
    if ((sub_0807B288() << 0x10) != 0) {
        sub_0807B248(arg0);
        return;
    }
    sub_08083BB4(arg0);
    sub_080877A4(arg0);
}
