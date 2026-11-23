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

M2C_UNK sub_080379D4(s32);                          /* extern */
u8 sub_0805B040(s32);                               /* extern */
M2C_UNK sub_0805CA64();                             /* extern */
s32 sub_08068AE8();                                 /* extern */
s32 sub_08068F08();                                 /* extern */
M2C_UNK sub_080A0210(s32, s32, s32);                /* extern */

s32 sub_080611F4(void) {
    u8 var_r5;

    sub_080A0210(0x02019D00, 0x0200D580, 0x40);
    if (*(u8 *)0x030023DC != 1) {
        var_r5 = sub_0805B040(0);
        if ((s32) (0x7F & var_r5) > (s32) (sub_08068F08() - 1)) {
            var_r5 = sub_08068F08() - 1;
        }
        if (1 & M2C_FIELD((void *)0x030016E0, u16 *, 6)) {
            *(u8 *)0x030046E4 = var_r5;
            M2C_FIELD((void *)0x03004620, s8 *, 3) = 4;
            sub_080379D4(2);
        }
        if (!(2 & M2C_FIELD((void *)0x030016E0, u16 *, 6))) {
            goto block_6;
        }
        sub_080379D4(3);
        sub_0805CA64();
        return sub_08068AE8();
    }
block_6:
    return 0;
}
