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

M2C_UNK sub_0802C934(void *);                       /* extern */
M2C_UNK sub_0802CCEC(void *);                       /* extern */
M2C_UNK sub_0802CD4C(void *, s32);                  /* extern */
M2C_UNK sub_0802F21C(void *);                       /* extern */
M2C_UNK sub_08036AF4(s32, void *);                  /* extern */
s32 sub_0803DC60(void *, u8);                       /* extern */

void sub_0803E028(void *arg0) {
    u8 var_r5;

    var_r5 = M2C_FIELD(arg0, u8 *, 0x3B) - 1;
    if (var_r5 == 0xFF) {
        var_r5 = 0;
    }
    sub_08036AF4(0x030023E0, arg0);
    sub_0802F21C(arg0);
    if ((sub_0803DC60(arg0, var_r5) << 0x18) != 0) {
        sub_0802CD4C(arg0, 0);
        M2C_FIELD(arg0, s8 *, 0x4D) = 2;
        return;
    }
    sub_0802CCEC(arg0);
    sub_0802C934(arg0);
}
