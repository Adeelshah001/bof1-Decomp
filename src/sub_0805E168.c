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

s32 sub_0805E168(u16 arg0) {
    u16 temp_r1;
    u32 var_r0;

    temp_r1 = arg0;
    if (*(u8 *)0x0300169C == 0) {
        if (0xFF00 & temp_r1) {
            var_r0 = (u32) (0 - (u8) (0x40 & M2C_FIELD(sub_0805C574(temp_r1), u8 *, 8))) >> 0x1F;
        } else {
            var_r0 = 1;
        }
        if (var_r0 != 0) {
            return 1;
        }
        goto block_6;
    }
block_6:
    return 0;
}
