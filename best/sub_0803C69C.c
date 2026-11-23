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

void sub_0803C69C(void) {
    *(s16 *)0x03001620 = 0x205;
    *(s16 *)0x03001640 = 0x4405;
    *(s16 *)0x03001678 = 0x4007;
    *(s16 *)0x03001670 = 0x1B00;
    *(s16 *)0x0300168C = 0x3A41;
    *(s16 *)0x030016A8 = 0x1008;
    *(s8 *)0x03004E04 = (s8) *(u16 *)0x03001864;
}
