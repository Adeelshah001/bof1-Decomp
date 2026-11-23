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

M2C_UNK sub_0800312C(s32, s32);                     /* extern */
M2C_UNK sub_08023FD8(s32);                          /* extern */

void sub_0800F114(void) {
    s8 temp_r4;
    u8 temp_r0;

    temp_r0 = *(u8 *)0x0300485C - 1;
    *(u8 *)0x0300485C = temp_r0;
    temp_r4 = (s8) temp_r0;
    if (temp_r4 == 0) {
        sub_08023FD8(0x48);
        *(u16 *)0x030045F2 &= 0xFF00;
        sub_0800312C(0x10, 6);
        *(s16 *)0x03001648 = (s16) temp_r4;
        *(u8 *)0x03002B68 |= 4;
        *(u8 *)0x0300485B += 1;
    }
}
