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

M2C_UNK sub_080017EC(s32);                          /* extern */
M2C_UNK sub_080A020C(s32 *, M2C_UNK *, s32);        /* extern */
M2C_UNK sub_080A0A68(s32, s32, s32);                /* extern */

void sub_08016BF0(void) {
    s32 sp0;
    s32 sp4;
    M2C_UNK sp14;
    s16 temp_r0_2;
    s16 temp_r1_2;
    u16 temp_r0_3;
    u16 temp_r0_4;
    u16 temp_r4;
    u16 temp_r6;
    u32 temp_r1;
    u32 temp_r1_3;
    u32 temp_r1_4;
    u32 temp_r2;
    u8 temp_r0;
    void *temp_r2_2;
    void *temp_r3;
    void *temp_r5;

    *(s8 *)0x0300242C = 0xFF;
    temp_r0 = *(u8 *)0x0300485C - 1;
    *(u8 *)0x0300485C = temp_r0;
    if ((temp_r0 << 0x18) != 0) {
        *(s8 *)0x03001698 = 0;
        temp_r2 = (M2C_FIELD((void *)0x03002AB0, u16 *, 6) - *(u8 *)0x0300166C) & 0xFFF0;
        M2C_FIELD((void *)0x030045B0, u32 *, 0x20) = temp_r2;
        temp_r1 = 0xFFF0 & M2C_FIELD((void *)0x03002AB0, u16 *, 2);
        M2C_FIELD((void *)0x030045B0, u32 *, 0x1C) = temp_r1;
        temp_r6 = M2C_FIELD((void *)0x030045B0, u16 *, 0x12) - 1;
        M2C_FIELD((void *)0x030045B0, u16 *, 0x12) = temp_r6;
        temp_r4 = M2C_FIELD((void *)0x030045B0, u16 *, 0x18) - 1;
        M2C_FIELD((void *)0x030045B0, u16 *, 0x18) = temp_r4;
        M2C_FIELD(&sp0, s16 *, 8) = 0x70;
        M2C_FIELD(&sp0, s16 *, 0xA) = 0x4C;
        sp0 = temp_r1 << 8;
        sp4 = temp_r2 << 8;
        M2C_FIELD(&sp0, u16 *, 0xC) = temp_r6;
        M2C_FIELD(&sp0, u16 *, 0xE) = temp_r4;
        M2C_FIELD(&sp0, s16 *, 0x10) = 0;
        sub_080A020C(&sp0, &sp14, 1);
        M2C_FIELD((void *)0x030045B0, u32 *, 0x1C) = (u32) M2C_FIELD(&sp14, u32 *, 8);
        M2C_FIELD((void *)0x030045B0, u32 *, 0x20) = (u32) M2C_FIELD(&sp14, u32 *, 0xC);
        return;
    }
    sub_080017EC(0xA0);
    sub_080A0A68(0x03004450, 0x03002AB0, 0x44);
    *(s32 *)0x0300458C = 0x03004450;
    sub_080A0A68(0x03004700, 0x030023E0, 0x50);
    *(s32 *)0x03004880 = 0x03004700;
    temp_r1_2 = ((0xFFF0 & M2C_FIELD((void *)0x03002AB0, u16 *, 2)) * 4) ^ 8;
    M2C_FIELD((void *)0x03004450, s16 *, 2) = temp_r1_2;
    *(s16 *)0x030023D4 = temp_r1_2;
    temp_r0_2 = ((0xFFF0 & M2C_FIELD((void *)0x03002AB0, u16 *, 6)) * 4) ^ 0xC;
    M2C_FIELD((void *)0x03004450, s16 *, 6) = temp_r0_2;
    *(s16 *)0x030040E0 = temp_r0_2;
    M2C_FIELD((void *)0x03004700, s16 *, 2) = (s16) (temp_r1_2 - 0x80);
    M2C_FIELD((void *)0x03004700, s16 *, 6) = (s16) (temp_r0_2 - 0x78);
    temp_r1_3 = M2C_FIELD((void *)0x030045B0, u32 *, 0x1C);
    temp_r0_3 = (temp_r1_3 >> 8) + 0x80;
    M2C_FIELD((void *)0x03002AB0, u16 *, 2) = temp_r0_3;
    temp_r5 = (void *)0x03002AB0 + 0x124;
    M2C_FIELD(temp_r5, u16 *, 2) = temp_r0_3;
    temp_r3 = (void *)0x03002AB0 + 0x248;
    M2C_FIELD(temp_r3, u16 *, 2) = temp_r0_3;
    temp_r2_2 = (void *)0x03002AB0 + 0x36C;
    M2C_FIELD(temp_r2_2, u16 *, 2) = temp_r0_3;
    M2C_FIELD((void *)0x030023E0, s32 *, 0) = (s32) (temp_r1_3 << 8);
    temp_r1_4 = M2C_FIELD((void *)0x030045B0, u32 *, 0x20);
    temp_r0_4 = (temp_r1_4 >> 8) + 0x78;
    *(u16 *)0x0300413C = temp_r0_4;
    M2C_FIELD((void *)0x03002AB0, u16 *, 6) = temp_r0_4;
    M2C_FIELD(temp_r5, u16 *, 6) = temp_r0_4;
    M2C_FIELD(temp_r3, u16 *, 6) = temp_r0_4;
    M2C_FIELD(temp_r2_2, u16 *, 6) = temp_r0_4;
    M2C_FIELD((void *)0x030023E0, s32 *, 4) = (s32) (temp_r1_4 << 8);
    *(u8 *)0x0300485C = 0x3C;
    *(u8 *)0x0300485B += 1;
}
