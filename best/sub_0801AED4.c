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

M2C_UNK sub_08030AD8(s32);                          /* extern */
M2C_UNK sub_0803AF58(s32, s32);                     /* extern */
M2C_UNK sub_08072CC4(s32);                          /* extern */

void sub_0801AED4(void) {
    u8 temp_r0;

    sub_08072CC4(0x561F);
    *(s8 *)0x03001698 = 8;
    *(s8 *)0x03001674 = 8;
    *(s8 *)0x0300166C = 0x20;
    *(s8 *)0x030016A4 = 0x20;
    temp_r0 = *(u8 *)0x03004584;
    if (temp_r0 == 0) {
        *(u8 *)0x0300485D = temp_r0;
        sub_08030AD8(0x28);
        sub_0803AF58(0x118, 0xFFFF);
        *(u8 *)0x0300485B += 1;
    }
}
