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
M2C_UNK sub_0805B404(s32);                          /* extern */
s32 sub_08068B00();                                 /* extern */

s32 sub_08062478(void) {
    s8 var_r0;
    u16 temp_r1;
    u16 temp_r4;
    u16 temp_r5;
    u8 temp_r2;
    u8 temp_r6;

    temp_r2 = sub_0805B040(2);
    temp_r6 = temp_r2;
    temp_r1 = M2C_FIELD((void *)0x030016E0, u16 *, 6);
    temp_r4 = 4 & temp_r1;
    if (temp_r4 != 0) {
        sub_080379D4(0x15);
        return sub_08068B00();
    }
    temp_r5 = 2 & temp_r1;
    if (temp_r5 != 0) {
        sub_080379D4(3);
        M2C_FIELD((void *)0x03004620, u8 *, 7) = (u8) temp_r4;
        M2C_FIELD((void *)0x03004620, s8 *, 2) = 6;
        sub_0805B404(2);
    } else if (1 & temp_r1) {
        if (temp_r2 != 0) {
            sub_080379D4(3);
            M2C_FIELD((void *)0x03004620, u8 *, 7) = (u8) temp_r5;
            var_r0 = 6;
        } else {
            sub_080379D4(2);
            M2C_FIELD((void *)0x03004620, u8 *, 7) = temp_r6;
            var_r0 = 0xC;
        }
        M2C_FIELD((void *)0x03004620, s8 *, 2) = var_r0;
        sub_0805B404(2);
    }
    return 0;
}
