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

u16 sub_08081AF0(void *, void *);                   /* extern */
M2C_UNK sub_08081B54(void *, u16);                  /* extern */

void sub_08081A68(void *arg0, u16 arg1) {
    u16 var_r1;
    u8 temp_r0;
    u8 temp_r2;
    u8 temp_r2_2;
    void *var_r5;
    void *var_r6;

    var_r1 = arg1;
    M2C_FIELD(arg0, s8 *, 0xC) = 8;
    M2C_FIELD(arg0, s8 *, 0xD) = 4;
    M2C_FIELD(arg0, u8 *, 8) = (u8) ((u8) M2C_FIELD(arg0, u8 *, 0x5F) >> 4);
    var_r5 = (void *)0x03003420;
    if (0x03003420U < 0x03003F88U) {
        var_r6 = (void *)0x0300345A;
loop_2:
        if (M2C_FIELD(var_r6, u8 *, 0) != 0) {
            temp_r2 = M2C_FIELD(var_r5, u8 *, 0xF1);
            if (0x80 & temp_r2) {
                M2C_FIELD(var_r5, u8 *, 0xF1) = (u8) (temp_r2 | 8);
            }
            temp_r2_2 = M2C_FIELD(var_r6, u8 *, 2);
            if ((temp_r2_2 == 0x69) || (temp_r2_2 == 0x53) || (var_r1 = sub_08081AF0(arg0, var_r5), temp_r0 = M2C_FIELD(arg0, u8 *, 8) - 1, M2C_FIELD(arg0, u8 *, 8) = temp_r0, ((temp_r0 << 0x18) != 0))) {
                goto block_8;
            }
        } else {
block_8:
            var_r6 += 0x124;
            var_r5 += 0x124;
            if ((u32) var_r5 < 0x03003F88U) {
                goto loop_2;
            }
        }
    }
    sub_08081B54(arg0, var_r1);
}
