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

void sub_0808DA64(void *arg0) {
    u8 temp_r3;
    void *temp_r0;

    temp_r3 = M2C_FIELD((void *)0x03004F30, u8 *, 0xD);
    if (temp_r3 == 0) {
        M2C_FIELD(arg0, s8 *, 0x41) = 8;
        temp_r0 = arg0 + 0x4C;
        M2C_FIELD(arg0, s8 *, 0x4C) = 2;
        M2C_FIELD(temp_r0, u8 *, 1) = temp_r3;
        M2C_FIELD((temp_r0 + 1), u8 *, 3) = temp_r3;
        sub_08037FC4(arg0, 0);
    }
}
