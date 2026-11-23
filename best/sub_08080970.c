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

M2C_UNK sub_08073594(void *, s32);                  /* extern */
M2C_UNK sub_080735A0(void *, s32);                  /* extern */
M2C_UNK sub_08081EC8(void *, void *);               /* extern */

void sub_08080970(void *arg0) {
    s16 *var_r2;
    u16 *var_r5;
    u16 var_r3;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x54);
    if (!(M2C_FIELD(arg0, u8 *, 0x48) & 0x80)) {
        sub_08081EC8(arg0, temp_r4);
        return;
    }
    if ((u32) M2C_FIELD(arg0, u8 *, 0x10) <= 1U) {
        var_r2 = arg0 + 0x40;
        var_r3 = M2C_FIELD(arg0, u16 *, 0x40) + M2C_FIELD(temp_r4, u16 *, 0xFA);
        var_r5 = temp_r4 + 0xFA;
    } else {
        M2C_FIELD(arg0, u16 *, 0x40) = (u16) (M2C_FIELD(arg0, u16 *, 0x40) - 1);
        var_r3 = M2C_FIELD(temp_r4, u16 *, 0xFA) + 1;
        var_r5 = temp_r4 + 0xFA;
        var_r2 = arg0 + 0x40;
    }
    if ((u32) var_r3 >= (u32) M2C_FIELD(temp_r4, u16 *, 0xF8)) {
        *var_r2 = 0;
        var_r3 = M2C_FIELD(temp_r4, u16 *, 0xF8);
    }
    *var_r5 = var_r3;
    if (((u32) temp_r4 >= 0x03003420U) && ((u32) temp_r4 < 0x03003F88U)) {
        sub_080735A0(temp_r4, -1);
        return;
    }
    sub_08073594(temp_r4, -1);
}
