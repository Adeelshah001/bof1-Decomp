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

void *sub_0805C574(u16);                            /* extern */

u8 sub_080613AC(u16 arg0, void *arg1, void *arg2) {
    s32 temp_r1;
    u16 *var_r2_2;
    u16 temp_r0;
    u16 var_r0;
    u8 temp_r1_2;
    void *var_r2;

    var_r2 = arg2;
    temp_r0 = arg0;
    temp_r1 = 0xF000 & temp_r0;
    switch (temp_r1) {                              /* irregular */
    case 0x1000:
        var_r0 = M2C_FIELD(arg1, u16 *, 0x112);
block_12:
        var_r2 = sub_0805C574(var_r0);
    default:
        return M2C_FIELD(var_r2, u8 *, 0xF);
    case 0x2000:
        temp_r1_2 = M2C_FIELD(sub_0805C574(temp_r0), u8 *, 8);
        if (8 & temp_r1_2) {
            var_r2_2 = arg1 + 0x114;
            goto block_5;
        }
        if (4 & temp_r1_2) {
            var_r2_2 = arg1 + 0x116;
block_5:
            if (!(0xF00 & *var_r2_2)) {
                goto block_13;
            }
            goto block_11;
        }
        if (2 & temp_r1_2) {
            var_r2_2 = arg1 + 0x118;
            if (0xF00 & M2C_FIELD(arg1, u16 *, 0x118)) {
block_11:
                var_r0 = *var_r2_2;
                goto block_12;
            }
        }
block_13:
        return 0U;
    }
}
