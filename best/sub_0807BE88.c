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

M2C_UNK sub_0802B6D4(s32, s32);                     /* extern */
M2C_UNK sub_0807CC84(void *, s32);                  /* extern */

void sub_0807BE88(void *arg0) {
    M2C_FIELD(arg0, u8 *, 0x4D) = (u8) (M2C_FIELD(arg0, u8 *, 0x4D) + 1);
    M2C_FIELD(arg0, s8 *, 0x61) = 0;
    M2C_FIELD(arg0, s16 *, 0x38) = 0xE0;
    M2C_FIELD(arg0, s16 *, 0x2A) = 0x17C;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0xA0;
    sub_0802B6D4(0x1DC, 0x6A00);
    M2C_FIELD(arg0, s8 *, 0x41) = 0xE;
    M2C_FIELD((arg0 + 0x41), s8 *, 0x13) = 2;
    sub_0807CC84(arg0, 0x58A0);
}
