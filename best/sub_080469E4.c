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

M2C_UNK sub_080072A0(u16, u16, s32);                /* extern */
M2C_UNK sub_0803A8EC(void *);                       /* extern */
s32 sub_080472B8(void *);                           /* extern */
M2C_UNK sub_080472E8(void *, M2C_UNK *);            /* extern */
s32 sub_0804731C(void *, s32, s32);                 /* extern */
M2C_UNK sub_08047404(void *);                       /* extern */
M2C_UNK sub_08047450(void *);                       /* extern */
extern M2C_UNK sub_08046894;
extern M2C_UNK sub_0804749C;
extern M2C_UNK sub_08047540;

void sub_080469E4(void *arg0) {
    M2C_UNK sp0;
    u8 temp_r0;
    u8 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r0;
    if ((temp_r0 << 0x18) != 0) {
        temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x55) + 1;
        M2C_FIELD(arg0, u8 *, 0x55) = temp_r0_2;
        if ((u32) temp_r0_2 <= 0x1FU) {
            if ((sub_0804731C(arg0, 0x30, 0x61) << 0x18) != 0) {
                M2C_FIELD(arg0, u8 *, 0x61) = (u8) ((M2C_FIELD(arg0, u8 *, 0x61) + 1) & 3);
                M2C_FIELD(arg0, u8 *, 0x54) = 4U;
            } else {
                M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_08046894;
            }
            sub_08047450(arg0);
            sub_0803A8EC(arg0);
            return;
        }
        sub_080472E8(arg0, &sp0);
        M2C_FIELD(arg0, s8 *, 0x8D) = 5;
        if ((sub_080472B8(arg0) << 0x18) != 0) {
            sub_08047404(arg0);
            M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_0804749C;
            sub_0803A8EC(arg0);
            return;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_08047540;
        sub_080072A0(M2C_FIELD(arg0, u16 *, 2), M2C_FIELD(arg0, u16 *, 6), 0x38);
        sub_0803A8EC(arg0);
    }
}
