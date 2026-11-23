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

M2C_UNK sub_08068984(s32, M2C_UNK, M2C_UNK, s32);   /* extern */
u32 sub_080A0914(u32, s32);                         /* extern */
s32 sub_080A098C(u32, s32);                         /* extern */

void sub_0805C878(u32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    M2C_UNK *sp0;
    M2C_UNK sp4;
    M2C_UNK sp5;
    s8 spC;
    s32 var_r5;
    s32 var_r7;
    s8 *var_r0;
    u32 var_r6;

    var_r6 = arg0;
    if (0x8000 & arg1) {
        var_r7 = 0x7FFF & arg1;
    } else if (arg1 == 1) {
        var_r7 = 0;
    } else {
        var_r7 = 0;
        if ((u32) M2C_FIELD((void *)0x0202DBD0, u32 *, 0x20) < var_r6) {
            var_r7 = 1;
        }
    }
    var_r0 = &sp0 + 0xB;
    do {
        *var_r0 = 2;
        var_r0 -= 1;
    } while ((s32) var_r0 >= (s32) &sp4);
    spC = 0x30;
    M2C_FIELD(&sp0, s8 *, 0xD) = 0;
    if (var_r6 != 0) {
        var_r5 = 7;
loop_10:
        if (var_r6 != 0) {
            M2C_FIELD((&sp0 + var_r5), s8 *, 4) = (s8) (sub_080A098C(var_r6, 0xA) + 0x20);
            var_r6 = sub_080A0914(var_r6, 0xA);
            var_r5 -= 1;
            if (var_r5 >= 0) {
                goto loop_10;
            }
        }
    } else {
        M2C_FIELD(&sp4, s8 *, 7) = 0x20;
    }
    sp0 = &sp5;
    sub_08068984(3, arg2, arg3, var_r7);
}
