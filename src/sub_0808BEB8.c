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

M2C_UNK sub_0807B2BC();                             /* extern */
M2C_UNK sub_08083BB4(void *);                       /* extern */
M2C_UNK sub_0808BEDC(void *);                       /* extern */

void sub_0808BEB8(void *arg0) {
    sub_0807B2BC();
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x74), u8 *, 0x3A) == 0) {
        sub_08083BB4(arg0);
        sub_0808BEDC(arg0);
    }
}
