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

void sub_08056A64(void *arg0, u16 arg1) {
    s32 var_r1;
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u16 *, 0xF4);
    var_r1 = arg1 + M2C_FIELD(arg0, u16 *, 0xF6);
    if (var_r1 > (s32) temp_r0) {
        var_r1 = (s32) temp_r0;
    }
    M2C_FIELD(arg0, u16 *, 0xF6) = (u16) var_r1;
    M2C_FIELD(arg0, u8 *, 0xF1) = (u8) (0x7F & M2C_FIELD(arg0, u8 *, 0xF1));
}
