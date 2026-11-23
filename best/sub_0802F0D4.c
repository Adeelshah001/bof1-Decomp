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

M2C_UNK sub_08032B24(u8);                           /* extern */

s32 sub_0802F0D4(void *arg0) {
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r7;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x55) - 1;
    M2C_FIELD(arg0, u8 *, 0x55) = temp_r0;
    temp_r7 = temp_r0;
    if (temp_r7 == 0) {
        M2C_FIELD(arg0, u8 *, 0x55) = 6U;
        temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
        M2C_FIELD(arg0, u8 *, 0x54) = temp_r0_2;
        if (!(temp_r0_2 & 0x80)) {
            temp_r0_3 = M2C_FIELD(arg0, u8 *, 0x54);
            *(s32 *)0x030040F0 = (s32) temp_r0_3;
            *(s32 *)0x03003FB0 = (s32) temp_r0_3;
            *(s32 *)0x03002500 = (s32) temp_r0_3;
            sub_08032B24(*(u8 *)0x03002AF1);
            sub_08032B24(*(u8 *)0x03002C15);
            sub_08032B24(*(u8 *)0x03002D39);
            sub_08032B24(*(u8 *)0x03002E5D);
            *(s32 *)0x030040F0 = (s32) temp_r7;
            *(s32 *)0x03003FB0 = (s32) temp_r7;
            *(s32 *)0x03002500 = (s32) temp_r7;
        } else {
            *(u8 *)0x03003418 = *(u8 *)0x0300248C;
            *(u8 *)0x03004866 = temp_r7;
            M2C_FIELD(arg0, s8 *, 0x4C) = 2;
            M2C_FIELD(arg0, u8 *, 0x4D) = temp_r7;
            M2C_FIELD((arg0 + 0x4D), s16 *, 3) = (s16) temp_r7;
        }
    }
    return 0;
}
