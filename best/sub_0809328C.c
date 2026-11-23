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

M2C_UNK sub_080379D4(s32);                          /* extern */
M2C_UNK sub_08096AD8();                             /* extern */
M2C_UNK sub_08096AE8(s32);                          /* extern */

void sub_0809328C(void *arg0) {
    s32 temp_r0;
    u8 temp_r2;
    u8 temp_r4;

    temp_r2 = (M2C_FIELD(arg0, u8 *, 0x54) + 1) & 3;
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r2;
    switch (temp_r2) {                              /* irregular */
    case 0:
        sub_08096AD8();
        break;
    case 1:
        sub_08096AE8(0x1F);
        break;
    case 2:
        sub_08096AE8(0x3E0);
        break;
    default:
        sub_08096AE8(0x7C00);
        break;
    }
    temp_r0 = *(s32 *)0x0300112C - 1;
    *(s32 *)0x0300112C = temp_r0;
    temp_r4 = (u8) temp_r0;
    *(s16 *)0x030016C8 = (temp_r4 << 8) | (0xA0 - temp_r4);
    if (temp_r4 == 0) {
        M2C_FIELD(arg0, u8 *, 0x4C) = (u8) (M2C_FIELD(arg0, u8 *, 0x4C) + 1);
        sub_080379D4(0x16);
        *(s16 *)0x03001864 = (s16) temp_r4;
        *(s8 *)0x03004610 = 0;
        M2C_FIELD((void *)0x030045F6, s8 *, 0) = 0;
        M2C_FIELD((void *)0x030045F6, s8 *, 1) = 0;
        *(s8 *)0x030045F8 = 0;
        M2C_FIELD(arg0, u8 *, 0x54) = 7U;
        M2C_FIELD((arg0 + 0x54), s8 *, 1) = 7;
        sub_08096AE8(0x7FFF);
    }
}
