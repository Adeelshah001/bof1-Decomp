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

void sub_0807CB2C(void) {
    s16 *var_r1;
    s16 *var_r2;
    s32 var_r0;

    var_r2 = (s16 *)0x020213A2;
    var_r1 = (s16 *)0x020211A2;
    var_r0 = 0xE;
    do {
        *var_r1 = 0x7FFF;
        *var_r2 = 0x7FFF;
        var_r2 += 2;
        var_r1 += 2;
        var_r0 -= 1;
    } while (var_r0 >= 0);
}
