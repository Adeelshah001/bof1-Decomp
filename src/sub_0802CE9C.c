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

s32 sub_0802CE9C(void *arg0, u8 arg1, u16 arg2) {
    s32 var_r4;

    var_r4 = 0;
    if (arg1 == 3) {
        if ((arg2 == 0xEE) && (M2C_FIELD(arg0, u8 *, 0x3F) == 1)) {
            M2C_FIELD(arg0, s8 *, 0x4D) = 0x1C;
            M2C_FIELD(arg0, s8 *, 0x50) = 0;
            M2C_FIELD((arg0 + 0x50), s8 *, 1) = 0;
            var_r4 = 1;
        }
        goto block_9;
    }
    if ((M2C_FIELD(arg0, u8 *, 0x61) == M2C_FIELD(arg0, u8 *, 0x62)) && (M2C_FIELD(arg0, u8 *, 0xBD) != 0)) {
        return 0;
    }
    if (M2C_FIELD(arg0, u8 *, 0x3F) == 1) {
        M2C_FIELD(arg0, u8 *, 0xBD) = 0x80U;
    }
block_9:
    return var_r4;
}
