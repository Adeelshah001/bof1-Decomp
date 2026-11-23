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

M2C_UNK sub_08037FC4(void *, s32);                  /* extern */
extern M2C_UNK sub_0804D85C;
extern M2C_UNK sub_0804D970;

void sub_0804D900(void *arg0) {
    M2C_UNK *var_r0;

    if (M2C_FIELD(arg0, u8 *, 0x3B) != 0) {
        var_r0 = &sub_0804D970;
    } else {
        M2C_FIELD(arg0, s8 *, 0x54) = 0x50;
        M2C_FIELD(arg0, u8 *, 0x3B) = 2U;
        M2C_FIELD((arg0 + 0x54), s8 *, 0x2C) = 8;
        var_r0 = &sub_0804D85C;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x64) = var_r0;
    sub_08037FC4(arg0, M2C_FIELD(arg0, u8 *, 0x3B) * 2);
}
