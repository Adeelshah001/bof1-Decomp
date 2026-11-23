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
M2C_UNK sub_0800518C(s32, s32, s32);                /* extern */
M2C_UNK sub_08010228();                             /* extern */
M2C_UNK sub_080379D4(s32);                          /* extern */

void sub_0801EBD8(void) {
    s32 sp0;

    if (*(u8 *)0x030023DC != 1) {
        sub_080379D4(0xF0);
        *(u8 *)0x03003418 |= 0x40;
        sp0 = 0;
        M2C_FIELD((void *)0x040000D4, s32 **, 0) = &sp0;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06000000;
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x85006000;
        sub_0800312C(0x10, 8);
        sub_08001F80(0, 0, 0);
        *(u8 *)0x03002B68 |= 8;
        sub_0800518C(0, 0xB28, 0x3CC);
        sub_08010228();
    }
}
