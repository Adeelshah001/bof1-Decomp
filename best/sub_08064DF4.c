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

s8 sub_080987FC(u8, u16 *, void *);                 /* extern */

s32 sub_08064DF4(u8 arg0, s8 *arg1, s16 *arg2, s16 *arg3) {
    u16 sp0;
    s8 temp_r0;
    u8 temp_r0_2;
    void *temp_r3;
    void *temp_r4;

    temp_r4 = (*(u8 *)0x030046E4 * 0x124) + 0x03002AB0;
    temp_r0 = sub_080987FC(arg0, &sp0, temp_r4);
    if (temp_r0 != 0) {
        *arg1 = 0;
        goto block_2;
    }
    temp_r3 = sp0 + 0x082D2708;
    temp_r0_2 = M2C_FIELD(temp_r4, u8 *, 0x3C);
    if ((temp_r0_2 != 1) && (temp_r0_2 != 3) && ((u32) M2C_FIELD(temp_r4, u8 *, 0xF2) < (u32) M2C_FIELD(temp_r3, u8 *, 0xE))) {
        *arg1 = temp_r0;
        goto block_2;
    }
    *arg2 = (s16) M2C_FIELD(temp_r3, u8 *, 9);
    *arg3 = M2C_FIELD(temp_r4, u16 *, 0xFA) - M2C_FIELD(temp_r3, u8 *, 9);
    *arg1 = 1;
    if (((u32) M2C_FIELD(temp_r4, u16 *, 0xFA) >= (u32) M2C_FIELD(temp_r3, u8 *, 9)) && (0x80 & M2C_FIELD(temp_r3, u8 *, 8))) {
        return 1;
    }
block_2:
    return 0;
}
