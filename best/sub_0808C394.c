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

void sub_0808C394(void *arg0) {
    u8 temp_r1;

    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) + 2);
    M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + 2);
    temp_r1 = M2C_FIELD(arg0, u8 *, 6);
    M2C_FIELD(arg0, u8 *, 0x2C) = temp_r1;
    if ((u32) temp_r1 > 0x34U) {
        M2C_FIELD((arg0 + 0x2C), u16 *, 0xB8) = (u16) M2C_FIELD(arg0, u8 *, 2);
        M2C_FIELD(arg0, u16 *, 0xE6) = (u16) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(arg0, s8 *, 0x4D) = 0;
    }
}
