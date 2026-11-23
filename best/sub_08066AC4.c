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
M2C_UNK sub_080674B8(s32);                          /* extern */

s32 sub_08066AC4(void) {
    s8 temp_r2;

    if (1 & M2C_FIELD((void *)0x030016E0, u16 *, 6)) {
        sub_080379D4(2);
        temp_r2 = *(u8 *)0x03004E30 & (0x10 << *(u8 *)0x0300459C);
        if (temp_r2 != 0) {
            M2C_FIELD((void *)0x03004620, s8 *, 2) = 0x12;
            *(u8 *)0x03004E30 &= 0xF7;
            M2C_FIELD((void *)0x03004620, s8 *, 7) = 0;
            sub_080674B8(0);
        } else {
            *(s8 *)0x030033D8 = 3;
            M2C_FIELD((void *)0x03004620, s8 *, 7) = temp_r2;
            M2C_FIELD((void *)0x03004620, s8 *, 2) = 0x26;
            if (*(u16 *)0x03004750 != 0) {
                **(s8 **)0x03001770 = temp_r2;
                M2C_FIELD((void *)0x030016E0, u8 *, 0) = (u8) (M2C_FIELD((void *)0x030016E0, u8 *, 0) - 1);
                *(u16 *)0x03004750 = (u16) temp_r2;
            }
        }
        return 0;
    }
    return 1;
}
