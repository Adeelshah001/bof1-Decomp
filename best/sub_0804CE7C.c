/* machine draft (m2c) for agbcc -mthumb-interwork -O2, tried by autopilot */
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

extern M2C_UNK sub_0804D220;

void sub_0804CE7C(void *arg0) {
    u16 temp_r2;

    temp_r2 = M2C_FIELD(arg0, u16 *, 0x24);
    if (temp_r2 == 0) {
        M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_0804D220;
        M2C_FIELD(arg0, s8 *, 0x54) = (s8) temp_r2;
        M2C_FIELD(arg0, u16 *, 0xA6) = (u16) (M2C_FIELD(arg0, u16 *, 0xA6) + 2);
    }
}
