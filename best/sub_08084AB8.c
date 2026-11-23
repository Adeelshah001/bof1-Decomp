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

M2C_UNK sub_08084B70(void *, void *);               /* extern */

void sub_08084AB8(void *arg0) {
    u8 temp_r0;
    u8 var_r0;
    void *var_r2;
    void *var_r2_2;
    void *var_r3;

    var_r3 = (void *)0x03003420;
    var_r0 = *(u8 *)0x0300345A;
    var_r2 = (void *)0x03002AB0;
loop_2:
    if (var_r0 == 0) {
block_1:
        var_r3 += 0x124;
        var_r0 = M2C_FIELD(var_r3, u8 *, 0x3A);
        goto loop_2;
    }
    if (M2C_FIELD(var_r3, u8 *, 0xF1) & 0x80) {
        goto block_1;
    }
loop_4:
    if ((u32) (M2C_FIELD(var_r2, u8 *, 0xE2) & 0xF0) <= 0x2FU) {
        var_r2 += 0x124;
        if ((u32) var_r2 >= 0x03002F40U) {
            M2C_FIELD(arg0, u8 *, 8) = (u8) (0xF & M2C_FIELD(arg0, u8 *, 0x5F));
loop_7:
            temp_r0 = M2C_FIELD(arg0, u8 *, 8) - 1;
            M2C_FIELD(arg0, u8 *, 8) = temp_r0;
            if ((temp_r0 << 0x18) != 0) {
                var_r2_2 = var_r3;
                do {
loop_10:
                    var_r2_2 += 0x124;
                    if (M2C_FIELD(var_r2_2, u8 *, 0x3A) == 0) {
                        goto loop_10;
                    }
                } while (0x80 & M2C_FIELD(var_r2_2, u8 *, 0xF1));
                if ((u32) M2C_FIELD(var_r3, u8 *, 0xF2) < (u32) M2C_FIELD(var_r2_2, u8 *, 0xF2)) {
                    var_r3 = var_r2_2;
                }
                goto loop_7;
            }
        } else {
            goto loop_4;
        }
    }
    sub_08084B70(arg0, var_r3);
}
