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
M2C_UNK sub_0803ADDC(s32, s32);                     /* extern */
M2C_UNK sub_0803BBB4();                             /* extern */

void sub_0803BAA4(void) {
    sub_0803ADDC(0x1F0, 0xFFFF);
    if ((sub_08001770(0x93) << 0x18) != 0) {
        sub_0803BBB4();
    }
}
