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

u8 sub_0803601C(s32, u16, u16);                     /* extern */
s32 sub_08036590(s32, u16, u16, M2C_UNK *);         /* extern */

u8 sub_08036AF4(s32 arg0, void *arg1) {
    M2C_UNK sp0;

    M2C_FIELD(arg1, u8 *, 0x3E) = 0U;
    if ((sub_08036590(arg0, M2C_FIELD(arg1, u16 *, 2), M2C_FIELD(arg1, u16 *, 6), &sp0) << 0x18) != 0) {
        M2C_FIELD(arg1, u8 *, 0x3E) = sub_0803601C(arg0, M2C_FIELD(arg1, u16 *, 2), M2C_FIELD(arg1, u16 *, 6));
    }
    return M2C_FIELD(arg1, u8 *, 0x3E);
}
