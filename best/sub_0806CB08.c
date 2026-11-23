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

M2C_UNK sub_0806BD58(s32, s32, s32, s32);           /* extern */
M2C_UNK sub_080739D0(s32);                          /* extern */

void sub_0806CB08(void) {
    s16 *var_r1;
    s16 *var_r1_2;
    u16 *var_r2;
    u16 *var_r3;
    u16 temp_r0;
    u16 temp_r0_2;

    var_r2 = (u16 *)0x08150EA4;
    var_r1 = M2C_FIELD((void *)0x08150C68, s32 *, 0) + (M2C_FIELD((void *)0x08150C68, s32 *, 4) * 4) + 0x18;
loop_2:
    temp_r0 = *var_r2;
    if (temp_r0 != 0) {
        *var_r1 = temp_r0 + 0x8000;
        var_r2 += 2;
        var_r1 += 2;
        goto loop_2;
    }
    sub_080739D0(0);
    var_r3 = (u16 *)0x08150EBA;
    var_r1_2 = M2C_FIELD((void *)0x08150C68, s32 *, 0) + (3 * M2C_FIELD((void *)0x08150C68, s32 *, 4) * 2) + 0x18;
loop_5:
    temp_r0_2 = *var_r3;
    if (temp_r0_2 != 0) {
        *var_r1_2 = temp_r0_2 + 0x8000;
        var_r3 += 2;
        var_r1_2 += 2;
        goto loop_5;
    }
    sub_080739D0(0);
    if (*(s32 *)0x03000F48 != 0) {
        sub_0806BD58(0, 0x10, 2, 0x08150ED0);
    }
}
