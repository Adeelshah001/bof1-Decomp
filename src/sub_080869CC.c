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

M2C_UNK sub_080867E8(void *);                       /* extern */
M2C_UNK sub_08086A0C(void *, s32, s32);             /* extern */

void sub_080869CC(void *arg0) {
    s32 var_r1;
    s32 var_r2;
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x3C);
    if (temp_r0 == 0x2C) {
        var_r1 = 0xF68;
        var_r2 = 0x2F38;
        goto block_5;
    }
    if (temp_r0 == 0x56) {
        sub_080867E8(arg0);
        return;
    }
    var_r1 = 0xF54;
    var_r2 = 0x2F4D;
block_5:
    sub_08086A0C(arg0, var_r1, var_r2);
}
