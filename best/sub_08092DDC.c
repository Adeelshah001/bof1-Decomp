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

M2C_UNK sub_08038128(void *, void *, s32, s32);     /* extern */
M2C_UNK sub_0803A8EC(void *);                       /* extern */
s32 sub_0807B2CC();                                 /* extern */
M2C_UNK sub_08096DB0(void *, void **);              /* extern */

void sub_08092DDC(void *arg0) {
    void *sp0;
    s32 var_r2;
    u8 temp_r0;

    if ((sub_0807B2CC() << 0x10) == 0) {
        M2C_FIELD(arg0, u8 *, 0x54) = (u8) ((0xF & *(u8 *)0x03004FB0) - 1);
loop_3:
        sub_08096DB0(arg0, &sp0);
        if (M2C_FIELD(sp0, u8 *, 0x3C) != 7) {
            temp_r0 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
            M2C_FIELD(arg0, u8 *, 0x54) = temp_r0;
            if (!(temp_r0 & 0x80)) {
                goto loop_3;
            }
        }
        M2C_FIELD(arg0, void **, 0x6C) = sp0;
        M2C_FIELD(arg0, u8 *, 0x4C) = (u8) (M2C_FIELD(arg0, u8 *, 0x4C) + 1);
        M2C_FIELD(arg0, s16 *, 0x38) = 0x120;
        sub_08038128(arg0, M2C_FIELD(arg0, void **, 0x6C), 0, 0x10);
        M2C_FIELD(arg0, s16 *, 0x44) = (s16) ((M2C_FIELD(arg0, u8 *, 0x61) & 0xF0) << 8);
        M2C_FIELD(arg0, u8 *, 0x54) = 0U;
    }
    var_r2 = 0x50;
    if (M2C_FIELD(arg0, u16 *, 0x2A) == 0x18E) {
        var_r2 = 0x70;
    }
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) (var_r2 + M2C_FIELD(arg0, u16 *, 6));
    sub_0803A8EC(arg0);
}
