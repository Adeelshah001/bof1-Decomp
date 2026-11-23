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

M2C_UNK sub_080379D4(s32);                          /* extern */
M2C_UNK sub_08056B0C(void *, s32);                  /* extern */

void sub_080312EC(void *arg0) {
    sub_080379D4(5);
    sub_08056B0C(arg0, 0xA);
    M2C_FIELD(arg0, s8 *, 0x54) = 0x32;
    M2C_FIELD(arg0, s8 *, 0x50) = 4;
}
