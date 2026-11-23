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
M2C_UNK sub_0805A9FC();                             /* extern */
M2C_UNK sub_0805B15C();                             /* extern */
M2C_UNK sub_0805B2B4(s32, s32);                     /* extern */
M2C_UNK sub_0805B358(s32, s32, s32, s32, s32);      /* extern */
M2C_UNK sub_0805B404(s32);                          /* extern */
M2C_UNK sub_08064E90();                             /* extern */
M2C_UNK sub_080650FC();                             /* extern */
s32 sub_080660A4(u8 *);                             /* extern */
M2C_UNK sub_08066EC8();                             /* extern */
M2C_UNK sub_080674B8(s32);                          /* extern */
s32 sub_08068B0C();                                 /* extern */

s32 sub_08066298(void) {
    u8 sp4;
    u16 temp_r1;
    u16 temp_r5;

    temp_r1 = M2C_FIELD((void *)0x030016E0, u16 *, 6);
    temp_r5 = 4 & temp_r1;
    if (temp_r5 != 0) {
        sub_080379D4(0x15);
        return sub_08068B0C();
    }
    if (2 & temp_r1) {
        sub_0805B404(3);
        *(s8 *)0x030046D4 = (s8) temp_r5;
        *(s8 *)0x030046D2 = 0xFF;
        sub_080650FC();
        sub_0805B358(0x0814C388, 0, 0x10, 0, 2);
        M2C_FIELD((void *)0x03004620, s8 *, 3) = 6;
    } else if (1 & temp_r1) {
        if ((sub_080660A4(&sp4) << 0x18) != 0) {
            sub_080379D4(3);
        } else {
            sub_080379D4(2);
        }
        sub_080674B8(2);
        sub_0805B15C();
        sub_08066EC8();
        sub_08064E90();
        if (sp4 != 0xFF) {
            sub_08059978();
            sub_0805B2B4(sp4 + 0x600, 0);
            sub_0805A9FC();
            M2C_FIELD((void *)0x03004620, s8 *, 3) = 0xE;
        }
    }
    return 0;
}
