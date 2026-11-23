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

s32 sub_08059978(void) {
    s32 sp0;
    s16 *var_r0_2;
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r2;
    s32 var_r0;
    s32 var_r0_3;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r3;
    s32 var_r3_2;

    *(s8 *)0x03000B08 = 0;
    temp_r2 = M2C_FIELD((void *)0x03000AE0, s32 *, 0x1C);
    if (temp_r2 != 0) {
        var_r1 = 0;
        do {
            var_r0_2 = (var_r1 << 6) + 0x402 + 0x0201AFC0;
            var_r1_2 = 0x1B;
loop_3:
            *var_r0_2 = 0x40;
            var_r0_2 += 2;
            var_r1_2 -= 1;
            if (var_r1_2 >= 0) {
                goto loop_3;
            }
            var_r1 += 1;
        } while (var_r1 <= 3);
        temp_r0 = *(s32 *)0x03001694 | 0x40000;
        *(s32 *)0x03001694 = temp_r0;
        return temp_r0;
    }
    temp_r1 = M2C_FIELD((void *)0x03000AE0, s32 *, 4);
    if (temp_r1 == 0x080FFA00) {
        sp0 = temp_r2;
        M2C_FIELD((void *)0x040000D4, s32 **, 0) = &sp0;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06017000;
        var_r0_3 = 0x85000200;
        goto block_10;
    }
    if (temp_r1 == 0x080FFA80) {
        sp0 = temp_r2;
        M2C_FIELD((void *)0x040000D4, s32 **, 0) = &sp0;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06010000;
        var_r0_3 = 0x85000800;
block_10:
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = var_r0_3;
        return M2C_FIELD((void *)0x040000D4, s32 *, 8);
    }
    var_r0 = 0x080FF990;
    if (temp_r1 == 0x080FF990) {
        var_r3 = 0x06014200;
        var_r2 = 7;
        do {
            sp0 = 0;
            M2C_FIELD((void *)0x040000D4, s32 **, 0) = &sp0;
            M2C_FIELD((void *)0x040000D4, s32 *, 4) = var_r3;
            M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x85000080;
            var_r3 += 0x400;
            var_r2 -= 1;
        } while (var_r2 >= 0);
        var_r3_2 = 0x06016200;
        var_r2_2 = 7;
        do {
            sp0 = 0;
            M2C_FIELD((void *)0x040000D4, s32 **, 0) = &sp0;
            M2C_FIELD((void *)0x040000D4, s32 *, 4) = var_r3_2;
            M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x85000070;
            var_r0 = M2C_FIELD((void *)0x040000D4, s32 *, 8);
            var_r3_2 += 0x400;
            var_r2_2 -= 1;
        } while (var_r2_2 >= 0);
    }
    return var_r0;
}
