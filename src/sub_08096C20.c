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

M2C_UNK sub_080934DC(void *);                       /* extern */

void sub_08096C20(void *arg0) {
    u8 *temp_r1;

    M2C_FIELD(arg0, s8 *, 0x54) = 0;
    M2C_FIELD(arg0, s8 *, 0x55) = 0x18;
    temp_r1 = (arg0 + 0x55) - 9;
    *temp_r1 += 1;
    M2C_FIELD(arg0, s8 *, 0x61) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = (s32) M2C_FIELD(arg0, s32 *, 0x78);
    sub_080934DC(arg0);
}
