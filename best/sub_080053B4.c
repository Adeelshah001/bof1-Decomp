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

M2C_UNK sub_0800459C();                             /* extern */

void sub_080053B4(void) {
    sub_0800459C();
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x0829EDA8;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06010000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80001200;
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x08299C88;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x020210C0;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x08299C88;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x020212C0;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
    *(s32 *)0x03000824 = 0;
    *(s32 *)0x03000820 = 0;
    *(s32 *)0x03000830 = 0x080F5798;
    *(s32 *)0x03000838 = 0x108299B68;
    *(s32 *)0x0300082C = 0;
    *(s32 *)0x03000828 = 0;
    *(s32 *)0x03000834 = 0x080F57E0;
    *(s32 *)0x0300083C = 0x108299B68;
    *(s16 *)0x03001670 = 0x1700;
    *(s32 *)0x0300081C = 0;
    *(s32 *)0x03000818 = 0;
    *(s32 *)0x03000814 = 0;
}
