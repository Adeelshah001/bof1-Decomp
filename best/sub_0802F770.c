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

u8 sub_08032494(void *);                            /* extern */
M2C_UNK sub_080327A4(void *, M2C_UNK *, void *);    /* extern */
M2C_UNK sub_08032B3C(void *);                       /* extern */
s32 sub_080366D0(u16, u16, s32 *);                  /* extern */

u8 sub_0802F770(void *arg0) {
    M2C_UNK sp0;
    s32 sp4;
    u8 var_r6;

    var_r6 = 0;
    sub_080327A4(arg0, &sp0, &sp0 + 2);
    if ((sub_080366D0(M2C_FIELD(&sp0, u16 *, 0), M2C_FIELD(&sp0, u16 *, 2), &sp4) << 0x18) == 0) {
        if ((sp4 == 0) || (M2C_FIELD(arg0, u8 *, 0xBF) != 0) || (*(u8 *)0x030023D0 != 0)) {
            var_r6 = sub_08032494(arg0);
        } else {
            M2C_FIELD(arg0, s8 *, 0x4D) = 0x18;
            M2C_FIELD(arg0, s16 *, 0x50) = 0;
            var_r6 = 1;
        }
    } else if (*(u16 *)0x03002480 != 0) {
        M2C_FIELD(arg0, s8 *, 0x4D) = 0x18;
        M2C_FIELD((arg0 + 0x4D), s8 *, 3) = 4;
        M2C_FIELD(arg0, s8 *, 0x51) = 0;
        var_r6 = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0xA4) = sp4;
        sub_08032B3C(arg0);
    }
    return var_r6;
}
