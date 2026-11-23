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
M2C_UNK sub_08068850();                             /* extern */
M2C_UNK sub_08068938(s32, s32);                     /* extern */
M2C_UNK sub_08068984(s32, s32, s32, s32, M2C_UNK *); /* extern */
extern M2C_UNK sub_0814BE18;

s32 sub_08068A40(void) {
    u8 *temp_r4;

    temp_r4 = (M2C_FIELD((void *)0x030016E0, u8 *, 1) * 0xC) + ((void *)0x030016E0 + 0xB);
    sub_0805B15C();
    sub_08068850();
    sub_08068938(0, 0x24);
    sub_08068984(0, 2, 1, 0, (M2C_UNK *)0x0814BE04);
    sub_08068984(0, 2, 3, 0, &sub_0814BE18);
    sub_08068984(0, 8, 7, 0, (M2C_UNK *)0x0814BE6A);
    sub_08068984(0, 0x13, 7, 0, (M2C_UNK *)0x0814BE6E);
    sub_0805B358(0x0814C4E8, 1, 1, 0, 2);
    *temp_r4 += 1;
    return 1;
}
