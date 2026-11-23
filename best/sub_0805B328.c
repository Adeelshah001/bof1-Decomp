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

M2C_UNK sub_0805AAFC(s32, s32, s32, s32);           /* extern */

void sub_0805B328(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    void *temp_r4;

    temp_r4 = (arg0 * 0xC) + 0x03004790;
    sub_0805AAFC(((M2C_FIELD(temp_r4, u8 *, 4) + arg2) << 5) + M2C_FIELD(temp_r4, u8 *, 3) + arg1, arg3, arg4, arg5);
}
