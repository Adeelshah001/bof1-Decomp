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

M2C_UNK sub_080431E8();                             /* extern */

void sub_08043298(void) {
    *(s8 *)0x0202E02E = 0xFF;
    *(s8 *)0x0202E02F = 0xF3;
    *(s8 *)0x0202E04E = 0xB3;
    *(s8 *)0x0202E053 = 0x7C;
    *(s8 *)0x0202DF8E = -1;
    *(s8 *)0x0202DFC9 = 0x3B;
    *(s8 *)0x0202E01A = -1;
    *(s8 *)0x0202E01B = -1;
    *(s8 *)0x0202E01C = -1;
    *(s8 *)0x0202E01D = 0x1F;
    *(s8 *)0x0202E02C = 0x1F;
    *(s8 *)0x0202E029 = 0x80;
    sub_080431E8();
}
