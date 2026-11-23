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
u16 sub_08073ADC(u16, u16, s32);                    /* extern */

s32 sub_0806F528(void *arg0) {
    u16 temp_r0;
    u8 temp_r0_2;
    u8 temp_r1;
    u8 var_r0;
    void *temp_r1_2;

    temp_r0 = sub_08073ADC(*(u16 *)0x0300108C, *(u16 *)0x0300108A, 0x03000F30);
    switch (temp_r0) {                              /* irregular */
    case 32:
        temp_r0_2 = M2C_FIELD(arg0, u8 *, 0xC) - 1;
        M2C_FIELD(arg0, u8 *, 0xC) = temp_r0_2;
        if (temp_r0_2 & 0x80) {
            var_r0 = ((0xF & M2C_FIELD(arg0, u8 *, 0x61)) - M2C_FIELD(arg0, u8 *, 0x60)) - 1;
block_10:
            M2C_FIELD(arg0, u8 *, 0xC) = var_r0;
        }
block_11:
        sub_080379D4(1);
block_17:
    default:
        return 0;
    case 16:
        temp_r1 = M2C_FIELD(arg0, u8 *, 0xC) + 1;
        M2C_FIELD(arg0, u8 *, 0xC) = temp_r1;
        if ((s32) temp_r1 >= (s32) ((0xF & M2C_FIELD(arg0, u8 *, 0x61)) - M2C_FIELD(arg0, u8 *, 0x60))) {
            var_r0 = 0;
            goto block_10;
        }
        goto block_11;
    case 1:
        temp_r1_2 = (M2C_FIELD(arg0, u8 *, 0xC) * 0x124) + 0x03002F40;
        if ((M2C_FIELD(temp_r1_2, u8 *, 0x3A) == 0) || (0x8010 & M2C_FIELD(temp_r1_2, u16 *, 0xF0))) {
            sub_080379D4(3);
            goto block_17;
        }
        return 1;
    case 2:
        return 2;
    }
}
