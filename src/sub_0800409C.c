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

M2C_UNK sub_080A0664(s32, s32, u16);                /* extern */
s32 sub_080A06D4(s32, s32, u16);                    /* extern */

s32 sub_0800409C(s32 arg0, u8 arg1, u16 arg2, u8 arg3) {
    s32 temp_r6;
    s32 var_r8;
    u16 temp_r5;

    temp_r5 = arg2;
    var_r8 = 0;
    temp_r6 = (arg1 * temp_r5) + 0x0E000000;
    sub_080A0664(arg0, temp_r6, temp_r5);
    if (arg3 != 0) {
        var_r8 = sub_080A06D4(arg0, temp_r6, temp_r5);
    }
    return var_r8;
}
