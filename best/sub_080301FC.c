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

M2C_UNK sub_08030300(void *);                       /* extern */

void sub_080301FC(void *arg0) {
    M2C_UNK sp0;
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r4_3;
    s32 var_r4_4;
    u16 temp_r1;
    u16 temp_r1_2;
    u16 temp_r1_3;
    u16 temp_r1_4;
    u16 temp_r1_5;
    u16 temp_r1_6;
    u16 temp_r1_7;
    u16 temp_r1_8;

    *(s16 *)0x03004114 = 0;
    temp_r1 = M2C_FIELD(arg0, u16 *, 0xEC);
    var_r4 = 0;
    if (!(0x3000 & temp_r1)) {
        temp_r1_2 = (u8) temp_r1 - 0x4F;
        if (!(0x8000 & temp_r1_2) && ((u32) temp_r1_2 <= 4U)) {
            M2C_FIELD(&sp0, u16 *, 0) = temp_r1_2;
            var_r4 = 1;
        }
    }
    if (var_r4 != 0) {
        temp_r1_3 = M2C_FIELD(arg0, u16 *, 0xEE);
        var_r4_2 = 0;
        if (!(0x3000 & temp_r1_3)) {
            temp_r1_4 = (u8) temp_r1_3 - 0x14;
            if (!(0x8000 & temp_r1_4) && ((u32) temp_r1_4 <= 4U)) {
                var_r4_2 = 1;
                M2C_FIELD(&sp0, s8 *, 2) = (s8) temp_r1_4;
            }
        }
        if (var_r4_2 != 0) {
            sub_08030300(arg0);
        }
    } else {
        temp_r1_5 = M2C_FIELD(arg0, u16 *, 0xEC);
        var_r4_3 = 0;
        if (!(0x3000 & temp_r1_5)) {
            temp_r1_6 = (u8) temp_r1_5 - 0x14;
            if (!(0x8000 & temp_r1_6) && ((u32) temp_r1_6 <= 4U)) {
                var_r4_3 = 1;
                M2C_FIELD(&sp0, s8 *, 2) = (s8) temp_r1_6;
            }
        }
        if (var_r4_3 != 0) {
            temp_r1_7 = M2C_FIELD(arg0, u16 *, 0xEE);
            var_r4_4 = 0;
            if (!(0x3000 & temp_r1_7)) {
                temp_r1_8 = (u8) temp_r1_7 - 0x4F;
                if (!(0x8000 & temp_r1_8) && ((u32) temp_r1_8 <= 4U)) {
                    M2C_FIELD(&sp0, u16 *, 0) = temp_r1_8;
                    var_r4_4 = 1;
                }
            }
            if (var_r4_4 != 0) {
                sub_08030300(arg0);
            }
        }
    }
}
