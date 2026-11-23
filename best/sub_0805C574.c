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

s32 sub_0805C574(u16 arg0) {
    s32 temp_r1;
    s32 var_r0;
    s32 var_r1;
    u16 temp_r2;

    temp_r2 = arg0;
    if (*(u8 *)0x0300169C != 0) {
        return 0;
    }
    temp_r1 = 0xF000 & temp_r2;
    if (temp_r1 == 0x2000) {
        var_r0 = (0xFF & temp_r2) * 0x10;
        var_r1 = 0x0821F67C;
    } else if (temp_r1 != 0x1000) {
        var_r0 = (0xFF & temp_r2) * 0xE;
        var_r1 = 0x0822007C;
    } else {
        var_r0 = (u8) temp_r2 * 0x10;
        var_r1 = 0x08220AFC;
    }
    return var_r0 + var_r1;
}
