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
M2C_UNK sub_08037C98(void *, s32);                  /* extern */
M2C_UNK sub_0803A8EC(void *);                       /* extern */
M2C_UNK sub_08045A28(void *, u8);                   /* extern */
M2C_UNK sub_08045A68(void *);                       /* extern */
M2C_UNK sub_08045AA4();                             /* extern */
extern M2C_UNK sub_080452A8;
extern M2C_UNK sub_08045408;

void sub_08045324(void *arg0, u16 arg1) {
    u16 temp_r0_2;
    u16 temp_r2;
    u8 temp_r0;
    u8 temp_r0_3;
    void *temp_r2_2;

    temp_r2 = M2C_FIELD(arg0, u16 *, 0x7A);
    if (temp_r2 != arg1) {
        sub_08045AA4();
        temp_r0 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
        M2C_FIELD(arg0, u8 *, 0x54) = temp_r0;
        if (((temp_r0 << 0x18) == 0) && !(0x80 & M2C_FIELD(arg0, u8 *, 0x6C))) {
            M2C_FIELD(arg0, u8 *, 0x54) = 0x25U;
            goto block_8;
        }
        goto block_9;
    }
    temp_r0_2 = M2C_FIELD(arg0, u16 *, 0x7C);
    if (temp_r0_2 != temp_r2) {
        M2C_FIELD(arg0, u16 *, 0x7A) = temp_r0_2;
        sub_08045A68(arg0);
        sub_08045A28(arg0, M2C_FIELD(arg0, u8 *, 0x61));
        *(u8 *)0x03002B68 |= 0x40;
        M2C_FIELD(arg0, u8 *, 0x61) = (u8) (M2C_FIELD(arg0, u8 *, 0x61) ^ 0x10);
        M2C_FIELD(arg0, u8 *, 0x6C) = (u8) (0x80 | M2C_FIELD(arg0, u8 *, 0x6C));
        M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_08045408;
        temp_r0_3 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
        M2C_FIELD(arg0, u8 *, 0x54) = temp_r0_3;
        if (((temp_r0_3 << 0x18) == 0) && !(0x80 & M2C_FIELD(arg0, u8 *, 0x6C))) {
            M2C_FIELD(arg0, u8 *, 0x54) = 0x25U;
block_8:
            sub_080379D4(0x1A);
        }
block_9:
        sub_0803A8EC(arg0);
        return;
    }
    temp_r2_2 = arg0 + 0x3A;
    M2C_FIELD(arg0, u8 *, 0x3A) = (u8) (0x80 | M2C_FIELD(arg0, u8 *, 0x3A));
    M2C_FIELD(temp_r2_2, u8 *, 0x32) = (u8) (0x7F & M2C_FIELD(temp_r2_2, u8 *, 0x32));
    M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_080452A8;
    sub_08037C98(arg0, 0);
    sub_0803A8EC(arg0);
}
