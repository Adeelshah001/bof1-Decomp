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

s32 sub_080A4088(s32 arg0) {
    s32 temp_r2;
    s32 temp_r2_2;
    s32 var_r3;

    temp_r2 = (0x7FF00000 & arg0) + 0xFCC00000;
    if (temp_r2 > 0) {
        var_r3 = temp_r2;
    } else {
        temp_r2_2 = (s32) (0 - temp_r2) >> 0x14;
        if (temp_r2_2 <= 0x13) {
            var_r3 = 0x80000 >> temp_r2_2;
        } else {
            var_r3 = 0;
            if ((s32) (temp_r2_2 - 0x14) <= 0x1E) {

            }
        }
    }
    return var_r3;
}
