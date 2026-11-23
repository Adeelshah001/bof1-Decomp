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

M2C_UNK sub_080332F8(s32);                          /* extern */
M2C_UNK sub_08038864(s32, s32);                     /* extern */

void sub_0803396C(void) {
    *(u8 *)0x0300339C &= 0xBF;
    sub_08038864(0x103002CF8, 0x103002E1C);
    sub_08038864(0x103002BD4, 0x103002CF8);
    sub_08038864(0x103002AB0, 0x103002BD4);
    sub_08038864(0x103002AB0, 0x030032AC);
    if ((*(u8 *)0x103002AEA != 0) && !(0x40 & *(u8 *)0x103002BA0) && ((u32) *(u8 *)0x103002AEB <= 3U)) {
        sub_080332F8(0x103002AB0);
    }
}
