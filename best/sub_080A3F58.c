/* machine draft (m2c) for agbcc -O2, tried by autopilot */
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

s32 sub_080A3F58(void *arg0, void *arg1) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 var_r0;
    s32 var_r1;
    u32 *var_r1_2;
    u32 *var_r3;
    u32 temp_r0;
    u32 temp_r2;
    void *temp_r4;

    temp_r1 = M2C_FIELD(arg1, s32 *, 0x10);
    var_r0 = M2C_FIELD(arg0, s32 *, 0x10) - temp_r1;
    if (var_r0 == 0) {
        temp_r4 = arg0 + 0x14;
        temp_r1_2 = temp_r1 * 4;
        var_r3 = temp_r4 + temp_r1_2;
        var_r1_2 = arg1 + 0x14 + temp_r1_2;
loop_2:
        var_r3 -= 4;
        var_r1_2 -= 4;
        temp_r0 = *var_r3;
        temp_r2 = *var_r1_2;
        if (temp_r0 != temp_r2) {
            var_r1 = 1;
            if (temp_r0 < temp_r2) {
                var_r1 = -1;
            }
            return var_r1;
        }
        if ((u32) var_r3 <= (u32) temp_r4) {
            var_r0 = 0;
            /* Duplicate return node #8. Try simplifying control flow for better match */
            return var_r0;
        }
        goto loop_2;
    }
    return var_r0;
}
