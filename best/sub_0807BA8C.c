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

M2C_UNK sub_08038278(void *);                       /* extern */
M2C_UNK sub_0807BD70(void *);                       /* extern */
M2C_UNK sub_0807CFF8(void *);                       /* extern */

void sub_0807BA8C(void *arg0) {
    u16 temp_r0_4;
    u16 temp_r0_5;
    u8 *temp_r1_2;
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r0_6;
    u8 temp_r1;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x4D);
    if (temp_r0 != 1) {
        if (temp_r0 != 2) {
            sub_0807BD70(arg0);
            temp_r1 = M2C_FIELD(arg0, u8 *, 2);
            temp_r0_2 = M2C_FIELD(arg0, u8 *, 6);
            if ((u32) temp_r1 < (u32) temp_r0_2) {
                M2C_FIELD(arg0, u8 *, 6) = (u8) (temp_r0_2 - temp_r1);
                M2C_FIELD(arg0, u8 *, 2) = (s16) (M2C_FIELD((void *)0x030023E0, u16 *, 2) - 0x50);
            } else {
                M2C_FIELD(arg0, u8 *, 2) = (u8) (temp_r1 - temp_r0_2);
                M2C_FIELD(arg0, u8 *, 6) = (s16) (M2C_FIELD((void *)0x030023E0, u16 *, 6) - 0x50);
            }
            goto block_5;
        }
        goto block_7;
    }
block_5:
    temp_r0_3 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r0_3;
    if (temp_r0_3 & 0x80) {
        M2C_FIELD(arg0, s8 *, 0x61) = 0xC;
        M2C_FIELD(arg0, s16 *, 0x38) = 0xE0;
        temp_r1_2 = (arg0 + 0x61) - 0x14;
        *temp_r1_2 += 1;
block_7:
        temp_r0_4 = (u16) M2C_FIELD(arg0, u8 *, 2);
        if ((u32) temp_r0_4 < (u32) M2C_FIELD((void *)0x030023E0, u16 *, 2)) {
            M2C_FIELD(arg0, u8 *, 2) = (s16) (temp_r0_4 + 0x28);
            return;
        }
        temp_r0_5 = (u16) M2C_FIELD(arg0, u8 *, 6);
        if ((u32) temp_r0_5 < (u32) M2C_FIELD((void *)0x030023E0, u16 *, 6)) {
            M2C_FIELD(arg0, u8 *, 6) = (s16) (temp_r0_5 + 0x28);
            return;
        }
        sub_08038278(arg0);
        temp_r0_6 = M2C_FIELD(arg0, u8 *, 0xE4);
        if ((u32) temp_r0_6 < (u32) M2C_FIELD(arg0, u8 *, 2)) {
            M2C_FIELD(arg0, u8 *, 2) = temp_r0_6;
            M2C_FIELD(arg0, u8 *, 6) = (u8) M2C_FIELD(arg0, u16 *, 0xE6);
            sub_0807CFF8(arg0);
        }
    }
}
