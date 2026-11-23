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

s32 sub_080237E0(void *arg0) {
    s32 var_r0;
    s32 var_r0_2;
    s8 var_r3;
    u8 temp_r1;

    *(s16 *)0x03004114 = 0;
    if ((M2C_FIELD((void *)0x03002AB0, u16 *, 2) == 0x1A98) && (M2C_FIELD((void *)0x03002AB0, u16 *, 6) == 0xFDCC)) {
        *(s16 *)0x03004114 = 1;
        var_r0 = 1;
    } else {
        *(s16 *)0x03004114 = 0;
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        var_r3 = 1;
        goto block_12;
    }
    if ((M2C_FIELD((void *)0x03002AB0, u16 *, 2) == 0x1AD8) && (M2C_FIELD((void *)0x03002AB0, u16 *, 6) == 0xFE8C)) {
        *(s16 *)0x03004114 = 1;
        var_r0_2 = 1;
    } else {
        *(s16 *)0x03004114 = 0;
        var_r0_2 = 0;
    }
    if (var_r0_2 != 0) {
        var_r3 = 2;
block_12:
        temp_r1 = *(u8 *)0x030033F0;
        if (!(var_r3 & temp_r1)) {
            *(u8 *)0x030033F0 = var_r3 | temp_r1;
            *(s8 *)0x03001850 = var_r3;
            *(s8 *)0x03004870 = var_r3;
            M2C_FIELD(arg0, u8 *, 0xB8) = (u8) (4 | M2C_FIELD(arg0, u8 *, 0xB8));
            *(s8 *)0x0300486F = 0xE;
        }
        *(s16 *)0x03004114 = 0;
    }
    return 0;
}
