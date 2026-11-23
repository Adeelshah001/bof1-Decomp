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

M2C_UNK sub_080A020C(s32 *, M2C_UNK *, s32);        /* extern */

void sub_080376E4(void) {
    s32 sp0;
    s32 sp4;
    M2C_UNK sp14;

    *(u8 *)0x030045D5 &= 0x3F;
    sp0 = M2C_FIELD((void *)0x030045B0, s32 *, 0x1C);
    sp4 = M2C_FIELD((void *)0x030045B0, s32 *, 0x20);
    M2C_FIELD(&sp0, s16 *, 8) = 0x78;
    M2C_FIELD(&sp0, s16 *, 0xA) = 0x50;
    M2C_FIELD(&sp0, s16 *, 0xC) = 0x100;
    M2C_FIELD(&sp0, s16 *, 0xE) = 0x100;
    M2C_FIELD(&sp0, s16 *, 0x10) = (s16) ((((*(u8 *)0x030045D5 * 4) ^ 0xFF) + 1) << 8);
    sub_080A020C(&sp0, &sp14, 1);
    M2C_FIELD((void *)0x030045B0, s32 *, 0x1C) = (s32) M2C_FIELD(&sp14, s32 *, 8);
    M2C_FIELD((void *)0x030045B0, s32 *, 0x20) = (s32) M2C_FIELD(&sp14, s32 *, 0xC);
    M2C_FIELD((void *)0x030045B0, u16 *, 0x12) = (u16) M2C_FIELD(&sp14, u16 *, 0);
    M2C_FIELD((void *)0x030045B0, u16 *, 0x18) = (u16) M2C_FIELD(&sp14, u16 *, 6);
    M2C_FIELD((void *)0x030045B0, u16 *, 0x14) = (u16) M2C_FIELD(&sp14, u16 *, 2);
    M2C_FIELD((void *)0x030045B0, u16 *, 0x16) = (u16) M2C_FIELD(&sp14, u16 *, 4);
}
