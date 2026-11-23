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

M2C_UNK sub_08037FC4(void *, u8);                   /* extern */
M2C_UNK sub_080998B0(void *);                       /* extern */

void sub_0809AF14(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x4C) = (u8) (M2C_FIELD(arg0, u8 *, 0x4C) + 1);
    sub_08037FC4(arg0, M2C_FIELD(arg0, u8 *, 0x7C));
    sub_080998B0(arg0);
}
