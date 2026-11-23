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

void sub_08008BD0(void) {
    if ((s8) *(u8 *)0x0300485C == 0) {
        *(u16 *)0x0300168C &= 0xFFEF;
        *(u8 *)0x0300485B += 1;
        *(s32 *)0x03002B44 = 0x862A;
        *(s8 *)0x030023D0 = 2;
        *(s32 *)0x03001694 |= 0x80;
    }
}
