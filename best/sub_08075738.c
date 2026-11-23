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

M2C_UNK sub_0803800C(void *, s32, s32);             /* extern */
M2C_UNK sub_0805D43C(void *);                       /* extern */
M2C_UNK sub_08078F08(void *);                       /* extern */
M2C_UNK sub_0807B388(void *);                       /* extern */
M2C_UNK sub_080A0A4C(s32, s32);                     /* extern */
M2C_UNK sub_080A0A68(s32, s32, s32);                /* extern */

void sub_08075738(void *arg0, s8 arg1) {
    s32 temp_r4;
    s32 var_r6;
    u8 temp_r1;

    M2C_FIELD(arg0, s8 *, 0x51) = arg1;
    temp_r1 = M2C_FIELD((arg0 + 0x51), u8 *, 0xA0);
    if (0x40 & temp_r1) {
        sub_0805D43C(arg0);
        var_r6 = M2C_FIELD(arg0, u8 *, 0x3B) << 5;
        if (!(0x10 & M2C_FIELD((arg0 + 0x3B), u8 *, 0xB5))) {
            temp_r4 = (u8) (M2C_FIELD(arg0, u8 *, 0x3C) << 5) + 0x5E00 + 0x081A0E7C;
            sub_080A0A68(var_r6 + 0x020210C0, temp_r4, 0x20);
            sub_080A0A68(var_r6 + 0x020212C0, temp_r4, 0x20);
        } else {
            goto block_5;
        }
    } else if (0x20 & temp_r1) {
        var_r6 = M2C_FIELD(arg0, u8 *, 0x3B) << 5;
        if (0x10 & M2C_FIELD((arg0 + 0x3B), u8 *, 0xB5)) {
block_5:
            sub_080A0A4C(var_r6 + 0x020210C0, 0x20);
            sub_080A0A4C(var_r6 + 0x020212C0, 0x20);
            M2C_FIELD(arg0, s8 *, 0x7D) = (s8) (M2C_FIELD(arg0, u8 *, 0x41) * 0x10);
        } else {
            sub_080A0A68(var_r6 + 0x020210C0, 0x081A77BC, 0x20);
            sub_080A0A68(var_r6 + 0x020212C0, 0x081A77BC, 0x20);
        }
    }
    if (0x10 & M2C_FIELD(arg0, u8 *, 0xF1)) {
        M2C_FIELD(arg0, s8 *, 0x10C) = 1;
    }
    if (0x40 & M2C_FIELD(arg0, u8 *, 0xDC)) {
        sub_0803800C(arg0, 4, 2);
        sub_0807B388(arg0);
        return;
    }
    sub_08078F08(arg0);
}
