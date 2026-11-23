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
M2C_UNK sub_0805B568(u16, s32, s32, s32, s32);      /* extern */
s32 sub_080A0844(s32, s32);                         /* extern */

void sub_0809CEFC(void) {
    u16 temp_r0;
    u16 temp_r4;
    u16 temp_r5;

    temp_r5 = *(u16 *)0x03005000;
    temp_r0 = temp_r5 + 1;
    *(u16 *)0x03005000 = temp_r0;
    temp_r4 = (sub_080A0844(((u32) (temp_r0 << 0x10) >> 0x13) + 1, 3) * 2) | 0x6000;
    sub_0805B15C();
    sub_0805B568((u16) (((temp_r5 - 0xF) & 0x1FF) | 0xFFFF9000), 0x8048, 0, 0, (s32) temp_r4);
    sub_0805B568((u16) ((0xF0 - temp_r0) | 0xFFFF8000), 0x8048, 0, 0, (s32) temp_r4);
    if (*(u16 *)0x03005000 == 0x70) {
        *(u16 *)0x03005000 = 0x3C;
        M2C_FIELD((void *)0x03004410, u8 *, 0xF) = (u8) (M2C_FIELD((void *)0x03004410, u8 *, 0xF) + 1);
    }
}
