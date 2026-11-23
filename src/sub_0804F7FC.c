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

M2C_UNK sub_0804FD48(void *);                       /* extern */
M2C_UNK sub_0804FDC0(void *);                       /* extern */
extern M2C_UNK sub_0804F060;

void sub_0804F7FC(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x54) = 0x33;
    M2C_FIELD((arg0 + 0x54), s8 *, 0x75) = 0x17;
    M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_0804F060;
    sub_0804FDC0(arg0);
    sub_0804FD48(arg0);
}
