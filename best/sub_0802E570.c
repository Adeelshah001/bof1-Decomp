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

void sub_0802E570(void *arg0) {
    u8 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r1;
    if ((temp_r1 << 0x18) != 0) {
        if (!(temp_r1 & 2)) {
            M2C_FIELD(arg0, u8 *, 0xB8) = (u8) (M2C_FIELD(arg0, u8 *, 0xB8) | 8);
            return;
        }
        M2C_FIELD(arg0, u8 *, 0xB8) = (u8) (0xF7 & M2C_FIELD(arg0, u8 *, 0xB8));
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x50) = (u8) (M2C_FIELD(arg0, u8 *, 0x50) + 2);
}
