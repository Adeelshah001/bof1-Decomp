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

M2C_UNK sub_0807C484(void *);                       /* extern */
s32 sub_0807CE30(void *);                           /* extern */
M2C_UNK sub_0808C2BC(void *, s32);                  /* extern */

void sub_0808C284(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0xE1) = arg1;
    if (sub_0807CE30(arg0) != 0) {
        sub_0807C484(arg0);
        sub_0808C2BC(arg0, 4);
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x54) = 0x3C;
    sub_0808C2BC(arg0, 0x12);
}
