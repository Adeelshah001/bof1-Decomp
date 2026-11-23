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

M2C_UNK sub_0802FFBC(s32, u16);                     /* extern */
M2C_UNK sub_08032A78(s32, s32);                     /* extern */
s32 sub_08032D50(u16);                              /* extern */
M2C_UNK sub_08039088(u32, s32);                     /* extern */
s32 sub_0805D6A8(u16, M2C_UNK *);                   /* extern */

s32 sub_080329C0(s32 arg0, u16 arg1, s32 arg2) {
    M2C_UNK sp0;
    u16 temp_r4;
    u32 temp_r6;

    temp_r4 = arg1;
    temp_r6 = arg2 << 0x10;
    if ((sub_08032D50(temp_r4) << 0x18) == 0) {
        if ((sub_0805D6A8(temp_r4, &sp0) << 0x18) == 0) {
            sub_0802FFBC(arg0, temp_r4);
            sub_08039088(temp_r6 >> 0x18, 0x0202DBD0);
        } else {
            sub_08032A78(arg0, 0x8735);
        }
    } else {
        sub_0802FFBC(arg0, temp_r4);
        sub_08039088(temp_r6 >> 0x18, 0x0202DBD0);
    }
    return 0;
}
