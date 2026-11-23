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

M2C_UNK sub_08000C68(s32, s32);                     /* extern */
M2C_UNK sub_0805D684(s32, u16 *);                   /* extern */
M2C_UNK sub_0806B028(s32, u16);                     /* extern */
M2C_UNK sub_080A0A68(u16 *, s32, s32);              /* extern */

void sub_08066EC8(void) {
    u16 sp0;
    u16 sp10;
    s32 var_r5;
    s32 var_r6;
    u16 *var_r4;

    sub_080A0A68(&sp0, 0x080A67E4, 0x10);
    sub_080A0A68(&sp10, 0x080A6802, 0xB);
    *(s8 *)0x0300457C = 0;
    if (*(u8 *)0x0300169C == 0) {
        var_r4 = &sp0;
        var_r6 = 0;
        var_r5 = 7;
        do {
            sub_0806B028(var_r6 + 0x03002AB0, *var_r4);
            var_r4 += 2;
            var_r6 += 0x124;
            var_r5 -= 1;
        } while (var_r5 >= 0);
        if (*(u16 *)0x03001648 == 0) {
            sub_0805D684(0x0200BE80, &sp10);
            sub_0805D684(0x020213C0, &sp10);
            sub_08000C68(0x04000016, 2);
        }
    }
}
