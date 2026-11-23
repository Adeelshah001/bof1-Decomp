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

M2C_UNK sub_080381B4(void *, s32, s32);             /* extern */
M2C_UNK sub_08038264(void *);                       /* extern */
M2C_UNK sub_0803EE6C(void *);                       /* extern */

void sub_0809AF3C(void *arg0) {
    sub_080381B4(arg0, 0xF50, 0x2F20);
    sub_08038264(arg0);
    if ((u32) M2C_FIELD(arg0, u8 *, 2) <= 0x51U) {
        sub_0803EE6C(arg0);
        M2C_FIELD(arg0, s8 *, 0x54) = 0;
        M2C_FIELD((arg0 + 0x54), s8 *, 1) = 0;
    }
}
