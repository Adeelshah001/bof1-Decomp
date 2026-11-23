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

M2C_UNK sub_0803EE6C(void *);                       /* extern */
u8 sub_0804BD30(void *);                            /* extern */

void sub_0804D430(void *arg0) {
    u8 temp_r0;
    u8 var_r2;

    var_r2 = 1;
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x54);
    if (temp_r0 == 0) {
        var_r2 = sub_0804BD30(arg0);
    } else {
        M2C_FIELD(arg0, u8 *, 0x54) = (u8) (temp_r0 - 1);
    }
    if (var_r2 == 0) {
        sub_0803EE6C(arg0);
    }
}
