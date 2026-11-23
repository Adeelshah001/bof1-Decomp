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

M2C_UNK sub_08004EA0(s32);                          /* extern */
M2C_UNK sub_0801DBD4();                             /* extern */
u8 sub_0805CF40(s32, M2C_UNK *);                    /* extern */

void sub_0801DB98(void) {
    M2C_UNK sp0;
    u8 temp_r4;

    temp_r4 = sub_0805CF40(0x169, &sp0);
    if (temp_r4 != 0) {
        sub_0801DBD4();
        return;
    }
    sub_08004EA0(0x8597);
    *(s16 *)0x03004114 = (s16) temp_r4;
}
