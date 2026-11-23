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
M2C_UNK sub_08000D1C(s32);                          /* extern */
M2C_UNK sub_08001F80(s32, s32, s32);                /* extern */
M2C_UNK sub_0800312C(s32, s32);                     /* extern */
M2C_UNK sub_08003790(s32);                          /* extern */
M2C_UNK sub_0803CDB0();                             /* extern */
M2C_UNK sub_0806B348();                             /* extern */
M2C_UNK sub_0806B41C();                             /* extern */
M2C_UNK sub_0806C810();                             /* extern */
M2C_UNK sub_080715DC(s32);                          /* extern */
M2C_UNK sub_08071DEC(s32);                          /* extern */
M2C_UNK sub_08071F60();                             /* extern */
M2C_UNK sub_08073544();                             /* extern */
M2C_UNK sub_080735AC();                             /* extern */
M2C_UNK sub_08074B50();                             /* extern */
M2C_UNK sub_0809B4CC();                             /* extern */

void sub_0809B148(void) {
    s32 sp0;
    s32 sp4;

    *(s16 *)0x03001864 = 0;
    sub_0809B4CC();
    sp0 = 0;
    M2C_FIELD((void *)0x040000D4, s32 **, 0) = &sp0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06000000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x85006000;
    sub_08003790(M2C_FIELD((void *)0x040000D4, s32 *, 8));
    sub_08073544();
    sub_080735AC();
    sub_0803CDB0();
    sub_08000248(1);
    sub_0806B41C();
    sub_08071F60();
    sub_0806B348();
    sub_08071DEC(0x03002AB0);
    sub_08074B50();
    sub_0806C810();
    *(s16 *)0x03001670 = 0x1700;
    sub_08000D1C(1);
    *(s8 *)0x03004754 = 1;
    sub_080715DC(0x03004F50);
    M2C_FIELD((void *)0x040000D4, s32 **, 0) = (s32 *)0x0201AFC0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06001000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000400;
    M2C_FIELD((void *)0x040000D4, s32 **, 0) = (s32 *)0x0201B7C0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06001800;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000400;
    sp4 = 0;
    M2C_FIELD((void *)0x040000D4, s32 **, 0) = &sp4;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06000F80;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x81000040;
    sub_0800312C(0x10, 8);
    sub_08001F80(0, 0, 0);
}
