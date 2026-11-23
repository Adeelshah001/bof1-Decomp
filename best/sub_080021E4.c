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

s32 sub_080021E4(u8 arg0) {
    u8 var_r1;
    void *temp_r2;

    var_r1 = 0;
loop_1:
    temp_r2 = (var_r1 * 0x124) + 0x03002AB0;
    if ((M2C_FIELD(temp_r2, u8 *, 0x3A) != 0) && (M2C_FIELD(temp_r2, u8 *, 0x3C) == arg0)) {
        if (!(0x40 & M2C_FIELD(temp_r2, u8 *, 0xF0))) {
            if (0xF0 & M2C_FIELD(temp_r2, u8 *, 0xF1)) {
                return 3;
            }
            return 2;
        }
        goto block_8;
    }
    var_r1 += 1;
    if ((u32) var_r1 > 7U) {
block_8:
        return 0;
    }
    goto loop_1;
}
