/* machine draft (m2c) for agbcc -O2, tried by autopilot */
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

M2C_UNK sub_08007494();                             /* extern */
M2C_UNK sub_080074A4();                             /* extern */
M2C_UNK sub_080074B4();                             /* extern */
M2C_UNK sub_080074C4();                             /* extern */
M2C_UNK sub_080074D4();                             /* extern */
M2C_UNK sub_080074E4();                             /* extern */
M2C_UNK sub_080074F4();                             /* extern */
M2C_UNK sub_08007504();                             /* extern */
M2C_UNK sub_08007514();                             /* extern */

void sub_0800B210(void) {
    sub_08007514();
    sub_080074A4();
    sub_08007494();
    sub_080074B4();
    sub_080074C4();
    sub_080074D4();
    sub_080074E4();
    sub_080074F4();
    sub_08007504();
}
