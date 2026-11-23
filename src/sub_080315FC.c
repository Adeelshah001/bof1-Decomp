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

M2C_UNK sub_0802CCEC(void *);                       /* extern */
u16 sub_08037C98(void *, s32);                      /* extern */

void sub_080315FC(void *arg0) {
    u16 temp_r4;

    temp_r4 = sub_08037C98(arg0, 1);
    if (temp_r4 == 0) {
        sub_0802CCEC(arg0);
        M2C_FIELD(arg0, s8 *, 0x4D) = (s8) temp_r4;
        M2C_FIELD((arg0 + 0x4D), s8 *, 3) = (s8) temp_r4;
    }
}
