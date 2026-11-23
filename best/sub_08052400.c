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

M2C_UNK sub_0803EE6C(void *);                       /* extern */

void sub_08052400(void *arg0) {
    u32 temp_r0_3;
    u32 var_r6;
    u8 temp_r0;
    u8 temp_r0_2;

    var_r6 = 0;
    temp_r0 = M2C_FIELD(arg0, u8 *, 0xCF) ^ 1;
    M2C_FIELD(arg0, u8 *, 0xCF) = temp_r0;
    if (temp_r0 == 0) {
        var_r6 = (u32) (M2C_FIELD(arg0, s32 *, 0x14) << 8) >> 0x10;
        temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
        M2C_FIELD(arg0, u8 *, 0x54) = temp_r0_2;
        if ((temp_r0_2 << 0x18) == 0) {
            M2C_FIELD((void *)0x03002430, s16 *, 0x3C) = 2;
            *(s32 *)0x03002B38 += 1;
            *(s8 *)0x0300418C = 0;
            *(s32 *)0x03001694 &= ~0x40;
            *(s32 *)0x03001694 |= 0x100;
            sub_0803EE6C(arg0);
            return;
        }
    }
    M2C_FIELD((void *)0x03002430, s16 *, 0x16) = (s16) var_r6;
    M2C_FIELD((void *)0x03002430, s32 *, 0x10) = (s32) (M2C_FIELD((void *)0x03002430, s32 *, 0x10) & 0xFF000000);
    M2C_FIELD((void *)0x03002430, s8 *, 0x4B) = 0;
    M2C_FIELD((void *)0x03002430, s8 *, 0x4A) = 8;
    *(s32 *)0x030040F0 = 0;
    temp_r0_3 = (u8) M2C_FIELD(arg0, u8 *, 0x54) >> 5;
    *(u32 *)0x03003FB0 = temp_r0_3;
    *(u32 *)0x03002500 = temp_r0_3;
}
