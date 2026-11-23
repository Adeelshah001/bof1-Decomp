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

M2C_UNK sub_08073470();                             /* extern */
M2C_UNK sub_0808E674(void *);                       /* extern */

void sub_0808DFA8(void *arg0) {
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r1;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r0;
    if ((temp_r0 << 0x18) != 0) {
        M2C_FIELD(arg0, s8 *, 0x4D) = 6;
        M2C_FIELD((arg0 + 0x4D), s8 *, 3) = 0;
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x54) = 1U;
    temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x55) - 1;
    M2C_FIELD(arg0, u8 *, 0x55) = temp_r0_2;
    if (!(temp_r0_2 & 0x80)) {
        temp_r1 = *(u8 *)0x03001125 ^ 1;
        *(u8 *)0x03001125 = temp_r1;
        if (temp_r1 & 1) {
            *(s16 *)0x0300168C = 0x84;
            *(s16 *)0x03001644 = (s16) ((u8) *(u8 *)0x03004FFC >> 1);
            return;
        }
        sub_08073470();
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x54) = 7U;
    M2C_FIELD(arg0, s8 *, 0x4D) = 8;
    sub_0808E674(arg0);
}
