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

M2C_UNK sub_08098610(u32);                          /* extern */

void sub_080973D4(void) {
    s16 *var_r1;
    u16 var_r1_2;
    u32 temp_r2;
    u32 var_r0;
    u8 temp_r1;
    u8 temp_r1_2;

    temp_r2 = M2C_FIELD((void *)0x03004F50, u32 *, 0x4C);
    if ((temp_r2 < 0x03003420U) || (temp_r2 >= 0x03003F88U)) {
        if (M2C_FIELD(temp_r2, u8 *, 0xF0) & 8) {
            temp_r1 = M2C_FIELD(temp_r2, u8 *, 0xDD);
            if (0x10 & temp_r1) {
                temp_r1_2 = M2C_FIELD((void *)0x03004F50, u8 *, 0x4A) - 1;
                if ((temp_r1_2 == 0) || (temp_r1_2 & 0x80)) {
                    M2C_FIELD(temp_r2, u8 *, 0xDD) = (u8) (0xEF & temp_r1);
                }
                var_r1 = (void *)0x03004F50 + 0x40;
                var_r0 = M2C_FIELD((void *)0x03004F50, u16 *, 0x40) * 2;
                goto block_11;
            }
        } else if (!(M2C_FIELD(temp_r2, u8 *, 0xDC) & 4) && (M2C_FIELD(temp_r2, u8 *, 0xDF) & 0x80)) {
            var_r1 = (void *)0x03004F50 + 0x40;
            var_r0 = (u16) M2C_FIELD((void *)0x03004F50, u16 *, 0x40) >> 2;
block_11:
            *var_r1 = (s16) var_r0;
        }
    }
    var_r1_2 = M2C_FIELD((void *)0x03004F50, u16 *, 0x40);
    if (var_r1_2 == 0) {
        var_r1_2 = 1;
    }
    if ((u32) var_r1_2 > 0x3E6U) {
        var_r1_2 = 0x3E7;
    }
    sub_08098610((u32) var_r1_2);
}
