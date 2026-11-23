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
s32 sub_0807B2CC();                                 /* extern */
M2C_UNK sub_08095E78(s32);                          /* extern */
M2C_UNK sub_08095EFC(s32);                          /* extern */
M2C_UNK sub_08097040(s32, s32);                     /* extern */

void sub_08095A14(s32 arg0) {
    if ((sub_0807B2CC() << 0x10) != 0) {
        sub_08095EFC(arg0);
        return;
    }
    sub_080379D4(0x29);
    sub_08097040(arg0, 0x10);
    sub_08095E78(arg0);
}
