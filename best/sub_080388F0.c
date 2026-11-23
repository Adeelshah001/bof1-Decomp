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

M2C_UNK sub_080A0A68(M2C_UNK *, M2C_UNK *, s32);    /* extern */

void sub_080388F0(void *arg0, void *arg1) {
    M2C_UNK sp0;
    s32 sp3C;
    M2C_UNK *temp_r5;
    M2C_UNK *temp_r6;
    s32 temp_r10;
    u16 temp_r9;

    temp_r6 = arg0 + 0xE8;
    sub_080A0A68(&sp0, temp_r6, 0x3C);
    temp_r10 = M2C_FIELD(arg0, s32 *, 0x18);
    temp_r9 = M2C_FIELD(arg0, u16 *, 0x2A);
    sp3C = (s32) M2C_FIELD(arg0, u8 *, 0x3C);
    temp_r5 = arg1 + 0xE8;
    sub_080A0A68(temp_r6, temp_r5, 0x3C);
    sub_080A0A68(temp_r5, &sp0, 0x3C);
    M2C_FIELD(arg0, u16 *, 0x2A) = (u16) M2C_FIELD(arg1, u16 *, 0x2A);
    M2C_FIELD(arg1, u16 *, 0x2A) = temp_r9;
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg1, s32 *, 0x18) = temp_r10;
    M2C_FIELD(arg0, u8 *, 0x3C) = (u8) M2C_FIELD(arg1, u8 *, 0x3C);
    M2C_FIELD(arg1, u8 *, 0x3C) = (u8) sp3C;
}
