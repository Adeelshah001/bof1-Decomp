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

s32 sub_080A3BC4(u32);                              /* extern */

s32 sub_080A40D4(void *arg0, s32 *arg1) {
    u32 sp0;
    s32 temp_r0;
    s32 temp_r3;
    s32 var_r6;
    u32 *var_r5;
    u32 temp_r1;
    u32 temp_r2;
    u32 var_r4;

    temp_r1 = arg0 + 0x14;
    var_r5 = (temp_r1 + (M2C_FIELD(arg0, s32 *, 0x10) * 4)) - 4;
    temp_r2 = *var_r5;
    sp0 = temp_r2;
    temp_r0 = sub_080A3BC4(temp_r2);
    *arg1 = 0x20 - temp_r0;
    if (temp_r0 <= 0xA) {
        var_r6 = (temp_r2 >> (0xB - temp_r0)) | 0x3FF00000;
        if ((u32) var_r5 > temp_r1) {

        }
    } else {
        if ((u32) var_r5 > temp_r1) {
            var_r5 -= 4;
            var_r4 = *var_r5;
        } else {
            var_r4 = 0;
        }
        temp_r3 = temp_r0 - 0xB;
        if (temp_r3 != 0) {
            var_r6 = (temp_r2 << temp_r3) | ((var_r4 >> (0x20 - temp_r3)) | 0x3FF00000);
            if ((u32) var_r5 > temp_r1) {

            }
        } else {
            var_r6 = temp_r2 | 0x3FF00000;
        }
    }
    return var_r6;
}
