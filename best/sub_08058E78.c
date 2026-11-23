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

M2C_UNK sub_08058F0C(s32);                          /* extern */
M2C_UNK sub_080590AC(s32);                          /* extern */
M2C_UNK sub_080A020C(s32 *, M2C_UNK *, s32);        /* extern */

void sub_08058E78(s32 arg0) {
    s32 sp0;
    s32 sp4;
    M2C_UNK sp14;
    s16 sp24;
    u16 temp_r1;
    u16 temp_r3;

    *(s8 *)0x0300242C = 0xFF;
    sub_08058F0C(arg0);
    sub_080590AC(arg0);
    sp24 = 0;
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp24;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x05000000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x81000011;
    temp_r3 = *(u16 *)0x030040E0;
    M2C_FIELD((void *)0x030045B0, s32 *, 0x20) = (s32) temp_r3;
    temp_r1 = *(u16 *)0x030023D4;
    M2C_FIELD((void *)0x030045B0, s32 *, 0x1C) = (s32) temp_r1;
    M2C_FIELD(&sp0, s16 *, 8) = 0x78;
    M2C_FIELD(&sp0, s16 *, 0xA) = 0x50;
    sp0 = temp_r1 << 8;
    sp4 = temp_r3 << 8;
    M2C_FIELD(&sp0, s16 *, 0x10) = 0;
    M2C_FIELD(&sp0, u16 *, 0xC) = (u16) M2C_FIELD((void *)0x030045B0, u16 *, 0x12);
    M2C_FIELD(&sp0, u16 *, 0xE) = (u16) M2C_FIELD((void *)0x030045B0, u16 *, 0x18);
    sub_080A020C(&sp0, &sp14, 1);
    M2C_FIELD((void *)0x030045B0, s32 *, 0x1C) = (s32) M2C_FIELD(&sp14, s32 *, 8);
    M2C_FIELD((void *)0x030045B0, s32 *, 0x20) = (s32) M2C_FIELD(&sp14, s32 *, 0xC);
}
