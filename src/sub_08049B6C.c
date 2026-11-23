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

s32 sub_08001770(s32);                              /* extern */
M2C_UNK sub_08049C40(void *, s32, s32);             /* extern */
extern M2C_UNK sub_08049FEC;
extern M2C_UNK sub_0804A098;

void sub_08049B6C(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x54) = 0x3F;
    M2C_FIELD((arg0 + 0x54), void (**)(void *), 0x88) = sub_08049B6C;
    M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_08049FEC;
    sub_08049C40(arg0, 0x80, 0xC);
    if ((sub_08001770(0xDD) << 0x18) != 0) {
        M2C_FIELD(arg0, s16 *, 0x2C) = (s16) (M2C_FIELD(arg0, u16 *, 6) + 0xF0);
        M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_0804A098;
    }
}
