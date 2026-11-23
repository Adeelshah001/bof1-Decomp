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

M2C_UNK sub_080379D4(s32);                          /* extern */
u8 sub_0805B040(s32);                               /* extern */
M2C_UNK sub_08063CA0();                             /* extern */
M2C_UNK sub_08063DE0(s32, u8);                      /* extern */
M2C_UNK sub_08063F0C();                             /* extern */
M2C_UNK sub_08064124();                             /* extern */
s32 sub_08068ADC();                                 /* extern */

s32 sub_08064AE0(void) {
    u16 temp_r1;
    u16 temp_r5;
    u8 temp_r0;

    temp_r0 = sub_0805B040(1);
    if (temp_r0 != *(u8 *)0x030046D1) {
        *(u8 *)0x030046D1 = temp_r0;
        *(s8 *)0x030046D4 = 0;
        M2C_FIELD((void *)0x030046D2, s8 *, 0) = 0;
        sub_08063DE0((M2C_FIELD((void *)0x030046D2, u8 *, 0x12) * 0x124) + 0x03002AB0, *(u8 *)0x030046D1);
        sub_08064124();
        sub_08063F0C();
    }
    temp_r1 = M2C_FIELD((void *)0x030016E0, u16 *, 6);
    temp_r5 = 4 & temp_r1;
    if (temp_r5 != 0) {
        sub_080379D4(0x15);
        return sub_08068ADC();
    }
    if (2 & temp_r1) {
        sub_080379D4(3);
        M2C_FIELD((void *)0x03004620, s8 *, 3) = (s8) temp_r5;
    } else if (1 & temp_r1) {
        if (M2C_FIELD((void *)0x03004620, u8 *, 0xB7) != 0) {
            sub_080379D4(2);
            M2C_FIELD((void *)0x03004620, s8 *, 3) = 8;
        } else {
            sub_080379D4(3);
        }
    }
    sub_08063CA0();
    return 0;
}
