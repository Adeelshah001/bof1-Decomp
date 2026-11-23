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
M2C_UNK sub_08075F30(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_0807B27C(void *);                       /* extern */
M2C_UNK sub_08083300(void *, s32);                  /* extern */

void sub_08075FA4(void *arg0) {
    s32 temp_r1;
    s32 var_r3;
    s8 *temp_r0;
    s8 var_r1;
    u8 temp_r2;
    void *temp_r1_2;
    void *var_r0;

    temp_r2 = 8 & M2C_FIELD(arg0, u8 *, 0xF0);
    if (temp_r2 != 0) {
        temp_r1 = 0xF0 & M2C_FIELD(arg0, u8 *, 0xE2);
        if (temp_r1 == 0x70) {
            M2C_FIELD(arg0, u8 *, 0xD8) = 0x12U;
            var_r1 = 0x3C;
            goto block_3;
        }
        if (temp_r1 == 0x80) {
            M2C_FIELD(arg0, u8 *, 0xD8) = 0x14U;
            M2C_FIELD(arg0, s8 *, 0x61) = 0;
            temp_r0 = (arg0 + 0x61) - 0xC;
            var_r1 = 5;
            *temp_r0 = 5;
            var_r0 = temp_r0 - 1;
        } else {
            M2C_FIELD(arg0, u8 *, 0xD8) = 0xCU;
            var_r1 = 0xFF;
block_3:
            var_r0 = arg0 + 0x54;
        }
        M2C_FIELD(var_r0, s8 *, 0) = var_r1;
        if (!(0x40 & M2C_FIELD(var_r0, u8 *, 0x88)) && !(2 & M2C_FIELD(arg0, u8 *, 0xDD))) {
            sub_0807B27C(arg0);
        }
        if (!(0x80 & M2C_FIELD(arg0, u8 *, 0xF1))) {
            goto block_20;
        }
        goto block_19;
        goto block_21;
    }
    if (M2C_FIELD(arg0, u8 *, 0xE3) == 0x10) {
        var_r3 = 0x38;
        M2C_FIELD(arg0, u8 *, 0xD8) = 0xEU;
        if ((0xF & *(u8 *)0x03004FAF) != 1) {
            M2C_FIELD(arg0, u8 *, 0xD8) = 0x16U;
            var_r3 = 0x4E;
        }
        sub_08083300(arg0, var_r3);
        temp_r1_2 = M2C_FIELD(arg0, void **, 0x74);
        M2C_FIELD(temp_r1_2, void **, 0x6C) = arg0;
        M2C_FIELD(temp_r1_2, u8 *, 0x41) = (u8) M2C_FIELD(arg0, u8 *, 0x41);
        M2C_FIELD(temp_r1_2, s8 *, 2) = (s8) (M2C_FIELD(arg0, u8 *, 2) - 0x10);
        M2C_FIELD(temp_r1_2, s8 *, 6) = (s8) (M2C_FIELD(arg0, u8 *, 6) - 0x10);
        M2C_FIELD(arg0, s8 *, 0x55) = 0x18;
        M2C_FIELD(arg0, s8 *, 0x54) = 0xFF;
        if (!(0x40 & M2C_FIELD((arg0 + 0x54), u8 *, 0x88)) && !(2 & M2C_FIELD(arg0, u8 *, 0xDD))) {
            sub_0807B27C(arg0);
        }
        if (0x80 & M2C_FIELD(arg0, u8 *, 0xF1)) {
block_19:
            M2C_FIELD(arg0, s8 *, 0x2C) = 0;
        } else {
block_20:
            M2C_FIELD(arg0, s8 *, 0x2C) = (s16) ((u16) M2C_FIELD(arg0, u8 *, 6) + 0x18);
        }
block_21:
        if ((u32) (u16) (*(u16 *)0x03001864 - 0x10) > 1U) {
            sub_0803A8EC(arg0);
        }
    } else {
        M2C_FIELD(arg0, u8 *, 0xD8) = temp_r2;
        sub_08075F30(arg0, 6, 0x18, 0x10);
    }
}
