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

void sub_08034558(void *arg0) {
    u8 temp_r4;
    u8 var_r3;
    void *temp_r0;
    void *temp_r2;

    var_r3 = 0;
    do {
        temp_r2 = (var_r3 * 0x124) + 0x03002AB0;
        temp_r4 = M2C_FIELD(temp_r2, u8 *, 0x3A);
        if ((temp_r4 != 0) && !(0x40 & M2C_FIELD(temp_r2, u8 *, 0xF0))) {
            if ((*(u16 *)0x03002484 != 2) && (M2C_FIELD(temp_r2, u8 *, 0x3B) != 0)) {
                M2C_FIELD(temp_r2, u8 *, 0x3A) = (u8) (0x80 ^ temp_r4);
            }
            temp_r0 = (var_r3 * 0x124) + 0x03002AB0;
            M2C_FIELD(temp_r0, u8 *, 0xBA) = (u8) (M2C_FIELD(temp_r0, u8 *, 0xBA) ^ 8);
        }
        var_r3 += 1;
    } while ((u32) var_r3 <= 3U);
    M2C_FIELD(arg0, s32 *, 0x88) = (s32) (M2C_FIELD(arg0, s32 *, 0x88) + 2);
}
