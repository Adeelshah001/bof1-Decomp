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

s32 sub_0809568C(void *, s32);                      /* extern */

void sub_08095FCC(void *arg0, s32 arg1, s32 arg2) {
    void *temp_r3;

    M2C_FIELD(arg0, u8 *, 0x4C) = (u8) (M2C_FIELD(arg0, u8 *, 0x4C) + 1);
    M2C_FIELD((arg0 + 0x4C), s8 *, 8) = 8;
    temp_r3 = M2C_FIELD(arg0, void **, 0x78);
    M2C_FIELD(arg0, s8 *, 2) = (s8) (M2C_FIELD(temp_r3, u8 *, 2) + arg1);
    M2C_FIELD(arg0, s8 *, 6) = (s8) (M2C_FIELD(temp_r3, u8 *, 6) + arg2);
    M2C_FIELD(arg0, s32 *, 0x6C) = sub_0809568C(arg0, 6);
}
