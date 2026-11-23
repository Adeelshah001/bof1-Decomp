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

void sub_0803448C(void *arg0) {
    *(u8 *)0x03002CC4 |= 0x40;
    *(u8 *)0x03002DE8 |= 0x40;
    *(u8 *)0x03002F0C |= 0x40;
    *(u8 *)0x03003030 |= 0x40;
    *(u8 *)0x03003154 |= 0x40;
    *(u8 *)0x03003278 |= 0x40;
    *(u8 *)0x0300339C |= 0x40;
    M2C_FIELD(arg0, s32 *, 0x88) = (s32) (M2C_FIELD(arg0, s32 *, 0x88) + 2);
}
