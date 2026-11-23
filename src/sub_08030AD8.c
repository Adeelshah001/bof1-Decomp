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

M2C_UNK sub_080020E8();                             /* extern */
M2C_UNK sub_0802FD60(u16);                          /* extern */
M2C_UNK sub_08030AF8(u16);                          /* extern */

void sub_08030AD8(u16 arg0) {
    u16 temp_r4;

    temp_r4 = arg0;
    sub_080020E8();
    sub_0802FD60(temp_r4);
    sub_08030AF8(temp_r4);
}
