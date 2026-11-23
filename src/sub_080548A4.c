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

extern M2C_UNK sub_08054460;

s32 sub_080548A4(void *arg0) {
    void *temp_r1;
    void *temp_r3;

    temp_r1 = M2C_FIELD(arg0, void **, 0x68);
    temp_r3 = temp_r1 + 1;
    M2C_FIELD(arg0, void **, 0x68) = temp_r3;
    M2C_FIELD(arg0, void **, 0x68) = (void *) (((M2C_FIELD(temp_r1, u8 *, 1) | (M2C_FIELD(temp_r3, u8 *, 1) << 8)) & 0x7FFF) + 0x08221D40);
    M2C_FIELD(arg0, M2C_UNK **, 0x78) = &sub_08054460;
    return 0;
}
