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

M2C_UNK sub_08010340(s16);                          /* extern */
M2C_UNK sub_08010384(u8);                           /* extern */
s32 sub_0805CD90(u16);                              /* extern */

s8 sub_080102FC(u16 arg0) {
    u8 sp0;

    sp0 = 0;
    *(u16 *)0x03004120 = arg0;
    if ((sub_0805CD90(*(u16 *)0x03004120) << 0x18) != 0) {
        sub_08010340((s16) *(u16 *)0x03004120);
    } else {
        sub_08010384(sp0);
    }
    return (s8) *(u8 *)0x03004114;
}
