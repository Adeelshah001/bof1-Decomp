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

M2C_UNK sub_0804D784(void *, s32, s32);             /* extern */
M2C_UNK sub_0804D7EC(void *, u16, u16);             /* extern */
M2C_UNK sub_0804D828(void *);                       /* extern */
extern M2C_UNK sub_0804D49C;

void sub_0804C3C0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_0804D49C;
    M2C_FIELD(arg0, s8 *, 0x54) = 0;
    sub_0804D784(arg0, 0, 0);
    sub_0804D7EC(arg0, M2C_FIELD(arg0, u16 *, 2), M2C_FIELD(arg0, u16 *, 6));
    sub_0804D828(arg0);
}
