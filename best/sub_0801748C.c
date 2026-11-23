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

M2C_UNK sub_0801943C();                             /* extern */
s32 sub_08019DBC(s32);                              /* extern */
M2C_UNK sub_08030AD8(s32);                          /* extern */

void sub_0801748C(void) {
    if ((sub_08019DBC(7) << 0x18) == 0) {
        sub_08030AD8(0x5E);
        *(s8 *)0x0300487D = 0x10;
        *(u16 *)0x030016D0 = (0xFFFC & *(u16 *)0x030016D0) | 2;
        *(u16 *)0x03001678 = (0xFFFC & *(u16 *)0x03001678) | 2;
        sub_0801943C();
        *(s8 *)0x0300485C = 0x40;
        *(u8 *)0x0300485B += 1;
    }
}
