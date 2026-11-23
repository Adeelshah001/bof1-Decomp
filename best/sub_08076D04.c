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
M2C_UNK sub_0807B27C(void *);                       /* extern */

void sub_08076D04(void *arg0) {
    u16 temp_r1_2;
    u8 temp_r1;
    u8 temp_r1_3;

    temp_r1 = ((u32) (M2C_FIELD(arg0, s32 *, 0x44) << 8) >> 0x10) + (M2C_FIELD(arg0, u8 *, 1) | (M2C_FIELD(arg0, u8 *, 2) << 8));
    M2C_FIELD(arg0, u8 *, 1) = temp_r1;
    M2C_FIELD(arg0, u8 *, 2) = (u8) (temp_r1 >> 8);
    temp_r1_2 = ((u32) (M2C_FIELD(arg0, s32 *, 0x48) << 8) >> 0x10) + (((u16) M2C_FIELD(arg0, u16 *, 0x14) >> 8) | (M2C_FIELD(arg0, u16 *, 0x16) << 8));
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) (temp_r1_2 << 8);
    temp_r1_3 = temp_r1_2 + (M2C_FIELD(arg0, u8 *, 5) | (M2C_FIELD(arg0, u8 *, 6) << 8));
    M2C_FIELD(arg0, u8 *, 5) = temp_r1_3;
    M2C_FIELD(arg0, u8 *, 6) = (u8) (temp_r1_3 >> 8);
    if ((u32) M2C_FIELD(arg0, u8 *, 6) >= (u32) M2C_FIELD(arg0, u8 *, 0xE6)) {
        M2C_FIELD(arg0, s8 *, 0x54) = 1;
    }
    if (!(0x40 & M2C_FIELD(arg0, u8 *, 0xDC)) && !(2 & M2C_FIELD(arg0, u8 *, 0xDD))) {
        sub_0807B27C(arg0);
    }
    if (0x80 & M2C_FIELD(arg0, u8 *, 0xF1)) {
        M2C_FIELD(arg0, s8 *, 0x2C) = 0;
    } else {
        M2C_FIELD(arg0, s8 *, 0x2C) = (s16) ((u16) M2C_FIELD(arg0, u8 *, 6) + 0x18);
    }
    if ((u32) (u16) (*(u16 *)0x03001864 - 0x10) > 1U) {
        sub_0803A8EC(arg0);
    }
}
