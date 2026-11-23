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

M2C_UNK sub_08059978();                             /* extern */
M2C_UNK sub_0805B15C();                             /* extern */
M2C_UNK sub_0806C1A0(s32, s32, s32, s32, s32);      /* extern */
M2C_UNK sub_0806C810();                             /* extern */
M2C_UNK sub_0806EDD0(s32, s32);                     /* extern */
M2C_UNK sub_080721A0(s32);                          /* extern */
M2C_UNK sub_08073B50();                             /* extern */

void sub_08073C30(void) {
    sub_080721A0(2);
    sub_0806C810();
    sub_0805B15C();
    sub_08073B50();
    sub_0806EDD0(0, -1);
    sub_0806C1A0(1, 0x10, 0x1C, 3, 1);
    sub_08059978();
}
