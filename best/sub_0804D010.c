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

extern M2C_UNK sub_0804BF28;

void sub_0804D010(void *arg0) {
    void *temp_r1;

    if (M2C_FIELD((void *)0x03004830, u16 *, 0x2A) == 0x1E0D) {
        M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_0804BF28;
        temp_r1 = arg0 + 0x62;
        M2C_FIELD(arg0, s8 *, 0x62) = 0xFF;
        M2C_FIELD(temp_r1, u16 *, 0x44) = (u16) (M2C_FIELD(temp_r1, u16 *, 0x44) + 2);
    }
}
