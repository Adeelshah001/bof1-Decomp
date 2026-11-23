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

s32 sub_08003104();                                 /* extern */

s32 sub_08050250(void) {
    s32 temp_r1;
    s32 var_r1;

    temp_r1 = 0x83 & sub_08003104();
    if (0x80 & temp_r1) {
        var_r1 = ((0x7F ^ temp_r1) + 1) | 0xFF00;
    } else {
        var_r1 = temp_r1 & 3;
    }
    return var_r1;
}
