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

M2C_UNK sub_0803A8EC(void *);                       /* extern */

void sub_0807CA34(void *arg0) {
    u8 temp_r0;
    u8 temp_r0_2;

    temp_r0 = *(u8 *)0x03001864;
    if ((temp_r0 != 0x10) && ((temp_r0 != 0x11) || (temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x3C), (temp_r0_2 == 0x52)) || (temp_r0_2 == 0x60)) && (M2C_FIELD(arg0, u8 *, 2) != 0) && (0xFF & M2C_FIELD(arg0, u16 *, 6))) {
        sub_0803A8EC(arg0);
    }
}
