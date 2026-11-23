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

void sub_080049D0(void) {
    *(s32 *)0x03000814 = 0;
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x082B3D88;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06000800;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000280;
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x082B3188;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06008000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000600;
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x082B3128;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x05000100;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000030;
    sub_08000CB0(M2C_FIELD((void *)0x040000D4, s32 *, 8));
    *(s8 *)0x0300242C = 0xFF;
    *(s16 *)0x03001670 = 0x1D00;
    *(s16 *)0x03001620 = 0x10A;
    *(s16 *)0x03001680 = 0xFFFC;
    *(s16 *)0x030016C0 = 0;
    *(s16 *)0x03001684 = 0xF;
    *(s16 *)0x030016CC = 8;
    *(s16 *)0x03001668 = 0x10;
    *(s16 *)0x0300168C = 0xC41;
    *(s16 *)0x030016A8 = 0x1000;
    *(u8 *)0x03001674 += 8;
}
