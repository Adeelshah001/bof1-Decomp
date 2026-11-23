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
M2C_UNK sub_0805B568(s32, s32, s32, s32, s32);      /* extern */
M2C_UNK sub_08067D74(s32);                          /* extern */
M2C_UNK sub_08068850();                             /* extern */
M2C_UNK sub_08068938(s32, s32);                     /* extern */
M2C_UNK sub_08068984(s32, s32, s32, s32, M2C_UNK *); /* extern */
extern M2C_UNK sub_0814BD62;

void sub_080621C0(void) {
    *(s16 *)0x03001648 = 0;
    sub_0805B15C();
    sub_08068850();
    sub_08068938(0, 0);
    sub_08068938(1, 0x10);
    sub_08068938(2, 0xF);
    sub_08068938(3, 0x11);
    sub_08068984(1, 1, 1, 0, &sub_0814BD62);
    sub_08068984(3, 1, 1, 0, (M2C_UNK *)0x0814BD06);
    sub_08068984(3, 1, 3, 0, (M2C_UNK *)0x0814BD0A);
    sub_08068984(3, 1, 5, 0, (M2C_UNK *)0x0814BD0F);
    sub_08068984(3, 1, 7, 0, (M2C_UNK *)0x0814BD14);
    sub_0805B358(0x0814C360, 0, 4, 0, 0);
    *(s8 *)0x0300460A = 0;
    *(s8 *)0x030046D0 = 0;
    sub_08067D74(2);
    sub_0805B568(0x8008, 0x4078, 1, 0, 0x1CC);
    M2C_FIELD((void *)0x03004620, s8 *, 6) = 0xFF;
}
