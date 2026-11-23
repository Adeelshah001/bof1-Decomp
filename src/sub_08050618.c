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

extern M2C_UNK sub_08054B48;

void sub_08050618(void *arg0) {
    u16 temp_r1;
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0xD4);
    M2C_FIELD(arg0, M2C_UNK **, 0x68) = (M2C_UNK *) M2C_FIELD(temp_r2, M2C_UNK **, 0x78);
    M2C_FIELD(temp_r2, M2C_UNK **, 0x78) = &sub_08054B48;
    M2C_FIELD(arg0, u16 *, 2) = (u16) M2C_FIELD(temp_r2, u16 *, 2);
    temp_r1 = M2C_FIELD(temp_r2, u16 *, 6);
    M2C_FIELD(arg0, u16 *, 6) = temp_r1;
    M2C_FIELD(arg0, u16 *, 0x2C) = temp_r1;
}
