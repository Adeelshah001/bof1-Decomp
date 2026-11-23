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

u8 sub_08003104();                                  /* extern */
M2C_UNK sub_0807C484(void *);                       /* extern */
s32 sub_0807CE30(void *);                           /* extern */
M2C_UNK sub_0808D314(void *);                       /* extern */
M2C_UNK sub_0808D324(void *, s32, s32);             /* extern */

void sub_0808D2C4(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0xE1) = arg1;
    if (sub_0807CE30(arg0) != 0) {
        sub_0807C484(arg0);
        if ((u32) sub_08003104() > 0x5FU) {
            sub_0808D314(arg0);
            return;
        }
        sub_0808D324(arg0, 4, 2);
        return;
    }
    M2C_FIELD(arg0, s8 *, 0xE0) = 6;
    sub_0808D324(arg0, 8, 0);
}
