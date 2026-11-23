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

M2C_UNK sub_08019B78(s32);                          /* extern */
M2C_UNK sub_08030AD8(s32);                          /* extern */
s32 sub_0805CF40(s32, M2C_UNK *);                   /* extern */

void sub_0801A0B0(void) {
    M2C_UNK sp0;

    if ((sub_0805CF40(0x179, &sp0) << 0x18) == 0) {
        sub_08030AD8(0x78);
        sub_08019B78(0x18);
    }
}
