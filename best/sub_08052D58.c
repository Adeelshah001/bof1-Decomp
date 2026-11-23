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

M2C_UNK sub_08068818(s32);                          /* extern */

void sub_08052D58(void) {
    s32 var_r0;

    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x080FDF24;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x02020FC0;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x080FDF24;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x020211C0;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
    if ((s8) *(u8 *)0x0300485A != 0x12) {
        M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x080FDF04;
        var_r0 = 0x05000100;
    } else {
        M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x080FDF04;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x02020FE0;
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
        M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x080FDF04;
        var_r0 = 0x020211E0;
    }
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = var_r0;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x080FDF64;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x05000120;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x080FDF44;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x05000140;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000010;
    sub_08068818(8);
}
