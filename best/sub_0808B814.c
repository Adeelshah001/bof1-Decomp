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

M2C_UNK sub_08083484(void *);                       /* extern */
M2C_UNK sub_0808BB68(void *);                       /* extern */

void sub_0808B814(void *arg0) {
    s8 var_r5;
    u8 temp_r5;
    void *temp_r1;

    temp_r5 = M2C_FIELD(arg0, u8 *, 0x55) - 1;
    M2C_FIELD(arg0, u8 *, 0x55) = temp_r5;
    if (temp_r5 != 0) {
        var_r5 = 0xE;
        if (!(1 & temp_r5)) {
            var_r5 = 8;
        }
        M2C_FIELD(arg0, s8 *, 0x41) = var_r5;
        sub_0808BB68(arg0);
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x41) = 8;
    sub_08083484(arg0);
    temp_r1 = M2C_FIELD(arg0, void **, 0x74);
    M2C_FIELD(temp_r1, s16 *, 0x14) = (s16) temp_r5;
    M2C_FIELD(temp_r1, s16 *, 0x16) = 0xFC;
    M2C_FIELD(arg0, s8 *, 0x4D) = 8;
    sub_0808BB68(arg0);
}
