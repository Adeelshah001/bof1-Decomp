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

void sub_080736A4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r2;
    s32 var_r4;
    u16 *var_r1;
    u16 *var_r3;

    var_r4 = arg1;
    if (*(s32 *)0x030010C0 == 0) {
        var_r1 = (arg2 << 5) + 0x082D5C24;
        var_r3 = (u16 *)0x050003E0;
        var_r2 = 0xF;
        do {
            *var_r3 = *var_r1;
            var_r1 += 2;
            var_r3 += 2;
            var_r2 -= 1;
        } while (var_r2 >= 0);
        *(s32 *)0x030010C4 = arg3;
        *(s32 *)0x030010C0 = 1;
        if (arg2 != 0) {
            var_r4 -= 0xA;
        }
        *(s32 *)0x030010C8 = (arg0 + 8) - 0x28;
        *(s32 *)0x030010CC = var_r4 - 8;
    }
}
