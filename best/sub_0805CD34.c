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

s32 sub_0805CD34(s32 arg0, u16 arg1) {
    u16 temp_r1;

    temp_r1 = arg1;
    if ((arg0 << 0x10) != 0) {
        if ((u32) (M2C_FIELD((void *)0x0202DBD0, s32 *, 0x20) + temp_r1) <= 0xF423FU) {
            goto block_4;
        }
        goto block_5;
    }
    if ((s32) (M2C_FIELD((void *)0x0202DBD0, s32 *, 0x20) - temp_r1) >= 0) {
block_4:
        return 1;
    }
block_5:
    return 0;
}
