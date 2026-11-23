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

u16 sub_0803A584(void *arg0) {
    u16 var_r2;
    u8 temp_r1;

    var_r2 = M2C_FIELD(arg0, u16 *, 0x2C);
    if ((*(u8 *)0x030040E4 != 0) && (*(u8 *)0x030040EC == 0)) {
        temp_r1 = *(u8 *)0x030045D5;
        if (0x10 & temp_r1) {
            var_r2 = M2C_FIELD(arg0, u16 *, 2);
        }
        if (0x20 & temp_r1) {
            var_r2 = ~var_r2 + 1;
        }
    }
    return var_r2;
}
