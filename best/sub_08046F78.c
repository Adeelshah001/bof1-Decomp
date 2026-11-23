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

s32 sub_08046F78(void *arg0, void **arg1) {
    s32 temp_r1;
    s32 var_r5;
    u32 var_r3;
    u8 temp_r1_2;
    void *temp_r2;

    var_r5 = 0;
    temp_r1 = *(u8 *)0x03003FA4 ^ 0xA;
    var_r3 = ((s32) ((0 - temp_r1) | temp_r1) >> 0x1F) & 8;
    if (var_r3 <= 9U) {
        do {
            temp_r2 = (var_r3 * 0x90) + 0x03002510;
            temp_r1_2 = M2C_FIELD(temp_r2, u8 *, 0x3A);
            if ((temp_r1_2 != 0) && !(0x40 & temp_r1_2) && (arg0 != temp_r2) && (M2C_FIELD(temp_r2, u8 *, 0x3C) == 5) && ((u32) (u16) ((M2C_FIELD(arg0, u16 *, 2) - M2C_FIELD(temp_r2, u16 *, 2)) + 8) <= 0xFU) && ((u32) (u16) ((M2C_FIELD(temp_r2, u16 *, 6) - M2C_FIELD(arg0, u16 *, 0x2C)) + 8) <= 0xFU)) {
                var_r5 = 1;
                *arg1 = temp_r2;
            }
            var_r3 = (u32) (u8) (var_r3 + 1);
        } while (var_r3 <= 9U);
    }
    return var_r5;
}
