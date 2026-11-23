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

M2C_UNK sub_0800518C(s32, s32, s32);                /* extern */
M2C_UNK sub_08030AD8(s32);                          /* extern */
M2C_UNK sub_08033AF4(s32);                          /* extern */

void sub_08017E8C(void) {
    u8 temp_r0;
    void *temp_r1;
    void *temp_r1_2;

    M2C_FIELD((void *)0x03003420, u16 *, 6) = (u16) (M2C_FIELD((void *)0x03003420, u16 *, 6) + 2);
    temp_r1 = (void *)0x03003420 + 0x80;
    M2C_FIELD(temp_r1, u16 *, 6) = (u16) (M2C_FIELD(temp_r1, u16 *, 6) + 2);
    M2C_FIELD((void *)0x03003420, u16 *, 0x106) = (u16) (M2C_FIELD((void *)0x03003420, u16 *, 0x106) + 2);
    temp_r1_2 = (void *)0x03003420 + 0x180;
    M2C_FIELD(temp_r1_2, u16 *, 6) = (u16) (M2C_FIELD(temp_r1_2, u16 *, 6) + 2);
    temp_r0 = *(u8 *)0x0300485C - 1;
    *(u8 *)0x0300485C = temp_r0;
    if ((temp_r0 << 0x18) == 0) {
        sub_08033AF4(0x16);
        sub_0800518C(0x182, 0x768, 0xFFFFCE1C);
        *(s8 *)0x03001698 = 8;
        *(s8 *)0x03001674 = 8;
        *(s8 *)0x0300166C = 0x20;
        *(s8 *)0x030016A4 = 0x20;
        sub_08030AD8(0x88);
        *(u8 *)0x03002B68 = (*(u8 *)0x03002B68 | 0x80) & 0xF7;
        *(u8 *)0x03002C8C &= 0xF7;
        *(u8 *)0x03002DB0 &= 0xF7;
        *(u8 *)0x03002ED4 &= 0xF7;
        *(u8 *)0x0300485B += 1;
    }
}
