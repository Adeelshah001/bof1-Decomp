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

M2C_UNK sub_080023A8();                             /* extern */
M2C_UNK sub_08029094();                             /* extern */
M2C_UNK sub_080424D4(s32);                          /* extern */
extern M2C_UNK sub_08001244;

s32 sub_0804452C(void) {
    s32 sp0;
    s32 temp_r2;
    s32 var_r0;

    var_r0 = 0x10 << *(u8 *)0x0300459C;
    temp_r2 = *(u16 *)0x03004E30 & var_r0;
    if (temp_r2 == 0) {
        sp0 = temp_r2;
        M2C_FIELD((void *)0x040000D4, s32 **, 0) = &sp0;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x0202DBD0;
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x85000140;
        var_r0 = M2C_FIELD((void *)0x040000D4, s32 *, 8);
    }
    sub_080424D4(var_r0);
    sub_080023A8();
    sub_08029094();
    *(s8 *)0x03001698 = 8;
    *(s8 *)0x03001674 = 8;
    *(s8 *)0x0300166C = 0x20;
    *(s8 *)0x030016A4 = 0x20;
    M2C_FIELD(((M2C_FIELD((void *)0x030016E0, u8 *, 1) * 0xC) + 0x030016E0), M2C_UNK **, 0x10) = &sub_08001244;
    *(s32 *)0x03002B38 = 0;
    return 1;
}
