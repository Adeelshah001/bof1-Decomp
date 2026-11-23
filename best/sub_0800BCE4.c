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

M2C_UNK sub_080380A4(s32);                          /* extern */
M2C_UNK sub_0803EE88(s32);                          /* extern */

void sub_0800BCE4(void) {
    void *temp_r0;

    *(u8 *)0x03002DE8 &= 0xBF;
    *(s8 *)0x03002D59 = 3;
    M2C_FIELD((void *)0x03002CF8, s16 *, 2) = 0xDA8;
    sub_0803EE88(0x030036A0);
    sub_0803EE88(0x030037A0);
    sub_0803EE88(0x03003720);
    sub_080380A4(0x03002510);
    *(s8 *)0x0300486F = 0x1F;
    *(s8 *)0x03004870 = 0;
    M2C_FIELD((void *)0x0300485A, s8 *, 0) = 0;
    temp_r0 = (void *)0x0300485A + 1;
    M2C_FIELD((void *)0x0300485A, s8 *, 1) = 0;
    M2C_FIELD(temp_r0, s8 *, 1) = 0;
    M2C_FIELD((temp_r0 + 1), s8 *, 1) = 0;
}
