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
M2C_UNK sub_0804101C();                             /* extern */
M2C_UNK sub_080440DC(u8);                           /* extern */
u8 sub_0805B040(s32);                               /* extern */
M2C_UNK sub_0805B15C();                             /* extern */
M2C_UNK sub_0805B404(s32);                          /* extern */
M2C_UNK sub_080675B8(s32);                          /* extern */
M2C_UNK sub_08068850();                             /* extern */
M2C_UNK sub_08068938(s32, s32);                     /* extern */
M2C_UNK sub_08068984(s32, s32, s32, s32, s32);      /* extern */

void sub_0809BA80(void) {
    u8 temp_r6;

    if (M2C_FIELD((void *)0x03004410, u8 *, 0xF) != 0) {
        temp_r6 = sub_0805B040(1);
        if (2 & M2C_FIELD((void *)0x030016E0, u16 *, 6)) {
            sub_0805B404(1);
            sub_080379D4(0x15);
            M2C_FIELD((void *)0x03004410, s8 *, 0xE) = 0x15;
        }
        if (1 & M2C_FIELD((void *)0x030016E0, u16 *, 6)) {
            sub_0805B404(1);
            sub_080379D4(2);
            *(u8 *)0x03005008 = temp_r6;
            sub_080440DC(*(u8 *)0x03005008);
            M2C_FIELD((void *)0x03004410, s8 *, 0xE) = 5;
            M2C_FIELD((void *)0x03004410, u8 *, 0xF) = 0U;
        }
    } else {
        sub_0805B15C();
        sub_08068850();
        sub_0804101C();
        sub_080675B8(0);
        sub_08068938(0, 0x28);
        sub_08068984(0, 1, 1, 0, 0x0815315C);
        M2C_FIELD((void *)0x03004410, u8 *, 0xF) = (u8) (M2C_FIELD((void *)0x03004410, u8 *, 0xF) + 1);
    }
}
