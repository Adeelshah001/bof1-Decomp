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

M2C_UNK sub_080389B0(void *);                       /* extern */
M2C_UNK sub_080A0A68(M2C_UNK *, M2C_UNK *, s32);    /* extern */

void sub_08038390(void *arg0, void *arg1) {
    M2C_UNK sp0;
    M2C_UNK *temp_r4;
    M2C_UNK *temp_r5;
    s32 temp_r3;
    s32 temp_r3_10;
    s32 temp_r3_2;
    s32 var_r4;
    u16 temp_r3_9;
    u8 *temp_r1_6;
    u8 *var_r2;
    u8 temp_r3_3;
    u8 temp_r3_4;
    u8 temp_r3_5;
    u8 temp_r3_6;
    u8 temp_r3_7;
    u8 temp_r3_8;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;
    void *temp_r1_4;
    void *temp_r1_5;
    void *temp_r2;
    void *temp_r2_2;
    void *temp_r2_3;
    void *temp_r2_4;
    void *temp_r2_5;

    temp_r5 = arg0 + 0xE8;
    sub_080A0A68(&sp0, temp_r5, 0x3C);
    temp_r4 = arg1 + 0xE8;
    sub_080A0A68(temp_r5, temp_r4, 0x3C);
    sub_080A0A68(temp_r4, &sp0, 0x3C);
    temp_r2 = arg0 + 0xD0;
    temp_r3 = M2C_FIELD(arg0, s32 *, 0xD0);
    temp_r1 = arg1 + 0xD0;
    M2C_FIELD(arg0, s32 *, 0xD0) = (s32) M2C_FIELD(arg1, s32 *, 0xD0);
    M2C_FIELD(arg1, s32 *, 0xD0) = temp_r3;
    temp_r2_2 = temp_r2 + 4;
    temp_r3_2 = M2C_FIELD(temp_r2, s32 *, 4);
    temp_r1_2 = temp_r1 + 4;
    M2C_FIELD(temp_r2, s32 *, 4) = (s32) M2C_FIELD(temp_r1, s32 *, 4);
    M2C_FIELD(temp_r1, s32 *, 4) = temp_r3_2;
    temp_r2_3 = temp_r2_2 + 4;
    temp_r3_3 = M2C_FIELD(temp_r2_2, u8 *, 4);
    temp_r1_3 = temp_r1_2 + 4;
    M2C_FIELD(temp_r2_2, u8 *, 4) = (u8) M2C_FIELD(temp_r1_2, u8 *, 4);
    M2C_FIELD(temp_r1_2, u8 *, 4) = temp_r3_3;
    temp_r2_4 = temp_r2_3 + 1;
    temp_r3_4 = M2C_FIELD(temp_r2_3, u8 *, 1);
    temp_r1_4 = temp_r1_3 + 1;
    M2C_FIELD(temp_r2_3, u8 *, 1) = (u8) M2C_FIELD(temp_r1_3, u8 *, 1);
    M2C_FIELD(temp_r1_3, u8 *, 1) = temp_r3_4;
    temp_r2_5 = temp_r2_4 + 1;
    temp_r3_5 = M2C_FIELD(temp_r2_4, u8 *, 1);
    temp_r1_5 = temp_r1_4 + 1;
    M2C_FIELD(temp_r2_4, u8 *, 1) = (u8) M2C_FIELD(temp_r1_4, u8 *, 1);
    M2C_FIELD(temp_r1_4, u8 *, 1) = temp_r3_5;
    temp_r3_6 = M2C_FIELD(temp_r2_5, u8 *, 1);
    M2C_FIELD(temp_r2_5, u8 *, 1) = (u8) M2C_FIELD(temp_r1_5, u8 *, 1);
    M2C_FIELD(temp_r1_5, u8 *, 1) = temp_r3_6;
    var_r4 = 0;
    var_r2 = temp_r2_5 + 1 + 1;
    do {
        temp_r3_7 = *var_r2;
        temp_r1_6 = arg1 + 0xDC + var_r4;
        *var_r2 = *temp_r1_6;
        *temp_r1_6 = temp_r3_7;
        var_r2 += 1;
        var_r4 += 1;
    } while (var_r4 <= 3);
    temp_r3_8 = M2C_FIELD(arg0, u8 *, 0x3C);
    M2C_FIELD(arg0, u8 *, 0x3C) = (u8) M2C_FIELD(arg1, u8 *, 0x3C);
    M2C_FIELD(arg1, u8 *, 0x3C) = temp_r3_8;
    temp_r3_9 = M2C_FIELD(arg0, u16 *, 0x2A);
    M2C_FIELD(arg0, u16 *, 0x2A) = (u16) M2C_FIELD(arg1, u16 *, 0x2A);
    M2C_FIELD(arg1, u16 *, 0x2A) = temp_r3_9;
    temp_r3_10 = M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg1, s32 *, 0x18) = temp_r3_10;
    sub_080389B0(arg0);
    sub_080389B0(arg1);
}
