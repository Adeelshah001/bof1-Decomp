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

M2C_UNK sub_0805AE70(s32, u32, M2C_UNK *);          /* extern */
M2C_UNK sub_0805D5E4(u16, M2C_UNK *, s32);          /* extern */

void sub_080641BC(void) {
    M2C_UNK sp0;
    s16 *var_r1;
    s32 temp_r1_10;
    s32 temp_r1_12;
    s32 temp_r1_2;
    s32 temp_r1_4;
    s32 temp_r1_6;
    s32 temp_r1_8;
    u16 temp_r0;
    u16 temp_r1;
    u16 temp_r1_11;
    u16 temp_r1_3;
    u16 temp_r1_5;
    u16 temp_r1_7;
    u16 temp_r1_9;
    u16 temp_r2;
    u32 var_r4;
    u32 var_r4_2;
    u32 var_r4_3;
    u32 var_r4_4;
    u32 var_r4_5;
    u32 var_r4_6;
    u8 temp_r3;
    u8 temp_r3_2;
    u8 temp_r3_3;
    u8 temp_r3_4;
    void *temp_r6;

    var_r1 = (s16 *)0x0201A298;
    do {
        *var_r1 = 0x23B;
        var_r1 -= 0x40;
    } while ((s32) var_r1 >= 0x0201A158);
    temp_r6 = (*(u8 *)0x030046E4 * 0x124) + 0x03002AB0;
    temp_r0 = M2C_FIELD(temp_r6, u16 *, 0x106);
    temp_r1 = *(u16 *)0x03000F00;
    var_r4 = 2;
    if ((u32) temp_r0 <= (u32) temp_r1) {
        temp_r1_2 = temp_r1 ^ temp_r0;
        var_r4 = (u32) ((0 - temp_r1_2) | temp_r1_2) >> 0x1F;
    }
    sub_0805D5E4(M2C_FIELD(temp_r6, u16 *, 0x106), &sp0, 3);
    M2C_FIELD(&sp0, s8 *, 3) = 0;
    sub_0805AE70(0xCD, var_r4, &sp0);
    temp_r2 = M2C_FIELD(temp_r6, u16 *, 0x108);
    temp_r1_3 = *(u16 *)0x03000F02;
    var_r4_2 = 2;
    if ((u32) temp_r2 <= (u32) temp_r1_3) {
        temp_r1_4 = temp_r1_3 ^ temp_r2;
        var_r4_2 = (u32) ((0 - temp_r1_4) | temp_r1_4) >> 0x1F;
    }
    sub_0805D5E4(M2C_FIELD(temp_r6, u16 *, 0x108), &sp0, 3);
    M2C_FIELD(&sp0, s8 *, 3) = 0;
    sub_0805AE70(0xED, var_r4_2, &sp0);
    temp_r3 = M2C_FIELD(temp_r6, u8 *, 0x10B);
    temp_r1_5 = *(u16 *)0x03000F04;
    var_r4_3 = 2;
    if ((u32) temp_r3 <= (u32) temp_r1_5) {
        temp_r1_6 = temp_r1_5 ^ temp_r3;
        var_r4_3 = (u32) ((0 - temp_r1_6) | temp_r1_6) >> 0x1F;
    }
    sub_0805D5E4((u16) temp_r3, &sp0, 3);
    M2C_FIELD(&sp0, s8 *, 3) = 0;
    sub_0805AE70(0x10D, var_r4_3, &sp0);
    temp_r3_2 = M2C_FIELD(temp_r6, u8 *, 0x10A);
    temp_r1_7 = *(u16 *)0x03000F06;
    var_r4_4 = 2;
    if ((u32) temp_r3_2 <= (u32) temp_r1_7) {
        temp_r1_8 = temp_r1_7 ^ temp_r3_2;
        var_r4_4 = (u32) ((0 - temp_r1_8) | temp_r1_8) >> 0x1F;
    }
    sub_0805D5E4((u16) temp_r3_2, &sp0, 3);
    M2C_FIELD(&sp0, s8 *, 3) = 0;
    sub_0805AE70(0x12D, var_r4_4, &sp0);
    temp_r3_3 = M2C_FIELD(temp_r6, u8 *, 0x10C);
    temp_r1_9 = *(u16 *)0x03000F08;
    var_r4_5 = 2;
    if ((u32) temp_r3_3 <= (u32) temp_r1_9) {
        temp_r1_10 = temp_r1_9 ^ temp_r3_3;
        var_r4_5 = (u32) ((0 - temp_r1_10) | temp_r1_10) >> 0x1F;
    }
    sub_0805D5E4((u16) temp_r3_3, &sp0, 3);
    M2C_FIELD(&sp0, s8 *, 3) = 0;
    sub_0805AE70(0x14D, var_r4_5, &sp0);
    temp_r3_4 = M2C_FIELD(temp_r6, u8 *, 0x104);
    temp_r1_11 = *(u16 *)0x03000F0A;
    var_r4_6 = 2;
    if ((u32) temp_r3_4 <= (u32) temp_r1_11) {
        temp_r1_12 = temp_r1_11 ^ temp_r3_4;
        var_r4_6 = (u32) ((0 - temp_r1_12) | temp_r1_12) >> 0x1F;
    }
    sub_0805D5E4((u16) temp_r3_4, &sp0, 3);
    M2C_FIELD(&sp0, s8 *, 3) = 0;
    sub_0805AE70(0x16D, var_r4_6, &sp0);
}
