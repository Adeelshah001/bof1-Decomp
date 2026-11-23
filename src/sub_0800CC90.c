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
M2C_UNK sub_0800518C(s32, s32, s32);                /* extern */

void sub_0800CC90(void) {
    s32 var_r1;
    s32 var_r2;

    if ((sub_08001770(0x5F) << 0x18) != 0) {
        var_r1 = 0xFE8;
        var_r2 = 0x85C;
        goto block_6;
    }
    if ((sub_08001770(0x5E) << 0x18) != 0) {
        var_r1 = 0xFE8;
        var_r2 = 0x79C;
        goto block_6;
    }
    if ((sub_08001770(0x5C) << 0x18) != 0) {
        var_r1 = 0xFA8;
        var_r2 = 0x5EC;
block_6:
        sub_0800518C(0, var_r1, var_r2);
        return;
    }
    sub_0800518C(0, 0x1038, 0x48C);
}
