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

M2C_UNK sub_0804D1D0(void *, s32, s32);             /* extern */
M2C_UNK sub_0804D784(void *, s32, s32);             /* extern */
M2C_UNK sub_0804D828(void *);                       /* extern */
extern M2C_UNK sub_0804D430;

void sub_0804C818(void *arg0) {
    s32 var_r2;

    M2C_FIELD(arg0, u8 *, 0x61) = 0U;
    sub_0804D1D0(arg0, 0x70, 0xE0);
    M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_0804D430;
    M2C_FIELD(arg0, s8 *, 0x54) = 0;
    var_r2 = 0xFFFE;
    if (M2C_FIELD(arg0, u8 *, 0x61) != 0) {
        var_r2 = 2;
    }
    sub_0804D784(arg0, 0, var_r2);
    sub_0804D828(arg0);
}
