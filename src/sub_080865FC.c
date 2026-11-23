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

M2C_UNK sub_0808663C(void *);                       /* extern */
M2C_UNK sub_0808665C(void *, s32);                  /* extern */
M2C_UNK sub_08086678(void *);                       /* extern */

void sub_080865FC(void *arg0) {
    u8 temp_r0;
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg0, void **, 0x6C);
    if (M2C_FIELD(temp_r1, u8 *, 0x3A) != 0) {
        M2C_FIELD(temp_r1, s8 *, 0x4C) = 8;
    }
    temp_r0 = M2C_FIELD(arg0, u8 *, 0xE0);
    if (temp_r0 == 8) {
        sub_08086678(arg0);
        return;
    }
    if (temp_r0 == 0xA) {
        sub_0808663C(arg0);
        return;
    }
    sub_0808665C(arg0, 4);
}
