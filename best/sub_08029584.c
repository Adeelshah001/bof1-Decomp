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

M2C_UNK sub_08029730(u16, u8 *, void *, void *);    /* extern */
u16 sub_0802A8B0(void *, void *, s32);              /* extern */

void sub_08029584(u16 arg0, u16 arg1, void *arg2) {
    s32 sp0;
    u8 sp4;
    u32 sp8;
    u16 *temp_r1;
    u16 *temp_r3;
    u16 temp_r2;
    u16 temp_r4;
    u16 var_r12;
    u32 temp_r0;
    u8 temp_r0_2;

    M2C_FIELD(&sp0, u16 *, 6) = arg0;
    var_r12 = arg1;
    sp4 = 0x1F;
    temp_r0 = (u32) (0xF8 & ~M2C_FIELD(arg2, u16 *, 6)) >> 3;
    M2C_FIELD(&sp0, u8 *, 5) = (u8) temp_r0;
    sp8 = temp_r0;
    do {
        temp_r3 = *(u16 **)0x03004190;
        *((*(u16 *)0x03004194 * 2) + temp_r3) = 0x81;
        *(u16 *)0x03004194 += 1;
        temp_r4 = *(u16 *)0x03004194;
        temp_r2 = temp_r4 + 1;
        *(u16 *)0x03004194 = temp_r2;
        *((*(u16 *)0x03004194 * 2) + temp_r3) = M2C_FIELD(arg2, u16 *, 0x38) + M2C_FIELD(&sp0, u16 *, 6);
        *(u16 *)0x03004194 = temp_r2 + 1;
        sp0 = 2;
        sub_08029730(var_r12, &sp4, &sp0 + 5, arg2);
        *((temp_r4 * 2) + *(u16 **)0x03004190) = ((s32) (sp8 << 0x18) >> 0x17) + 2;
        var_r12 = sub_0802A8B0(&sp0 + 6, arg2, 0x03002480);
        temp_r0_2 = sp4;
        M2C_FIELD(&sp0, u8 *, 5) = temp_r0_2;
        sp8 = (u32) temp_r0_2;
        temp_r1 = *(u16 **)0x03004190;
        *temp_r1 += 1;
    } while ((s32) (s8) sp4 >= 0);
}
