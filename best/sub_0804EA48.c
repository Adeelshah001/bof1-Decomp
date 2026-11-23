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

M2C_UNK sub_0803EE6C(void *);                       /* extern */
M2C_UNK sub_0804FD0C(void *);                       /* extern */

void sub_0804EA48(void *arg0) {
    s8 *var_r2;
    s8 var_r0;
    u16 temp_r2;
    void *temp_r1;
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 0xD4);
    temp_r1 = arg0 + 0x54;
    M2C_FIELD(arg0, u16 *, 0x54) = (u16) (M2C_FIELD(arg0, u16 *, 0x54) + 1);
    temp_r2 = M2C_FIELD(temp_r5, u16 *, 2);
    if ((M2C_FIELD(arg0, u16 *, 0xB4) == temp_r2) && (M2C_FIELD(temp_r1, u16 *, 0x62) == M2C_FIELD(temp_r5, u16 *, 6))) {
        if (M2C_FIELD(arg0, u8 *, 0xC9) != 0) {
            M2C_FIELD(temp_r5, u8 *, 0x3A) = (u8) (0xBF & M2C_FIELD(temp_r5, u8 *, 0x3A));
            sub_0803EE6C(arg0);
            return;
        }
        M2C_FIELD(arg0, u16 *, 0xB4) = temp_r2;
        M2C_FIELD(temp_r1, u16 *, 0x62) = (u16) M2C_FIELD(temp_r5, u16 *, 6);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0xC9) = 0xFFU;
    if (!(3 & M2C_FIELD(arg0, u16 *, 0x54))) {
        sub_0804FD0C(arg0);
    }
    if (2 & (u8) M2C_FIELD(arg0, u16 *, 0x54)) {
        var_r2 = temp_r5 + 0x3A;
        var_r0 = 0x40 | M2C_FIELD(temp_r5, u8 *, 0x3A);
    } else {
        var_r2 = temp_r5 + 0x3A;
        var_r0 = 0xBF & M2C_FIELD(temp_r5, u8 *, 0x3A);
    }
    *var_r2 = var_r0;
    M2C_FIELD(arg0, u16 *, 0xB4) = (u16) M2C_FIELD(temp_r5, u16 *, 2);
    M2C_FIELD((arg0 + 0xB4), u16 *, 2) = (u16) M2C_FIELD(temp_r5, u16 *, 6);
}
