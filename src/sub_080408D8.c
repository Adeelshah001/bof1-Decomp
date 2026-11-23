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

M2C_UNK sub_0803FC58(void *);                       /* extern */
M2C_UNK sub_08040844(void *);                       /* extern */

void sub_080408D8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x27) == 1) {
        M2C_FIELD(arg0, u8 *, 0x23) = (u8) (M2C_FIELD(arg0, u8 *, 0x23) + 1);
        if ((s32) (M2C_FIELD(arg0, u8 *, 0x23) * 2) >= (s32) M2C_FIELD((arg0 + 0x23), u8 *, 2)) {
            sub_08040844(arg0);
            return;
        }
    }
    sub_0803FC58(arg0);
}
