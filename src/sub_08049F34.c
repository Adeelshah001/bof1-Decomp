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

s32 sub_08001770(u16);                              /* extern */
M2C_UNK sub_0803EE6C(s32);                          /* extern */

s32 sub_08049F34(s32 arg0, u16 arg1) {
    s32 var_r5;

    var_r5 = 1;
    if ((sub_08001770(arg1) << 0x18) == 0) {
        sub_0803EE6C(arg0);
        var_r5 = 0;
    }
    return var_r5;
}
