/* machine draft (m2c) for agbcc -mthumb-interwork -O2, tried by autopilot */
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

M2C_UNK sub_0807F61C();                             /* extern */
extern M2C_UNK sub_08054814;

void sub_0807F600(void *arg0, s16 arg1, s16 arg2) {
    M2C_FIELD(arg0, s16 *, 2) = arg1;
    M2C_FIELD(arg0, s16 *, 6) = arg2;
    sub_0807F61C();
    M2C_FIELD(arg0, M2C_UNK **, 0x78) = &sub_08054814;
}
