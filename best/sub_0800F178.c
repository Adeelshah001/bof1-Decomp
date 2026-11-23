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

M2C_UNK sub_08010434(s16);                          /* extern */

void sub_0800F178(void) {
    s16 var_r0;
    u8 temp_r1;

    temp_r1 = *(u8 *)0x030023DC;
    if (temp_r1 == 1) {
        if (temp_r1 & *(u16 *)0x030045F2) {
            var_r0 = M2C_FIELD((void *)0x03002430, u16 *, 2) - 1;
        } else {
            var_r0 = M2C_FIELD((void *)0x03002430, u16 *, 2) + 1;
        }
        sub_08010434(var_r0);
        return;
    }
    *(s16 *)0x030040E0 = 0x927C;
    *(s8 *)0x0300485C = 0x20;
    M2C_FIELD((void *)0x03002430, u16 *, 2) = (u16) (M2C_FIELD((void *)0x030023E0, u16 *, 2) + 0x1000);
    *(u8 *)0x03002B68 |= 0x84;
    *(u8 *)0x0300485B += 1;
}
