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

u8 sub_0803601C(s32, u16, u16);                     /* extern */
u8 sub_0803611C(u8, s8 *);                          /* extern */
s32 sub_080364B8(u16, u16, s32);                    /* extern */
s32 sub_08036590(s32, u16, u16, M2C_UNK *);         /* extern */
s32 sub_08036C6C(M2C_UNK, u16, u16);                /* extern */

u8 sub_08036B78(M2C_UNK arg0, u16 arg1, u16 arg2, s8 *arg3) {
    M2C_UNK sp0;
    u16 temp_r4;
    u16 temp_r5;

    temp_r5 = arg1;
    temp_r4 = arg2;
    *arg3 = 0;
    if (((sub_080364B8(temp_r5, temp_r4, 0) << 0x18) != 0) || ((sub_08036590(*(s32 *)0x03004880, temp_r5, temp_r4, &sp0) << 0x18) == 0) || ((sub_08036C6C(arg0, temp_r5, temp_r4) << 0x18) != 0)) {
        return (u8) *(u16 *)0x0300089C;
    }
    return sub_0803611C(sub_0803601C(*(s32 *)0x03004880, temp_r5, temp_r4), arg3);
}
