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

s32 sub_08005024(s32, s32);                         /* extern */
M2C_UNK sub_080133D4(s32);                          /* extern */

void sub_0801336C(void) {
    if (*(u16 *)0x03002484 == 0x154) {
        if ((sub_08005024(0xE78, 0xA55C) << 0x18) == 0) {
            sub_080133D4(0x03002510);
            return;
        }
        if ((sub_08005024(0xE98, 0xA55C) << 0x18) == 0) {
            sub_080133D4(0x030025A0);
            return;
        }
        goto block_5;
    }
block_5:
    *(s16 *)0x03004114 = 0;
}
