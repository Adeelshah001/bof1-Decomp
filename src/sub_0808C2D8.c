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

M2C_UNK sub_080380F4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_0807B27C();                             /* extern */
M2C_UNK sub_0808C304(void *);                       /* extern */

void sub_0808C2D8(void *arg0) {
    sub_0807B27C();
    sub_080380F4(arg0, M2C_FIELD(arg0, s32 *, 0x78), 0x10, 0x20);
    M2C_FIELD(arg0, s8 *, 0x4D) = 6;
    M2C_FIELD(arg0, s16 *, 0x38) = 0xA0;
    sub_0808C304(arg0);
}
