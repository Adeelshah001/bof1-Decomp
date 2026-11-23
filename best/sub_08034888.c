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

void sub_08034888(void *arg0) {
    s32 *var_r1;
    s32 var_r0;

    if ((M2C_FIELD(arg0, u16 *, 2) == 0xB78) && (M2C_FIELD(arg0, u16 *, 6) == 0x47FC)) {
        var_r1 = arg0 + 0x88;
        var_r0 = M2C_FIELD(arg0, s32 *, 0x88) + 3;
    } else {
        var_r1 = arg0 + 0x88;
        var_r0 = M2C_FIELD(arg0, s32 *, 0x88) + 2;
    }
    *var_r1 = var_r0;
}
