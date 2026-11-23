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

void sub_0801943C(void) {
    *(u8 *)0x03002AF1 |= 0x30;
    *(u8 *)0x03002C15 |= 0x30;
    *(u8 *)0x03002D39 |= 0x30;
    *(u8 *)0x03002E5D |= 0x30;
    *(u8 *)0x03002F81 |= 0x30;
    *(u8 *)0x030030A5 |= 0x30;
    *(u8 *)0x030031C9 |= 0x30;
}
