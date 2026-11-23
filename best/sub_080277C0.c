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

void sub_080277C0(s32 arg0, u8 *arg1) {
    void *temp_r1;

    temp_r1 = (*arg1 * 0x124) + arg0;
    if (M2C_FIELD(temp_r1, u8 *, 0x3A) != 0) {
        M2C_FIELD(temp_r1, s32 *, 0x88) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x88) + 1);
    }
    *arg1 += 1;
}
