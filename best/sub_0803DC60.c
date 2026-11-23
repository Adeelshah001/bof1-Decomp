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

s32 sub_0803DC60(void *arg0, u8 arg1) {
    s32 var_r5;
    u16 temp_r1_2;
    u8 temp_r1;
    u8 temp_r2;
    void *temp_r1_3;
    void *temp_r2_2;

    temp_r1 = arg1;
    var_r5 = 0;
    M2C_FIELD(arg0, u8 *, 0x62) = (u8) M2C_FIELD(arg0, u8 *, 0x61);
    temp_r2 = *(u8 *)0x03002B68;
    if (!(0x10 & temp_r2)) {
        if (!(0x60 & temp_r2)) {
            temp_r2_2 = (temp_r1 * 0x124) + 0x03002AB0;
            temp_r1_2 = M2C_FIELD(temp_r2_2, u16 *, 0x82);
            if ((temp_r1_2 != M2C_FIELD(temp_r2_2, u16 *, 2)) || (M2C_FIELD(temp_r2_2, u16 *, 0x86) != M2C_FIELD(temp_r2_2, u16 *, 6))) {
                M2C_FIELD(arg0, u16 *, 0xA) = temp_r1_2;
                M2C_FIELD(arg0, u16 *, 0x46) = (u16) M2C_FIELD(temp_r2_2, u16 *, 0x82);
                M2C_FIELD(arg0, u16 *, 0xE) = (u16) M2C_FIELD(temp_r2_2, u16 *, 0x86);
                M2C_FIELD(arg0, u16 *, 0x4A) = (u16) M2C_FIELD(temp_r2_2, u16 *, 0x86);
                M2C_FIELD(arg0, s16 *, 8) = 0;
                M2C_FIELD(arg0, s16 *, 0xC) = 0;
                goto block_8;
            }
        } else {
            temp_r1_3 = (temp_r1 * 0x124) + 0x03002AB0;
            if ((M2C_FIELD(temp_r1_3, u16 *, 2) != M2C_FIELD(arg0, u16 *, 2)) || (M2C_FIELD(temp_r1_3, u16 *, 6) != M2C_FIELD(arg0, u16 *, 6))) {
                M2C_FIELD(arg0, u16 *, 0xA) = (u16) M2C_FIELD(temp_r1_3, u16 *, 0x82);
                M2C_FIELD(arg0, u16 *, 0x46) = (u16) M2C_FIELD(temp_r1_3, u16 *, 0x82);
                M2C_FIELD(arg0, u16 *, 0xE) = (u16) M2C_FIELD(temp_r1_3, u16 *, 0x86);
                M2C_FIELD((arg0 + 0x46), u16 *, 4) = (u16) M2C_FIELD(temp_r1_3, u16 *, 0x86);
block_8:
                M2C_FIELD(arg0, u16 *, 0x82) = (u16) M2C_FIELD(arg0, u16 *, 2);
                M2C_FIELD(arg0, u16 *, 0x86) = (u16) M2C_FIELD(arg0, u16 *, 6);
                var_r5 = 1;
            } else if (0x20 & temp_r2) {
                M2C_FIELD(arg0, u8 *, 0xBA) = (u8) (M2C_FIELD(arg0, u8 *, 0xBA) | 4);
            }
        }
    }
    return var_r5;
}
