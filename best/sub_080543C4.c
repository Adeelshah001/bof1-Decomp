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

M2C_UNK sub_08037C98(void *, s32);                  /* extern */
M2C_UNK sub_0803A8EC(void *);                       /* extern */
extern M2C_UNK sub_08054460;
extern M2C_UNK sub_08054958;

void sub_080543C4(void *arg0) {
    M2C_UNK *var_r0;
    s32 temp_r1;
    u16 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;

    sub_08037C98(arg0, 0);
    if (2 & M2C_FIELD(arg0, u8 *, 0x6D)) {
        sub_08037C98(arg0, 0);
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x10);
    if (((u32) (temp_r1 << 8) >> 0x10) == 0) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + M2C_FIELD(arg0, s32 *, 0x14));
        temp_r0 = M2C_FIELD(arg0, u16 *, 6);
        M2C_FIELD(arg0, u16 *, 0x2C) = temp_r0;
        if (temp_r0 == M2C_FIELD(arg0, u16 *, 0xE)) {
            temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x72) - 1;
            M2C_FIELD(arg0, u8 *, 0x72) = temp_r0_2;
            if (!(temp_r0_2 & 0xF)) {
                var_r0 = &sub_08054460;
            } else {
                goto block_9;
            }
            goto block_10;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + temp_r1);
        if (M2C_FIELD(arg0, u16 *, 2) == M2C_FIELD(arg0, u16 *, 0xA)) {
            temp_r0_3 = M2C_FIELD(arg0, u8 *, 0x72) - 1;
            M2C_FIELD(arg0, u8 *, 0x72) = temp_r0_3;
            if (!(temp_r0_3 & 0xF)) {
                var_r0 = &sub_08054460;
            } else {
block_9:
                var_r0 = &sub_08054958;
            }
block_10:
            M2C_FIELD(arg0, M2C_UNK **, 0x78) = var_r0;
        }
    }
    M2C_FIELD(arg0, u16 *, 0x2C) = (u16) M2C_FIELD(arg0, u16 *, 6);
    sub_0803A8EC(arg0);
}
