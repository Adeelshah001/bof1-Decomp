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

/* Warning: missing "bx $lr" in last block of sub_0801ECE4 (initial). */

M2C_UNK sub_08004EA0(s32);                          /* extern */
M2C_UNK sub_0803ADA8(s32);                          /* extern */
extern s16 *_0801ED2C;
extern s32 *_0801ED30;
extern void *_0801ED34;
extern s32 _0801ED38;
extern void *_0801ED3C;

void sub_0801ECE4(void) {
    *_0801ED2C = 0x10;
    *_0801ED30 |= 0x80;
    sub_0803ADA8(0x14);
    sub_0803ADA8(0x19);
    M2C_FIELD(_0801ED34, u8 *, 0xB8) = (u8) (0xF7 & M2C_FIELD(_0801ED34, u8 *, 0xB8));
    sub_08004EA0(_0801ED38);
    M2C_FIELD(_0801ED3C, s8 *, 0x2A) = 0xE;
    M2C_FIELD(_0801ED3C, s8 *, 0x2B) = 0;
}
