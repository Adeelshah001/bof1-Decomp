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

M2C_UNK sub_08083C3C(void *, void *);               /* extern */
M2C_UNK sub_0808407C(void *);                       /* extern */
M2C_UNK sub_080840CC();                             /* extern */
M2C_UNK sub_080840D8(u16);                          /* extern */

void sub_08083BB4(void *arg0) {
    u8 temp_r1;
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0x78);
    M2C_FIELD(temp_r2, s8 *, 0x4C) = 4;
    M2C_FIELD(temp_r2, s8 *, 0xE3) = (s8) (M2C_FIELD(arg0, u8 *, 0xE3) & 0x7F);
    if (0x80 & M2C_FIELD((void *)0x03004F30, u8 *, 0xD)) {
        if (((u32) temp_r2 >= 0x03003420U) && ((u32) temp_r2 < 0x03003F88U)) {
            sub_080840D8(M2C_FIELD(temp_r2, u16 *, 0xF6));
            return;
        }
        goto block_5;
    }
    temp_r1 = *(u8 *)0x03004FAC;
    if (temp_r1 & 0x80) {
block_5:
        sub_080840CC();
        return;
    }
    if (temp_r1 == 0) {
        sub_08083C3C(arg0, temp_r2);
        return;
    }
    sub_0808407C(temp_r2);
}
