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

void sub_08044FA8(void *arg0) {
    u8 temp_r0;
    u8 temp_r0_2;

    *(s16 *)0x03004890 = 0xC8;
    M2C_FIELD(arg0, u8 *, 0x54) = (u8) (M2C_FIELD(arg0, u8 *, 0x54) - 1);
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x54);
    switch (temp_r0) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 0x54) = 4U;
        sub_080379D4(9);
        /* fallthrough */
    case 2:
        temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x55) - 1;
        M2C_FIELD(arg0, u8 *, 0x55) = temp_r0_2;
        if ((temp_r0_2 << 0x18) == 0) {
            M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_08045504;
        }
block_10:
        sub_0803A8EC(arg0);
        return;
    case 1:
        M2C_FIELD(arg0, u16 *, 2) = (u16) (M2C_FIELD(arg0, u16 *, 2) + 1);
        sub_0803828C(arg0, arg0 + 4, M2C_FIELD(arg0, u16 *, 0x38), M2C_FIELD(arg0, u8 *, 0x61));
        goto block_10;
    default:
        M2C_FIELD(arg0, u16 *, 2) = (u16) (M2C_FIELD(arg0, u16 *, 2) - 1);
        sub_0803828C(arg0, arg0 + 4, M2C_FIELD(arg0, u16 *, 0x38), M2C_FIELD(arg0, u8 *, 0x61));
        sub_0803A8EC(arg0);
        return;
    }
}
