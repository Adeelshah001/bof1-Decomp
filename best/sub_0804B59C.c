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

M2C_UNK sub_080379D4(s32);                          /* extern */
M2C_UNK sub_0803828C(void *, void *, u16, u8);      /* extern */
M2C_UNK sub_0803A974(void *);                       /* extern */
M2C_UNK sub_0804B690();                             /* extern */
extern M2C_UNK sub_0804B768;

void sub_0804B59C(void *arg0) {
    s32 temp_r0_3;
    u8 temp_r0;
    u8 temp_r0_2;

    sub_0804B690();
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r0;
    temp_r0_2 = temp_r0;
    if (temp_r0_2 != 0) {
        if ((u32) temp_r0_2 <= 4U) {
            M2C_FIELD(arg0, u8 *, 0x61) = (u8) (M2C_FIELD(arg0, u8 *, 0x61) - 2);
        }
        M2C_FIELD(arg0, u16 *, 0x38) = (u16) M2C_FIELD(arg0, u16 *, 0xBE);
        sub_0803828C(arg0, arg0 + 4, M2C_FIELD(arg0, u16 *, 0x38), M2C_FIELD(arg0, u8 *, 0x61));
        temp_r0_3 = M2C_FIELD(arg0, u8 *, 0x61) + 1;
        if (temp_r0_3 != 0x10) {
            if (temp_r0_3 <= 0x10) {
                if (temp_r0_3 != 8) {
                    goto block_10;
                }
                goto block_9;
            }
            if ((temp_r0_3 == 0x18) || (temp_r0_3 == 0x20)) {
                goto block_9;
            }
block_10:
            M2C_FIELD(arg0, u8 *, 0x61) = (u8) (M2C_FIELD(arg0, u8 *, 0x61) + 1);
        } else {
block_9:
            M2C_FIELD(arg0, u8 *, 0x61) = (u8) (M2C_FIELD(arg0, u8 *, 0x61) + 1);
            M2C_FIELD(arg0, u16 *, 0xBE) = (u16) (M2C_FIELD(arg0, u16 *, 0xBE) + 0x40);
        }
        sub_0803A974(arg0);
        return;
    }
    sub_080379D4(0x12);
    M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_0804B768;
    M2C_FIELD(arg0, u8 *, 0x54) = 0x50U;
}
