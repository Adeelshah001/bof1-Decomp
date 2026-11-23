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

u8 sub_08036DDC(void *);                            /* extern */

s32 sub_080366D0(u16 arg0, u16 arg1, void **arg2) {
    s32 temp_r1;
    u16 temp_r2;
    u16 temp_r3;
    u32 var_r1;
    u8 temp_r0;
    u8 var_r1_2;
    void *temp_r4;

    temp_r2 = arg0;
    temp_r3 = arg1;
    *arg2 = NULL;
    temp_r1 = *(u8 *)0x03003FA4 ^ 0xA;
    var_r1 = ((s32) ((0 - temp_r1) | temp_r1) >> 0x1F) & 8;
    if (var_r1 <= 9U) {
loop_1:
        temp_r4 = (var_r1 * 0x90) + 0x03002510;
        if (M2C_FIELD(temp_r4, u8 *, 0x3A) != 0) {
            temp_r0 = M2C_FIELD(temp_r4, u8 *, 0x3F);
            if (temp_r0 != 0) {
                if (temp_r0 == 3) {
                    if ((temp_r3 == M2C_FIELD(temp_r4, u16 *, 0x4A)) && ((temp_r2 == M2C_FIELD(temp_r4, u16 *, 0x46)) || (temp_r2 == (M2C_FIELD(temp_r4, u16 *, 0x46) + 0x10)))) {
                        *arg2 = temp_r4;
                        var_r1_2 = sub_08036DDC(temp_r4);
                        if (var_r1_2 == 0) {
                            goto block_14;
                        }
                        goto block_13;
                    }
                    goto block_17;
                }
                if ((temp_r0 == 1) && (temp_r2 == M2C_FIELD(temp_r4, u16 *, 0x46)) && (temp_r3 == M2C_FIELD(temp_r4, u16 *, 0x4A))) {
                    *arg2 = temp_r4;
                    var_r1_2 = sub_08036DDC(temp_r4);
                    if (var_r1_2 != 0) {
block_13:
                        return 1;
                    }
block_14:
                    if (M2C_FIELD(temp_r4, u8 *, 0x3C) != 0x85) {
                        *arg2 = (void *) var_r1_2;
                    }
                    return 0;
                }
                goto block_17;
            }
        }
block_17:
        var_r1 = (u32) (u8) (var_r1 + 1);
        if (var_r1 > 9U) {
            goto block_18;
        }
        goto loop_1;
    }
block_18:
    return 0;
}
