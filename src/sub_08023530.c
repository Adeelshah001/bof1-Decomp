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

s32 sub_08001770(s32);                              /* extern */
s32 sub_08005090(s32, s32);                         /* extern */
M2C_UNK sub_08005218(s32, s32, s32);                /* extern */
M2C_UNK sub_08030BB0(s32, s32);                     /* extern */

s32 sub_08023530(void *arg0) {
    *(s16 *)0x03004114 = 0;
    if ((M2C_FIELD(arg0, u8 *, 0x4C) != 0) && ((sub_08005090(0x1448, 0x558C) << 0x18) == 0) && ((sub_08001770(0x58) << 0x18) != 0)) {
        sub_08005218(0xA1, 0x988, 0x5B8C);
    } else if (((sub_08005090(0x1458, 0x52FC) << 0x18) == 0) || ((sub_08005090(0x1468, 0x52FC) << 0x18) == 0) || ((sub_08005090(0x1478, 0x52FC) << 0x18) == 0)) {
        sub_08030BB0(0x03002AB0, 0x36);
    } else if (M2C_FIELD(arg0, u16 *, 6) == 0x53FC) {
        sub_08030BB0(0x03002AB0, 0x38);
    }
    return 0;
}
