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

M2C_UNK sub_0803933C(s32);                          /* extern */

void sub_08039054(void) {
    s32 temp_r4;
    u8 var_r5;

    var_r5 = 0;
    do {
        temp_r4 = (var_r5 * 0x124) + 0x03002AB0;
        sub_0803933C(temp_r4);
        sub_08033B18(temp_r4);
        var_r5 += 1;
    } while ((u32) var_r5 <= 7U);
}
