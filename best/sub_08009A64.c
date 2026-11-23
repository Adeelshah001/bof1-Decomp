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

void sub_08009A64(void *arg0) {
    s32 var_r1;
    u8 temp_r3;

    temp_r3 = 0xF0 & M2C_FIELD(arg0, u8 *, 0x41);
    M2C_FIELD(arg0, u8 *, 0x41) = temp_r3;
    if (0x60 & *(u8 *)0x03002CC5) {
        var_r1 = 8;
    } else {
        var_r1 = 0xA;
    }
    M2C_FIELD(arg0, u8 *, 0x41) = (u8) (temp_r3 | var_r1);
    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) + 2);
}
