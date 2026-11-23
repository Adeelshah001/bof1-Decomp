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

M2C_UNK sub_080379D4(s32);                          /* extern */
u8 sub_0805B040(s32);                               /* extern */
M2C_UNK sub_0805B404(s32);                          /* extern */
s32 sub_08062B50(u8);                               /* extern */
s32 sub_08068B00();                                 /* extern */

s32 sub_08062C84(void) {
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r6;
    s32 var_r6_2;
    u16 temp_r1;
    u16 temp_r4;
    u8 *var_r3;
    u8 *var_r3_2;
    u8 *var_r4;
    u8 *var_r4_2;
    u8 var_r7;

    var_r7 = sub_0805B040(2);
    temp_r1 = M2C_FIELD((void *)0x030016E0, u16 *, 6);
    temp_r4 = 4 & temp_r1;
    if (temp_r4 != 0) {
        sub_080379D4(0x15);
        return sub_08068B00();
    }
    if (2 & temp_r1) {
        sub_080379D4(3);
        sub_0805B404(2);
        M2C_FIELD((void *)0x03004620, s8 *, 2) = 8;
        M2C_FIELD((void *)0x03004620, s8 *, 3) = (s8) temp_r4;
        M2C_FIELD((void *)0x03004620, s8 *, 7) = (s8) temp_r4;
        goto block_18;
    }
    if (1 & temp_r1) {
        sub_080379D4(2);
        sub_0805B404(2);
        var_r6 = 0;
        var_r4 = (u8 *)0x03002BA0;
        var_r3 = (u8 *)0x03002AEA;
        var_r2 = 7;
        do {
            if ((*var_r3 != 0) && !(0x40 & *var_r4)) {
                var_r6 += 1;
            }
            var_r4 += 0x124;
            var_r3 += 0x124;
            var_r2 -= 1;
        } while (var_r2 >= 0);
        if ((s32) var_r7 > (s32) (var_r6 - 1)) {
            var_r6_2 = 0;
            var_r4_2 = (u8 *)0x03002BA0;
            var_r3_2 = (u8 *)0x03002AEA;
            var_r2_2 = 7;
            do {
                if ((*var_r3_2 != 0) && !(0x40 & *var_r4_2)) {
                    var_r6_2 += 1;
                }
                var_r4_2 += 0x124;
                var_r3_2 += 0x124;
                var_r2_2 -= 1;
            } while (var_r2_2 >= 0);
            var_r7 = var_r6_2 - 1;
        }
        return sub_08062B50(var_r7);
    }
block_18:
    return 0;
}
