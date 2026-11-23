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

M2C_UNK sub_0803A8EC(void *);                       /* extern */
M2C_UNK sub_0807AD00(void *);                       /* extern */

void sub_08078080(void *arg0) {
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r3;
    void *var_r4;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r0;
    temp_r3 = temp_r0;
    if (temp_r3 == 0) {
        M2C_FIELD(arg0, s8 *, 0x50) = 0x12;
        *(s16 *)0x02020FC0 = (s16) temp_r3;
    }
    temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x54);
    switch (temp_r0_2) {                            /* irregular */
    case 0:
        var_r4 = (void *)0x03002AB0;
        break;
    case 1:
        var_r4 = (void *)0x03002BD4;
        break;
    case 2:
        var_r4 = (void *)0x03002CF8;
        break;
    default:
        var_r4 = (void *)0x03002E1C;
        break;
    }
    if (M2C_FIELD(var_r4, u8 *, 0x3C) == M2C_FIELD(arg0, u8 *, 0x3C)) {
        sub_0803A8EC(arg0);
        return;
    }
    temp_r0_3 = 0x10 & M2C_FIELD(var_r4, u8 *, 0xF0);
    if (temp_r0_3 == 0) {
        M2C_FIELD(var_r4, u8 *, 0x51) = temp_r0_3;
        sub_0807AD00(var_r4);
        sub_0803A8EC(var_r4);
    }
}
