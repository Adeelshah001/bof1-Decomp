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

s32 sub_0803FE44(u8 arg1) {
    u8 sp0;
    s32 var_r1;
    u8 var_r3;
    void *temp_r0;
    void *temp_r2;

    var_r1 = 0;
    var_r3 = 0;
    do {
        temp_r2 = (var_r3 * 0x30) + 0x03001790;
        if ((M2C_FIELD(temp_r2, u8 *, 0x29) != 0) && (M2C_FIELD(temp_r2, u8 *, 0x1E) == arg1)) {
            var_r1 = 1;
            sp0 = var_r3;
        }
        var_r3 += 1;
    } while ((u32) var_r3 <= 3U);
    if (var_r1 != 0) {
        temp_r0 = (sp0 * 0x30) + 0x03001790;
        M2C_FIELD(temp_r0, s8 *, 0x29) = 0;
        M2C_FIELD(temp_r0, s16 *, 8) = 0;
        M2C_FIELD(temp_r0, s16 *, 0xC) = 0;
        M2C_FIELD(temp_r0, s32 *, 0x2C) = 0;
    }
    return 0;
}
