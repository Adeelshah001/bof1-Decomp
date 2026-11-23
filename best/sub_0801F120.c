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
M2C_UNK sub_08004EA0(s32);                          /* extern */
M2C_UNK sub_08037A74(s32);                          /* extern */

void sub_0801F120(void) {
    u16 temp_r1;

    if (8 & M2C_FIELD((void *)0x030016E0, u16 *, 6)) {
        sub_08037A74(0x400);
        sub_0800312C(0x10, 0);
        sub_08001F80(0, 0, 0);
        *(s8 *)0x030033D8 = 3;
    }
    temp_r1 = *(u16 *)0x03000854;
    if ((u32) temp_r1 <= 0x707U) {
        *(u16 *)0x03000854 = temp_r1 + 1;
        return;
    }
    sub_08004EA0(0x8061);
    *(u8 *)0x0300485B += 1;
    *(u16 *)0x03000854 = 0;
}
