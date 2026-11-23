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

M2C_UNK sub_08037FC4(void *, s32);                  /* extern */
s32 sub_0807B2BC(void *);                           /* extern */
M2C_UNK sub_0808A650(void *);                       /* extern */
M2C_UNK sub_0808A95C(void *);                       /* extern */

void sub_0808A910(void *arg0) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x50);
    if (temp_r0 == 1) {
        sub_0808A650(arg0);
        return;
    }
    if (temp_r0 == 2) {
        sub_0808A95C(arg0);
        return;
    }
    if ((sub_0807B2BC(arg0) << 0x10) == 0) {
        sub_08037FC4(arg0, 0xA);
        M2C_FIELD(arg0, s8 *, 0x54) = 0x1E;
        M2C_FIELD(arg0, u8 *, 0x50) = (u8) (M2C_FIELD(arg0, u8 *, 0x50) + 1);
    }
}
