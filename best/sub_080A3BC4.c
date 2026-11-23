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

s32 sub_080A3BC4(s32 arg0) {
    s32 var_r1;
    s32 var_r2;

    var_r1 = arg0;
    var_r2 = 0;
    if (!(0xFFFF0000 & var_r1)) {
        var_r2 = 0x10;
        var_r1 <<= 0x10;
    }
    if (!(0xFF000000 & var_r1)) {
        var_r2 += 8;
        var_r1 <<= 8;
    }
    if (!(0xF0000000 & var_r1)) {
        var_r2 += 4;
        var_r1 *= 0x10;
    }
    if (!(0xC0000000 & var_r1)) {
        var_r2 += 2;
        var_r1 *= 4;
    }
    if (var_r1 >= 0) {
        var_r2 += 1;
        if (!(0x40000000 & var_r1)) {
            return 0x20;
        }
    }
    return var_r2;
}
