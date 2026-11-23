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
M2C_UNK sub_08033AF4(s32);                          /* extern */

void sub_0801282C(void) {
    *(s16 *)0x03001864 = 0;
    sub_08033AF4(0xC);
    *(u8 *)0x03002B68 |= 4;
    *(s16 *)0x0202DE60 = 0x156;
    M2C_FIELD((void *)0x0202DBD0, s16 *, 0x16) = 0xC68;
    M2C_FIELD((void *)0x0202DBD0, s16 *, 0x1A) = 0xA76C;
    M2C_FIELD((void *)0x0202DBD0, s8 *, 0x2B9) = 0;
    sub_0800312C(0x10, 0);
    sub_08001F80(0, 0, 0);
    *(s16 *)0x03001864 = 0x17;
    *(s8 *)0x0300485C = 0x80;
    *(u8 *)0x0300485B += 1;
}
