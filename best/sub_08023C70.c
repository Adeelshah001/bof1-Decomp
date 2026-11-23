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

M2C_UNK sub_08004EA0(s32);                          /* extern */

s32 sub_08023C70(void *arg0, u8 arg1) {
    u8 temp_r4;

    temp_r4 = arg1;
    if (M2C_FIELD(arg0, u8 *, 0x3C) == 5) {
        *(u8 *)0x03004872 = temp_r4;
        *(u8 *)0x0202DF8E |= temp_r4;
        *(u8 *)0x03002B68 |= 4;
        *(s8 *)0x0300486F = 7;
        *(s8 *)0x03004870 = 0;
    } else {
        sub_08004EA0(0x8777);
    }
    return 0;
}
