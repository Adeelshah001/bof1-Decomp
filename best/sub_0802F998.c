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

s32 sub_08004EB8(void *);                           /* extern */
s32 sub_08023E94(void *);                           /* extern */
s32 sub_0802C764(u16 *, void *, u16 *);             /* extern */
M2C_UNK sub_0802CCEC(void *);                       /* extern */
M2C_UNK sub_080A0A68(M2C_UNK *, s32, s32);          /* extern */

s32 sub_0802F998(void *arg0) {
    M2C_UNK sp0;
    u16 sp8;
    u16 spC;
    u32 temp_r0;

    sp8 = *(u16 *)0x03002484;
    M2C_FIELD(&sp0, u16 *, 0xA) = (u16) M2C_FIELD(arg0, u16 *, 2);
    spC = M2C_FIELD(arg0, u16 *, 6);
    sub_080A0A68(&sp0, 0x080A63B8, 5);
    if ((sub_0802C764(&sp8, &sp0 + 0xA, &spC) << 0x18) != 0) {
        temp_r0 = (0xF000 & sp8) << 0x10;
        if (temp_r0 != 0) {
            *(u8 *)0x03004408 |= *(&sp0 + (temp_r0 >> 0x1C));
        }
        M2C_FIELD(arg0, s16 *, 0x4C) = 8;
        return 1;
    }
    if ((sub_08004EB8(arg0) << 0x18) != 0) {
        if (M2C_FIELD(arg0, u8 *, 0x4D) == 0) {
            goto block_10;
        }
        goto block_9;
    }
    if (((sub_08023E94(arg0) << 0x18) != 0) && (M2C_FIELD(arg0, u8 *, 0x4D) != 0)) {
block_9:
        sub_0802CCEC(arg0);
        return 1;
    }
block_10:
    return 0;
}
