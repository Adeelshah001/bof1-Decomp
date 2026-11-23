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

s32 sub_0803FF7C();                                 /* extern */
M2C_UNK sub_08040A08(void *, void *);               /* extern */

void sub_080400F4(void *arg0, void *arg1) {
    s16 temp_r2_2;
    u16 temp_r0;
    u16 temp_r1;
    u16 temp_r1_3;
    u16 temp_r2;
    u32 temp_r1_2;
    u8 temp_r1_4;

    if ((sub_0803FF7C() << 0x18) == 0) {
        temp_r1 = M2C_FIELD(arg1, u16 *, 0) - M2C_FIELD(arg0, u16 *, 2);
        if (temp_r1 & 0x8000) {
            temp_r1_2 = (u32) ((~temp_r1 << 0x10) + 0x10000) >> 0x13;
            temp_r2 = temp_r1_2 * 2;
            temp_r1_3 = temp_r2 - M2C_FIELD(arg1, u8 *, 0x22);
            if ((temp_r1_3 != 0) && (temp_r1_3 & 0x8000)) {
                M2C_FIELD(arg1, s16 *, 0x18) = (s16) (~temp_r1_3 + 1);
                M2C_FIELD(arg1, u16 *, 0x16) = (u16) (((u32) (temp_r1_2 << 0x11) >> 0x11) + M2C_FIELD(arg1, u16 *, 0x16));
                M2C_FIELD(arg1, u16 *, 0x14) = (u16) (temp_r2 + M2C_FIELD(arg1, u16 *, 0x14));
                sub_08040A08(arg1, arg0);
            }
        } else {
            temp_r0 = temp_r1 + 0xFFFFFEFC;
            if (temp_r0 & 0x8000) {
                temp_r2_2 = ((u32) ((~temp_r0 + 1) << 0x10) >> 0x13) * 2;
                if (temp_r2_2 != 0) {
                    temp_r1_4 = M2C_FIELD(arg1, u8 *, 0x22);
                    if ((temp_r2_2 - temp_r1_4) & 0x8000) {
                        M2C_FIELD(arg1, s16 *, 0x18) = temp_r2_2;
                    } else {
                        M2C_FIELD(arg1, s16 *, 0x18) = (s16) temp_r1_4;
                    }
                    sub_08040A08(arg1, arg0);
                }
            }
        }
    }
}
