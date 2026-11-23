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

s32 sub_0804731C(void *arg0, u16 arg1, u16 arg2) {
    s32 var_r8;
    u16 temp_r2;
    u16 temp_r3;
    u16 var_r1;
    u16 var_r1_2;

    temp_r3 = arg1;
    temp_r2 = arg2;
    var_r8 = 0;
    if (!(2 & *(u8 *)0x0202DE88)) {
        var_r1 = M2C_FIELD(arg0, u16 *, 2) - M2C_FIELD((void *)0x03002AB0, u16 *, 2);
        if (var_r1 & 0x8000) {
            var_r1 = ~var_r1 + 1;
        }
        if ((s32) (var_r1 + temp_r3) < (s32) temp_r2) {
            var_r1_2 = M2C_FIELD(arg0, u16 *, 0x2C) - M2C_FIELD((void *)0x03002AB0, u16 *, 6);
            if (var_r1_2 & 0x8000) {
                var_r1_2 = ~var_r1_2 + 1;
            }
            if ((s32) (var_r1_2 + temp_r3) < (s32) temp_r2) {
                var_r8 = 1;
            }
        }
    }
    return var_r8;
}
