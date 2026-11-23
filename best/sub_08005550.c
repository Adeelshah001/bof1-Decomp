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

void sub_08005550(void) {
    sub_0800459C();
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x082A11A8;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06000000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000280;
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x082A20A8;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06000800;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000280;
    *(s16 *)0x03001670 = 0x1300;
    *(s32 *)0x03000824 = 0;
    *(s32 *)0x03000820 = 0;
    *(s32 *)0x03000830 = 0x080F566C;
    *(s32 *)0x03000838 = 0x08299B68;
}
