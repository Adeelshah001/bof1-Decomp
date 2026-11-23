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

M2C_UNK sub_080017EC(s32);                          /* extern */
u8 sub_08005024(s32, s32);                          /* extern */
M2C_UNK sub_0800D1F4();                             /* extern */
M2C_UNK sub_080197A8(s32, s32);                     /* extern */

void sub_0800ED48(void) {
    u8 temp_r4;

    temp_r4 = sub_08005024(0x1448, 0x55AC);
    if (temp_r4 != 0) {
        sub_0800D1F4();
        return;
    }
    sub_080017EC(0x58);
    sub_080197A8(0x03002510, 2);
    *(s8 *)0x0300486F = 0x1F;
    *(u8 *)0x03004870 = temp_r4;
    *(u8 *)0x03002B68 |= 4;
    *(s16 *)0x03004114 = (s16) temp_r4;
}
