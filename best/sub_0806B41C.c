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

M2C_UNK sub_080739F8();                             /* extern */
M2C_UNK sub_08073B5C(s32);                          /* extern */

void sub_0806B41C(void) {
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r1_4;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r4_3;
    s32 var_r4_4;
    s32 var_r4_5;
    u16 *var_r2;
    u16 *var_r2_2;
    u16 *var_r2_3;
    u16 *var_r2_4;
    u16 *var_r3;
    u16 *var_r3_2;
    u16 *var_r3_3;
    u16 *var_r3_4;
    u16 *var_r3_5;
    u16 *var_r3_6;

    var_r3 = (u16 *)0x08150BE8;
    var_r2 = (u16 *)0x05000100;
    var_r4 = 0;
    do {
        var_r1 = 0xF;
loop_2:
        *var_r2 = *var_r3;
        var_r3 += 2;
        var_r2 += 2;
        var_r1 -= 1;
        if (var_r1 >= 0) {
            goto loop_2;
        }
        var_r4 -= 1;
    } while (var_r4 >= 0);
    var_r3_2 = (u16 *)0x08150C08;
    var_r4_2 = 0;
    do {
        var_r1_2 = 0xF;
loop_6:
        *var_r2 = *var_r3_2;
        var_r3_2 += 2;
        var_r2 += 2;
        var_r1_2 -= 1;
        if (var_r1_2 >= 0) {
            goto loop_6;
        }
        var_r4_2 -= 1;
    } while (var_r4_2 >= 0);
    var_r3_3 = (u16 *)0x08150C28;
    var_r4_3 = 0;
    do {
        var_r1_3 = 0xF;
loop_10:
        *var_r2 = *var_r3_3;
        var_r3_3 += 2;
        var_r2 += 2;
        var_r1_3 -= 1;
        if (var_r1_3 >= 0) {
            goto loop_10;
        }
        var_r4_3 -= 1;
    } while (var_r4_3 >= 0);
    var_r3_4 = (u16 *)0x082D54E4;
    var_r2_2 = (u16 *)0x05000160;
    var_r4_4 = 0xF;
    do {
        *var_r2_2 = *var_r3_4;
        var_r3_4 += 2;
        var_r2_2 += 2;
        var_r4_4 -= 1;
    } while (var_r4_4 >= 0);
    var_r3_5 = (u16 *)0x082D4CC4;
    var_r2_3 = (u16 *)0x05000180;
    var_r4_5 = 0xF;
    do {
        *var_r2_3 = *var_r3_5;
        var_r3_5 += 2;
        var_r2_3 += 2;
        var_r4_5 -= 1;
    } while (var_r4_5 >= 0);
    sub_080739F8();
    sub_08073B5C(0);
    var_r3_6 = (u16 *)0x08150C48;
    var_r2_4 = (u16 *)0x050001E0;
    var_r1_4 = 0xF;
    do {
        *var_r2_4 = *var_r3_6;
        var_r3_6 += 2;
        var_r2_4 += 2;
        var_r1_4 -= 1;
    } while (var_r1_4 >= 0);
}
