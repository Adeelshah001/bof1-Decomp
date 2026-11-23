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

void sub_080239D8(void *arg0, void *arg1, u8 arg2) {
    u8 var_r4;
    void *var_r3;

    var_r3 = arg1;
    var_r4 = arg2;
loop_1:
    if ((M2C_FIELD(var_r3, u16 *, 2) == M2C_FIELD(arg0, u16 *, 6)) && ((M2C_FIELD(var_r3, u16 *, 0) + (((s32) (0 - (u8) (2 & *(u8 *)0x030033F0)) >> 0x1F) & 0x10)) == M2C_FIELD(arg0, u16 *, 2))) {
        if (2 & *(u8 *)0x030033F0) {
            *(u8 *)0x030033F0 = 0;
        } else {
            *(u8 *)0x030033F0 = 2;
        }
        *(s8 *)0x03001850 = 1;
        *(u8 *)0x03002B68 |= 4;
        *(s8 *)0x0300486F = 0xE;
        *(s8 *)0x03004870 = 1;
        *(s16 *)0x03004114 = 0;
        return;
    }
    var_r3 += 4;
    var_r4 -= 1;
    if (var_r4 == 0) {
        *(s16 *)0x03004114 = (s16) var_r4;
        return;
    }
    goto loop_1;
}
