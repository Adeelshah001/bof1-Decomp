/* machine draft (m2c) for agbcc -O2, tried by autopilot */
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

s32 sub_080A44FC();                                 /* extern */

s32 sub_080A45F8(s32 arg1, s32 arg2) {
    s32 sp0;
    s32 sp4;
    s32 sp8;

    sp0 = sub_080A44FC();
    sp4 = arg1;
    sp8 = arg2;
    M2C_ERROR(/* unknown instruction: swi 0xab */);
    return 6;
}
