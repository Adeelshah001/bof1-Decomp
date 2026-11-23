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

s32 sub_08028220(void *arg0, u16 *arg1, s32 *arg2) {
    u8 var_r2;
    u8 var_r3;
    void *temp_r1;

    var_r2 = 0;
    var_r3 = 1;
    if (!(0x8000 & *arg1)) {
loop_2:
        temp_r1 = (var_r2 * 2) + arg1;
        if ((M2C_FIELD(temp_r1, u16 *, 0) == M2C_FIELD(arg0, u16 *, 2)) && (M2C_FIELD(temp_r1, u16 *, 2) == M2C_FIELD(arg0, u16 *, 6))) {
            *arg2 = (var_r3 * 0x90) + 0x03002480;
            *(u8 *)0x03001850 = var_r3;
            return 1;
        }
        var_r2 += 2;
        var_r3 += 1;
        if (0x8000 & *((var_r2 * 2) + arg1)) {
            goto block_6;
        }
        goto loop_2;
    }
block_6:
    return 0;
}
