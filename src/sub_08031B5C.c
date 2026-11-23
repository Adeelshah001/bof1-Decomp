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

M2C_UNK sub_08003334();                             /* extern */
M2C_UNK sub_08032A78(void *, s32);                  /* extern */
s32 sub_08037C98(void *, s32);                      /* extern */

void sub_08031B5C(void *arg0) {
    if ((sub_08037C98(arg0, 1) << 0x10) == 0) {
        sub_08032A78(arg0, 0x8765);
        sub_08003334();
        M2C_FIELD(arg0, s8 *, 0x50) = 0xA;
    }
}
