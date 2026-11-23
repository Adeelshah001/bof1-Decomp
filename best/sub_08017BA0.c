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

M2C_UNK sub_080017EC(s32);                          /* extern */
M2C_UNK sub_08003334();                             /* extern */
M2C_UNK sub_08019D88();                             /* extern */
M2C_UNK sub_0801DCCC(s32);                          /* extern */
M2C_UNK sub_08033AF4(s32);                          /* extern */
M2C_UNK sub_0803EE88(s32);                          /* extern */

void sub_08017BA0(void) {
    s8 temp_r0;

    temp_r0 = *(s8 *)0x0300485B;
    switch (temp_r0) {                              /* irregular */
    case 3:
        sub_0803EE88(0x03003420);
        sub_080017EC(0x1D);
        sub_08033AF4(0x1A);
        sub_0801DCCC(0x179);
        *(s8 *)0x0300486F = 0x1F;
        *(s8 *)0x03004870 = 0;
        *(s8 *)0x0300485A = 0;
        *(s8 *)0x0300485B = 0;
        sub_08019D88();
        return;
    default:
        sub_08003334();
        *(s8 *)0x0300485B = (u8) *(s8 *)0x0300485B + 1;
        /* fallthrough */
    case 0:
    case 2:
        return;
    }
}
