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
M2C_UNK sub_08001888(s32);                          /* extern */
M2C_UNK sub_08004EA0(s32);                          /* extern */
M2C_UNK sub_08019DA0();                             /* extern */
M2C_UNK sub_08019E84(u16);                          /* extern */

void sub_080174F0(void) {
    sub_08004EA0(0x84D6);
    sub_080017EC(0xAE);
    sub_08001888(0x53);
    *(u16 *)0x030040F8 = 0x1CF;
    sub_08019E84(*(u16 *)0x030040F8);
    *(s8 *)0x0300486F = 0x1F;
    *(s8 *)0x03004870 = 0;
    *(s16 *)0x0202DE56 = 0;
    M2C_FIELD((void *)0x0202DBD0, s16 *, 0xE) = 0x438;
    M2C_FIELD((void *)0x0202DBD0, s16 *, 0x12) = 0x6DC;
    sub_08019DA0();
}
