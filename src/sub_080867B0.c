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

M2C_UNK sub_08037FC4(void *, s32);                  /* extern */
M2C_UNK sub_0808EEF4(void *);                       /* extern */

void sub_080867B0(void *arg0) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x6C);
    if (M2C_FIELD(temp_r3, u8 *, 0x3A) != 0) {
        M2C_FIELD(temp_r3, u8 *, 0x3A) = 0U;
        M2C_FIELD(temp_r3, s8 *, 0x4C) = 0;
    }
    M2C_FIELD(arg0, s8 *, 0x4C) = 0xE;
    sub_08037FC4(arg0, 0xA);
    sub_0808EEF4(arg0);
}
