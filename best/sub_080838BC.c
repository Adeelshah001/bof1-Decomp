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

s32 sub_080838BC(void) {
    s32 var_r3;
    void *var_r2;

    var_r2 = (void *)0x03002AB0;
    var_r3 = 0;
loop_1:
    if ((M2C_FIELD(var_r2, u8 *, 0x3C) != 0) && ((0xF0 & M2C_FIELD(var_r2, u8 *, 0xF1)) || (0xC0 & M2C_FIELD(var_r2, u8 *, 0xDC)) || (0x30 & M2C_FIELD(var_r2, u8 *, 0xF0)))) {
        return 1;
    }
    var_r2 += 0x124;
    var_r3 += 1;
    if (var_r3 > 7) {
        return 0;
    }
    goto loop_1;
}
