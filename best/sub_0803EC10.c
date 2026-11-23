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

s32 sub_0805CF40(u16, M2C_UNK *);                   /* extern */

s32 sub_0803EC10(u16 arg1) {
    M2C_UNK sp0;
    s32 var_r5;
    u16 temp_r4;
    u8 var_r3;
    void *temp_r2;

    temp_r4 = arg1;
    var_r5 = 0;
    if ((sub_0805CF40(temp_r4, &sp0) << 0x18) != 0) {
        var_r3 = 0;
loop_2:
        temp_r2 = (var_r3 * 0x124) + 0x03002AB0;
        if ((M2C_FIELD(temp_r2, u8 *, 0x3A) == 0) || (0x40 & M2C_FIELD(temp_r2, u8 *, 0xF0)) || ((M2C_FIELD(temp_r2, u16 *, 0xEC) != temp_r4) && (M2C_FIELD(temp_r2, u16 *, 0xEE) != temp_r4) && (M2C_FIELD(temp_r2, u16 *, 0x112) != temp_r4) && (M2C_FIELD(temp_r2, u16 *, 0x114) != temp_r4) && (M2C_FIELD(temp_r2, u16 *, 0x116) != temp_r4) && (M2C_FIELD(temp_r2, u16 *, 0x118) != temp_r4))) {
            var_r3 += 1;
            if ((u32) var_r3 > 7U) {

            } else {
                goto loop_2;
            }
        } else {
            goto block_12;
        }
    } else {
block_12:
        var_r5 = 1;
    }
    return var_r5;
}
