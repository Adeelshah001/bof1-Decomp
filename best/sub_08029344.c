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

s32 sub_08029344(void *arg0) {
    s16 temp_r4;
    u16 temp_r1;
    u16 temp_r5;
    u16 temp_r5_2;
    u32 temp_r3;

    temp_r1 = M2C_FIELD(arg0, u16 *, 2);
    temp_r3 = (u32) (0xFF & temp_r1) >> 2;
    M2C_FIELD(arg0, s16 *, 0x42) = (s16) temp_r3;
    temp_r4 = (0xFF & M2C_FIELD(arg0, u16 *, 6) & 0xF8) * 8;
    M2C_FIELD(arg0, s16 *, 0x40) = temp_r4;
    temp_r5 = M2C_FIELD(arg0, u16 *, 2);
    temp_r5_2 = M2C_FIELD(arg0, u16 *, 6);
    M2C_FIELD(arg0, s16 *, 0x34) = (s16) (((u32) ((8 & temp_r5) << 0x10) >> 0x12) | ((u32) ((8 & temp_r5_2) << 0x10) >> 0x11));
    M2C_FIELD(arg0, s16 *, 0x36) = (s16) (((u32) ((0x10 & temp_r5) << 0x10) >> 0x14) | ((u32) ((0x10 & temp_r5_2) << 0x10) >> 0x13));
    return (u16) ((0x100 & temp_r1) * 8) + (temp_r3 + temp_r4);
}
