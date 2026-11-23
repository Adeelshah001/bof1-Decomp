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

s32 sub_08073B9C(void *arg0) {
    s32 var_r3;

    var_r3 = 0;
    if (!(0x8050 & M2C_FIELD(arg0, u16 *, 0xF0)) && !(0x240 & M2C_FIELD(arg0, u16 *, 0xDC))) {
        var_r3 = 1;
    }
    return var_r3;
}
