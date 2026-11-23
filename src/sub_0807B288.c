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

u16 sub_0807B2BC(void *);                           /* extern */

u16 sub_0807B288(void *arg0) {
    if (!(0x40 & M2C_FIELD(arg0, u8 *, 0xDC)) && !(2 & M2C_FIELD(arg0, u8 *, 0xDD))) {
        return sub_0807B2BC(arg0);
    }
    return 0xFFFFU;
}
