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

s32 sub_08043C30(u8);                               /* extern */
M2C_UNK sub_0805B358(s32, s32, s32, s32, s32);      /* extern */
M2C_UNK sub_08068938(s32, s32);                     /* extern */
M2C_UNK sub_08068984(s32, s32, s32, s32, M2C_UNK *); /* extern */
M2C_UNK sub_0809D860(M2C_UNK *, M2C_UNK *);         /* extern */
M2C_UNK sub_0809D874(M2C_UNK *, s32);               /* extern */
extern M2C_UNK sub_080FBC9A;

s32 sub_0804224C(void) {
    M2C_UNK sp4;

    sub_08068938(2, 0x23);
    sub_08068984(2, 2, 1, 0, (M2C_UNK *)0x080FBB74);
    sub_0809D860(&sp4, &sub_080FBC9A);
    M2C_FIELD(&sp4, s8 *, 3) = (s8) (*(u8 *)0x0300459C + 0x21);
    M2C_FIELD(&sp4, s8 *, 4) = 0x64;
    M2C_FIELD(&sp4, s8 *, 5) = 0;
    sub_0809D874(&sp4, sub_08043C30(*(u8 *)0x0300459C) + 2);
    sub_0809D874(&sp4, 0x080FBB8A);
    sub_08068984(2, 2, 3, 0, &sp4);
    sub_08068984(2, 0x11, 3, 0, (M2C_UNK *)0x080FBB94);
    sub_08068984(2, 0x16, 3, 0, (M2C_UNK *)0x080FBB98);
    sub_0805B358(0x0814C4F8, 1, 1, 0, 2);
    M2C_FIELD((void *)0x03004410, s8 *, 0xE) = 6;
    return 0;
}
