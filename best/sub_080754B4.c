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

s32 sub_080754B4(void) {
    u16 temp_r0;
    u16 temp_r2;

    temp_r2 = *(u16 *)0x03002B9C;
    if (temp_r2 != 0x214F) {
        temp_r0 = *(u16 *)0x03002B9E;
        if ((temp_r0 != 0x214F) && (temp_r2 != 0x2167) && (temp_r0 != 0x2167)) {
            return 1;
        }
    }
    return 0;
}
