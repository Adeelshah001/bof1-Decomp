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
M2C_UNK sub_0804D1F8(void *, s32);                  /* extern */
M2C_UNK sub_0804D784(void *, s32, s32);             /* extern */
M2C_UNK sub_0804D844(void *, s32);                  /* extern */
extern M2C_UNK sub_0804D430;

void sub_0804C2E4(void *arg0) {
    sub_0804D1F8(arg0, 3);
    sub_0804D1F8(arg0, 4);
    M2C_FIELD(arg0, s8 *, 0x54) = 0;
    sub_0804D1D0(arg0, 0xFFC8, 0x40);
    M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_0804D430;
    sub_0804D784(arg0, 2, 0);
    M2C_FIELD(arg0, s8 *, 0x61) = 1;
    sub_0804D844(arg0, 0x1A0);
}
