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

M2C_UNK sub_080288F0(s32);                          /* extern */
M2C_UNK sub_0803C150(s32);                          /* extern */
M2C_UNK sub_080A0224();                             /* extern */
extern M2C_UNK sub_08001244;
extern M2C_UNK sub_08003CD4;

void sub_08001038(void) {
    s32 sp0;
    M2C_UNK *var_r0;
    void *var_r2;

    *(s32 *)0x03004190 = 0x02005810;
    *(s8 *)0x02020FC0 = 0;
    *(s8 *)0x08150BA6 = 0;
    sub_080A0224();
    *(s16 *)0x04000000 = 0;
    *(s8 *)0x0300482C = 0;
    *(s32 *)0x03001694 &= ~0x20;
    sp0 = 0;
    M2C_FIELD((void *)0x040000D4, s32 **, 0) = &sp0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x0202DBD0;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x85000140;
    sp0 = 0;
    M2C_FIELD((void *)0x040000D4, s32 **, 0) = &sp0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06000000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x85006000;
    *(s16 *)0x04000204 = 0x4014;
    *(s32 *)0x03001694 |= 4;
    *(s16 *)0x03004198 = 1;
    sub_080288F0(0x0202B1C0);
    *(u8 *)0x0300169C = 0;
    *(s16 *)0x03001670 = 0x100;
    *(u16 *)0x030023D4 = M2C_FIELD((void *)0x03002AB0, u16 *, 2);
    *(u16 *)0x030040E0 = M2C_FIELD((void *)0x03002AB0, u16 *, 6);
    sub_080A0224();
    *(s16 *)0x04000000 = 0;
    if (*(u8 *)0x0300169C == 0) {
        var_r2 = (M2C_FIELD((void *)0x030016E0, u8 *, 1) * 0xC) + 0x030016E0;
        var_r0 = &sub_08003CD4;
    } else {
        *(s16 *)0x03001864 = 0x17;
        sub_0803C150(0);
        var_r2 = (M2C_FIELD((void *)0x030016E0, u8 *, 1) * 0xC) + 0x030016E0;
        var_r0 = &sub_08001244;
    }
    M2C_FIELD(var_r2, M2C_UNK **, 0x10) = var_r0;
}
