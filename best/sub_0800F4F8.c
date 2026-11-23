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

M2C_UNK sub_0800312C(s32, s32);                     /* extern */
M2C_UNK sub_080104D8();                             /* extern */
M2C_UNK sub_08024008(s32);                          /* extern */

void sub_0800F4F8(void) {
    if (*(u8 *)0x030023DC != 1) {
        *(s8 *)0x0300485D = 2;
        sub_0800312C(0x10, 2);
        sub_080104D8();
        sub_08024008(0x26);
        M2C_FIELD((void *)0x03002BD4, s16 *, 2) = 0xB98;
        M2C_FIELD(((void *)0x03002BD4 + 0x124), s16 *, 2) = 0xB88;
        M2C_FIELD(((void *)0x03002BD4 + 0x248), s16 *, 2) = 0xBC8;
        *(s8 *)0x0300485D = 0x10;
        *(u8 *)0x0300485B += 1;
    }
}
