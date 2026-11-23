/* machine draft (m2c) for agbcc -mthumb-interwork -O2, tried by autopilot */
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

M2C_UNK sub_0809ED90();                             /* extern */
M2C_UNK sub_080A0224();                             /* extern */
extern M2C_UNK sub_08000F84;

void sub_08000F98(void) {
    if (*(s32 *)0x0300176C == &sub_08000F84) {
        sub_0809ED90();
    }
    sub_080A0224();
}
