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

M2C_UNK sub_0805DA14(s32);                          /* extern */

void sub_08068770(void) {
    s16 *var_r1;
    s16 var_r0;
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;
    void *temp_r2;

    var_r6 = 0x03002AB0;
    var_r5 = 0;
    var_r4 = 7;
    do {
        temp_r2 = var_r5 + 0x03002AB0;
        if (M2C_FIELD(temp_r2, u8 *, 0x3C) != 0) {
            M2C_FIELD(temp_r2, s16 *, 0x112) = 0x110F;
            M2C_FIELD(temp_r2, s16 *, 0x116) = 0x2110;
            M2C_FIELD(temp_r2, s16 *, 0x114) = 0x213A;
            var_r1 = temp_r2 + 0x118;
            var_r0 = 0x217D;
        } else {
            M2C_FIELD(temp_r2, s16 *, 0x112) = 0x1108;
            M2C_FIELD(temp_r2, s16 *, 0x116) = 0x218B;
            M2C_FIELD(temp_r2, s16 *, 0x114) = 0x2154;
            var_r1 = temp_r2 + 0x118;
            var_r0 = 0x218A;
        }
        *var_r1 = var_r0;
        sub_0805DA14(var_r6);
        var_r6 += 0x124;
        var_r5 += 0x124;
        var_r4 -= 1;
    } while (var_r4 >= 0);
}
