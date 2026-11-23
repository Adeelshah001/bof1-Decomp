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

M2C_UNK sub_0800511C(s32, s32);                     /* extern */
M2C_UNK sub_08005274(s32);                          /* extern */

void sub_08022B20(void) {
    u8 temp_r0;
    u8 temp_r3;

    if (*(u8 *)0x03004871 == 0x5A) {
        sub_08005274(9);
    }
    temp_r0 = *(u8 *)0x03004871 - 1;
    *(u8 *)0x03004871 = temp_r0;
    temp_r3 = temp_r0;
    if (temp_r3 == 0) {
        *(u8 *)0x030041A8 |= 1;
        M2C_FIELD((void *)0x02020FC0, u8 *, 0) = temp_r3;
        M2C_FIELD((void *)0x020211C0, u8 *, 0) = temp_r3;
        M2C_FIELD((void *)0x02020FC0, u8 *, 1) = temp_r3;
        M2C_FIELD((void *)0x020211C0, u8 *, 1) = temp_r3;
        sub_0800511C(0x11B, 1);
        *(u8 *)0x03003418 |= 0x40;
        *(u8 *)0x03004871 = 0x20;
        *(u8 *)0x03004870 += 1;
    }
}
