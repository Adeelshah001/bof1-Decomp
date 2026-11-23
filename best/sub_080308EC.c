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

void sub_080308EC(void *arg0) {
    u8 temp_r1;
    u8 var_r4;
    void *temp_r2;

    var_r4 = 0;
    do {
        temp_r2 = (var_r4 * 0x124) + 0x03002AB0;
        if (M2C_FIELD(temp_r2, u8 *, 0x3A) != 0) {
            temp_r1 = 0x40 & M2C_FIELD(temp_r2, u8 *, 0xF0);
            if (temp_r1 == 0) {
                if (M2C_FIELD(temp_r2, u8 *, 0x3B) != 0) {
                    M2C_FIELD(temp_r2, u8 *, 0x4D) = temp_r1;
                    M2C_FIELD((temp_r2 + 0x4D), s16 *, 3) = (s16) temp_r1;
                }
                M2C_FIELD(temp_r2, u16 *, 2) = (u16) M2C_FIELD(arg0, u16 *, 2);
                M2C_FIELD(temp_r2, u16 *, 0x82) = (u16) M2C_FIELD(arg0, u16 *, 2);
                M2C_FIELD(temp_r2, u16 *, 6) = (u16) M2C_FIELD(arg0, u16 *, 6);
                M2C_FIELD((temp_r2 + 0x82), u16 *, 4) = (u16) M2C_FIELD(arg0, u16 *, 6);
                M2C_FIELD(temp_r2, u16 *, 0x2C) = (u16) M2C_FIELD(arg0, u16 *, 6);
            }
        }
        var_r4 += 1;
    } while ((u32) var_r4 <= 3U);
}
