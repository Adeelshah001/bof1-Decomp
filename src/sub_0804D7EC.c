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

M2C_UNK sub_0803A508();                             /* extern */

void sub_0804D7EC(void *arg0, s16 arg1, u16 arg2) {
    u16 temp_r2;

    temp_r2 = arg2;
    M2C_FIELD(arg0, s16 *, 2) = arg1;
    M2C_FIELD(arg0, u16 *, 6) = temp_r2;
    M2C_FIELD(arg0, u16 *, 0x2C) = temp_r2;
    sub_0803A508();
}
