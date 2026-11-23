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

M2C_UNK sub_0804799C();                             /* extern */
M2C_UNK sub_08047D70(s32, void *, u16);             /* extern */
s32 sub_08048040(void *, s32, u16 *);               /* extern */
M2C_UNK sub_080A0210(s32, void *, s32);             /* extern */

void sub_08047C40(void) {
    u16 sp0;
    u16 temp_r1;
    u16 temp_r2;
    void *temp_r5;
    void *temp_r5_2;

    sp0 = 0;
    M2C_FIELD((void *)0x03004E80, s8 *, 3) = 0;
    if ((M2C_FIELD((void *)0x03004E60, u8 *, 0) != 0) && ((sub_08048040((void *)0x03004E60, 0x030023E0, &sp0) << 0x18) != 0)) {
        sub_08047D70(0x030023E0, (void *)0x03004E60, sp0);
    }
    if (M2C_FIELD((void *)0x03004E60, u8 *, 0xC) != 0) {
        temp_r5 = (void *)0x03004E60 + 0xC;
        if ((sub_08048040(temp_r5, 0x03002430, &sp0) << 0x18) != 0) {
            sub_08047D70(0x03002430, temp_r5, sp0);
        }
    }
    temp_r1 = *(u16 *)0x03002484;
    if (((u32) (u16) (temp_r1 - 0xE4) <= 3U) || (temp_r1 == 0xFD) || (temp_r1 == 0x11F) || (temp_r1 == 0x11A)) {
        sub_080A0210(0x0200AE10, *(void **)0x03001650, 0x280);
        if (*(u16 *)0x03001648 != 0) {
            temp_r5_2 = *(void **)0x03001650;
            temp_r2 = *(u16 *)0x030033D4;
            *(s16 *)0x03001680 = (M2C_FIELD(temp_r5_2, u16 *, 0x1E0) - *(u8 *)0x03001698) - temp_r2;
            *(s16 *)0x0300164C = (M2C_FIELD(temp_r5_2, u16 *, 0x1E4) - *(u8 *)0x03001698) - temp_r2;
            *(s16 *)0x03001654 = (M2C_FIELD(temp_r5_2, u16 *, 0x1E8) - *(u8 *)0x03001698) - temp_r2;
            *(s16 *)0x030016CC = (M2C_FIELD(temp_r5_2, u16 *, 0x1EC) - *(u8 *)0x03001698) - temp_r2;
        }
    } else {
        sub_0804799C();
    }
}
