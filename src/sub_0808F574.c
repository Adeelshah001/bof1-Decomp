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
M2C_UNK sub_08091570(void *);                       /* extern */
M2C_UNK sub_08091590(void *);                       /* extern */
u16 sub_080915D4(void *);                           /* extern */

void sub_0808F574(void *arg0) {
    u16 temp_r0;
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg0, void **, 0x78);
    M2C_FIELD(arg0, s16 *, 2) = (s16) (M2C_FIELD(temp_r1, u16 *, 2) - 0x18);
    temp_r0 = M2C_FIELD(temp_r1, u16 *, 6) - 0x10;
    M2C_FIELD(arg0, u16 *, 6) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) (temp_r0 + 0xF);
    M2C_FIELD(arg0, s8 *, 0x4D) = 0xC;
    M2C_FIELD(arg0, s8 *, 0x54) = 8;
    sub_08091570(arg0);
    sub_08091590(arg0);
    if (M2C_FIELD(arg0, u8 *, 0x55) != 0) {
        M2C_FIELD(arg0, s8 *, 0x4D) = 0xE;
        sub_0807B248(arg0);
        return;
    }
    sub_08037FC4(arg0, sub_080915D4(arg0));
    sub_0807B248(arg0);
}
