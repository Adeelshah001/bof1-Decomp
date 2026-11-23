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

M2C_UNK sub_08037FC4(void *, s32);                  /* extern */
M2C_UNK sub_0807C728(void *);                       /* extern */

void sub_0807D664(void *arg0) {
    u8 *temp_r1;

    sub_08037FC4(arg0, 0xC);
    M2C_FIELD(arg0, s8 *, 0xF1) = 0;
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) (M2C_FIELD(arg0, u16 *, 6) + 1);
    temp_r1 = (arg0 + 0xF1) - 0xA4;
    *temp_r1 += 1;
    sub_0807C728(arg0);
}
