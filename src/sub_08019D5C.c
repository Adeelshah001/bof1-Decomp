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

M2C_UNK sub_0800421C(s32, s32, s32);                /* extern */
M2C_UNK sub_08019DA0();                             /* extern */

void sub_08019D5C(void) {
    *(s16 *)0x03004120 = 2;
    sub_0800421C(0x104, 0xCA, 0x33);
    *(s8 *)0x03001698 = 0;
    sub_08019DA0();
}
