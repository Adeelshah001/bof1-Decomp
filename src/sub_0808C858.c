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

s32 sub_0807B2BC();                                 /* extern */
M2C_UNK sub_0808C884(void *);                       /* extern */

void sub_0808C858(void *arg0) {
    if ((sub_0807B2BC() << 0x10) == 0) {
        M2C_FIELD(arg0, u8 *, 2) = (u8) M2C_FIELD(arg0, u8 *, 0xE4);
        M2C_FIELD(arg0, u8 *, 6) = (u8) M2C_FIELD(arg0, u8 *, 0xE6);
        sub_0808C884(arg0);
    }
}
