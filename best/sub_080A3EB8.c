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

void *sub_080A3A38(M2C_UNK);                        /* extern */
M2C_UNK sub_080A3A90(M2C_UNK, void *);              /* extern */

void *sub_080A3EB8(M2C_UNK arg0, void *arg1, s32 arg2) {
    s32 temp_r5;
    s32 temp_r6;
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r7;
    u32 *var_r3;
    u32 *var_r4;
    u32 temp_r0_2;
    u32 temp_r2;
    u32 var_r2_3;
    void *temp_r0;
    void *temp_r6_2;

    temp_r6 = arg2 >> 5;
    var_r7 = temp_r6 + M2C_FIELD(arg1, s32 *, 0x10) + 1;
    var_r2 = M2C_FIELD(arg1, s32 *, 8);
    if (var_r7 > var_r2) {
        do {
            var_r2 *= 2;
        } while (var_r7 > var_r2);
    }
    temp_r0 = sub_080A3A38(arg0);
    var_r4 = temp_r0 + 0x14;
    if (temp_r6 > 0) {
        var_r2_2 = temp_r6;
        do {
            *var_r4 = 0;
            var_r4 += 4;
            var_r2_2 -= 1;
        } while (var_r2_2 != 0);
    }
    var_r3 = arg1 + 0x14;
    temp_r6_2 = var_r3 + (M2C_FIELD(arg1, s32 *, 0x10) * 4);
    temp_r5 = arg2 & 0x1F;
    if (temp_r5 != 0) {
        var_r2_3 = 0;
        do {
            *var_r4 = (*var_r3 << temp_r5) | var_r2_3;
            var_r4 += 4;
            temp_r2 = *var_r3;
            var_r3 += 4;
            var_r2_3 = temp_r2 >> (0x20 - temp_r5);
        } while ((u32) var_r3 < (u32) temp_r6_2);
        *var_r4 = var_r2_3;
        if (var_r2_3 != 0) {
            var_r7 += 1;
        }
    } else {
        do {
            temp_r0_2 = *var_r3;
            var_r3 += 4;
            *var_r4 = temp_r0_2;
            var_r4 += 4;
        } while ((u32) var_r3 < (u32) temp_r6_2);
    }
    M2C_FIELD(temp_r0, s32 *, 0x10) = (s32) (var_r7 - 1);
    sub_080A3A90(arg0, arg1);
    return temp_r0;
}
