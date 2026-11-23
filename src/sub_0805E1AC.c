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

s32 sub_0805E1AC(u16 arg0) {
    if ((*(u8 *)0x0300169C == 0) && (0x80 & M2C_FIELD(sub_0805C574(arg0), u8 *, 8))) {
        return 1;
    }
    return 0;
}
