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
M2C_UNK sub_0805B15C();                             /* extern */
M2C_UNK sub_08063DE0(s32, u8);                      /* extern */
M2C_UNK sub_08063F0C();                             /* extern */
M2C_UNK sub_08068850();                             /* extern */
M2C_UNK sub_08068938(s32, s32);                     /* extern */
M2C_UNK sub_0806B028(s32, s32);                     /* extern */

void sub_08064008(void) {
    s16 *var_r0;
    s16 *var_r2;
    s16 *var_r4;
    s32 temp_r4;
    s32 var_r1;
    s32 var_r1_2;

    *(s16 *)0x03001648 = 0;
    sub_08059978();
    sub_0805B15C();
    sub_08068850();
    sub_08068938(0, 0x13);
    *(s16 *)0x0201B100 = 0x3159;
    *(s16 *)0x0201B2C0 = 0x3159;
    var_r2 = (s16 *)0x0201B2C2;
    var_r0 = (s16 *)0x0201B102;
    var_r1 = 0x1B;
    do {
        *var_r0 = 0x315A;
        *var_r2 = 0x315A;
        var_r2 += 2;
        var_r0 += 2;
        var_r1 -= 1;
    } while (var_r1 >= 0);
    *(s16 *)0x0201B13A = 0x315B;
    *(s16 *)0x0201B2FA = 0x315B;
    *(s16 *)0x0201B124 = 0x3157;
    *(s16 *)0x0201B2E4 = 0x315D;
    var_r4 = (s16 *)0x0201B164;
    var_r1_2 = 5;
    do {
        *var_r4 = 0x3144;
        var_r4 += 0x40;
        var_r1_2 -= 1;
    } while (var_r1_2 >= 0);
    *(s8 *)0x0300457C = 1;
    temp_r4 = (*(u8 *)0x030046E4 * 0x124) + 0x03002AB0;
    sub_0806B028(temp_r4, 0x844);
    *(s8 *)0x0300457C = 3;
    sub_0806B028(temp_r4, 0xB42);
    sub_08063DE0(temp_r4, *(u8 *)0x030046D1);
    sub_08063F0C();
    *(s8 *)0x0300460A = 0;
}
