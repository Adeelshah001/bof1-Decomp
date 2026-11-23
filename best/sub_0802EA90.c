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

void sub_0802EA90(void *arg0) {
    u16 temp_r1;
    u16 temp_r1_2;
    void *temp_r0;
    void *temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, void **, 0x88);
    temp_r1 = M2C_FIELD(temp_r0, u8 *, 1) | (M2C_FIELD(temp_r0, u8 *, 2) << 8);
    M2C_FIELD(arg0, u16 *, 2) = temp_r1;
    M2C_FIELD(arg0, u16 *, 0x46) = temp_r1;
    M2C_FIELD(arg0, u16 *, 0x82) = (u16) M2C_FIELD(arg0, u16 *, 2);
    temp_r0_2 = M2C_FIELD(arg0, void **, 0x88);
    temp_r1_2 = M2C_FIELD(temp_r0_2, u8 *, 3) | (M2C_FIELD(temp_r0_2, u8 *, 4) << 8);
    M2C_FIELD(arg0, u16 *, 6) = temp_r1_2;
    M2C_FIELD(arg0, u16 *, 0x4A) = temp_r1_2;
    M2C_FIELD(arg0, u16 *, 0x86) = (u16) M2C_FIELD(arg0, u16 *, 6);
    M2C_FIELD(arg0, u16 *, 0x2C) = (u16) M2C_FIELD(arg0, u16 *, 6);
    M2C_FIELD(arg0, void **, 0x88) = (void *) (M2C_FIELD(arg0, void **, 0x88) + 5);
}
