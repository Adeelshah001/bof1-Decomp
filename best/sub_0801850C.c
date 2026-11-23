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

M2C_UNK sub_08019DA0();                             /* extern */
M2C_UNK sub_080A0A68(s32, s32, s32);                /* extern */

void sub_0801850C(void) {
    s16 temp_r0;
    s16 temp_r0_2;
    u32 temp_r1;
    u32 temp_r1_2;
    void *temp_r2;
    void *temp_r3;
    void *temp_r5;

    M2C_FIELD((void *)0x030045B0, s16 *, 0x12) = 0x100;
    M2C_FIELD((void *)0x030045B0, s16 *, 0x18) = 0x100;
    *(u8 *)0x03002B68 &= 0xFB;
    sub_080A0A68(0x03002AB0, 0x03004450, 0x44);
    sub_080A0A68(0x03004450, 0x03002AB0, 0x44);
    *(s32 *)0x0300458C = 0x03004450;
    sub_080A0A68(0x03004700, 0x030023E0, 0x50);
    *(s32 *)0x03004880 = 0x03004700;
    M2C_FIELD((void *)0x03004450, s16 *, 2) = 0xC8;
    *(s16 *)0x030023D4 = 0xC8;
    M2C_FIELD((void *)0x03004450, s16 *, 6) = 0x3C;
    *(s16 *)0x030040E0 = 0x3C;
    M2C_FIELD((void *)0x03004700, s16 *, 2) = 0x48;
    M2C_FIELD((void *)0x03004700, s16 *, 6) = -0x3C;
    *(s16 *)0x03002488 = 0;
    temp_r1 = M2C_FIELD((void *)0x030045B0, u32 *, 0x1C);
    temp_r0 = (temp_r1 >> 8) + 0x80;
    M2C_FIELD((void *)0x03002AB0, s16 *, 2) = temp_r0;
    temp_r5 = (void *)0x03002AB0 + 0x124;
    M2C_FIELD(temp_r5, s16 *, 2) = temp_r0;
    temp_r3 = (void *)0x03002AB0 + 0x248;
    M2C_FIELD(temp_r3, s16 *, 2) = temp_r0;
    temp_r2 = (void *)0x03002AB0 + 0x36C;
    M2C_FIELD(temp_r2, s16 *, 2) = temp_r0;
    M2C_FIELD((void *)0x030023E0, s32 *, 0) = (s32) (temp_r1 << 8);
    temp_r1_2 = M2C_FIELD((void *)0x030045B0, u32 *, 0x20);
    temp_r0_2 = (temp_r1_2 >> 8) + 0x78;
    *(s16 *)0x0300413C = temp_r0_2;
    M2C_FIELD((void *)0x03002AB0, s16 *, 6) = temp_r0_2;
    M2C_FIELD(temp_r5, s16 *, 6) = temp_r0_2;
    M2C_FIELD(temp_r3, s16 *, 6) = temp_r0_2;
    M2C_FIELD(temp_r2, s16 *, 6) = temp_r0_2;
    M2C_FIELD((void *)0x030023E0, s32 *, 4) = (s32) (temp_r1_2 << 8);
    M2C_FIELD((void *)0x030023E0, s8 *, 0x4C) = 0;
    *(u8 *)0x030040E4 = (0xFD & *(u8 *)0x030040E4) | 0x40;
    sub_08019DA0();
}
