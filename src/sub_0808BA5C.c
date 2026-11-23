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

M2C_UNK sub_0808B7A8(void *);                       /* extern */
M2C_UNK sub_0808BA8C(void *);                       /* extern */
M2C_UNK sub_0808BB38(void *);                       /* extern */

void sub_0808BA5C(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x3C) == 0x53) {
        sub_0808BB38(arg0);
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0xE0) == 2) {
        sub_0808BA8C(arg0);
        return;
    }
    sub_0808B7A8(arg0);
}
