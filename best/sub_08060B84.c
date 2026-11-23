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
M2C_UNK sub_0805B308(s32);                          /* extern */
M2C_UNK sub_0805B358(s32, s32, s32, s32, s32);      /* extern */
M2C_UNK sub_0805D5E4(s32, M2C_UNK *, s32);          /* extern */
M2C_UNK sub_08068938(s32, s32);                     /* extern */
M2C_UNK sub_08068984(s32, s32, s32, s32, M2C_UNK *); /* extern */

s32 sub_08060B84(void) {
    M2C_UNK sp4;

    sub_08068938(2, 0x1F);
    sub_08068938(3, 0x20);
    sub_08068984(2, 2, 1, 0, (M2C_UNK *)0x08100B12);
    sub_08068984(2, 2, 4, 0, (M2C_UNK *)0x08100B21);
    sub_08068984(3, 2, 1, 0, (M2C_UNK *)0x08100B18);
    sub_0805B358(0x08100834, 0, 5, 0, 1);
    sub_08059978();
    sub_0805B308(0x08100C77);
    *(s32 *)0x030046F4 = 0;
    *(s8 *)0x030046D6 = 0;
    M2C_FIELD(&sp4, s8 *, 6) = 0x30;
    M2C_FIELD(&sp4, s8 *, 7) = 0;
    sub_0805D5E4(M2C_FIELD((void *)0x0202DBD0, s32 *, 0x20), &sp4, 6);
    sub_08068984(2, 0x11, 1, 0, &sp4);
    sub_0805D5E4(*(s32 *)0x030046F4, &sp4, 6);
    sub_08068984(2, 0x11, 4, 0, &sp4);
    sub_0805D5E4(M2C_FIELD((void *)0x0202DBD0, s32 *, 0x1C), &sp4, 6);
    sub_08068984(3, 0x11, 1, 0, &sp4);
    M2C_FIELD((void *)0x03004760, s8 *, 0x19) = 2;
    return 0;
}
