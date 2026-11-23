/* machine draft (m2c) for agbcc -mthumb-interwork -O2, tried by autopilot */
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

s32 sub_0807B2CC();                                 /* extern */
M2C_UNK sub_08095854(s32);                          /* extern */
M2C_UNK sub_08095860(s32);                          /* extern */

void sub_08095830(s32 arg0) {
    if ((sub_0807B2CC() << 0x10) == 0) {
        sub_08095854(arg0);
        return;
    }
    sub_08095860(arg0);
}
