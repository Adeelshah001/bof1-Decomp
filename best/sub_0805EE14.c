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
M2C_UNK sub_0805B358(s32, s32, s32, s32, s32);      /* extern */
M2C_UNK sub_0805B404(s32);                          /* extern */
M2C_UNK sub_0805D754(s32, s32, s32);                /* extern */
s32 sub_0805D8F4();                                 /* extern */
M2C_UNK sub_0805E2E8();                             /* extern */
M2C_UNK sub_08061688(u16);                          /* extern */
M2C_UNK sub_080675B8(s32);                          /* extern */
M2C_UNK sub_08068938(s32, s32);                     /* extern */

s32 sub_0805EE14(void) {
    sub_080675B8(1);
    sub_080675B8(2);
    sub_080675B8(3);
    sub_0805B15C();
    sub_0805B404(0);
    sub_0805B358(0x08100744, 0, 0xB, 0, 1);
    sub_08068938(1, 5);
    sub_08068938(3, 6);
    sub_0805D754(1, 2, 1);
    *(s8 *)0x030046D4 = 0;
    *(s8 *)0x030046D2 = 0;
    *(s8 *)0x030046D5 = sub_0805D8F4() - 0xC;
    *(s8 *)0x030046D0 = 6;
    sub_0805E2E8();
    sub_08061688(*(u16 *)0x0202DDD4);
    M2C_FIELD((void *)0x03004620, s8 *, 3) = 2;
    return 0;
}
