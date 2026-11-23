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

s32 sub_08032774(u16 arg0, s8 *arg1) {
    s32 var_r3;
    u16 temp_r2;
    u16 temp_r2_2;

    temp_r2 = arg0;
    var_r3 = 0;
    if (!(0x3000 & temp_r2)) {
        temp_r2_2 = (0xFF & temp_r2) - 0x14;
        if (!(0x8000 & temp_r2_2) && ((u32) temp_r2_2 <= 4U)) {
            var_r3 = 1;
            *arg1 = (s8) temp_r2_2;
        }
    }
    return var_r3;
}
