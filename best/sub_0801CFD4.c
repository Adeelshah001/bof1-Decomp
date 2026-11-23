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
M2C_UNK sub_08010228();                             /* extern */
M2C_UNK sub_0802AC94(s32);                          /* extern */
M2C_UNK sub_0802AD94(u8);                           /* extern */
M2C_UNK sub_08037A74(s32);                          /* extern */
M2C_UNK sub_08039420();                             /* extern */
M2C_UNK sub_0803A8EC(void *);                       /* extern */
M2C_UNK sub_0803A9AC();                             /* extern */
M2C_UNK sub_08053C8C();                             /* extern */

void sub_0801CFD4(void) {
    if (M2C_FIELD((void *)0x03002AB0, u16 *, 6) == 0xDAEC) {
        sub_08037A74(0x800);
        sub_08003528(0, 0xE0, 0, 0xFF00, 0);
loop_3:
        if ((sub_08002FAC() << 0x18) != 0) {
            sub_0803A9AC();
            sub_0803A8EC((void *)0x03002AB0);
            sub_0803A8EC((void *)0x03002AB0 + 0x124);
            sub_0803A8EC((void *)0x03002AB0 + 0x248);
            sub_0803A8EC((void *)0x03002AB0 + 0x36C);
            sub_0802AD94(M2C_FIELD((void *)0x03002AB0, u8 *, 0x61));
            sub_0802AC94(*(s32 *)0x03004880);
            sub_08053C8C();
            sub_08039420();
            sub_08000248(1);
            goto loop_3;
        }
        sub_08000248(0x14);
        *(s16 *)0x03004890 = 0xC8;
        *(s8 *)0x0300485D = 0x40;
        sub_08010228();
    }
}
