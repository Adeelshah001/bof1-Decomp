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

M2C_UNK sub_08043164();                             /* extern */

void sub_080431E8(void) {
    *(s8 *)0x0202E02E = 0xDF;
    *(s8 *)0x0202E02F = 0x33;
    *(s8 *)0x0202E030 = 1;
    *(s8 *)0x0202E031 = 0x34;
    *(s8 *)0x0202E050 = 0x2F;
    *(s8 *)0x0202E052 = 0x20;
    *(s8 *)0x0202DF8F = 1;
    *(s8 *)0x0202DF9F = 1;
    *(s8 *)0x0202DFAF = 2;
    *(s8 *)0x0202DFCB = 1;
    *(s8 *)0x0202E016 = 0xFF;
    *(s8 *)0x0202E017 = -1;
    *(s8 *)0x0202E019 = -1;
    *(s8 *)0x0202E02C = 0x1F;
    sub_08043164();
}
