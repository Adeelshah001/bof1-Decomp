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

M2C_UNK sub_08027690(s32);                          /* extern */
M2C_UNK sub_0803FE44(s32, s32);                     /* extern */
M2C_UNK sub_08040A74(s32);                          /* extern */

void sub_08021E10(void) {
    sub_0803FE44(0, 0xE);
    sub_0803FE44(0, 0xA);
    sub_0803FE44(0, 0xB);
    sub_08040A74(0xC);
    sub_08040A74(0xD);
    *(u8 *)0x030033F0 &= 0xFC;
    *(u8 *)0x03003F98 &= 0xBF;
    *(s8 *)0x0300256E = 1;
    sub_08027690(3);
    sub_08027690(4);
    *(s8 *)0x03004870 = 4;
    *(s8 *)0x03004871 = 0;
}
