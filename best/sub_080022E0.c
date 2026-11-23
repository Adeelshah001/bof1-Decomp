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

s32 sub_080022E0(s8 *arg0) {
    s32 temp_r4;
    s8 var_r0;
    u32 var_r3;
    u8 var_r0_2;
    u8 var_r12;
    u8 var_r5;
    u8 var_r7;
    void *temp_r2;

    var_r5 = 0;
    var_r12 = 0;
    var_r7 = 0;
    var_r3 = 0;
    do {
        temp_r2 = (var_r3 * 0x124) + 0x03002AB0;
        temp_r4 = var_r3 * 8;
        if ((M2C_FIELD(temp_r2, u8 *, 0x3A) != 0) && !(0x40 & M2C_FIELD(temp_r2, u8 *, 0xF0))) {
            var_r5 += 1;
        }
        if (var_r3 <= 3U) {
            if (0x80 & M2C_FIELD(((var_r3 * 0x124) + 0x03002AB0), u8 *, 0xF1)) {
                var_r12 += 1;
            }
        } else if (0x80 & M2C_FIELD(((var_r3 * 0x124) + 0x03002AB0), u8 *, 0xF1)) {
            var_r7 += 1;
        }
        var_r3 = (u32) (u8) (var_r3 + 1);
    } while (var_r3 <= 7U);
    if (var_r5 == (var_r12 + var_r7)) {
        var_r0 = 1;
        goto block_17;
    }
    var_r0_2 = var_r5;
    if ((u32) var_r5 > 4U) {
        var_r0_2 = 4;
    }
    if (var_r0_2 != var_r12) {
        return 0;
    }
    var_r0 = 0;
block_17:
    *arg0 = var_r0;
    return 1;
}
