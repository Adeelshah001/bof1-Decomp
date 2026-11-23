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
M2C_UNK sub_0808F2C4(void *);                       /* extern */
M2C_UNK sub_0808F500(void *);                       /* extern */

void sub_0808F1E4(void *arg0) {
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r2;
    u8 temp_r2_2;

    temp_r2 = M2C_FIELD(arg0, u8 *, 0x4D);
    if (temp_r2 == 0) {
        M2C_FIELD(arg0, u8 *, 0x4D) = 1U;
        M2C_FIELD(arg0, u8 *, 0x55) = 8U;
        M2C_FIELD((void *)0x03004F50, u8 *, 0x10) = (u8) (M2C_FIELD((void *)0x03004F50, u8 *, 0x10) + 8);
        return;
    }
    if (temp_r2 != 2) {
        temp_r0 = M2C_FIELD(arg0, u8 *, 0x55) - 1;
        M2C_FIELD(arg0, u8 *, 0x55) = temp_r0;
        if (temp_r0 & 0x80) {
            M2C_FIELD(arg0, u8 *, 0x4D) = (u8) (M2C_FIELD(arg0, u8 *, 0x4D) + 1);
        }
    } else {
        temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
        M2C_FIELD(arg0, u8 *, 0x54) = temp_r0_2;
        if (temp_r0_2 & 0x80) {
            sub_0808F2C4(arg0);
            return;
        }
        if (0xE0 & M2C_FIELD((void *)0x03004F30, u8 *, 9)) {
            temp_r2_2 = *(u8 *)0x03004FFC - 2;
            *(u8 *)0x03004FFC = temp_r2_2;
            *(u8 *)0x03004FF4 -= 2;
            temp_r0_3 = *(u8 *)0x03004FF8 - 2;
            *(u8 *)0x03004FF8 = temp_r0_3;
            if (temp_r0_3 & 0x80) {
                sub_08073470();
            } else {
                *(s16 *)0x0300168C = 0x84;
                *(s16 *)0x03001644 = (s16) ((u32) (temp_r2_2 << 0x18) >> 0x19);
            }
            if (!(0xA0 & M2C_FIELD((void *)0x03004F30, u8 *, 9))) {
                goto block_12;
            }
        } else {
block_12:
            sub_0808F500(arg0);
        }
    }
}
