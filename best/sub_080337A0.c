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

M2C_UNK sub_08038864(s32, s32);                     /* extern */

void sub_080337A0(void) {
    sub_08038864(0x03002AB0, 0x030032AC);
    sub_08038864(0x03002BD4, 0x03002AB0);
    sub_08038864(0x03002BD4, 0x03002CF8);
    sub_08038864(0x03002CF8, 0x03002E1C);
    sub_08038864(0x03002E1C, 0x03002F40);
    sub_08038864(0x03002F40, 0x03003064);
    sub_08038864(0x03003064, 0x03003188);
    *(u8 *)0x03002BA0 &= 0xBF;
    *(u8 *)0x03002CC4 &= 0xBF;
    *(u8 *)0x03002DE8 &= 0xBF;
    *(u8 *)0x03002F0C &= 0xBF;
    *(u8 *)0x03003030 &= 0xBF;
    *(u8 *)0x03003154 &= 0xBF;
    *(u8 *)0x03003278 &= 0xBF;
    *(u8 *)0x0300339C |= 0x40;
}
