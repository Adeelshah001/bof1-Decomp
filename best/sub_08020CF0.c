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
M2C_UNK sub_08037A74(s32);                          /* extern */

void sub_08020CF0(void) {
    sub_08037A74(0x800);
    M2C_FIELD((void *)0x0300485C, s8 *, 0) = 0;
    M2C_FIELD((void *)0x0300485C, s8 *, 1) = 0;
    *(s16 *)0x03001644 = 0;
    if ((s32) (s8) *(u8 *)0x0300485A > 1) {
        if (*(u8 *)0x030023DC != 0xFF) {
            sub_0800312C(0x10, 0x28);
        }
        sub_08001F80(0, 0, 0);
        *(s16 *)0x03001644 = 0x10;
        *(s16 *)0x0300168C = 0xDF;
    }
    sub_0800518C(0x68, 0x80, 0x707C);
    *(s8 *)0x03001698 = 0;
}
