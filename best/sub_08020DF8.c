/* machine draft (m2c) for agbcc -mthumb-interwork -O2, tried by autopilot */
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

void sub_08020DF8(void) {
    u8 *temp_r1;

    M2C_FIELD((void *)0x0300485C, s8 *, 0) = 8;
    M2C_FIELD((void *)0x0300485C, s8 *, 1) = 3;
    temp_r1 = ((void *)0x0300485C + 1) - 2;
    *temp_r1 += 1;
}
