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

void sub_0808917C(void *arg0) {
    u32 temp_r0_2;
    u8 temp_r0;

    M2C_FIELD(arg0, u8 *, 0x41) = (u8) M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), u8 *, 0x41);
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x55) - 1;
    M2C_FIELD(arg0, u8 *, 0x55) = temp_r0;
    if (temp_r0 & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x55) = 8U;
        temp_r0_2 = (u32) ((~M2C_FIELD(arg0, u8 *, 0x54) << 0x18) + 0x01000000) >> 0x18;
        M2C_FIELD(arg0, u8 *, 0x54) = (u8) temp_r0_2;
        M2C_FIELD(arg0, u8 *, 6) = (u8) (temp_r0_2 + M2C_FIELD(arg0, u8 *, 6));
    }
}
