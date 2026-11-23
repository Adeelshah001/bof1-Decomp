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
M2C_UNK sub_08003528(s32, s32, s32, s32, s32);      /* extern */
M2C_UNK sub_0800F958(void *, s16);                  /* extern */
M2C_UNK sub_08024080(void *);                       /* extern */
M2C_UNK sub_0802AC94(s32);                          /* extern */
M2C_UNK sub_0802AD94(u8);                           /* extern */
M2C_UNK sub_08039420();                             /* extern */
M2C_UNK sub_0803A8EC(void *);                       /* extern */
M2C_UNK sub_0803A9AC();                             /* extern */

void sub_0800FA78(void *arg0) {
    *(s16 *)0x0300413C = (s16) M2C_FIELD(M2C_FIELD(arg0, void **, 0x68), u8 *, 2);
    sub_0800F958(arg0, *(s16 *)0x0300413C);
    if (*(s16 *)0x03004114 != 1) {
        *(u8 *)0x03002B68 |= 4;
        sub_08024080(arg0);
        if (*(u8 *)0x0300488C != 0) {
            M2C_FIELD(arg0, void **, 0x68) = (void *) (M2C_FIELD(arg0, void **, 0x68) + 1);
            if (*(u16 *)0x03002484 == 0x1AC) {
                sub_08003528(0, 0xE0, 0, 0xFF00, 0);
loop_5:
                if ((sub_08002FAC() << 0x18) != 0) {
                    sub_0803A9AC();
                    sub_0803A8EC((void *)0x03002AB0);
                    sub_0803A8EC((void *)0x03002BD4);
                    sub_0803A8EC((void *)0x03002CF8);
                    sub_0803A8EC((void *)0x03002E1C);
                    sub_0803A8EC(arg0);
                    sub_0802AD94(*(u8 *)0x03002B11);
                    sub_0802AC94(*(s32 *)0x03004880);
                    sub_08039420();
                    sub_08000248(1);
                    goto loop_5;
                }
            }
        }
    }
}
