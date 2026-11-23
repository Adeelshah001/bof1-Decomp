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

M2C_UNK sub_08037FC4(void *, u16);                  /* extern */
M2C_UNK sub_0807B248(void *);                       /* extern */
M2C_UNK sub_0807CD94(void *);                       /* extern */
s32 sub_0808FD64(void *);                           /* extern */
u16 sub_08091640(void *);                           /* extern */

void sub_0808FD18(void *arg0) {
    u8 temp_r0;

    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x74), u8 *, 0x3A) != 0) {
        temp_r0 = M2C_FIELD(arg0, u8 *, 0x3C);
        if ((temp_r0 == 8) || (temp_r0 == 0x78)) {
            sub_0807B248(arg0);
        }
    } else {
        if (sub_0808FD64(arg0) != 0) {
            sub_08037FC4(arg0, sub_08091640(arg0));
        }
        sub_0807CD94(arg0);
    }
}
