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

M2C_UNK sub_08004154();                             /* extern */
M2C_UNK sub_0800421C(s32, s32, s32);                /* extern */
M2C_UNK sub_08038808();                             /* extern */
M2C_UNK sub_0805C9B8(s32, s32);                     /* extern */

void sub_08022340(void) {
    *(u8 *)0x03002B68 |= 4;
    sub_0805C9B8(0x03002AB0, 0xC8);
    sub_08038808();
    sub_08004154();
    *(u8 *)0x03002CC4 |= 0x40;
    *(u8 *)0x03002DE8 |= 0x40;
    *(u8 *)0x03002F0C |= 0x40;
    *(u8 *)0x03003030 |= 0x40;
    *(u8 *)0x03003154 |= 0x40;
    *(u8 *)0x03003278 |= 0x40;
    *(u8 *)0x0300339C |= 0x40;
    *(s8 *)0x03004872 = 0;
    *(s16 *)0x03004120 = 0;
    sub_0800421C(0xF4, 0x6D8, 0xFFFFA99C);
    *(u8 *)0x03004870 += 1;
}
