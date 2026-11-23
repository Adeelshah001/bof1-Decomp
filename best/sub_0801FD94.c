/* machine draft (m2c) for agbcc -O2, tried by autopilot */
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
M2C_UNK sub_08005274(s32);                          /* extern */
M2C_UNK sub_080446F4();                             /* extern */
M2C_UNK sub_08048228();                             /* extern */

void sub_0801FD94(void) {
    u16 temp_r1;

    if (*(u16 *)0x03000854 == 0x708) {
        sub_080446F4();
        sub_08048228();
        sub_08005274(0xA);
    }
    temp_r1 = *(u16 *)0x03000854 - 1;
    *(u16 *)0x03000854 = temp_r1;
    if ((*(u8 *)0x030023DC != 1) && ((temp_r1 << 0x10) == 0)) {
        *(s16 *)0x030033D4 = 0xFFF8;
        sub_0800312C(0x10, 0);
        sub_08001F80(0, 0, 0);
        *(u8 *)0x0300485B += 1;
    }
}
