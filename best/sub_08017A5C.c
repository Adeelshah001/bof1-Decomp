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

M2C_UNK sub_080030D4();                             /* extern */
M2C_UNK sub_0800518C(s32, s32, s32);                /* extern */
M2C_UNK sub_0801A01C(s32);                          /* extern */
M2C_UNK sub_08030BB0(s32, s32);                     /* extern */
M2C_UNK sub_08033AF4(s32);                          /* extern */

void sub_08017A5C(void) {
    u8 temp_r0;

    sub_0801A01C(0x03003420);
    sub_0801A01C(0x030034A0);
    sub_0801A01C(0x03003520);
    sub_0801A01C(0x030035A0);
    temp_r0 = *(u8 *)0x0300485C - 1;
    *(u8 *)0x0300485C = temp_r0;
    if ((temp_r0 << 0x18) == 0) {
        sub_08033AF4(0x15);
        sub_0800518C(0, 0x318, 0xE6C);
        sub_080030D4();
        sub_08030BB0(0x03002AB0, 0x74);
        *(u8 *)0x03002B68 = (*(u8 *)0x03002B68 | 0x80) & 0xF7;
        *(u8 *)0x03002C8C &= 0xF7;
        *(u8 *)0x03002DB0 &= 0xF7;
        *(u8 *)0x03002ED4 &= 0xF7;
        *(u8 *)0x0300485B += 1;
    }
}
