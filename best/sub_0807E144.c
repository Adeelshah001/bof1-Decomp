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

M2C_UNK sub_08037FC4(void *, u8);                   /* extern */
M2C_UNK sub_0803AF58(s32, s32);                     /* extern */
M2C_UNK sub_080A0A68(u8 *, s32, s32);               /* extern */
M2C_UNK sub_080A0AC8(M2C_UNK *, s32, s32);          /* extern */

void sub_0807E144(void) {
    M2C_UNK sp0;
    u8 sp4;

    M2C_FIELD((void *)0x030036A0, s16 *, 2) = 0xD98;
    M2C_FIELD((void *)0x030036A0, s16 *, 0x46) = 0xD98;
    M2C_FIELD((void *)0x030036A0, s16 *, 6) = 0xFD7C;
    M2C_FIELD((void *)0x030036A0, s16 *, 0x4A) = 0xFD7C;
    M2C_FIELD((void *)0x030036A0, s16 *, 0x2C) = 0xFD7C;
    M2C_FIELD((void *)0x030036A0, s16 *, 0x102) = 0xD88;
    M2C_FIELD((void *)0x030036A0, s16 *, 0x106) = 0xFD7C;
    M2C_FIELD((void *)0x03002BD4, s16 *, 2) = 0xDA8;
    M2C_FIELD((void *)0x03002BD4, s16 *, 6) = 0xFD9C;
    *(s8 *)0x03002B11 = 2;
    M2C_FIELD((void *)0x03002BD4, s8 *, 0x61) = 2;
    sub_080A0AC8(&sp0, 0, 4);
    M2C_FIELD(&sp0, s8 *, 1) = 1;
    sub_080A0A68(&sp4, 0x080A6870, 4);
    M2C_FIELD((void *)0x030036A0, u8 *, 0xC0) = (u8) M2C_FIELD(&sp0, u8 *, 0);
    sub_08037FC4((void *)0x030036A0 + 0x80, sp4);
    sub_0803AF58(0x62, 0xFFFF);
    sub_0803AF58(0x70, 0xFFFF);
}
