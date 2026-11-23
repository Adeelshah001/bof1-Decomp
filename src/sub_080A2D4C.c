/* machine draft (m2c) for agbcc -O2, tried by autopilot */
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

M2C_UNK sub_080A2C50(void *, s32, s32, void *);     /* extern */
extern M2C_UNK sub_080A2D2C;

void sub_080A2D4C(void *arg0) {
    void *temp_r4;

    M2C_FIELD(arg0, M2C_UNK **, 0x3C) = &sub_080A2D2C;
    M2C_FIELD(arg0, s32 *, 0x38) = 1;
    temp_r4 = arg0 + 0x1E4;
    sub_080A2C50(temp_r4, 4, 0, arg0);
    sub_080A2C50(arg0 + 0x23C, 9, 1, arg0);
    sub_080A2C50(arg0 + 0x294, 0xA, 2, arg0);
    M2C_FIELD(arg0, s32 *, 0x1D8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1DC) = 3;
    M2C_FIELD(arg0, void **, 0x1E0) = temp_r4;
}
