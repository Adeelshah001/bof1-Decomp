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

M2C_UNK sub_08091D0C();                             /* extern */
M2C_UNK sub_08091D60();                             /* extern */
M2C_UNK sub_08095D80();                             /* extern */
M2C_UNK sub_08095E14();                             /* extern */

void sub_08095D48(void *arg0) {
    u8 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u8 *, 0x4D);
    switch (temp_r1) {                              /* irregular */
    case 1:
        sub_08095D80();
        return;
    case 2:
        sub_08091D60();
        return;
    case 3:
        sub_08095E14();
        return;
    default:
        sub_08091D0C();
        return;
    }
}
