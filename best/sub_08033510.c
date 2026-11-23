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

M2C_UNK sub_080330E8(s32, s32, s32, s32);           /* extern */
M2C_UNK sub_08038864(s32, s32);                     /* extern */
M2C_UNK sub_08040AD0(s32, s32);                     /* extern */

void sub_08033510(void) {
    *(s8 *)0x03002F7A = 1;
    sub_08038864(0x103002AB0, 0x03002F40);
    *(s8 *)0x0202DE8B = 4;
    sub_08040AD0(4, 0x0202DC30);
    sub_080330E8(0x103002AB0, 0x0202DC30, 4, 0);
    *(u8 *)0x103002CC4 |= 0x40;
    *(u8 *)0x103002DE8 |= 0x40;
    *(u8 *)0x03002F0C |= 0x40;
    *(u8 *)0x03003030 |= 0x40;
}
