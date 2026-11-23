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

M2C_UNK sub_08000CB0(s32);                          /* extern */

void sub_0800459C(void) {
    *(s32 *)0x03000824 = 0;
    *(s32 *)0x03000820 = 0;
    *(s32 *)0x03000830 = 0x080F5504;
    *(s32 *)0x03000838 = 0x08299B68;
    *(s32 *)0x03000814 = 2;
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x082A11A8;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06000000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000280;
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x082A16A8;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06000800;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000280;
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x082A1BA8;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06001000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000280;
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x08299DA8;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06008000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80002800;
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x08299B68;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x02020FC0;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000050;
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x08299B68;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x020211C0;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000050;
    sub_08000CB0(M2C_FIELD((void *)0x040000D4, s32 *, 8));
    *(s8 *)0x0300242C = 0xFF;
    *(s16 *)0x03001670 = 0x700;
    *(s16 *)0x03001620 = 9;
    *(s16 *)0x03001640 = 0x10A;
    *(s16 *)0x030016D0 = 0x20B;
    *(s16 *)0x03001654 = 0;
    *(s16 *)0x0300164C = 0;
    *(s16 *)0x03001680 = 0;
    *(s16 *)0x03001684 = 0;
    *(s16 *)0x03001664 = 0;
    *(s16 *)0x030016C0 = 0;
}
