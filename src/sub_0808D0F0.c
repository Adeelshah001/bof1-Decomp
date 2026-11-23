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

M2C_UNK sub_080379D4(s32);                          /* extern */
M2C_UNK sub_0807C400(void *);                       /* extern */
M2C_UNK sub_080835F8(void *);                       /* extern */
M2C_UNK sub_08084C9C();                             /* extern */
M2C_UNK sub_0808D548(void *);                       /* extern */
M2C_UNK sub_0808D574(void *);                       /* extern */

void sub_0808D0F0(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x4D) != 0) {
        sub_0808D548(arg0);
        return;
    }
    sub_0807C400(arg0);
    sub_08084C9C();
    M2C_FIELD(arg0, u8 *, 0x4D) = (u8) (M2C_FIELD(arg0, u8 *, 0x4D) + 1);
    M2C_FIELD(arg0, s8 *, 0x54) = 0x10;
    if (0x80 & M2C_FIELD(arg0, u8 *, 0xE3)) {
        sub_080379D4(0xD);
    } else {
        sub_080835F8(arg0);
    }
    sub_0808D574(arg0);
}
