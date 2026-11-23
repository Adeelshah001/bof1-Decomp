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

M2C_UNK sub_08000CD8();                             /* extern */
M2C_UNK sub_080030D4();                             /* extern */
M2C_UNK sub_0800312C(s32, s32);                     /* extern */
M2C_UNK sub_0800518C(s32, s32, s32);                /* extern */
M2C_UNK sub_0802FD60(s32);                          /* extern */
M2C_UNK sub_08033AF4(s32);                          /* extern */

void sub_08018140(void) {
    *(s16 *)0x03001864 = 0;
    *(s16 *)0x03001648 = 0;
    sub_08000CD8();
    sub_0800312C(0x10, 0x30);
    sub_0800518C(0, 0x688, 0xC5C);
    sub_080030D4();
    *(s8 *)0x03001698 = 8;
    *(s8 *)0x03001674 = 8;
    *(s8 *)0x0300166C = 0x20;
    *(s8 *)0x030016A4 = 0x20;
    *(u8 *)0x03002B68 = (0x80 | *(u8 *)0x03002B68) & 0xF7;
    *(u8 *)0x03002C8C &= 0xF7;
    *(u8 *)0x03002DB0 &= 0xF7;
    *(u8 *)0x03002ED4 &= 0xF7;
    sub_08033AF4(0x17);
    sub_0802FD60(0x90);
    *(u8 *)0x0300485B += 1;
}
