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

M2C_UNK sub_0803549C(void *);                       /* extern */

void sub_08035C88(void *arg0) {
    if (1 & *(u8 *)0x030033F0) {
        if ((s32) (M2C_FIELD(arg0, u16 *, 0xA) + 1) < (s32) M2C_FIELD(arg0, u8 *, 1)) {
            sub_0803549C(arg0);
        }
    } else {
        M2C_FIELD(arg0, u16 *, 0xA) = 0xFFU;
        sub_0803549C(arg0);
    }
}
