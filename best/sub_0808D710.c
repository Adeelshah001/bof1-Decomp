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
M2C_UNK sub_0808D7A0(void *);                       /* extern */

void sub_0808D710(void *arg0) {
    u32 var_r1;

    M2C_FIELD((void *)0x03004F30, u8 *, 0xC) = (u8) (1 | M2C_FIELD((void *)0x03004F30, u8 *, 0xC));
    M2C_FIELD(arg0, u8 *, 0xF1) = 0x80U;
    M2C_FIELD(arg0, s8 *, 0x55) = 0;
    M2C_FIELD(arg0, u8 *, 0x54) = (u8) (*(u8 *)0x03004FAF & 0xF0);
    var_r1 = (u32) (0x0F000000 & ((*(u8 *)0x03004FAF - 1) << 0x18)) >> 0x18;
    if (var_r1 == 0) {
        M2C_FIELD(arg0, s8 *, 0x55) = 0x1F;
        var_r1 = 0x31;
    }
    *(u8 *)0x03004FAF = var_r1 | M2C_FIELD(arg0, u8 *, 0x54);
    if (*(u8 *)0x03004F9A == 0) {
        M2C_FIELD(arg0, u8 *, 0xF1) = (u8) (M2C_FIELD(arg0, u8 *, 0xF1) | 8);
    }
    sub_08037FC4(arg0, 2);
    M2C_FIELD(arg0, u8 *, 0x4D) = (u8) (M2C_FIELD(arg0, u8 *, 0x4D) + 1);
    sub_0808D7A0(arg0);
}
