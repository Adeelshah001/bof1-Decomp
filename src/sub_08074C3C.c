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

M2C_UNK sub_0800190C(s32);                          /* extern */
M2C_UNK sub_080715DC(s32);                          /* extern */
M2C_UNK sub_0807B338();                             /* extern */
M2C_UNK sub_080860E0();                             /* extern */
M2C_UNK sub_08098988();                             /* extern */

void sub_08074C3C(void) {
    sub_0800190C(0);
    sub_080715DC(0x03004F50);
    sub_0807B338();
    sub_080860E0();
    sub_08098988();
}
