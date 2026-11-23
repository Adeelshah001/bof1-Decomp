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

s32 sub_08038458(u8 arg0) {
    s32 var_r4;
    u8 var_r3;
    void *temp_r2;

    var_r4 = 1;
    var_r3 = arg0;
    if ((u32) var_r3 <= 3U) {
loop_2:
        temp_r2 = (var_r3 * 0x124) + 0x03002AB0;
        if ((M2C_FIELD(temp_r2, u8 *, 0x3A) != 0) && !(0x50 & M2C_FIELD(temp_r2, u8 *, 0xF0)) && ((M2C_FIELD(temp_r2, u16 *, 2) != M2C_FIELD(temp_r2, u16 *, 0x82)) || (M2C_FIELD(temp_r2, u16 *, 6) != M2C_FIELD(temp_r2, u16 *, 0x86)))) {
            var_r4 = 0;
        } else {
            var_r3 += 1;
            if ((u32) var_r3 <= 3U) {
                goto loop_2;
            }
        }
    }
    return var_r4;
}
