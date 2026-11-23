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

M2C_UNK sub_08003378(s32);                          /* extern */
M2C_UNK sub_08004EA0(s32);                          /* extern */

void sub_08010E48(void) {
    sub_08004EA0(0x8253);
    sub_08003378(0x40);
    *(u8 *)0x0300485B += 1;
}
