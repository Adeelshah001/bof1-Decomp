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

u8 sub_08005024(s32, s32);                          /* extern */
M2C_UNK sub_0800D26C();                             /* extern */
M2C_UNK sub_080379D4(s32);                          /* extern */

void sub_0800D238(void) {
    u8 temp_r4;

    temp_r4 = sub_08005024(0x578, 0x3E2C);
    if (temp_r4 != 0) {
        sub_0800D26C();
        return;
    }
    sub_080379D4(0x17);
    *(s16 *)0x03004114 = (s16) temp_r4;
}
