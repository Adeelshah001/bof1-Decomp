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

M2C_UNK sub_080379D4(s32);                          /* extern */
M2C_UNK sub_0804FDE4(void *);                       /* extern */
extern M2C_UNK sub_0804FFB4;

void sub_0804F8EC(void *arg0) {
    u16 temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_0804FFB4;
    M2C_FIELD(arg0, s8 *, 0x54) = 0x10;
    sub_080379D4(0x1A);
    temp_r0 = M2C_FIELD(arg0, u16 *, 6);
    M2C_FIELD(arg0, u16 *, 0x2C) = temp_r0;
    M2C_FIELD(arg0, u16 *, 6) = (u16) (temp_r0 - 0xC);
    sub_0804FDE4(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_0804FFB4;
}
