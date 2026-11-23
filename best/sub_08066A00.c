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

M2C_UNK sub_080386AC();                             /* extern */
M2C_UNK sub_08043770(u16);                          /* extern */
M2C_UNK sub_08068984(s32, s32, s32, s32, M2C_UNK *); /* extern */
M2C_UNK sub_08073500();                             /* extern */
extern M2C_UNK sub_0814BE46;
extern M2C_UNK sub_0814BE5E;

s32 sub_08066A00(void) {
    u8 *temp_r5;

    temp_r5 = (M2C_FIELD((void *)0x030016E0, u8 *, 1) * 0xC) + ((void *)0x030016E0 + 0xB);
    *(u16 *)0x03001670 = *(u16 *)0x03000EFC;
    if (0xF0 & *(u8 *)0x0202DE88) {
        sub_08073500();
    }
    sub_080386AC();
    sub_08043770(*(u16 *)0x03002484);
    *(u16 *)0x03001670 = 0x1F00;
    if (!(*(u8 *)0x03004E30 & (0x10 << *(u8 *)0x0300459C))) {
        sub_08068984(0, 2, 1, 0, &sub_0814BE46);
        sub_08068984(0, 2, 3, 0, &sub_0814BE5E);
    } else {
        sub_08068984(0, 2, 1, 0, (M2C_UNK *)0x0814BE98);
    }
    *temp_r5 += 1;
    return 1;
}
