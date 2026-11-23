/* machine draft (m2c) for agbcc -O2, tried by autopilot */
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

M2C_UNK sub_08001F80(s32, s32, s32);                /* extern */
M2C_UNK sub_080023A8();                             /* extern */
M2C_UNK sub_0800312C(s32, s32);                     /* extern */
M2C_UNK sub_08029094();                             /* extern */
M2C_UNK sub_080440DC(u8);                           /* extern */
M2C_UNK sub_08069680();                             /* extern */
extern M2C_UNK sub_08001244;

s32 sub_08043DB4(void) {
    u8 temp_r2;

    temp_r2 = *(u8 *)0x0300459C;
    if (!(*(u16 *)0x03004E30 & (0x10 << temp_r2))) {
        sub_080440DC(temp_r2);
    }
    sub_080023A8();
    sub_08029094();
    sub_08069680();
    sub_0800312C(0x10, 0x2C);
    sub_08001F80(0, 0, 0);
    *(s16 *)0x0300168C = 0xFF;
    *(s8 *)0x03001698 = 8;
    *(s8 *)0x03001674 = 8;
    *(s8 *)0x0300166C = 0x20;
    *(s8 *)0x030016A4 = 0x20;
    M2C_FIELD(((M2C_FIELD((void *)0x030016E0, u8 *, 1) * 0xC) + 0x030016E0), M2C_UNK **, 0x10) = &sub_08001244;
    return 1;
}
