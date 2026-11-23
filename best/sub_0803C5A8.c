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

void sub_0803C5A8(void) {
    M2C_FIELD((void *)0x030023E0, s16 *, 0x38) = 0x1000;
    M2C_FIELD(((void *)0x030023E0 + 0x50), s16 *, 0x38) = 0x2000;
    *(s16 *)0x030041A0 = 0x3000;
    *(s16 *)0x03004188 = 0x3000;
    *(s16 *)0x03001620 = 0xC;
    *(s16 *)0x03001640 = 0x4605;
    *(s16 *)0x030016D0 = 0x4207;
    *(s16 *)0x03001678 = 0x4407;
    *(s16 *)0x03001670 = 0x1D00;
    *(s16 *)0x0300168C = 0x3E41;
    *(s16 *)0x030016A8 = 0x1000;
}
