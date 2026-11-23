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

M2C_UNK sub_08030AD8(s32);                          /* extern */
M2C_UNK sub_08072CC4(s32);                          /* extern */

void sub_08016DD0(void) {
    if (*(s8 *)0x0300485C != 0) {
        sub_08030AD8(0x14);
        *(u8 *)0x0300485D += 1;
        *(u8 *)0x0300485B += 1;
        return;
    }
    sub_08072CC4(0xE1B);
    if (*(u8 *)0x03004584 == 0) {
        M2C_FIELD((void *)0x03002AB0, s16 *, 2) = 0x1DE8;
        M2C_FIELD((void *)0x030035A0, s16 *, 2) = 0x1DF8;
        M2C_FIELD((void *)0x030035A0, s16 *, 6) = 0x816C;
        M2C_FIELD((void *)0x030035A0, s16 *, 0x2C) = 0x816C;
        *(s16 *)0x0300357C = 1;
        *(s8 *)0x03003596 = 0;
        *(s16 *)0x03003574 = 0x1001;
        *(s8 *)0x0300485C = (u8) *(s8 *)0x0300485C + 1;
    }
}
