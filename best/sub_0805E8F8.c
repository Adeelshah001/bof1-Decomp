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

M2C_UNK sub_08059978();                             /* extern */
M2C_UNK sub_0805A9FC();                             /* extern */
M2C_UNK sub_0805B308(s32);                          /* extern */
M2C_UNK sub_0805B358(s32, s32, s32, s32, s32);      /* extern */
M2C_UNK sub_0805B404(s32);                          /* extern */
M2C_UNK sub_0805B428(s32, s32, s32, s32);           /* extern */
M2C_UNK sub_0805C878(s32, s32, s32, s32);           /* extern */
s32 sub_0805CBBC(u16);                              /* extern */
M2C_UNK sub_0805D8CC(s32, s32, s32, s32, s32);      /* extern */
M2C_UNK sub_080674B8(s32);                          /* extern */
M2C_UNK sub_08068938(s32, s32);                     /* extern */

s32 sub_0805E8F8(void) {
    u32 var_r5;

    *(u8 *)0x0300460A |= 0x40;
    sub_0805B428(0x10, 0x68, 0xE0, 0xA0);
    sub_08068938(4, 7);
    sub_080674B8(4);
    sub_0805D8CC(4, 4, 1, 0, (s32) *(u16 *)0x030046D8);
    sub_0805C878(sub_0805CBBC(*(u16 *)0x030046D8), 1, 0xF, 8);
    sub_08059978();
    var_r5 = 0xF423F;
    if (*(u8 *)0x0300169C != 0) {
        var_r5 = 0x98967F;
    }
    if ((u32) (M2C_FIELD((void *)0x0202DBD0, s32 *, 0x20) + sub_0805CBBC(*(u16 *)0x030046D8)) > var_r5) {
        sub_0805B308(0x08100BBE);
    } else {
        sub_0805B308(0x08100B8C);
    }
    sub_0805A9FC();
    sub_0805B404(1);
    sub_0805B358(0x081007A4, 0, 1, 0, 2);
    M2C_FIELD((void *)0x03004620, s8 *, 4) = 2;
    return 0;
}
