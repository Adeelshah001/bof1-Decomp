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

s32 sub_0803A024(void *arg0, u16 *arg1, u16 *arg2) {
    s32 temp_r1;
    s32 var_r6;
    u16 temp_r2;
    u16 temp_r2_2;
    u16 var_r0;

    var_r6 = 0;
    *arg1 = (M2C_FIELD(arg0, u16 *, 2) - M2C_FIELD((void *)0x030023E0, u16 *, 2)) - *(u8 *)0x03001674;
    *arg2 = (M2C_FIELD(arg0, u16 *, 6) - M2C_FIELD((void *)0x030023E0, u16 *, 6)) - *(u8 *)0x030016A4;
    if ((M2C_FIELD((void *)0x030023E0, u16 *, 0xA4) == 0) && (*(u8 *)0x030040EC == 0)) {
        var_r6 = 1;
    }
    if (M2C_FIELD((void *)0x030023E0, u16 *, 0xA4) == 0xEF) {
        temp_r1 = 0xF0 & *(u8 *)0x030045D5;
        if (0x10 & temp_r1) {
            if (!(temp_r1 & 0x20)) {
                temp_r2 = (*arg2 ^ 0xFF) - 7;
                *arg2 = *arg1 - 0x20;
                var_r0 = temp_r2 - 0x28;
            } else {
                temp_r2_2 = *arg2 + 8;
                *arg2 = (*arg1 ^ 0xFF) - 0x2F;
                var_r0 = temp_r2_2 + 0x18;
            }
            *arg1 = var_r0;
            return 0;
        }
        if (temp_r1 & 0x20) {
            *arg2 = (*arg2 ^ 0xFF) - 0x4F;
            *arg1 = (*arg1 ^ 0xFF) - 0xF;
        }
        goto block_11;
    }
block_11:
    return var_r6;
}
