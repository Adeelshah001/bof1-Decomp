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

s32 sub_08001770(s32);                              /* extern */
s32 sub_08005024(s32, s32);                         /* extern */
M2C_UNK sub_0801336C();                             /* extern */
u8 sub_0805CF40(s32, M2C_UNK *);                    /* extern */

void sub_0801328C(void) {
    M2C_UNK sp0;
    u8 temp_r3;

    if ((sub_08005024(0x1908, 0x849C) << 0x18) != 0) {
        sub_0801336C();
        return;
    }
    if (((sub_08001770(0x92) << 0x18) != 0) || (*(s16 *)0x03004120 = 0x158, temp_r3 = sub_0805CF40(0x158, &sp0), (temp_r3 != 0))) {
        sub_080075A4(0x83D6U);
        sub_0801336C();
        return;
    }
    *(s8 *)0x0300485A = 0xC;
    *(u8 *)0x0300485B = temp_r3;
    *(u8 *)0x03002B68 |= 4;
    *(s16 *)0x03004114 = 1;
}
