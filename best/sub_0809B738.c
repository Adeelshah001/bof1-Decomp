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

M2C_UNK sub_0805B15C();                             /* extern */
M2C_UNK sub_0805B404(s32);                          /* extern */
M2C_UNK sub_08068850();                             /* extern */
M2C_UNK sub_08068938(s32, s32);                     /* extern */
M2C_UNK sub_08068984(s32, s32, s32, s32, s32);      /* extern */
M2C_UNK sub_0809DBB0();                             /* extern */

void sub_0809B738(void) {
    s16 *var_r0;
    s16 *var_r0_2;
    s32 var_r1;
    s32 var_r2;
    s32 var_r3;

    sub_0805B404(0);
    sub_0805B15C();
    sub_08068850();
    sub_08068938(0, 0x1E);
    sub_08068984(0, 2, 1, 0, 0x0815306F);
    sub_08068938(1, 0x25);
    sub_08068984(1, 2, 1, 0, 0x08153144);
    sub_0809DBB0();
    var_r3 = 0;
    var_r2 = 0x03005050;
    do {
        var_r1 = 7;
        var_r0 = var_r2 + 0xE;
loop_2:
        *var_r0 = 0;
        var_r0 -= 2;
        var_r1 -= 1;
        if (var_r1 >= 0) {
            goto loop_2;
        }
        var_r2 += 0x10;
        var_r3 += 1;
    } while (var_r3 <= 1);
    var_r0_2 = (s16 *)0x0300508E;
    do {
        *var_r0_2 = 0;
        var_r0_2 -= 2;
    } while ((s32) var_r0_2 >= 0x03005080);
    *(s32 *)0x03005040 = 0;
    *(s32 *)0x03005070 = 0;
    *(s16 *)0x03005010 = 0;
    M2C_FIELD((void *)0x03004410, s8 *, 0xE) = 2;
}
