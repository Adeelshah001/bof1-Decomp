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
M2C_UNK sub_0803EE38(void *);                       /* extern */
M2C_UNK sub_08046F20(void *);                       /* extern */
s32 sub_08046F78(void *, void **);                  /* extern */
M2C_UNK sub_0804725C(void *, u8 *);                 /* extern */
extern M2C_UNK sub_08047540;

void sub_08046E78(void *arg0) {
    u8 sp0;
    void *sp4;
    u16 temp_r2;

    sp4 = NULL;
    sub_08046F20(arg0);
    if (!(0x8000 & M2C_FIELD(arg0, u16 *, 0x78))) {
        sub_0804725C(arg0, &sp0);
        if (sp0 != 0) {
            if ((sub_08046F78(arg0, &sp4) << 0x18) != 0) {
                M2C_FIELD(sp4, M2C_UNK **, 0x64) = &sub_08047540;
                M2C_FIELD(sp4, u16 *, 2) = (u16) ((0x7FF0 & M2C_FIELD(sp4, u16 *, 2)) | 8);
                temp_r2 = M2C_FIELD(sp4, u16 *, 0x2C);
                M2C_FIELD(sp4, u16 *, 0x2C) = (u16) ((0xFFF0 & temp_r2) | 0xC);
                M2C_FIELD(sp4, u16 *, 6) = (u16) ((u16) (temp_r2 - M2C_FIELD(sp4, u16 *, 6)) + M2C_FIELD(sp4, u16 *, 0x2C));
                sub_080072A0(M2C_FIELD(sp4, u16 *, 2), M2C_FIELD(sp4, u16 *, 6), 0x38);
                goto block_4;
            }
            sub_0803A8EC(arg0);
            return;
        }
block_4:
        sub_0803EE38(arg0);
        return;
    }
    sub_0803EE38(arg0);
}
