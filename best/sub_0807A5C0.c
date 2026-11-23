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

M2C_UNK sub_0803A8EC(void *);                       /* extern */
M2C_UNK sub_0807A4CC(void *);                       /* extern */

void sub_0807A5C0(void *arg0) {
    u8 temp_r1;
    u8 temp_r1_2;
    u8 temp_r2;
    u8 var_r1;

    M2C_FIELD(arg0, s8 *, 0x4C) = 2;
    sub_0807A4CC(arg0);
    temp_r1 = M2C_FIELD(arg0, u8 *, 0xF1);
    if (((0x60 & temp_r1) || ((u32) M2C_FIELD(arg0, u8 *, 0x51) <= 0xBU)) && ((0x10 & temp_r1) || ((u32) M2C_FIELD(arg0, u8 *, 0x51) <= 0xBU)) && ((0xC0 & M2C_FIELD(arg0, u8 *, 0xDC)) || ((u32) M2C_FIELD(arg0, u8 *, 0x51) <= 0xBU))) {
        temp_r1_2 = M2C_FIELD(arg0, u8 *, 0xF1);
        if (0x80 & temp_r1_2) {
            var_r1 = 2;
            goto block_10;
        }
        if (temp_r1_2 & 2) {
            var_r1 = 4;
block_10:
            M2C_FIELD(arg0, u8 *, 0x51) = var_r1;
        }
        temp_r2 = 0x10 & M2C_FIELD(arg0, u8 *, 0xF0);
        if (temp_r2 == 0) {
            if (0x80 & M2C_FIELD(arg0, u8 *, 0xF1)) {
                M2C_FIELD(arg0, u8 *, 0x2C) = temp_r2;
            } else {
                M2C_FIELD(arg0, u8 *, 0x2C) = (s16) (M2C_FIELD(arg0, u16 *, 6) + 0x18);
            }
            if ((u32) (u16) (*(u16 *)0x03001864 - 0x10) > 1U) {
                sub_0803A8EC(arg0);
            }
        }
    }
}
