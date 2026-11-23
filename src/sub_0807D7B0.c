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

M2C_UNK sub_08038194(void *, u32, u32);             /* extern */
M2C_UNK sub_08038278(void *);                       /* extern */
M2C_UNK sub_0807D760(void *);                       /* extern */

void sub_0807D7B0(void *arg0) {
    sub_08038194(arg0, (u32) (M2C_FIELD(arg0, s32 *, 0x44) << 8) >> 0x10, (u32) (M2C_FIELD(arg0, s32 *, 0x48) << 8) >> 0x10);
    sub_08038278(arg0);
    M2C_FIELD(arg0, u16 *, 0x2C) = (u16) M2C_FIELD(arg0, u16 *, 6);
    sub_0807D760(arg0);
}
