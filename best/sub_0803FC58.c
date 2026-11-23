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

M2C_UNK sub_0804004C(void *, void *);               /* extern */
M2C_UNK sub_080400F4(void *, void *);               /* extern */

void sub_0803FC58(void *arg0) {
    s32 temp_r0_3;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r1;
    u8 temp_r4;
    void *var_r5;

    var_r5 = (void *)0x030023E0;
    temp_r1 = M2C_FIELD(arg0, u8 *, 0x24);
    if (0x80 & temp_r1) {
        var_r5 = (void *)0x03002430;
    }
    if (temp_r1 == 6) {
        *(u8 *)0x030009B4 += 1;
    }
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x27) - 1;
    M2C_FIELD(arg0, u8 *, 0x27) = temp_r0;
    temp_r4 = temp_r0;
    if (temp_r4 != 0) {
        temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x1F);
        if ((temp_r0_2 != 6) && (temp_r0_2 != 8)) {
            if (M2C_FIELD(var_r5, u8 *, 0x47) == 0) {
                return;
            }
            goto block_12;
        }
    } else {
        M2C_FIELD(arg0, u8 *, 0x27) = (u8) M2C_FIELD(arg0, u8 *, 0x28);
        temp_r0_3 = M2C_FIELD(arg0, u8 *, 0x26) + 2;
        if (temp_r0_3 >= (s32) M2C_FIELD(arg0, u8 *, 0x25)) {
            M2C_FIELD(arg0, u8 *, 0x26) = temp_r4;
        } else {
            M2C_FIELD(arg0, u8 *, 0x26) = (u8) temp_r0_3;
        }
block_12:
        if (0x80 & M2C_FIELD(arg0, u8 *, 0x21)) {
            sub_0804004C(var_r5, arg0);
            return;
        }
        sub_080400F4(var_r5, arg0);
    }
}
