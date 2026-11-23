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

M2C_UNK sub_08038194(void *, u16, u16);             /* extern */
M2C_UNK sub_08038278();                             /* extern */
M2C_UNK sub_08083BB4(void *);                       /* extern */
M2C_UNK sub_0808C52C(void *);                       /* extern */

void sub_0808C304(void *arg0) {
    u8 temp_r2;
    void *temp_r1;

    sub_08038278();
    temp_r1 = M2C_FIELD(arg0, void **, 0x78);
    M2C_FIELD(arg0, u16 *, 0x2C) = (u16) M2C_FIELD(temp_r1, u16 *, 0x2C);
    temp_r2 = M2C_FIELD(arg0, u8 *, 2);
    if (((u32) temp_r2 > 0x8FU) || ((u32) (u8) (M2C_FIELD(temp_r1, u8 *, 2) - 0x24) < (u32) temp_r2)) {
        sub_08083BB4(arg0);
        M2C_FIELD(arg0, s8 *, 0x4D) = 0x16;
        sub_08038194(arg0, M2C_FIELD(arg0, u16 *, 0xE4), M2C_FIELD((arg0 + 0xE4), u16 *, 2));
        sub_0808C52C(arg0);
    }
}
