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

M2C_UNK sub_08038194(void *, s32, s32);             /* extern */
M2C_UNK sub_08038278(void *);                       /* extern */
M2C_UNK sub_0803EF2C(void *);                       /* extern */
M2C_UNK sub_0807C638(void *, s32);                  /* extern */
M2C_UNK sub_0808DC94(void *);                       /* extern */

void sub_0808D800(void *arg0) {
    s8 *temp_r1;
    s8 *temp_r1_2;
    u16 temp_r2;
    u8 *temp_r1_3;
    u8 temp_r0;
    u8 var_r1;
    u8 var_r1_2;
    void *temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x55) + 1;
    M2C_FIELD(arg0, u8 *, 0x55) = temp_r0;
    if (!(temp_r0 & 3)) {
        sub_0807C638(arg0, 0xD);
    }
    sub_08038194(arg0, 0xF40, 0x2F38);
    sub_08038278(arg0);
    temp_r2 = M2C_FIELD(arg0, u16 *, 6);
    M2C_FIELD(arg0, u16 *, 0x2C) = temp_r2;
    var_r1 = M2C_FIELD(arg0, u8 *, 2) - 0x40;
    if (var_r1 & 0x80) {
        var_r1 = (u8) ((u32) ((~var_r1 << 0x18) + 0x01000000) >> 0x18);
    }
    if ((u32) var_r1 <= 2U) {
        var_r1_2 = temp_r2 - 0x38;
        if (var_r1_2 & 0x80) {
            var_r1_2 = (u8) ((u32) ((~var_r1_2 << 0x18) + 0x01000000) >> 0x18);
        }
        if ((u32) var_r1_2 <= 2U) {
            if (arg0 != (void *)0x03003420) {
                sub_0803EF2C(arg0);
                return;
            }
            temp_r0_2 = arg0 + 0xF4;
            M2C_FIELD(arg0, s16 *, 0xF4) = 0x4B0;
            M2C_FIELD(temp_r0_2, s16 *, 2) = 0x4B0;
            M2C_FIELD(arg0, u16 *, 0xFA) = (u16) M2C_FIELD((temp_r0_2 + 2), u16 *, 2);
            temp_r1 = (arg0 + 0xFA) - 9;
            *temp_r1 = 0;
            temp_r1_2 = temp_r1 - 0x9D;
            *temp_r1_2 = 0x20;
            M2C_FIELD(arg0, u8 *, 2) = 0xF40;
            M2C_FIELD(arg0, u16 *, 6) = 0x2F38U;
            M2C_FIELD(arg0, u16 *, 0x2C) = 0x2F40U;
            temp_r1_3 = temp_r1_2 - 7;
            *temp_r1_3 += 1;
            sub_0808DC94(arg0);
        }
    }
}
