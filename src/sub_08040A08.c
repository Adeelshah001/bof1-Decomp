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

M2C_UNK sub_080401A4(void *, s32);                  /* extern */
M2C_UNK sub_080403D4(void *, s32);                  /* extern */

void sub_08040A08(void *arg0, s32 arg1) {
    if ((M2C_FIELD(arg0, u8 *, 0x21) - 1) & 0x80) {
        sub_080401A4(arg0, arg1);
        return;
    }
    sub_080403D4(arg0, arg1);
}
