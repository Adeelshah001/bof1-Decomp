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

M2C_UNK sub_08030AD8(s32);                          /* extern */

void sub_0801703C(void) {
    void *temp_r3;

    sub_08030AD8(0x54);
    M2C_FIELD((void *)0x030036A0, s16 *, 2) = 0xD08;
    temp_r3 = (void *)0x030036A0 + 0x80;
    M2C_FIELD(temp_r3, s16 *, 2) = 0xD18;
    M2C_FIELD((void *)0x03003820, s16 *, 2) = 0xD18;
    M2C_FIELD((void *)0x030037A0, s16 *, 2) = 0xD28;
    M2C_FIELD((void *)0x030038A0, s16 *, 2) = 0xD28;
    M2C_FIELD((void *)0x030036A0, s16 *, 6) = 0xB1CC;
    M2C_FIELD(temp_r3, s16 *, 6) = 0xB1BC;
    M2C_FIELD((void *)0x030037A0, s16 *, 6) = 0xB1BC;
    M2C_FIELD((void *)0x03003820, s16 *, 6) = 0xB1DC;
    M2C_FIELD((void *)0x030038A0, s16 *, 6) = 0xB1DC;
    *(u8 *)0x0300485D += 1;
    *(u8 *)0x0300485B += 1;
}
