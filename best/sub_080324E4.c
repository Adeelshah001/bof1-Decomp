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

void sub_080324E4(void *arg0) {
    s32 var_r0;
    u16 temp_r1;

    if (((M2C_FIELD(arg0, u16 *, 0x116) == 0x211D) || (M2C_FIELD(arg0, u16 *, 0xEC) == 0x2141) || (M2C_FIELD(arg0, u16 *, 0xEE) == 0x2141)) && !(0x80 & M2C_FIELD(arg0, u8 *, 0xF1))) {
        temp_r1 = M2C_FIELD(arg0, u16 *, 0xF4);
        var_r0 = M2C_FIELD(arg0, u16 *, 0xF6) + 1;
        if (var_r0 > (s32) temp_r1) {
            var_r0 = (s32) temp_r1;
        }
        M2C_FIELD(arg0, u16 *, 0xF6) = (u16) var_r0;
    }
}
