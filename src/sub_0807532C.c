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

s32 sub_08001770(s32);                              /* extern */
u16 sub_080753F0(s32);                              /* extern */

u16 sub_0807532C(s32 arg0) {
    if (((sub_08001770(0x49) << 0x18) != 0) && ((sub_08001770(0x59) << 0x18) == 0)) {
        return 0U;
    }
    return sub_080753F0(arg0);
}
