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

s32 sub_08003104();                                 /* extern */
M2C_UNK sub_08037C98(void *, s32);                  /* extern */
M2C_UNK sub_0803A8EC(void *);                       /* extern */
s32 sub_08046A9C(void *);                           /* extern */
M2C_UNK sub_08046C34(void *);                       /* extern */
M2C_UNK sub_080472D4(void *);                       /* extern */
M2C_UNK sub_080472E8(void *, M2C_UNK *);            /* extern */
s32 sub_0804731C(void *, s32, s32);                 /* extern */
M2C_UNK sub_08047404(void *);                       /* extern */
M2C_UNK sub_08047450(void *);                       /* extern */
extern M2C_UNK sub_08046978;
extern M2C_UNK sub_08047508;

void sub_08046894(void *arg0) {
    M2C_UNK sp0;
    u8 temp_r0;

    if (M2C_FIELD(arg0, u8 *, 0x3B) == 3) {
        sub_08037C98(arg0, 0);
    }
    M2C_FIELD(arg0, u16 *, 0x46) = (u16) M2C_FIELD(arg0, u16 *, 2);
    M2C_FIELD((arg0 + 0x46), u16 *, 4) = (u16) M2C_FIELD(arg0, u16 *, 0x2C);
    if ((sub_0804731C(arg0, 0x30, 0x61) << 0x18) == 0) {
        temp_r0 = M2C_FIELD(arg0, u8 *, 0x54) + 1;
        M2C_FIELD(arg0, u8 *, 0x54) = temp_r0;
        if ((u32) temp_r0 > 0x17U) {
            M2C_FIELD(arg0, u8 *, 0x54) = 0U;
            if ((M2C_FIELD(arg0, u8 *, 0x3B) != 2) || !(1 & sub_08003104())) {
                M2C_FIELD(arg0, s8 *, 0x61) = (s8) (3 & sub_08003104());
            }
            if ((sub_08046A9C(arg0) << 0x18) != 0) {
                M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_08047508;
                sub_08047404(arg0);
            } else {
                sub_08047450(arg0);
            }
        }
        sub_0803A8EC(arg0);
        return;
    }
    sub_080472E8(arg0, &sp0);
    M2C_FIELD(arg0, u8 *, 0x54) = 0x104;
    M2C_FIELD((arg0 + 0x54), s8 *, 0x39) = 4;
    if (M2C_FIELD(arg0, u8 *, 0x3B) == 3) {
        sub_08046C34(arg0);
        return;
    }
    sub_080472D4(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_08046978;
    sub_08047404(arg0);
    sub_0803A8EC(arg0);
}
