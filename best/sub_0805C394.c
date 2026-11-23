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
M2C_UNK sub_0800190C(u8);                           /* extern */
M2C_UNK sub_08003218();                             /* extern */
M2C_UNK sub_08003460();                             /* extern */
M2C_UNK sub_0802AD94(u8);                           /* extern */
M2C_UNK sub_08035BA0();                             /* extern */
M2C_UNK sub_08039420();                             /* extern */
M2C_UNK sub_08039514();                             /* extern */
M2C_UNK sub_0803C75C();                             /* extern */
M2C_UNK sub_0803FA9C();                             /* extern */
M2C_UNK sub_08047C40();                             /* extern */
M2C_UNK sub_0805B1BC();                             /* extern */
s32 sub_0805C430();                                 /* extern */

void sub_0805C394(void) {
    u8 temp_r0;
    u8 temp_r0_2;

loop_7:
    sub_0805B1BC();
    if (sub_0805C430() == 0) {
        temp_r0 = M2C_FIELD((void *)0x03004620, u8 *, 2);
        if ((temp_r0 == 2) || (temp_r0 == 0x20) || (*(u8 *)0x030045EB == 2)) {
            sub_0802AD94(*(u8 *)0x03002B11);
            sub_0803FA9C();
            sub_08035BA0();
            sub_08047C40();
            sub_0800190C(M2C_FIELD((void *)0x03004830, u8 *, 0x10));
            sub_08003460();
            sub_08039420();
            sub_0803C75C();
        } else {
            sub_08039514();
        }
        sub_08003218();
        sub_08000248(1);
        goto loop_7;
    }
    temp_r0_2 = M2C_FIELD((void *)0x03004620, u8 *, 2);
    if ((temp_r0_2 == 2) || (temp_r0_2 == 0x20) || (*(u8 *)0x030045EB == 2)) {
        sub_08039420();
    }
    sub_08003218();
    sub_08000248(1);
}
