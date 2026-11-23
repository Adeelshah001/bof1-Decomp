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

s32 sub_0805F040(void) {
    s32 sp0;
    s32 var_r1;
    s32 var_r5;
    u16 *var_r3;
    u16 temp_r0;
    u32 temp_r1_2;
    u8 temp_r1;

    temp_r1 = (*(u8 *)0x030046E6 + 1) & 0x3F;
    *(u8 *)0x030046E6 = temp_r1;
    temp_r1_2 = temp_r1 >> 2;
    var_r5 = 0x06017E00;
    var_r3 = (u16 *)0x03004650;
    var_r1 = 7;
    do {
        temp_r0 = *var_r3;
        if (temp_r0 != 1) {
            if (temp_r0 != 2) {
                sp0 = 0;
                M2C_FIELD((void *)0x040000D4, s32 **, 0) = &sp0;
                M2C_FIELD((void *)0x040000D4, s32 *, 4) = var_r5;
                M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x85000008;
            } else {
                M2C_FIELD((void *)0x040000D4, s32 **, 0) = (s32 *) (((0xF - temp_r1_2) * 4) + 0x08100D64);
                goto block_6;
            }
        } else {
            M2C_FIELD((void *)0x040000D4, s32 **, 0) = (s32 *) ((temp_r1_2 * 4) + 0x08100D04);
block_6:
            M2C_FIELD((void *)0x040000D4, s32 *, 4) = var_r5;
            M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
        }
        var_r5 += 0x20;
        var_r3 += 2;
        var_r1 -= 1;
    } while (var_r1 >= 0);
    return M2C_FIELD((void *)0x040000D4, s32 *, 8);
}
