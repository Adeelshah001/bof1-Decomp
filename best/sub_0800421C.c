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

M2C_UNK sub_08001F80(s32, s32, s32);                /* extern */
M2C_UNK sub_0800312C(s32, s32);                     /* extern */
M2C_UNK sub_0802CE28(u16, u16);                     /* extern */
M2C_UNK sub_0803AD54(u16);                          /* extern */

void sub_0800421C(u16 arg0, u16 arg1, u16 arg2) {
    s16 temp_r4_2;
    s16 temp_r5;
    u16 temp_r0;
    u16 temp_r0_2;
    u16 temp_r1;
    u16 temp_r2;
    u16 temp_r4;

    temp_r4 = arg0;
    temp_r2 = arg2;
    *(u16 *)0x03002488 = (0x8000 & *(u16 *)0x03002488) | *(u16 *)0x03002484;
    *(u16 *)0x03002484 = temp_r4;
    *(u16 *)0x0202DE54 = temp_r4;
    sub_0802CE28(*(u16 *)0x03002484, *(u16 *)0x03002488);
    temp_r5 = (s16) arg1;
    *(u16 *)0x0300413C = 0x7FFF & temp_r5;
    temp_r4_2 = (s16) temp_r4;
    if (temp_r4_2 != 0x104) {
        *(u16 *)0x0300413C = (0x7FF0 & temp_r5) | 8;
    }
    temp_r0 = *(u16 *)0x0300413C;
    M2C_FIELD((void *)0x03002AB0, u16 *, 2) = temp_r0;
    M2C_FIELD((void *)0x0202DBD0, u16 *, 6) = temp_r0;
    *(u16 *)0x0300413C = temp_r2;
    if (temp_r4_2 != 0x104) {
        *(u16 *)0x0300413C = ((s16) temp_r2 & ~0xF) | 0xC;
    }
    temp_r0_2 = *(u16 *)0x0300413C;
    M2C_FIELD((void *)0x03002AB0, u16 *, 6) = temp_r0_2;
    M2C_FIELD((void *)0x0202DBD0, u16 *, 0xA) = temp_r0_2;
    temp_r1 = *(u16 *)0x03004120;
    M2C_FIELD((void *)0x03002AB0, s8 *, 0x61) = (s8) temp_r1;
    M2C_FIELD((void *)0x0202DBD0, s8 *, 0x2AC) = (s8) temp_r1;
    *(s8 *)0x03004863 = 1;
    *(s8 *)0x030033D8 = 0;
    if (*(u8 *)0x030023DC != 0xFF) {
        sub_0800312C(0x10, 0);
        sub_08001F80(0, 0, 0);
    }
    sub_0803AD54(*(u16 *)0x03002484);
    *(s16 *)0x03004114 = 1;
}
