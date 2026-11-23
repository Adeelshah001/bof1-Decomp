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

s32 sub_0805600C(s32);                              /* extern */
M2C_UNK sub_08056B9C();                             /* extern */

s32 sub_080560C0(s32 arg0) {
    s32 temp_r1;
    s32 var_r4_2;
    s32 var_r5;
    u32 var_r1;
    u8 var_r3;
    u8 var_r4;
    void *temp_r0;
    void *temp_r2;

    var_r4 = 0;
    var_r3 = 0;
    do {
        temp_r2 = (var_r3 * 0x124) + 0x03002AB0;
        var_r1 = 0;
        if (M2C_FIELD(temp_r2, u8 *, 0x3A) != 0) {
            temp_r1 = M2C_FIELD(temp_r2, u16 *, 0xF6) ^ M2C_FIELD(temp_r2, u16 *, 0xF4);
            var_r1 = (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
        }
        if (var_r1 != 0) {
            var_r4 += 1;
        }
        var_r3 += 1;
    } while ((u32) var_r3 <= 7U);
    if (var_r4 != 0) {
        var_r5 = 0;
        var_r4_2 = 7;
        do {
            temp_r0 = var_r5 + 0x03002AB0;
            M2C_FIELD(temp_r0, u16 *, 0xF6) = (u16) M2C_FIELD(temp_r0, u16 *, 0xF4);
            sub_08056B9C();
            var_r5 += 0x124;
            var_r4_2 -= 1;
        } while (var_r4_2 >= 0);
        return sub_0805600C(arg0);
    }
    return 0x8000000D;
}
