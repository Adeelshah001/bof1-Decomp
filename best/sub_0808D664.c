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

M2C_UNK sub_0807CB08();                             /* extern */
M2C_UNK sub_0808DA44(void *, s32);                  /* extern */

void sub_0808D664(void *arg0) {
    s16 var_r2;
    s16 var_r3;
    s32 var_r1_2;
    s8 var_r1;
    void *temp_r0;
    void *temp_r0_2;

    temp_r0 = arg0 + 0x40;
    M2C_FIELD(arg0, s8 *, 0x40) = 0;
    M2C_FIELD(temp_r0, s8 *, 0x14) = 0;
    M2C_FIELD((temp_r0 + 0x14), s8 *, 1) = 0;
    if (arg0 == (void *)0x03003420) {
        var_r1 = 1;
        var_r3 = 0xF30;
        var_r2 = 0x2F38;
    } else if (arg0 == (void *)0x03003544) {
        var_r1 = 2;
        var_r3 = 0xF68;
        var_r2 = 0x2F40;
    } else {
        var_r1 = 0;
        var_r3 = 0xF30;
        var_r2 = 0x2F68;
    }
    temp_r0_2 = arg0 + 0x55;
    M2C_FIELD(arg0, s8 *, 0x55) = var_r1;
    M2C_FIELD(arg0, s16 *, 2) = var_r3;
    M2C_FIELD(temp_r0_2, s16 *, 0x8F) = var_r3;
    M2C_FIELD(arg0, s16 *, 6) = var_r2;
    M2C_FIELD(arg0, s16 *, 0x2C) = var_r2;
    M2C_FIELD((temp_r0_2 + 0x8F), s16 *, 2) = var_r2;
    sub_0807CB08();
    if (M2C_FIELD(arg0, u8 *, 0xD9) == 0xC) {
        M2C_FIELD(arg0, s8 *, 0x41) = 0xE;
        if (arg0 != (void *)0x03003420) {
            var_r1_2 = 0xC;
        } else {
            *(u8 *)0x03004FAF -= 1;
            var_r1_2 = 0xA;
        }
    } else {
        var_r1_2 = 2;
    }
    sub_0808DA44(arg0, var_r1_2);
}
