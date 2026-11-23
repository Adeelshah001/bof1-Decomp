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

s32 sub_0805B6A4(void) {
    s32 sp0;

    M2C_FIELD((void *)0x03000AE0, s32 *, 0x20) = 1;
    sp0 = 0;
    M2C_FIELD((void *)0x040000D4, s32 **, 0) = &sp0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06012280;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x85000020;
    sp0 = 0;
    M2C_FIELD((void *)0x040000D4, s32 **, 0) = &sp0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06012680;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x85000020;
    sp0 = 0;
    M2C_FIELD((void *)0x040000D4, s32 **, 0) = &sp0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06012A80;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x85000020;
    sp0 = 0;
    M2C_FIELD((void *)0x040000D4, s32 **, 0) = &sp0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06012E80;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x85000020;
    M2C_FIELD((void *)0x040000D4, s32 **, 0) = (s32 *)0x08231868;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06011BC0;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
    M2C_FIELD((void *)0x040000D4, s32 **, 0) = (s32 *)0x08231C68;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06011FC0;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
    return M2C_FIELD((void *)0x040000D4, s32 *, 8);
}
