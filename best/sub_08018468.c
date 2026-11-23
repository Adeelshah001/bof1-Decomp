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

M2C_UNK sub_08001F80(s32, s32, s32);                /* extern */
M2C_UNK sub_0800312C(s32, s32);                     /* extern */
M2C_UNK sub_0801850C();                             /* extern */
M2C_UNK sub_080379D4(s32);                          /* extern */
M2C_UNK sub_080A020C(s32 *, M2C_UNK *, s32);        /* extern */

void sub_08018468(void) {
    s32 sp0;
    s32 sp4;
    M2C_UNK sp14;
    s32 temp_r1;
    u8 temp_r0;
    u8 temp_r4;
    u8 temp_r6;

    temp_r0 = *(u8 *)0x03004160 + 1;
    *(u8 *)0x03004160 = temp_r0;
    if ((temp_r0 << 0x18) == 0) {
        sub_0801850C();
        return;
    }
    temp_r6 = *(u8 *)0x03004160;
    M2C_FIELD((void *)0x030045B0, s16 *, 0x12) = (s16) temp_r6;
    temp_r4 = *(u8 *)0x03004160;
    M2C_FIELD((void *)0x030045B0, s16 *, 0x18) = (s16) temp_r4;
    temp_r1 = (0x33 - *(u8 *)0x0300166C) & 0xFFF0;
    M2C_FIELD((void *)0x030045B0, s32 *, 0x20) = temp_r1;
    M2C_FIELD((void *)0x030045B0, s32 *, 0x1C) = 0xCA;
    M2C_FIELD(&sp0, s16 *, 8) = 0x78;
    M2C_FIELD(&sp0, s16 *, 0xA) = 0x4C;
    sp0 = 0xCA00;
    sp4 = temp_r1 << 8;
    M2C_FIELD(&sp0, s16 *, 0xC) = (s16) temp_r6;
    M2C_FIELD(&sp0, s16 *, 0xE) = (s16) temp_r4;
    M2C_FIELD(&sp0, s16 *, 0x10) = 0;
    sub_080A020C(&sp0, &sp14, 1);
    M2C_FIELD((void *)0x030045B0, s32 *, 0x1C) = (s32) M2C_FIELD(&sp14, s32 *, 8);
    M2C_FIELD((void *)0x030045B0, s32 *, 0x20) = (s32) M2C_FIELD(&sp14, s32 *, 0xC);
    if (*(u8 *)0x03004160 == 0x43) {
        sub_080379D4(0x24);
        sub_0800312C(0x10, 0x1C);
        sub_08001F80(0, 0, 0);
    }
}
