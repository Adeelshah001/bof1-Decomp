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

M2C_UNK sub_0803A8EC(void *);                       /* extern */
extern M2C_UNK sub_08054460;

void sub_08054A1C(void *arg0) {
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r1;
    u8 temp_r1_2;

    if (M2C_FIELD(arg0, u8 *, 0x54) == 0) {
        temp_r1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x60), u8 *, 0);
        if (0x80 & temp_r1) {
            M2C_FIELD(arg0, M2C_UNK **, 0x78) = &sub_08054460;
            return;
        }
        M2C_FIELD(arg0, u8 *, 0x54) = temp_r1;
        M2C_FIELD(arg0, u8 *, 0x55) = (u8) M2C_FIELD(M2C_FIELD(arg0, void **, 0x60), u8 *, 1);
        goto block_4;
    }
block_4:
    temp_r1_2 = M2C_FIELD(arg0, u8 *, 0x55);
    if (!(0xF0 & temp_r1_2)) {
        temp_r0 = temp_r1_2 - 1;
        M2C_FIELD(arg0, u8 *, 0x55) = temp_r0;
        if (temp_r0 & 0xF) {
            sub_0803A8EC(arg0);
            return;
        }
        temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
        M2C_FIELD(arg0, u8 *, 0x54) = temp_r0_2;
        if ((temp_r0_2 << 0x18) == 0) {
            if (M2C_FIELD(arg0, u8 *, 0x73) != 0) {
                M2C_FIELD(arg0, void **, 0x60) = (void *) (M2C_FIELD(arg0, void **, 0x60) - 2);
                return;
            }
            M2C_FIELD(arg0, void **, 0x60) = (void *) (M2C_FIELD(arg0, void **, 0x60) + 2);
            return;
        }
        M2C_FIELD(arg0, u8 *, 0x55) = (u8) M2C_FIELD(M2C_FIELD(arg0, void **, 0x60), u8 *, 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x55) = (u8) (temp_r1_2 - 0x10);
    sub_0803A8EC(arg0);
}
