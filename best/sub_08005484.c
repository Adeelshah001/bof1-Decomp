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

M2C_UNK sub_0800459C(s32);                          /* extern */

void sub_08005484(void) {
    s16 sp0;

    sp0 = 0x3FF;
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06000000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x81000400;
    sub_0800459C(M2C_FIELD((void *)0x040000D4, s32 *, 8));
    *(s16 *)0x03001670 = 0x1F00;
    *(s16 *)0x03001678 = 0x308;
    sp0 = 0x3FF;
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06001800;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x81000400;
    sp0 = 0x13FE;
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06001BC0;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x81000020;
    sp0 = 0xEEEE;
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x0600FFC0;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x81000010;
    *(s16 *)0x03001680 = 0xFFF0;
    *(s16 *)0x03001668 = 0;
    *(s16 *)0x030016CC = 0;
    *(s32 *)0x03000814 = 0;
}
