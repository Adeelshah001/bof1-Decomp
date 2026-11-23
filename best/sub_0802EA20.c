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

M2C_UNK sub_0802A424(void *, u16, u16);             /* extern */
M2C_UNK sub_0802CCEC(void *);                       /* extern */
M2C_UNK sub_0802CD4C(void *, s32);                  /* extern */
M2C_UNK sub_0803273C(void *, M2C_UNK *, void *);    /* extern */

void sub_0802EA20(void *arg0, u8 arg1) {
    M2C_UNK sp0;
    s8 temp_r2;

    M2C_FIELD(arg0, s8 *, 0x61) = (s8) (((u32) (arg1 << 0x18) >> 0x1C) & 3);
    M2C_FIELD(arg0, s32 *, 0x88) = (s32) (M2C_FIELD(arg0, s32 *, 0x88) + 1);
    temp_r2 = arg1 & 0xF;
    M2C_FIELD(arg0, s8 *, 0xC3) = temp_r2;
    if (temp_r2 == 0) {
        sub_0802CCEC(arg0);
        M2C_FIELD(arg0, s8 *, 0x4D) = temp_r2;
        return;
    }
    sub_0802CD4C(arg0, 0);
    sub_0803273C(arg0, &sp0, &sp0 + 2);
    sub_0802A424(arg0, M2C_FIELD(&sp0, u16 *, 0), M2C_FIELD(&sp0, u16 *, 2));
    M2C_FIELD(arg0, s8 *, 0x4D) = 2;
}
