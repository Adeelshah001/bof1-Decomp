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

M2C_UNK sub_080379D4(s32);                          /* extern */

void sub_08017F6C(void) {
    M2C_FIELD((void *)0x03002AB0, s16 *, 6) = 0xCD9C;
    M2C_FIELD(((void *)0x03002AB0 + 0x124), s16 *, 6) = 0xCD8C;
    M2C_FIELD((void *)0x03002AB0, s16 *, 0x54) = 0x740;
    M2C_FIELD((void *)0x03002AB0, s16 *, 0x178) = 0x748;
    M2C_FIELD((void *)0x03002AB0, u8 *, 0x41) = (u8) (M2C_FIELD((void *)0x03002AB0, u8 *, 0x41) | 0x30);
    M2C_FIELD((void *)0x03002AB0, u8 *, 0x165) = (u8) (0x30 | M2C_FIELD((void *)0x03002AB0, u8 *, 0x165));
    *(s8 *)0x03003F98 = 0x40;
    sub_080379D4(0x20);
    *(u8 *)0x0300485B += 1;
}
