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

M2C_UNK sub_080017EC(s32);                          /* extern */
M2C_UNK sub_08003378(s32);                          /* extern */
M2C_UNK sub_0800764C(s32);                          /* extern */

void sub_080346AC(void *arg0) {
    sub_080017EC(0x46);
    sub_08003378(0x31);
    sub_0800764C(3);
    M2C_FIELD(arg0, s32 *, 0x88) = (s32) (M2C_FIELD(arg0, s32 *, 0x88) + 2);
}
