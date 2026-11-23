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

s32 sub_080131E8(void) {
    s32 var_r2;
    s32 var_r6;
    s32 var_r7;
    u8 temp_r0;
    void *temp_r1;
    void *temp_r2;

    var_r7 = 0;
    var_r6 = 0;
loop_1:
    temp_r2 = var_r6 + 0x03002AB0;
    if ((M2C_FIELD(temp_r2, u8 *, 0x3A) != 0) && !(0x50 & M2C_FIELD(temp_r2, u8 *, 0xF0))) {
        var_r2 = 0;
        temp_r0 = *(u8 *)0x03003FA4;
        if ((s32) temp_r0 > 0) {
loop_5:
            temp_r1 = (var_r2 << 7) + 0x03003420;
            if ((M2C_FIELD(temp_r1, u8 *, 0x3A) != 0) && (M2C_FIELD(temp_r1, u8 *, 0x3B) == 0x91) && ((u32) (u16) ((M2C_FIELD(temp_r1, u16 *, 2) - M2C_FIELD(temp_r2, u16 *, 2)) + 0x20) <= 0x3FU) && ((u32) (u16) ((M2C_FIELD(temp_r1, u16 *, 6) - M2C_FIELD(temp_r2, u16 *, 6)) + 0x20) <= 0x3FU)) {
                return 1;
            }
            var_r2 += 1;
            if (var_r2 >= (s32) temp_r0) {
                goto block_11;
            }
            goto loop_5;
        }
    }
block_11:
    var_r6 += 0x124;
    var_r7 += 1;
    if (var_r7 > 3) {
        return 0;
    }
    goto loop_1;
}
