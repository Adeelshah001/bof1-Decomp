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

void *sub_0809568C(void *, s32);                    /* extern */
M2C_UNK sub_080960E8(void *);                       /* extern */

void sub_08091FE0(void *arg0) {
    u8 temp_r0;
    u8 temp_r0_2;
    void *temp_r2;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r0;
    if (!(temp_r0 & 0x80)) {
        sub_080960E8(arg0);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x54) = 4U;
    temp_r2 = sub_0809568C(arg0, 5);
    temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x55) - 1;
    M2C_FIELD(arg0, u8 *, 0x55) = temp_r0_2;
    if (temp_r0_2 & 0x80) {
        M2C_FIELD(arg0, s8 *, 0x4C) = 4;
        M2C_FIELD(arg0, s8 *, 0x4D) = 0;
        M2C_FIELD(arg0, void **, 0x6C) = temp_r2;
    }
    M2C_FIELD(temp_r2, s8 *, 0x55) = (s8) (M2C_FIELD(arg0, u8 *, 0x55) + 1);
    M2C_FIELD(temp_r2, void **, 0x6C) = arg0;
    M2C_FIELD(temp_r2, u16 *, 0x38) = (u16) M2C_FIELD(arg0, u16 *, 0x38);
    M2C_FIELD(temp_r2, s16 *, 2) = 0xFC0;
    M2C_FIELD(temp_r2, s16 *, 6) = 0x2F00;
    M2C_FIELD(temp_r2, s8 *, 0x61) = 0x17;
    M2C_FIELD(temp_r2, s8 *, 0x54) = 0;
    sub_080960E8(arg0);
}
