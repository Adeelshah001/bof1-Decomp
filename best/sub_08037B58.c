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

s32 sub_08037B58(u16 arg0) {
    s32 var_r3;
    u16 temp_r1;
    void *var_r2;

    var_r3 = 0;
    var_r2 = (void *)0x080FADF8;
loop_4:
    temp_r1 = M2C_FIELD(var_r2, u16 *, 2);
    if (temp_r1 != 0) {
        if (arg0 & temp_r1) {
            var_r3 |= M2C_FIELD(var_r2, u16 *, 0);
        }
        var_r2 += 4;
        goto loop_4;
    }
    return var_r3;
}
