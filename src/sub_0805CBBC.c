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

void *sub_0805C574(u16);                            /* extern */

u32 sub_0805CBBC(u16 arg0) {
    u16 temp_r4;
    u32 var_r0;
    void *temp_r1;

    temp_r4 = arg0;
    temp_r1 = sub_0805C574(temp_r4);
    if (*(u8 *)0x0300169C != 0) {
        var_r0 = 0;
    } else {
        var_r0 = (M2C_FIELD(temp_r1, u8 *, 9) | (M2C_FIELD(temp_r1, u8 *, 0xA) << 8)) * ((u32) (0xF00 & temp_r4) >> 8);
    }
    return var_r0 >> 1;
}
