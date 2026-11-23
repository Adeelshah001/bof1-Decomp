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

u8 sub_08055F70(void) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 var_r0_3;
    u32 var_r0;
    u32 var_r0_2;
    u8 temp_r3;
    u8 var_r4;
    u8 var_r5;
    void *temp_r2;

    var_r4 = 0;
    var_r5 = 0;
    do {
        temp_r2 = (var_r5 * 0x124) + 0x03002AB0;
        var_r0 = 0;
        temp_r3 = M2C_FIELD(temp_r2, u8 *, 0x3A);
        if (temp_r3 != 0) {
            temp_r1 = M2C_FIELD((temp_r2 + 0x3A), u16 *, 0xBC) ^ M2C_FIELD(temp_r2, u16 *, 0xF4);
            var_r0 = (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
        }
        if (var_r0 != 0) {
            var_r4 += 1;
        }
        var_r0_2 = 0;
        if (temp_r3 != 0) {
            temp_r1_2 = M2C_FIELD(temp_r2, u16 *, 0xFA) ^ M2C_FIELD(temp_r2, u16 *, 0xF8);
            var_r0_2 = (u32) ((0 - temp_r1_2) | temp_r1_2) >> 0x1F;
        }
        if (var_r0_2 != 0) {
            var_r4 += 1;
        }
        if ((temp_r3 != 0) && (0x70 & M2C_FIELD(temp_r2, u8 *, 0xF1))) {
            var_r0_3 = 1;
        } else {
            var_r0_3 = 0;
        }
        if (var_r0_3 != 0) {
            var_r4 += 1;
        }
        var_r5 += 1;
    } while ((u32) var_r5 <= 7U);
    return var_r4;
}
