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

M2C_UNK sub_08083484(void *);                       /* extern */
M2C_UNK sub_0808C8E0(void *);                       /* extern */
M2C_UNK sub_0808C904(void *);                       /* extern */

void sub_0808C89C(void *arg0) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x50);
    if (temp_r0 == 1) {
        sub_0808C904(arg0);
        return;
    }
    if (temp_r0 == 2) {
        sub_0808C8E0(arg0);
        return;
    }
    if ((u8) M2C_FIELD(arg0, u16 *, 0x24) == 8) {
        sub_08083484(arg0);
        M2C_FIELD(arg0, u8 *, 0x50) = (u8) (M2C_FIELD(arg0, u8 *, 0x50) + 1);
    }
    sub_0808C8E0(arg0);
}
