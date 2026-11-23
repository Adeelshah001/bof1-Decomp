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

M2C_UNK sub_0805B15C();                             /* extern */
M2C_UNK sub_0805B1BC();                             /* extern */
s32 sub_0805B1F4();                                 /* extern */
M2C_UNK sub_0805B568(s32, s32, s32, s32, s32);      /* extern */

void sub_0809D2E0(void) {
    u16 temp_r0;

    sub_0805B1BC();
    if (M2C_FIELD((void *)0x03004410, u8 *, 0x10) != 0) {
        sub_0805B15C();
        sub_0805B568(0x9060, 0x8048, 0, 0, 0x6000);
        sub_0805B568(0x8080, 0x8048, 0, 0, 0x6000);
        if ((M2C_FIELD((void *)0x03005050, u16 *, 0) == 0x16) && (M2C_FIELD((void *)0x03005050, u16 *, 0x10) == 0x16)) {
            temp_r0 = *(u16 *)0x03005000 - 1;
            *(u16 *)0x03005000 = temp_r0;
            if ((temp_r0 << 0x10) == 0) {
                M2C_FIELD((void *)0x03004410, u8 *, 0xF) = (u8) (M2C_FIELD((void *)0x03004410, u8 *, 0xF) + 1);
                return;
            }
        }
        sub_0805B568(0xC008, 0x4008, 7, 0, 0x100);
        sub_0805B568(0xC040, 0x4008, 7, 0, 0x107);
        return;
    }
    if ((sub_0805B1F4() << 0x10) == 0) {
        *(s16 *)0x03005080 = 0x16;
        M2C_FIELD((void *)0x03004410, u8 *, 0x10) = (u8) (M2C_FIELD((void *)0x03004410, u8 *, 0x10) + 1);
    }
}
