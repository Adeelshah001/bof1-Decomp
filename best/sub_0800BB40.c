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
M2C_UNK sub_08004EA0(s32);                          /* extern */
M2C_UNK sub_08072CC4(s32);                          /* extern */

void sub_0800BB40(void) {
    u8 temp_r4;

    sub_08072CC4(0x704);
    temp_r4 = *(u8 *)0x03004584;
    if (temp_r4 == 0) {
        sub_08004EA0(0x8161);
        *(u8 *)0x03003F98 |= 0x80;
        *(u8 *)0x03002B11 = temp_r4;
        *(u8 *)0x03002C35 = temp_r4;
        M2C_FIELD((void *)0x03002BD4, s16 *, 2) = 0xEB8;
        *(u8 *)0x03002DE8 |= 0x40;
        sub_080017EC(0x41);
        *(u8 *)0x0300485D += 1;
        *(u8 *)0x0300485B += 1;
    }
}
