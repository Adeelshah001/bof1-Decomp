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

M2C_UNK sub_080A0A68(M2C_UNK *, s32, s32);          /* extern */

void sub_08029F9C(void *arg0, s8 *arg1) {
    M2C_UNK sp0;
    s8 *var_r5;
    s8 temp_r0;
    s8 temp_r2;
    s8 var_r0;
    u16 temp_r1;
    u16 temp_r3;
    u16 var_r2;
    u8 *var_r4;
    u8 *var_r6;
    u8 temp_r2_2;
    u8 temp_r3_2;

    var_r5 = arg1;
    sub_080A0A68(&sp0, 0x080A6354, 8);
    var_r2 = 0;
    temp_r1 = M2C_FIELD(arg0, u16 *, 0x2E);
    var_r6 = M2C_FIELD(arg0, s32 *, 0x20) + temp_r1;
    temp_r3 = temp_r1;
    var_r4 = var_r6 + ((u32) (temp_r1 << 0x10) >> 0x13);
    if (temp_r1 & 7) {
        var_r4 += 1;
    }
    if ((u32) temp_r3 > 0U) {
        do {
            var_r0 = 7;
loop_5:
            temp_r2 = var_r0;
            temp_r3_2 = *(&sp0 + temp_r2);
            temp_r0 = ((s32) (temp_r3_2 & *var_r4) >> temp_r2) * 2;
            *var_r5 = temp_r0;
            *var_r5 = temp_r0 | ((s32) (temp_r3_2 & *var_r6) >> temp_r2);
            var_r5 += 1;
            temp_r2_2 = temp_r2 - 1;
            var_r0 = (s8) temp_r2_2;
            if ((s32) (temp_r2_2 << 0x18) >= 0) {
                goto loop_5;
            }
            var_r6 += 1;
            var_r4 += 1;
            var_r2 += 8;
        } while ((u32) var_r2 < (u32) temp_r3);
    }
}
