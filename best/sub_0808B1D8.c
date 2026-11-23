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

void sub_0808B1D8(void *arg0) {
    s8 *var_r0;
    s8 var_r1;

    if (M2C_FIELD(arg0, u8 *, 0xE0) != 0xA) {
        var_r1 = 4;
        var_r0 = (arg0 + 0xE0) - 0x93;
    } else {
        var_r1 = 0x1A;
        var_r0 = arg0 + 0x4D;
    }
    *var_r0 = var_r1;
}
