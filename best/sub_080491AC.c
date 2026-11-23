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

s32 sub_08001770(s32);                              /* extern */
extern M2C_UNK sub_0804926C;
extern M2C_UNK sub_08049FEC;

void sub_080491AC(void *arg0, u8 arg1, u16 arg2, u16 arg3) {
    M2C_UNK *var_r0;

    M2C_FIELD(arg0, s8 *, 0x40) = 0;
    if ((sub_08001770(0xDD) << 0x18) != 0) {
        M2C_FIELD(arg0, u8 *, 0x61) = arg1;
        M2C_FIELD(arg0, s8 *, 0x55) = 0x30;
        M2C_FIELD((arg0 + 0x55), s16 *, 3) = 1;
        M2C_FIELD(arg0, u16 *, 2) = arg2;
        M2C_FIELD(arg0, u16 *, 6) = arg3;
        M2C_FIELD(arg0, s16 *, 0x38) = 0x20;
        var_r0 = &sub_0804926C;
    } else {
        var_r0 = &sub_08049FEC;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x64) = var_r0;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0x80;
    M2C_FIELD(arg0, s8 *, 0x41) = 0xC;
}
