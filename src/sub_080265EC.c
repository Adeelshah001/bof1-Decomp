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

s32 sub_08005090(s32, s32);                         /* extern */
M2C_UNK sub_0800518C(s32, s32, s32);                /* extern */
M2C_UNK sub_080379D4(s32);                          /* extern */

s32 sub_080265EC(void *arg0) {
    if (((sub_08005090(0xE78, 0x793C) << 0x18) == 0) && (M2C_FIELD(arg0, u8 *, 0x4C) != 0)) {
        sub_080379D4(0xD);
        sub_0800518C(0xC8, 0x1A28, 0x139C);
    }
    *(s16 *)0x03004114 = 0;
    return 0;
}
