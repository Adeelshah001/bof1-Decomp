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

M2C_UNK sub_0803549C(void *);                       /* extern */
M2C_UNK sub_08036010(void *);                       /* extern */

void sub_08035FEC(void *arg0) {
    if ((M2C_FIELD(arg0, u8 *, 0x11) != 3) || ((u32) M2C_FIELD(arg0, u16 *, 0xA) <= 6U)) {
        sub_0803549C(arg0);
        return;
    }
    sub_08036010(arg0);
}
