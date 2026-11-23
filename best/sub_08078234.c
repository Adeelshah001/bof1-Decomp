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

M2C_UNK sub_08037FC4(void *, s32);                  /* extern */
M2C_UNK sub_0803A8EC(void *);                       /* extern */
M2C_UNK sub_08081D7C(s32, void *);                  /* extern */

void sub_08078234(void *arg0) {
    s32 var_r2;
    u16 *var_r1;
    u16 var_r1_2;

    var_r1 = (u16 *)0x03004EC0;
    if (M2C_FIELD(arg0, u8 *, 0x3C) != 0) {
        var_r1 = (u16 *)0x03004F18;
    }
    var_r1_2 = M2C_FIELD(arg0, u16 *, 0xFA) - *var_r1;
    if (0x8000 & var_r1_2) {
        var_r1_2 = 0;
    }
    M2C_FIELD(arg0, u16 *, 0xFA) = var_r1_2;
    var_r2 = 0;
    if ((M2C_FIELD(arg0, u8 *, 0x3C) == 0) && !(0x28 & M2C_FIELD(arg0, u8 *, 0xF0)) && ((u32) M2C_FIELD(arg0, u8 *, 0x112) > 0x5CU)) {
        var_r2 = 0xC;
    }
    sub_08037FC4(arg0, var_r2);
    sub_08081D7C(0x03004F50, arg0);
    if (!(0x80 & M2C_FIELD((void *)0x03004F30, u8 *, 0xD))) {
        *(s8 *)0x03004754 = 1;
    }
    if (0x80 & M2C_FIELD(arg0, u8 *, 0xF1)) {
        M2C_FIELD(arg0, s8 *, 0x2C) = 0;
    } else {
        M2C_FIELD(arg0, s8 *, 0x2C) = (s16) (M2C_FIELD(arg0, u16 *, 6) + 0x18);
    }
    if ((u32) (u16) (*(u16 *)0x03001864 - 0x10) > 1U) {
        sub_0803A8EC(arg0);
    }
}
