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

M2C_UNK sub_0808C828(void *, s32);                  /* extern */
M2C_UNK sub_0808C844(void *, s32);                  /* extern */

void sub_0808C7FC(void *arg0) {
    u8 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u8 *, 0xE1);
    if (temp_r1 == 1) {
        sub_0808C828(arg0, 0x1A);
        return;
    }
    if (temp_r1 == 2) {
        sub_0808C828(arg0, 1);
        return;
    }
    sub_0808C844(arg0, 8);
}
