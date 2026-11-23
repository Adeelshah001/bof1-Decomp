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
M2C_UNK sub_0800518C(s32, s32, s32);                /* extern */

void sub_0801717C(void) {
    sub_0800518C(0x1C5, 0xC68, 0xFFFFB19C);
    sub_08001F80(0, 0, 0);
    *(s8 *)0x03001698 = 8;
    *(s8 *)0x03001674 = 8;
    *(s8 *)0x0300166C = 0;
    *(s8 *)0x030016A4 = 0;
    M2C_FIELD((void *)0x02020FC0, s8 *, 0) = 0;
    M2C_FIELD((void *)0x02020FC0, s8 *, 1) = 0;
    M2C_FIELD((void *)0x020211C0, s8 *, 0) = 0;
    M2C_FIELD((void *)0x020211C0, s8 *, 1) = 0;
    *(s16 *)0x03001864 = 0x17;
    *(s32 *)0x03001694 &= ~0x80;
    *(u8 *)0x03002B68 |= 0x80;
    *(u8 *)0x0300485B += 1;
}
