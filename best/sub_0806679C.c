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
M2C_UNK sub_080674B8(s32);                          /* extern */
M2C_UNK sub_08068984(s32, s32, s32, s32, s32);      /* extern */
s32 sub_08068F70();                                 /* extern */

s32 sub_0806679C(void) {
    u16 temp_r1;
    u16 temp_r4;
    u8 *temp_r5;
    u8 temp_r3;
    u8 temp_r6;

    temp_r5 = (M2C_FIELD((void *)0x030016E0, u8 *, 1) * 0xC) + ((void *)0x030016E0 + 0xB);
    temp_r6 = sub_0805B040(2);
    temp_r1 = M2C_FIELD((void *)0x030016E0, u16 *, 6);
    temp_r4 = 2 & temp_r1;
    if (temp_r4 != 0) {
        sub_080379D4(3);
        sub_0805B404(2);
        M2C_FIELD((void *)0x03004620, s8 *, 7) = 0;
        M2C_FIELD((void *)0x03004620, s8 *, 2) = 0x12;
        return 0;
    }
    if (1 & temp_r1) {
        sub_080674B8(0);
        if (temp_r6 == 0) {
            sub_080379D4(2);
            if ((sub_08068F70() << 0x18) != 0) {
                *temp_r5 += 1;
            } else {
                temp_r3 = *temp_r5;
                *temp_r5 = temp_r3 + 3;
                if (*(u8 *)0x03004E30 & (0x10 << *(u8 *)0x0300459C)) {
                    *temp_r5 = temp_r3 + 4;
                    sub_08068984(0, 2, 1, 0, 0x0814BE98);
                }
            }
            sub_0805B404(2);
            goto block_10;
        }
        sub_080379D4(3);
        sub_0805B404(2);
        M2C_FIELD((void *)0x03004620, s8 *, 7) = (s8) temp_r4;
        M2C_FIELD((void *)0x03004620, s8 *, 2) = 0x12;
        return 0;
    }
block_10:
    return 1;
}
