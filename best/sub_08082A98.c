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

s32 sub_08082A98(void *arg0) {
    u16 var_r1;
    u8 temp_r1;
    void *var_r0;

    temp_r1 = M2C_FIELD(arg0, u8 *, 0xF0);
    if (!(0x20 & temp_r1)) {
        if ((temp_r1 & 8) && ((0xF0 & M2C_FIELD(arg0, u8 *, 0xE2)) == 0x80)) {
            var_r0 = (void *)0x03004EC0;
            goto block_6;
        }
        var_r1 = M2C_FIELD(arg0, u16 *, 0xF4);
    } else {
        var_r0 = (void *)0x03004F18;
block_6:
        var_r1 = M2C_FIELD(var_r0, u16 *, 2);
    }
    if ((u32) var_r1 > 0x3E6U) {
        return 1;
    }
    return 0;
}
