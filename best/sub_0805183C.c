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

M2C_UNK sub_08000C68(s32, s32);                     /* extern */
M2C_UNK sub_08048078(s32);                          /* extern */
M2C_UNK sub_080A0210(void *, void *, s32);          /* extern */
extern M2C_UNK sub_080519CC;

void sub_0805183C(void *arg0) {
    s32 sp0;
    u16 var_r4;
    u16 var_r4_2;
    u8 temp_r0;
    u8 temp_r0_3;
    void *temp_r0_2;
    void *temp_r3;
    void *var_r10;

    var_r4 = 0;
    sp0 = 0x20;
    var_r10 = (void *)0x0200BE80;
    M2C_FIELD((void *)0x03004E94, s8 *, 2) = 0;
    if (*(u16 *)0x03001648 != 0) {
        M2C_FIELD((void *)0x03004E94, u8 *, 1) = 0U;
        *(s32 *)0x03004E8C = 0x04000010;
        M2C_FIELD((void *)0x03004E94, u8 *, 0) = 0x10U;
        M2C_FIELD((void *)0x03004E94, s8 *, 2) = 1;
        var_r10 = (void *)0x020127A0;
        sub_08048078(0xE1E0000F);
    } else {
        sub_08000C68(0x04000010, 0x10);
        sub_08048078(0xA1F0000F);
    }
    M2C_FIELD(arg0, s8 *, 0x61) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) & 0xFF000000);
    M2C_FIELD(arg0, s16 *, 2) = (s16) (M2C_FIELD((void *)0x030023E0, u16 *, 2) + *(u8 *)0x03001698);
    temp_r3 = (void *)0x030023E0 + 0x50;
    M2C_FIELD(arg0, s16 *, 6) = (s16) (M2C_FIELD(temp_r3, u16 *, 2) + *(u8 *)0x03001698);
    do {
        temp_r0_2 = var_r10 + var_r4;
        M2C_FIELD(temp_r0_2, s8 *, 0) = (s8) (*(u8 *)0x03001698 + (u8) M2C_FIELD((void *)0x030023E0, u16 *, 2));
        M2C_FIELD(temp_r0_2, s8 *, 1) = (s8) ((s32) (M2C_FIELD((void *)0x030023E0, u16 *, 2) + *(u8 *)0x03001698) >> 8);
        M2C_FIELD(temp_r0_2, s8 *, 2) = (s8) (*(u8 *)0x0300166C + M2C_FIELD((void *)0x030023E0, u8 *, 6));
        M2C_FIELD(temp_r0_2, s8 *, 3) = (s8) ((s32) ((u16) M2C_FIELD((void *)0x030023E0, u8 *, 6) + *(u8 *)0x0300166C) >> 8);
        M2C_FIELD(temp_r0_2, s8 *, 4) = (s8) (*(u8 *)0x03001698 + (u8) M2C_FIELD(temp_r3, u16 *, 2));
        M2C_FIELD(temp_r0_2, s8 *, 5) = (s8) ((s32) (M2C_FIELD(temp_r3, u16 *, 2) + *(u8 *)0x03001698) >> 8);
        M2C_FIELD(temp_r0_2, s8 *, 6) = (s8) (*(u8 *)0x0300166C + M2C_FIELD(temp_r3, u8 *, 6));
        M2C_FIELD(temp_r0_2, s8 *, 7) = (s8) ((s32) ((u16) M2C_FIELD(temp_r3, u8 *, 6) + *(u8 *)0x0300166C) >> 8);
        sub_080A0210(temp_r0_2, temp_r0_2 + 8, 2);
        var_r4 += 0x10;
        temp_r0 = sp0 - 1;
        sp0 = (s32) temp_r0;
    } while (temp_r0 != 0);
    var_r4_2 = 1;
    do {
        sub_080A0210(var_r10, (var_r4_2 << 9) + var_r10, 0x80);
        var_r4_2 += 1;
    } while ((u32) var_r4_2 <= 4U);
    if (M2C_FIELD((void *)0x03004E94, u8 *, 0) == 0) {
        sub_080A0210(var_r10, (void *)0x020213C0, 0x280);
    }
    M2C_FIELD(arg0, s16 *, 0) = (s16) (((u16) M2C_FIELD((void *)0x030023E0, u16 *, 0) >> 8) << 8);
    M2C_FIELD(arg0, s16 *, 4) = (s16) (((u16) M2C_FIELD(((void *)0x030023E0 + 0x50), u16 *, 4) >> 8) << 8);
    temp_r0_3 = M2C_FIELD((void *)0x03004E94, u8 *, 0);
    if (temp_r0_3 != 0) {
        M2C_FIELD((void *)0x03004E94, u8 *, 1) = temp_r0_3;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_080519CC;
}
