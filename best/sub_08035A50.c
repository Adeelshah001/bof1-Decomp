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

void sub_08035A50(u16 arg0, s32 arg1, s32 arg2) {
    u16 var_r4;
    u8 temp_r2_2;
    u8 var_r3;
    u8 var_r3_2;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r2;
    void *temp_r3;
    void *var_r1;

    var_r3 = 0;
    do {
        temp_r0 = (var_r3 * 0x1C) + 0x03002490;
        M2C_FIELD(temp_r0, s8 *, 0x18) = 0;
        M2C_FIELD(temp_r0, s16 *, 0x10) = 0;
        var_r3 += 1;
    } while ((u32) var_r3 <= 3U);
    *(s8 *)0x030033D0 = 0;
    temp_r0_2 = arg2 + (arg0 * 2);
    var_r4 = M2C_FIELD(temp_r0_2, u8 *, 0) | (M2C_FIELD(temp_r0_2, u8 *, 1) << 8);
    if (var_r4 != 0xFFFF) {
        *(s8 *)0x080FAA6C = 0;
loop_8:
        var_r1 = NULL;
        var_r3_2 = 0;
        if (M2C_FIELD((void *)0x03002490, u8 *, 0x18) == 0) {
            var_r1 = (void *)0x03002490;
        } else {
loop_10:
            var_r3_2 += 1;
            if ((u32) var_r3_2 <= 3U) {
                temp_r2 = (var_r3_2 * 0x1C) + 0x03002490;
                if (M2C_FIELD(temp_r2, u8 *, 0x18) == 0) {
                    var_r1 = temp_r2;
                } else {
                    goto loop_10;
                }
            }
        }
        if (var_r1 != NULL) {
            temp_r3 = arg1 + var_r4;
            temp_r2_2 = M2C_FIELD(temp_r3, u8 *, 0);
            M2C_FIELD(var_r1, u8 *, 0x19) = temp_r2_2;
            if (M2C_FIELD(temp_r3, u8 *, 0) != 0) {
                M2C_FIELD(var_r1, s8 *, 0x10) = 1;
                if (8 & temp_r2_2) {
                    M2C_FIELD(var_r1, s8 *, 0x10) = 0;
                }
                M2C_FIELD(var_r1, s16 *, 0) = (s16) (M2C_FIELD(temp_r3, u8 *, 1) | (M2C_FIELD(temp_r3, u8 *, 2) << 8));
                M2C_FIELD(var_r1, s16 *, 4) = (s16) (M2C_FIELD(temp_r3, u8 *, 3) | (M2C_FIELD(temp_r3, u8 *, 4) << 8));
                M2C_FIELD(var_r1, s16 *, 6) = (s16) ((M2C_FIELD(temp_r3, u8 *, 5) | (M2C_FIELD(temp_r3, u8 *, 6) << 8)) + 0x499D);
                M2C_FIELD(var_r1, s16 *, 8) = (s16) ((M2C_FIELD(temp_r3, u8 *, 7) | (M2C_FIELD(temp_r3, u8 *, 8) << 8)) + 0x58E3);
                M2C_FIELD(var_r1, s16 *, 0xA) = 0;
                M2C_FIELD(var_r1, s8 *, 0x18) = 1;
                M2C_FIELD(var_r1, s16 *, 0xC) = 0;
                var_r4 += 9;
                goto loop_8;
            }
        }
    }
}
