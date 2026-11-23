/* identical to sub_08049C88 (matched), with its names changed by decompdecomp */
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

s32 sub_080515D8();                                 /* extern */
M2C_UNK sub_0803EE6C(s32);                          /* extern */

void sub_080532B0(s32 arg0) {
    if ((sub_080515D8() << 0x18) == 0) {
        sub_0803EE6C(arg0);
    }
}
