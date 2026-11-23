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

M2C_UNK sub_08000248(s32);                          /* extern */
M2C_UNK sub_08059978();                             /* extern */
M2C_UNK sub_0805A9FC();                             /* extern */
M2C_UNK sub_0805B2B4(s32, s32);                     /* extern */
M2C_UNK sub_08068B00();                             /* extern */

s32 sub_0806B07C(u8 arg0) {
    s32 var_r4;

    var_r4 = 0;
    if (*(u16 *)0x03002484 != 0) {
        sub_08059978();
        sub_0805B2B4(0x605, 0);
        sub_0805A9FC();
        M2C_FIELD((void *)0x03004620, s8 *, 7) = 0;
        M2C_FIELD((void *)0x03004620, s8 *, 3) = 0x10;
    } else {
        M2C_FIELD(((*(u8 *)0x0202E0BE * 0x124) + 0x03002AB0), s8 *, 0x4C) = 0xE;
        M2C_FIELD(((*(u8 *)0x0202E0BE * 0x124) + 0x03002AB0), s8 *, 0x4D) = 0;
        M2C_FIELD(((*(u8 *)0x0202E0BE * 0x124) + 0x03002AB0), s8 *, 0x50) = 0;
        M2C_FIELD(((*(u8 *)0x0202E0BE * 0x124) + 0x03002AB0), u8 *, 0x51) = arg0;
        sub_08000248(0x1E);
        sub_08068B00();
        var_r4 = 1;
    }
    return var_r4;
}
