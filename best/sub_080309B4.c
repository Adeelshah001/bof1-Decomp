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

void sub_080309B4(void) {
    M2C_UNK sp0;
    s32 var_r4;
    s8 *var_r0;
    s8 var_r1;
    u8 var_r3;
    u8 var_r3_2;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r2;

    var_r4 = 0;
    if ((*(u16 *)0x03002484 == 0) && !(2 & *(u8 *)0x0202DE88)) {
        var_r3 = 0;
        do {
            temp_r2 = (var_r3 * 0x124) + 0x03002AB0;
            if ((2 & M2C_FIELD(temp_r2, u8 *, 0xBA)) && (M2C_FIELD(temp_r2, u8 *, 0x3A) != 0)) {
                *(&sp0 + var_r3) = 1;
                var_r4 = 1;
            } else {
                *(&sp0 + var_r3) = 0;
            }
            var_r3 += 1;
        } while ((u32) var_r3 <= 3U);
        if (var_r4 != 0) {
            var_r3_2 = 0;
            do {
                if (*(&sp0 + var_r3_2) == 0) {
                    temp_r0 = (var_r3_2 * 0x124) + 0x03002AB0;
                    var_r0 = temp_r0 + 0x41;
                    var_r1 = 0xB0 | M2C_FIELD(temp_r0, u8 *, 0x41);
                } else {
                    temp_r0_2 = (var_r3_2 * 0x124) + 0x03002AB0;
                    var_r0 = temp_r0_2 + 0x41;
                    var_r1 = 0x7F & M2C_FIELD(temp_r0_2, u8 *, 0x41);
                }
                *var_r0 = var_r1;
                var_r3_2 += 1;
            } while ((u32) var_r3_2 <= 3U);
        }
    }
}
