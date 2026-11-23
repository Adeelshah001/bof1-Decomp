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

void sub_080343D0(void *arg0) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r1;
    s32 var_r1_2;
    u16 var_r3;
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x61);
    switch (temp_r0) {                              /* irregular */
    case 0:
        var_r1 = M2C_FIELD((void *)0x0822DF9C, u8 *, 0) | (M2C_FIELD((void *)0x0822DF9C, u8 *, 1) << 8);
        var_r0 = 0x2A61;
block_11:
        var_r3 = var_r1 + var_r0;
        if (!(0x10 & M2C_FIELD((void *)0x03002AB0, u16 *, 2))) {
            var_r3 += 1;
        }
        break;
    case 1:
        var_r1_2 = M2C_FIELD((void *)0x0822DF9C, u8 *, 0) | (M2C_FIELD((void *)0x0822DF9C, u8 *, 1) << 8);
        var_r0_2 = 0x2A65;
block_9:
        var_r3 = var_r1_2 + var_r0_2;
        break;
    case 3:
        var_r1_2 = M2C_FIELD((void *)0x0822DF9C, u8 *, 0) | (M2C_FIELD((void *)0x0822DF9C, u8 *, 1) << 8);
        var_r0_2 = 0x2A57;
        goto block_9;
    default:
        var_r1 = M2C_FIELD((void *)0x0822DF9C, u8 *, 0) | (M2C_FIELD((void *)0x0822DF9C, u8 *, 1) << 8);
        var_r0 = 0x2A59;
        goto block_11;
    }
    M2C_FIELD(arg0, s32 *, 0x88) = (s32) (var_r3 + 0x0822DF68);
}
