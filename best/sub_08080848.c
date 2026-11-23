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

s32 sub_080A07AC(s32, u16);                         /* extern */

void sub_08080848(void *arg0) {
    s32 temp_r0;
    s32 var_r0;
    s32 var_r2;
    s32 var_r4;
    u32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u32 *, 0x54);
    if ((temp_r1 >= 0x03003420U) && (temp_r1 < 0x03003F88U)) {
        var_r4 = 0x30;
        if (*(u8 *)0x03004F50 != 0) {
            var_r4 = 0x40;
        }
        if ((M2C_FIELD(temp_r1, u16 *, 0xF4) == 0) || (var_r2 = sub_080A07AC(M2C_FIELD(temp_r1, u16 *, 0xF6) * var_r4, M2C_FIELD(temp_r1, u16 *, 0xF4)), (var_r2 > var_r4))) {
            var_r2 = var_r4;
        }
    } else if (M2C_FIELD(temp_r1, u16 *, 0xF4) != 0) {
        var_r2 = sub_080A07AC(M2C_FIELD(temp_r1, u16 *, 0xF6) << 5, M2C_FIELD(temp_r1, u16 *, 0xF4));
    } else {
        var_r2 = 0x20;
    }
    var_r0 = var_r2;
    if (var_r2 < 0) {
        var_r0 = var_r2 + 7;
    }
    temp_r0 = var_r0 >> 3;
    M2C_FIELD(arg0, s8 *, 0x39) = (s8) temp_r0;
    M2C_FIELD((arg0 + 0x39), s8 *, 1) = (s8) (var_r2 - (temp_r0 * 8));
}
