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

s32 sub_080357F4(u16 arg0, u16 arg1) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    s32 var_r0_7;
    s32 var_r1;
    u16 temp_r0;
    u16 temp_r3;
    u16 temp_r3_2;
    u16 temp_r7;
    u16 var_r2;
    u16 var_r4;

    temp_r0 = arg0;
    temp_r7 = arg1;
    var_r1 = temp_r0 & 0x1F;
    var_r4 = temp_r0 & 0x3E0;
    var_r2 = temp_r0 & 0x7C00;
    temp_r3 = *(u16 *)0x03004E14;
    if ((temp_r3 != 0) && (*(u16 *)0x03004E18 & temp_r7)) {
        var_r0 = var_r1 + (0x1F & temp_r3);
        if (var_r0 > 0x1F) {
            var_r0 = 0x1F;
        }
        var_r1 = var_r0;
        var_r0_2 = var_r4 + (0x3E0 & temp_r3);
        if (var_r0_2 > 0x3E0) {
            var_r0_2 = 0x3E0;
        }
        var_r4 = (u16) var_r0_2;
        var_r0_3 = var_r2 + (0x7C00 & temp_r3);
        if (var_r0_3 > 0x7C00) {
            var_r0_3 = 0x7C00;
        }
        var_r2 = (u16) var_r0_3;
    } else {
        temp_r3_2 = *(u16 *)0x03004E0C;
        if ((temp_r3_2 != 0) && (*(u16 *)0x03004E08 & temp_r7)) {
            var_r0_4 = var_r1 - (0x1F & temp_r3_2);
            if (var_r0_4 < 0) {
                var_r0_4 = 0;
            }
            var_r0_5 = var_r4 - (0x3E0 & temp_r3_2);
            if (var_r0_5 < 0) {
                var_r0_5 = 0;
            }
            var_r4 = (u16) var_r0_5;
            var_r0_6 = var_r2 - (0x7C00 & temp_r3_2);
            if (var_r0_6 < 0) {
                var_r0_6 = 0;
            }
            var_r2 = (u16) var_r0_6;
            var_r0_7 = (u16) var_r0_4 + *(u16 *)0x03004E1C;
            if (var_r0_7 > 0x1F) {
                var_r0_7 = 0x1F;
            }
            var_r1 = (s32) (u16) var_r0_7;
        }
    }
    return var_r2 | (var_r4 | var_r1);
}
