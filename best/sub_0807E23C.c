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
M2C_UNK sub_0803EE88(void *);                       /* extern */
M2C_UNK sub_080A0A68(u8 *, s32, s32);               /* extern */
M2C_UNK sub_080A0AC8(M2C_UNK *, s32, s32);          /* extern */

void sub_0807E23C(void) {
    M2C_UNK sp0;
    u8 sp4;

    M2C_FIELD((void *)0x03002BD4, s16 *, 6) = 0xF5EC;
    M2C_FIELD(((void *)0x03002BD4 + 0x124), s16 *, 6) = 0xF5FC;
    M2C_FIELD(((void *)0x03002BD4 + 0x248), s16 *, 6) = 0xF60C;
    M2C_FIELD((void *)0x03003420, s16 *, 2) = 0x16B8;
    M2C_FIELD((void *)0x03003420, s16 *, 0x46) = 0x16B8;
    M2C_FIELD((void *)0x03003420, s16 *, 6) = 0xF5FC;
    M2C_FIELD((void *)0x03003420, s16 *, 0x4A) = 0xF5FC;
    sub_0803EE88((void *)0x03003420 + 0x280);
    sub_0803EE88((void *)0x03003420 + 0x300);
    sub_0803EE88((void *)0x03003420 + 0x380);
    sub_080A0AC8(&sp0, 0, 4);
    M2C_FIELD(&sp0, s8 *, 1) = 1;
    sub_080A0A68(&sp4, 0x080A6870, 4);
    M2C_FIELD((void *)0x03003420, u8 *, 0x1C0) = (u8) M2C_FIELD(&sp0, u8 *, 0);
    sub_08037FC4((void *)0x03003420 + 0x180, sp4);
}
