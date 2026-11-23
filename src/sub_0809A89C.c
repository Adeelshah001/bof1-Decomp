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

M2C_UNK sub_080995D4();                             /* extern */

void sub_0809A89C(void *arg0) {
    u16 temp_r1;

    M2C_FIELD(arg0, u16 *, 2) = (u16) (M2C_FIELD(arg0, u16 *, 2) + 0x28);
    temp_r1 = M2C_FIELD(arg0, u16 *, 6) - 0x18;
    M2C_FIELD(arg0, u16 *, 6) = temp_r1;
    M2C_FIELD(arg0, u16 *, 0x2C) = temp_r1;
    sub_080995D4();
}
