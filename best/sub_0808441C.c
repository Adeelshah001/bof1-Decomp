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

s32 sub_0808441C(void *arg0) {
    s32 var_r2;
    u16 temp_r0;
    void *var_r1;

    var_r2 = 0x1F;
    var_r1 = (void *)0x020127A0 + 0x3C;
    do {
        M2C_FIELD(var_r1, u16 *, 2) = (u16) M2C_FIELD(var_r1, u16 *, 0);
        var_r1 -= 2;
        var_r2 -= 1;
    } while (var_r2 > 0);
    M2C_FIELD((void *)0x020127A0, u16 *, 0) = (u16) M2C_FIELD((void *)0x020127A0, u16 *, 0x3E);
    *(u8 *)0x03004588 |= (u16) M2C_FIELD(arg0, u16 *, 0x14) >> 8;
    temp_r0 = M2C_FIELD(arg0, u16 *, 0x38) - 1;
    M2C_FIELD(arg0, u16 *, 0x38) = temp_r0;
    if ((temp_r0 << 0x10) == 0) {
        M2C_FIELD(arg0, u8 *, 0x1D) = (u8) (M2C_FIELD(arg0, u8 *, 0x1D) + 1);
    }
    M2C_FIELD((void *)0x040000D4, M2C_UNK32 *, 0) = 0x020127A0;
    M2C_FIELD((void *)0x040000D4, void **, 4) = (void *) ((void *)0x020127A0 + 0x40);
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000020;
    M2C_FIELD((void *)0x040000D4, M2C_UNK32 *, 0) = 0x020127A0;
    M2C_FIELD((void *)0x040000D4, void **, 4) = (void *) ((void *)0x020127A0 + 0x80);
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000020;
    M2C_FIELD((void *)0x040000D4, M2C_UNK32 *, 0) = 0x020127A0;
    M2C_FIELD((void *)0x040000D4, void **, 4) = (void *) ((void *)0x020127A0 + 0xC0);
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000020;
    M2C_FIELD((void *)0x040000D4, M2C_UNK32 *, 0) = 0x020127A0;
    M2C_FIELD((void *)0x040000D4, void **, 4) = (void *) ((void *)0x020127A0 + 0x100);
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000020;
    return 0;
}
