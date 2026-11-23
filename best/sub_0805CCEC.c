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

u32 sub_0805CCEC(void *arg0, u16 arg1, s32 arg2) {
    u32 var_r0;

    var_r0 = M2C_FIELD(arg0, s32 *, 0x20) + (arg1 | (arg2 << 0x10));
    if (var_r0 > 0xF423FU) {
        var_r0 = 0xF423F;
    }
    return var_r0;
}
