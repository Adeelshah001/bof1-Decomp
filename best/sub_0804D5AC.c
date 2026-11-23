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

M2C_UNK sub_0803A8EC(void *);                       /* extern */
M2C_UNK sub_0804B9D4(void *);                       /* extern */
extern M2C_UNK sub_0804D6B0;

void sub_0804D5AC(void *arg0) {
    if (M2C_FIELD((void *)0x03004830, u16 *, 0x2A) == 0xA0E) {
        sub_0804B9D4(arg0);
        M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_0804D6B0;
    }
    sub_0803A8EC(arg0);
}
