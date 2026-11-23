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
M2C_UNK sub_0803A8EC(void *);                       /* extern */
extern M2C_UNK sub_08045504;

void sub_08044EF8(void *arg0) {
    u8 temp_r0;
    u8 temp_r1;
    u8 temp_r1_2;

    temp_r1 = M2C_FIELD(arg0, u8 *, 0x54) + 1;
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r1;
    *(s8 *)0x0300487D = 0;
    *(s16 *)0x030016C4 = 0;
    *(s16 *)0x03004890 = 0x190;
    temp_r1_2 = temp_r1;
    if (temp_r1_2 == 0x60) {
        temp_r0 = M2C_FIELD(arg0, u8 *, 0x55) - 1;
        M2C_FIELD(arg0, u8 *, 0x55) = temp_r0;
        if ((temp_r0 << 0x18) == 0) {
            M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_08045504;
            sub_080379D4(0xD);
        } else {
            M2C_FIELD(arg0, u8 *, 0x54) = 0U;
        }
        goto block_9;
    }
    if (temp_r1_2 == 0x32) {
        sub_080379D4(0xD);
        goto block_9;
    }
    if ((u32) temp_r1_2 <= 0x2FU) {
        if ((u32) temp_r1_2 > 0x1FU) {
            M2C_FIELD(arg0, u8 *, 0x61) = 0x10U;
            sub_0803828C(arg0, arg0 + 4, M2C_FIELD(arg0, u16 *, 0x38), 0x10U);
            goto block_9;
        }
        M2C_FIELD(arg0, u8 *, 0x61) = 0U;
        sub_0803828C(arg0, arg0 + 4, M2C_FIELD(arg0, u16 *, 0x38), M2C_FIELD(arg0, u8 *, 0x61));
        sub_0803A8EC(arg0);
        return;
    }
block_9:
    sub_0803A8EC(arg0);
}
