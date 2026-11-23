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
M2C_UNK sub_0803ADA8(s32);                          /* extern */

void sub_08017100(void) {
    sub_0800312C(0x10, 6);
    sub_08001F80(6, 0, 0);
    *(s16 *)0x03001864 = 0x10;
    *(s32 *)0x03001694 |= 0x80;
    *(s16 *)0x03001644 = 0;
    M2C_FIELD((void *)0x02020FC0, s8 *, 0) = 0xFF;
    M2C_FIELD((void *)0x02020FC0, s8 *, 1) = -1;
    M2C_FIELD((void *)0x020211C0, s8 *, 0) = -1;
    M2C_FIELD((void *)0x020211C0, s8 *, 1) = -1;
    *(s32 *)0x03002C5C += 1;
    sub_0803ADA8(0x12);
    *(u8 *)0x0300485B += 1;
}
