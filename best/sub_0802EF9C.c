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

M2C_UNK sub_0802C840(u16, u16, u16, s32);           /* extern */
M2C_UNK sub_08032B98(void *);                       /* extern */
M2C_UNK sub_08038F18(u16);                          /* extern */

s32 sub_0802EF9C(void *arg0) {
    s8 var_r1;
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r0;
    if ((temp_r0 << 0x18) == 0) {
        if (!(0x80 & M2C_FIELD(arg0, u8 *, 0x4C))) {
            sub_0802C840(*(u16 *)0x0202DE56, M2C_FIELD((void *)0x0202DBD0, u16 *, 0xE), M2C_FIELD((void *)0x0202DBD0, u16 *, 0x12), 2);
            var_r1 = 0x84;
        } else {
            sub_08038F18(*(u16 *)0x03002484);
            sub_08032B98(arg0);
            var_r1 = 0x85;
        }
        *(s8 *)0x03004866 = var_r1;
        M2C_FIELD(arg0, u8 *, 0x4C) = 8U;
    }
    return 0;
}
