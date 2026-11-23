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

void sub_08043164(void) {
    *(s8 *)0x0202E02E = 0xD2;
    *(s8 *)0x0202E02F = 1;
    *(s8 *)0x0202E04E = 3;
    *(s8 *)0x0202E050 = 0xF;
    *(s8 *)0x0202DF96 = 0x80;
    *(s8 *)0x0202E012 = 0xFF;
    *(s8 *)0x0202E013 = -1;
    *(s8 *)0x0202E014 = -1;
    *(s8 *)0x0202E015 = -1;
    *(s8 *)0x0202E02C = 0xF;
}
