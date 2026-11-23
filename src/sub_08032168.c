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

s32 sub_0802FA4C();                                 /* extern */

s32 sub_08032168(void *arg0) {
    if ((sub_0802FA4C() << 0x18) == 0) {
        M2C_FIELD(arg0, s8 *, 0x4D) = 4;
        M2C_FIELD((arg0 + 0x4D), s8 *, 7) = 0x3C;
    }
    return 0;
}
