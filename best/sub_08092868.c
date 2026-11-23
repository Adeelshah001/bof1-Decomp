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

M2C_UNK sub_080379D4(s32);                          /* extern */
u8 sub_080A07AC(s32, s32);                          /* extern */

void sub_08092868(void *arg0) {
    s16 var_r0;
    s32 temp_r2;
    u8 temp_r1;
    u8 temp_r5;

    temp_r5 = M2C_FIELD(arg0, u8 *, 0x55);
    temp_r1 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r1;
    if ((temp_r1 << 0x18) == 0) {
        sub_080379D4(0xF1);
        M2C_FIELD(arg0, u8 *, 0x4C) = (u8) (M2C_FIELD(arg0, u8 *, 0x4C) + 1);
        M2C_FIELD((void *)0x030023E0, s16 *, 2) = 0xF00;
        M2C_FIELD((void *)0x030023E0, s16 *, 6) = 0x2F00;
        return;
    }
    temp_r2 = 3 & temp_r1;
    switch (temp_r2) {                              /* irregular */
    case 0:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x54) <= 0x26U) {
            M2C_FIELD(arg0, u8 *, 0x55) = (u8) (M2C_FIELD(arg0, u8 *, 0x55) - 1);
        } else {
            M2C_FIELD(arg0, u8 *, 0x55) = (u8) (M2C_FIELD(arg0, u8 *, 0x55) + 1);
        }
        M2C_FIELD((void *)0x030023E0, s16 *, 2) = (s16) (sub_080A07AC(M2C_FIELD(arg0, u8 *, 0x55) * 8, 0xA) + 0xF00);
        return;
    case 1:
        var_r0 = temp_r5 + 0x2F00;
block_12:
        M2C_FIELD((void *)0x030023E0, s16 *, 6) = var_r0;
        return;
    case 2:
        M2C_FIELD((void *)0x030023E0, s16 *, 2) = (s16) (0xF00 - sub_080A07AC(temp_r5 * 8, 0xA));
        return;
    default:
        var_r0 = 0x2F00 - temp_r5;
        goto block_12;
    }
}
