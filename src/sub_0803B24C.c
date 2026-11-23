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

M2C_UNK sub_0803ADDC(s32, s32);                     /* extern */
M2C_UNK sub_0803AF58(s32, s32);                     /* extern */
M2C_UNK sub_0803C13C();                             /* extern */

void sub_0803B24C(void) {
    sub_0803ADDC(0xA8, 0xFFFF);
    sub_0803AF58(0xA8, 0xFFFF);
    sub_0803ADDC(0xE8, 0xFFFF);
    sub_0803ADDC(0x40, 0xFFFF);
    sub_0803AF58(0x8C, 0xFFFF);
    sub_0803C13C();
}
