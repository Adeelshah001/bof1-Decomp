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

M2C_UNK sub_08000248(s32);                          /* extern */
s32 sub_08002FAC();                                 /* extern */
M2C_UNK sub_080030D4();                             /* extern */
M2C_UNK sub_08003528(s32, s32, s32, s32, s32);      /* extern */
M2C_UNK sub_0802AC94(s32);                          /* extern */
M2C_UNK sub_0802AD94(u8);                           /* extern */
M2C_UNK sub_08039420();                             /* extern */
M2C_UNK sub_0803A8EC(s32);                          /* extern */
M2C_UNK sub_0803A9AC();                             /* extern */
M2C_UNK sub_08053C8C();                             /* extern */

void sub_08023260(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x3B) = 0xDC;
    M2C_FIELD(arg0, u8 *, 0x6D) = (u8) (8 | M2C_FIELD(arg0, u8 *, 0x6D));
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) + 2);
    if (*(u16 *)0x03002484 == 0x199) {
        sub_08003528(0, 0, 0, 0x100, 1);
loop_3:
        if ((sub_08002FAC() << 0x18) != 0) {
            sub_0803A9AC();
            sub_0803A8EC(0x03002AB0);
            sub_0803A8EC(0x03002BD4);
            sub_0803A8EC(0x03002CF8);
            sub_0803A8EC(0x03002E1C);
            sub_0802AD94(*(u8 *)0x03002B11);
            sub_0802AC94(*(s32 *)0x03004880);
            sub_08053C8C();
            sub_08039420();
            sub_08000248(1);
            goto loop_3;
        }
        sub_080030D4();
    }
}
