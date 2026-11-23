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
M2C_UNK sub_08034120(s32, s32);                     /* extern */
M2C_UNK sub_08038864(s32, s32);                     /* extern */
M2C_UNK sub_08040AD0(s32, s32);                     /* extern */

void sub_08033478(void) {
    *(s8 *)0x03002E56 = 1;
    *(s8 *)0x0202DE8C = 8;
    sub_08038864(0x103002BD4, 0x03002E1C);
    sub_08040AD0(8, 0x0202DC30);
    sub_080330E8(0x103002BD4, 0x0202DC30, 8, 1);
    *(s8 *)0x0202DE8D = 9;
    sub_08040AD0(9, 0x0202DC6C);
    sub_080330E8(0x103002CF8, 0x0202DC6C, 9, 2);
    sub_08034120(0x103002BD4, 0x03003420);
    sub_08034120(0x103002CF8, 0x030034A0);
}
