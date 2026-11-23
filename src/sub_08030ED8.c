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

s32 sub_08030ED8(void *arg0) {
    u8 *temp_r3;

    M2C_FIELD(arg0, u8 *, 0x41) = (u8) (0xF & M2C_FIELD(arg0, u8 *, 0x41));
    temp_r3 = (arg0 + 0x41) - 7;
    *temp_r3 &= 0x7F;
    M2C_FIELD(arg0, u8 *, 0xBA) = (u8) (0xFD & M2C_FIELD(arg0, u8 *, 0xBA));
    return 0;
}
