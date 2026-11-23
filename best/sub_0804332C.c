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

M2C_UNK sub_08043298();                             /* extern */

void sub_0804332C(void) {
    *(s8 *)0x0202E02F = 0xFB;
    *(s8 *)0x0202E030 = 3;
    *(s8 *)0x0202E031 = 0x3C;
    *(s8 *)0x0202E052 = 0x3C;
    *(s8 *)0x0202E055 = 0xB0;
    *(s8 *)0x0202E057 = 0xC0;
    *(s8 *)0x0202DFCA = 3;
    *(s8 *)0x0202E03E = 1;
    *(s8 *)0x0202E00E = 1;
    *(s8 *)0x0202E01E = 0xFF;
    *(s8 *)0x0202E01F = -1;
    *(s8 *)0x0202E020 = -1;
    *(s8 *)0x0202E021 = 0x3F;
    *(s8 *)0x0202E02D = 0x21;
    sub_08043298();
}
