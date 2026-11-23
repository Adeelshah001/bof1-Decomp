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
M2C_UNK sub_08059978();                             /* extern */
s32 sub_0805A9FC();                                 /* extern */
M2C_UNK sub_0805B26C();                             /* extern */
M2C_UNK sub_08066EC8();                             /* extern */
M2C_UNK sub_08067314(s32);                          /* extern */
M2C_UNK sub_080675B8(s32);                          /* extern */
s32 sub_08068B0C();                                 /* extern */
s8 sub_08068E5C();                                  /* extern */

s32 sub_08062F7C(void) {
    s8 temp_r0;
    u16 temp_r1;
    u16 temp_r4;

    if (sub_0805A9FC() != 0) {
        temp_r1 = M2C_FIELD((void *)0x030016E0, u16 *, 6);
        temp_r4 = 4 & temp_r1;
        if (temp_r4 != 0) {
            sub_080379D4(0x15);
            return sub_08068B0C();
        }
        if (3 & temp_r1) {
            sub_080379D4(2);
            sub_08059978();
            sub_0805B26C();
            sub_080675B8(4);
            sub_08067314(2);
            temp_r0 = sub_08068E5C();
            if (temp_r0 != 0) {
                M2C_FIELD((void *)0x03004620, s8 *, 2) = 8;
                M2C_FIELD((void *)0x03004620, u8 *, 3) = (u8) temp_r4;
                M2C_FIELD((void *)0x03004620, s8 *, 7) = (s8) temp_r4;
            } else {
                M2C_FIELD((void *)0x03004620, u8 *, 3) = (u8) M2C_FIELD((void *)0x03004760, u8 *, 0x17);
                sub_08066EC8();
                M2C_FIELD((void *)0x03004620, s8 *, 7) = temp_r0;
            }
        }
        goto block_7;
    }
block_7:
    return 0;
}
