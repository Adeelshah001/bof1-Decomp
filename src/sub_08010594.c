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

M2C_UNK sub_080105B8(M2C_UNK, s8);                  /* extern */
M2C_UNK sub_080105D0(M2C_UNK, s16);                 /* extern */

void sub_08010594(M2C_UNK arg0, s8 arg1, u16 arg2) {
    u16 temp_r2;

    temp_r2 = arg2;
    if (arg1 == 1) {
        sub_080105D0(arg0, (s16) temp_r2);
        return;
    }
    sub_080105B8(arg0, (s8) temp_r2);
}
