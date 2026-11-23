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

void sub_08019670(void *arg0) {
    u16 temp_r1;

    M2C_FIELD(arg0, u8 *, 0x41) = (u8) M2C_FIELD(M2C_FIELD(arg0, void **, 0x68), u8 *, 2);
    M2C_FIELD(arg0, void **, 0x68) = (void *) (M2C_FIELD(arg0, void **, 0x68) + 3);
    temp_r1 = *(u16 *)0x03002484;
    if ((temp_r1 == 0xFF) || (temp_r1 == 0x13C)) {
        M2C_FIELD(arg0, u8 *, 0x41) = (u8) ((0xCF & M2C_FIELD(arg0, u8 *, 0x41)) | 0x20);
    }
}
