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

M2C_UNK sub_0803A8EC(void *);                       /* extern */
u16 sub_0807B2BC(void *);                           /* extern */

void sub_08078D60(void *arg0) {
    s8 var_r1;
    u16 temp_r2;
    u16 var_r0;

    if ((0x40 & M2C_FIELD(arg0, u8 *, 0xDC)) || (2 & M2C_FIELD(arg0, u8 *, 0xDD))) {
        var_r0 = 0xFFFF;
    } else {
        var_r0 = sub_0807B2BC(arg0);
    }
    temp_r2 = var_r0;
    if (temp_r2 == 0) {
        if (!(0x80 & M2C_FIELD(arg0, u8 *, 0xF1))) {
            var_r1 = 0;
        } else {
            M2C_FIELD(arg0, u16 *, 0xF6) = temp_r2;
            var_r1 = 2;
        }
        M2C_FIELD(arg0, s8 *, 0x51) = var_r1;
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
