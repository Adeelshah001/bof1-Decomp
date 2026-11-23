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
M2C_UNK sub_0807C2C4(void *);                       /* extern */
M2C_UNK sub_0807D114(void *, s32);                  /* extern */
M2C_UNK sub_0808F0BC(void *);                       /* extern */
u16 sub_080915B4(void *);                           /* extern */

void sub_0807C208(void *arg0) {
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;

    if (M2C_FIELD(arg0, u8 *, 0x55) == 0) {
        temp_r0 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
        M2C_FIELD(arg0, u8 *, 0x54) = temp_r0;
        if (!(temp_r0 & 0x80)) {
            sub_0808F0BC(arg0);
            return;
        }
        M2C_FIELD(arg0, u8 *, 0x55) = (u8) (M2C_FIELD(arg0, u8 *, 0x55) + 1);
        M2C_FIELD(arg0, u8 *, 0x54) = 0x1FU;
        return;
    }
    temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r0_2;
    if (temp_r0_2 & 0x80) {
        M2C_FIELD((void *)0x03004F50, s8 *, 0x10) = 0x10;
        M2C_FIELD(arg0, s8 *, 0x41) = (s8) ((u8) M2C_FIELD(arg0, u8 *, 0x7D) >> 4);
        if (!(0xA0 & M2C_FIELD((void *)0x03004F30, u8 *, 9))) {
            temp_r0_3 = M2C_FIELD(arg0, u8 *, 0x3C);
            if ((temp_r0_3 != 0x23) && (temp_r0_3 != 0x51)) {
                sub_08037FC4(arg0, sub_080915B4(arg0));
            }
        }
        *(s8 *)0x03003410 = 0;
        M2C_FIELD((void *)0x03004F50, s8 *, 0x10) = 0x10;
        sub_0807D114(arg0, 2);
        return;
    }
    sub_0807C2C4(arg0);
}
