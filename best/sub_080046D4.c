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

void sub_080046D4(void) {
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x082A4A28;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06000000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000280;
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x082A5228;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06000800;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000280;
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x082A5A28;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06001000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000280;
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x082A6228;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06001800;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000280;
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x082A2628;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06008000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80001200;
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x082A25A8;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x02020FC0;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000040;
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x082A25A8;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x020211C0;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000040;
    sub_08000CB0(M2C_FIELD((void *)0x040000D4, s32 *, 8));
    *(s8 *)0x0300242C = 0xFF;
    *(s16 *)0x03001670 = 0x1F00;
    *(s16 *)0x03001620 = 9;
    *(s16 *)0x03001640 = 0x109;
    *(s16 *)0x030016D0 = 0x209;
    *(s16 *)0x03001678 = 0x30B;
    *(s16 *)0x030016CC = 0;
    *(s16 *)0x03001654 = 0;
    *(s16 *)0x0300164C = 0;
    *(s16 *)0x03001680 = 0;
    *(s16 *)0x03001668 = 0;
    *(s16 *)0x03001684 = 0;
    *(s16 *)0x03001664 = 0;
    *(s16 *)0x030016C0 = 0;
    *(s32 *)0x03000814 = 0;
}
