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

void sub_08071C1C(void) {
    s32 temp_r3;
    s32 var_r0_2;
    s32 var_r0_4;
    s32 var_r12;
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r2_3;
    s32 var_r2_4;
    s32 var_r7;
    s32 var_r7_2;
    u16 *temp_r6;
    u16 *temp_r6_2;
    u16 *var_r0;
    u16 *var_r0_3;
    u16 *var_r1;
    u16 *var_r1_2;
    u16 *var_r4;
    u16 *var_r4_2;

    var_r12 = 0x1200;
    var_r7 = 3;
    do {
        var_r4 = (u16 *)0x081511A8;
        var_r0 = var_r12 + 0x06010000;
        var_r2 = 0;
loop_2:
        var_r1 = var_r0;
        var_r0_2 = 0;
        temp_r6 = var_r1 + 0x400;
loop_3:
        var_r2_2 = 0xF;
loop_4:
        *var_r1 = *var_r4;
        var_r4 += 2;
        var_r1 += 2;
        var_r2_2 -= 1;
        if (var_r2_2 >= 0) {
            goto loop_4;
        }
        var_r0_2 += 1;
        if (var_r0_2 < 1) {
            goto loop_3;
        }
        var_r0 = temp_r6;
        var_r2 -= 1;
        if (var_r2 != -1) {
            goto loop_2;
        }
        var_r12 += 0x20;
        var_r7 -= 1;
    } while (var_r7 >= 0);
    var_r7_2 = 0;
    do {
        var_r4_2 = (u16 *)0x081511A8;
        var_r0_3 = (((var_r7_2 << 5) + 0x1F) << 5) + 0x06010000;
        var_r2_3 = 0;
        var_r7_2 += 1;
loop_10:
        var_r1_2 = var_r0_3;
        var_r0_4 = 0;
        temp_r6_2 = var_r1_2 + 0x400;
loop_11:
        temp_r3 = var_r0_4 + 1;
        var_r2_4 = 0xF;
loop_12:
        *var_r1_2 = *var_r4_2;
        var_r4_2 += 2;
        var_r1_2 += 2;
        var_r2_4 -= 1;
        if (var_r2_4 >= 0) {
            goto loop_12;
        }
        var_r0_4 = temp_r3;
        if (var_r0_4 < 1) {
            goto loop_11;
        }
        var_r0_3 = temp_r6_2;
        var_r2_3 -= 1;
        if (var_r2_3 != -1) {
            goto loop_10;
        }
    } while (var_r7_2 <= 3);
}
