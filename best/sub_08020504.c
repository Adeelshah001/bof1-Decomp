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

M2C_UNK sub_0802028C();                             /* extern */
M2C_UNK sub_0805B7B8(s32);                          /* extern */

void sub_08020504(void) {
    u16 temp_r2;
    u16 temp_r2_2;
    u8 temp_r1;

    sub_0802028C();
    temp_r2 = *(u16 *)0x030046D8;
    temp_r1 = (u8) (temp_r2 >> 4);
    *(s16 *)0x030016A8 = (u16) ((0x10 - temp_r1) << 8) | temp_r1;
    temp_r2_2 = temp_r2 + 1;
    *(u16 *)0x030046D8 = temp_r2_2;
    *(s8 *)0x03000858 = 1;
    if ((u32) (temp_r2_2 << 0x10) > 0x010F0000U) {
        *(s16 *)0x0300168C = 0xBF;
        *(s16 *)0x03001644 = 0x10;
        sub_0805B7B8(0x1000);
        sub_0805B7B8(0x800);
        *(s8 *)0x03000858 = 0;
        *(s8 *)0x0300485C = 6;
        *(u8 *)0x0300485B += 1;
    }
}
