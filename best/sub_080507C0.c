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

M2C_UNK sub_08050970(void *);                       /* extern */

void sub_080507C0(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x54) = 0x204;
    M2C_FIELD((arg0 + 0x54), s8 *, 0xD) = 0x18;
    M2C_FIELD(arg0, s8 *, 0x3B) = 0;
    sub_08050970(arg0);
}
