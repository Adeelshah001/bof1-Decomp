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

s32 sub_0803A508(void *arg0) {
    s32 var_r4;
    s32 var_r5;
    u8 temp_r1;

    var_r5 = 1;
    var_r4 = 0x1FFF;
    temp_r1 = M2C_FIELD(arg0, u8 *, 0x3A);
    if (temp_r1 != 0) {
        M2C_FIELD(arg0, u8 *, 0x3A) = (u8) (0xFD & temp_r1);
        if ((*(u8 *)0x030040EC != 0) || (*(u16 *)0x03002484 != 0)) {
            var_r4 = 0xFFFF;
        }
        if (((u32) (((M2C_FIELD(arg0, u16 *, 2) - M2C_FIELD((void *)0x030023E0, u16 *, 2)) + 0x40) & 0x1FFF) <= 0x17FU) && ((u32) (((M2C_FIELD(arg0, u16 *, 6) - M2C_FIELD((void *)0x030023E0, u16 *, 6)) + 0x40) & var_r4) <= 0x17FU)) {
            M2C_FIELD(arg0, u8 *, 0x3A) = (u8) (2 | M2C_FIELD(arg0, u8 *, 0x3A));
            var_r5 = 0;
        }
    }
    return var_r5;
}
