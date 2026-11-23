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
M2C_UNK sub_080772B8(void *);                       /* extern */
M2C_UNK sub_0807B27C(void *);                       /* extern */

void sub_08077360(void *arg0) {
    u16 temp_r1_2;
    u16 temp_r1_3;
    u8 temp_r0;
    u8 temp_r1;

    if (M2C_FIELD(arg0, u8 *, 0x50) != 0) {
        temp_r0 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
        M2C_FIELD(arg0, u8 *, 0x54) = temp_r0;
        temp_r1 = temp_r0;
        if (temp_r1 == 0) {
            M2C_FIELD(arg0, u8 *, 0x4D) = temp_r1;
            M2C_FIELD(arg0, u8 *, 0x50) = temp_r1;
            *(u8 *)0x03004FAD = temp_r1;
        }
        sub_080772B8(arg0);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x54) = 4U;
    M2C_FIELD(arg0, u8 *, 0x50) = (u8) (M2C_FIELD(arg0, u8 *, 0x50) + 1);
    temp_r1_2 = M2C_FIELD(arg0, u16 *, 2);
    M2C_FIELD(arg0, u16 *, 0xE4) = temp_r1_2;
    M2C_FIELD(arg0, u16 *, 2) = (u16) (temp_r1_2 + 8);
    temp_r1_3 = M2C_FIELD(arg0, u16 *, 6);
    M2C_FIELD(arg0, u16 *, 0xE6) = temp_r1_3;
    M2C_FIELD(arg0, u16 *, 6) = (u16) (temp_r1_3 + 8);
    if (!(0x40 & M2C_FIELD(arg0, u8 *, 0xDC)) && !(2 & M2C_FIELD(arg0, u8 *, 0xDD))) {
        sub_0807B27C(arg0);
    }
    if (0x80 & M2C_FIELD(arg0, u8 *, 0xF1)) {
        M2C_FIELD(arg0, s8 *, 0x2C) = 0;
    } else {
        M2C_FIELD(arg0, s8 *, 0x2C) = (s16) (M2C_FIELD(arg0, u16 *, 6) + 0x18);
    }
    if ((u32) (u16) (*(u16 *)0x03001864 - 0x10) > 1U) {
        sub_0803A8EC(arg0);
    }
}
