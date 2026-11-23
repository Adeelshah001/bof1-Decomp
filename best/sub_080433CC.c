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

M2C_UNK sub_0804332C();                             /* extern */

void sub_080433CC(void) {
    *(s8 *)0x0202E02F = 0xFF;
    *(s8 *)0x0202E030 = 0xC7;
    *(s8 *)0x0202E031 = 0x3D;
    *(s8 *)0x0202E055 = 0xF0;
    *(s8 *)0x0202E058 = 0x80;
    *(s8 *)0x0202DFA3 = 0x34;
    *(s8 *)0x0202E03E = 3;
    *(s8 *)0x0202E03F = 8;
    *(s8 *)0x0202E011 = 0x20;
    *(s8 *)0x0202E018 = -1;
    *(s8 *)0x0202E022 = -1;
    *(s8 *)0x0202E023 = 0x3F;
    *(s8 *)0x0202E024 = 0x21;
    *(s8 *)0x0202E025 = 0x21;
    *(s8 *)0x0202E026 = 0x80;
    *(s8 *)0x0202E02D = 0x7F;
    sub_0804332C();
}
