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

s32 sub_08048040(void *arg0, void *arg1, s16 *arg2) {
    s16 var_r0;
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 4) - 1;
    M2C_FIELD(arg0, u8 *, 4) = temp_r0;
    if ((temp_r0 << 0x18) != 0) {
        if (M2C_FIELD(arg1, u16 *, 2) != M2C_FIELD(arg1, u16 *, 0xA)) {
            var_r0 = 1;
            goto block_7;
        }
        if (M2C_FIELD(arg1, u16 *, 6) != M2C_FIELD(arg1, u16 *, 0xE)) {
            var_r0 = 0;
            goto block_7;
        }
        return 0;
    }
    M2C_FIELD(arg0, u8 *, 4) = (u8) M2C_FIELD(arg0, u8 *, 5);
    var_r0 = 2;
block_7:
    *arg2 = var_r0;
    return 1;
}
