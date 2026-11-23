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

void sub_0805B15C(void) {
    s32 var_r1;
    void *var_r0;

    M2C_FIELD((void *)0x03000AE0, s32 *, 8) = 0;
    var_r0 = (void *)0x02011280;
    var_r1 = 0x3F;
    do {
        M2C_FIELD(var_r0, s16 *, 4) = 0;
        M2C_FIELD(var_r0, s16 *, 2) = 0;
        M2C_FIELD(var_r0, s16 *, 0) = 0;
        var_r0 += 8;
        var_r1 -= 1;
    } while (var_r1 >= 0);
}
