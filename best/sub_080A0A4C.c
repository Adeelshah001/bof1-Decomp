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

void sub_080A0A4C(s8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r1;
    s8 *var_r2;

    var_r2 = arg0;
    var_r1 = arg1 - 1;
    if (arg1 != 0) {
        do {
            *var_r2 = 0;
            var_r2 += 1;
            temp_r0 = var_r1;
            var_r1 -= 1;
        } while (temp_r0 != 0);
    }
}
