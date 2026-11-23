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
M2C_UNK sub_0805B358(s32, s32, s32, s32, s32);      /* extern */
s32 sub_0805C574(u16);                              /* extern */
s32 sub_0805D8F4();                                 /* extern */
M2C_UNK sub_0805D9C8(u16);                          /* extern */
M2C_UNK sub_080674B8(s32);                          /* extern */
M2C_UNK sub_08068850();                             /* extern */
M2C_UNK sub_08068938(s32, s32);                     /* extern */
M2C_UNK sub_08068984(s32, s32, s32, s32, s32);      /* extern */
M2C_UNK sub_0809BEAC(u16 *);                        /* extern */

void sub_0809BF40(u16 *arg0) {
    s8 var_r0;
    u16 temp_r4;

    sub_0805B15C();
    sub_08068850();
    sub_08068938(0, 0);
    sub_08068938(1, 0x26);
    sub_08068984(1, 1, 1, 0, 0x081530CD);
    sub_0805B358(0x08100744, 0, 0xB, 0, 2);
    sub_08068938(2, 6);
    *(s8 *)0x030046D4 = 0;
    *(s8 *)0x030046D2 = 0;
    if (arg0 == (u16 *)0x0202DDD4) {
        var_r0 = sub_0805D8F4() - 0xC;
    } else {
        var_r0 = 0x72;
    }
    *(s8 *)0x030046D5 = var_r0;
    *(s8 *)0x030046D0 = 6;
    sub_0809BEAC(arg0);
    temp_r4 = *arg0;
    sub_080674B8(0);
    if (0xF00 & temp_r4) {
        M2C_FIELD((void *)0x03004760, s32 *, 0xC) = sub_0805C574(temp_r4);
        sub_0805D9C8(temp_r4);
    } else {
        sub_08059978();
    }
    M2C_FIELD((void *)0x03004410, u8 *, 0xF) = (u8) (M2C_FIELD((void *)0x03004410, u8 *, 0xF) + 1);
}
