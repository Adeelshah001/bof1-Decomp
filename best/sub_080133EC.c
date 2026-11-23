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

s32 sub_08007468(s32, s32);                         /* extern */
M2C_UNK sub_08012D40();                             /* extern */
M2C_UNK sub_080134EC();                             /* extern */
M2C_UNK sub_08013500();                             /* extern */

void sub_080133EC(void) {
    if (2 & *(u8 *)0x0300485D) {
        sub_08012D40();
        return;
    }
    if (((sub_08007468(0xD18, 0x62FC) << 0x18) == 0) || ((sub_08007468(0xD28, 0x62FC) << 0x18) == 0)) {
        sub_080134EC();
        return;
    }
    if (((sub_08007468(0xD18, 0x628C) << 0x18) == 0) || ((sub_08007468(0xD28, 0x628C) << 0x18) == 0)) {
        sub_08013500();
        return;
    }
    sub_08012D40();
}
