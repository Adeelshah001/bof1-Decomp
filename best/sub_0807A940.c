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

M2C_UNK sub_0803A8EC(void *);                       /* extern */
M2C_UNK sub_0807A71C(void *);                       /* extern */
M2C_UNK sub_0807A868(void *);                       /* extern */
M2C_UNK sub_0807A8E8(void *);                       /* extern */
s32 sub_0807B2BC(void *);                           /* extern */

void sub_0807A940(void *arg0) {
    s32 var_r0;
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x50);
    if (temp_r0 == 0) {
        sub_0807A71C(arg0);
    } else if (temp_r0 != 4) {
        sub_0807A8E8(arg0);
    } else {
        if ((0x40 & M2C_FIELD(arg0, u8 *, 0xDC)) || (2 & M2C_FIELD(arg0, u8 *, 0xDD))) {
            var_r0 = 0xFFFF;
        } else {
            var_r0 = sub_0807B2BC(arg0);
        }
        if ((var_r0 << 0x10) == 0) {
            sub_0807A868(arg0);
        }
    }
    if (!(0x80 & M2C_FIELD(arg0, u8 *, 0xF1))) {
        M2C_FIELD(arg0, s16 *, 0x2C) = (s16) (M2C_FIELD(arg0, u16 *, 6) + 0x18);
        if ((u32) (u16) (*(u16 *)0x03001864 - 0x10) > 1U) {
            sub_0803A8EC(arg0);
        }
    } else {
        M2C_FIELD(arg0, s8 *, 0x4C) = 6;
        M2C_FIELD(arg0, s8 *, 0x4D) = 0;
        M2C_FIELD((arg0 + 0x4D), s8 *, 3) = 0;
    }
}
