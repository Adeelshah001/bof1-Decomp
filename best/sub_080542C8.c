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

s32 sub_08001770(s32);                              /* extern */
s32 sub_08003104();                                 /* extern */

s32 sub_080542C8(void *arg0) {
    s8 *var_r1;
    s8 *var_r1_2;
    u16 temp_r0;
    u16 temp_r0_2;
    u16 temp_r2_2;
    u16 temp_r2_3;
    u8 temp_r3_2;
    u8 var_r4;
    void *temp_r2;
    void *temp_r3;

    temp_r3 = arg0 - 0x80;
    if (*(u16 *)0x03002484 != 0xCE) {
        if ((2 & M2C_FIELD(arg0, u8 *, 0x3A)) && ((sub_08001770(0x8E) << 0x18) == 0)) {
            var_r4 = 0;
loop_4:
            temp_r2 = (var_r4 * 0x124) + 0x03002AB0;
            if (M2C_FIELD(temp_r2, u8 *, 0x3A) != 0) {
                temp_r3_2 = 0x40 & M2C_FIELD(temp_r2, u8 *, 0xF0);
                if (temp_r3_2 == 0) {
                    if (M2C_FIELD(temp_r2, u16 *, 2) == M2C_FIELD(arg0, u16 *, 2)) {
                        var_r1 = arg0 + 0x6F;
                        M2C_FIELD(arg0, u8 *, 0x6F) = temp_r3_2;
                        if ((u32) M2C_FIELD(arg0, u16 *, 6) < (u32) M2C_FIELD(temp_r2, u16 *, 6)) {
                            goto block_8;
                        }
                        goto block_25;
                    }
                    if (M2C_FIELD(temp_r2, u16 *, 6) == M2C_FIELD(arg0, u16 *, 6)) {
                        var_r1_2 = arg0 + 0x6F;
                        M2C_FIELD(arg0, u8 *, 0x6F) = 3U;
                        if ((u32) M2C_FIELD(arg0, u16 *, 2) < (u32) M2C_FIELD(temp_r2, u16 *, 2)) {
                            goto block_11;
                        }
                        goto block_25;
                    }
                    goto block_12;
                }
            }
block_12:
            var_r4 += 1;
            if ((u32) var_r4 > 3U) {
                goto block_13;
            }
            goto loop_4;
        }
block_13:
        return 0;
    }
    temp_r2_2 = M2C_FIELD(arg0, u16 *, 2);
    temp_r0 = M2C_FIELD(temp_r3, u16 *, 2);
    if (temp_r2_2 != temp_r0) {
        if ((u32) temp_r2_2 < (u32) temp_r0) {
            var_r1_2 = arg0 + 0x6F;
block_11:
            *var_r1_2 = 1;
        } else if ((u32) temp_r2_2 > (u32) temp_r0) {
            M2C_FIELD(arg0, u8 *, 0x6F) = 3U;
        }
    } else {
        temp_r2_3 = M2C_FIELD(arg0, u16 *, 6);
        temp_r0_2 = M2C_FIELD(temp_r3, u16 *, 6);
        if (temp_r2_3 != temp_r0_2) {
            if ((u32) temp_r2_3 < (u32) temp_r0_2) {
                var_r1 = arg0 + 0x6F;
block_8:
                *var_r1 = 2;
            } else if ((u32) temp_r2_3 > (u32) temp_r0_2) {
                M2C_FIELD(arg0, u8 *, 0x6F) = 0U;
            }
        } else {
            M2C_FIELD(arg0, u8 *, 0x6F) = (u8) (3 & sub_08003104());
        }
    }
block_25:
    return 1;
}
