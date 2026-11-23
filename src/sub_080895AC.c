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

M2C_UNK sub_080895E8(void *, s32);                  /* extern */
M2C_UNK sub_080895FC(void *);                       /* extern */

void sub_080895AC(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x4D) = 4;
    if (M2C_FIELD(arg0, u8 *, 0xE0) != 0xA) {
        sub_080895FC(arg0);
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x70) = 0;
    M2C_FIELD((arg0 + 0x70), s8 *, 0x71) = 0x22;
    M2C_FIELD(arg0, u8 *, 0xE0) = 6U;
    sub_080895E8(arg0, 6);
}
