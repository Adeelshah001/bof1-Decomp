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
M2C_UNK sub_0803AF58(s32, s32);                     /* extern */
M2C_UNK sub_0803EE88(s32);                          /* extern */
M2C_UNK sub_08072CC4(s32);                          /* extern */

void sub_0800B640(void) {
    u8 temp_r5;

    sub_08072CC4(0x70F);
    temp_r5 = *(u8 *)0x03004584;
    if (temp_r5 == 0) {
        sub_0803EE88(0x03003520);
        sub_0803EE88(0x103003420);
        sub_0803EE88(0x030034A0);
        sub_0803AF58(0xC4, 0xFFFF);
        *(u8 *)0x0300485A = temp_r5;
        *(u8 *)0x0300485D += 1;
        sub_080017EC(0x40);
        *(s8 *)0x0300485B = 1;
    }
}
