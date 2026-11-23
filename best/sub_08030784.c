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

M2C_UNK sub_08038864(void *, void *);               /* extern */

void sub_08030784(u8 arg0, M2C_UNK arg3) {
    s32 var_r4;
    s32 var_r6;
    s8 var_r12;
    s8 var_r3;
    s8 var_r3_2;
    s8 var_r3_3;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 var_r1;
    u8 temp_r0;
    u8 temp_r7;
    u8 var_r7;
    void *temp_r1;
    void *var_r2;
    void *var_r5;

    temp_r0 = arg0;
    var_r7 = 0;
    var_r12 = 0;
    var_r5 = NULL;
    if (4 & *(u8 *)0x03002B68) {
        return;
    }
    var_r3 = 0;
loop_3:
    temp_r1 = (var_r3 * 0x124) + 0x03002AB0;
    if ((M2C_FIELD(temp_r1, u8 *, 0x3A) != 0) && !(0x50 & M2C_FIELD(temp_r1, u8 *, 0xF0))) {
        var_r7 += 1;
    }
    if (var_r7 != 4) {
        temp_r0_2 = (var_r3 << 0x18) + 0x01000000;
        var_r3 = (s8) (temp_r0_2 >> 0x18);
        if ((s32) ((s32) temp_r0_2 >> 0x18) <= 7) {
            goto loop_3;
        }
    }
    if (temp_r0 == 1) {
        var_r12 = var_r3;
    }
    temp_r7 = var_r7 - 1;
    var_r1 = 0;
    if ((s32) temp_r7 > 0) {
        do {
            if (temp_r0 == 0) {
                var_r3_2 = var_r12;
                var_r4 = var_r3_2 << 0x18;
                var_r6 = var_r1 << 0x18;
                if ((s32) var_r3_2 <= 7) {
loop_13:
                    var_r2 = ((var_r4 >> 0x18) * 0x124) + 0x03002AB0;
                    if ((M2C_FIELD(var_r2, u8 *, 0x3A) != 0) && !(0x50 & M2C_FIELD(var_r2, u8 *, 0xF0))) {
                        if (var_r5 == NULL) {
                            var_r5 = var_r2;
                            goto block_17;
                        }
                        goto block_19;
                    }
block_17:
                    var_r3_2 = (s8) ((u32) ((var_r3_2 << 0x18) + 0x01000000) >> 0x18);
                    var_r4 = var_r3_2 << 0x18;
                    if ((s32) var_r3_2 > 7) {

                    } else {
                        goto loop_13;
                    }
                }
            } else {
                var_r3_3 = var_r12;
                var_r4 = var_r3_3 << 0x18;
                var_r6 = var_r1 << 0x18;
                if (var_r4 >= 0) {
loop_21:
                    var_r2 = ((var_r4 >> 0x18) * 0x124) + 0x03002AB0;
                    if ((M2C_FIELD(var_r2, u8 *, 0x3A) != 0) && !(0x50 & M2C_FIELD(var_r2, u8 *, 0xF0))) {
                        if (var_r5 == NULL) {
                            var_r5 = var_r2;
                            goto block_25;
                        }
block_19:
                        sub_08038864(var_r5, var_r2);
                        var_r12 = (s8) ((u32) var_r4 >> 0x18);
                        var_r5 = NULL;
                    } else {
block_25:
                        var_r3_3 = (s8) ((u32) ((var_r3_3 << 0x18) + 0xFF000000) >> 0x18);
                        var_r4 = var_r3_3 << 0x18;
                        if (var_r4 >= 0) {
                            goto loop_21;
                        }
                    }
                }
            }
            temp_r0_3 = var_r6 + 0x01000000;
            var_r1 = temp_r0_3 >> 0x18;
        } while ((s32) ((s32) temp_r0_3 >> 0x18) < (s32) temp_r7);
    }
    if (*(u16 *)0x03002484 == 0x56) {
        *(s32 *)0x03001694 |= 1;
    }
}
