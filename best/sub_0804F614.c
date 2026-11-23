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

s16 sub_08037C98(void *, s32);                      /* extern */
M2C_UNK sub_0803A974(void *);                       /* extern */
M2C_UNK sub_0803EE6C(void *);                       /* extern */
M2C_UNK sub_08050404(void *);                       /* extern */
M2C_UNK sub_0805478C(void *, u8);                   /* extern */

void sub_0804F614(void *arg0) {
    u8 temp_r0;
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0xD4);
    if (M2C_FIELD(arg0, u8 *, 0xC9) == 0) {
        M2C_FIELD(arg0, s8 *, 0x3D) = 2;
        M2C_FIELD(arg0, u8 *, 0xC9) = 2U;
        M2C_FIELD((arg0 + 0x3D), u8 *, 4) = (u8) M2C_FIELD(temp_r2, u8 *, 0x41);
        M2C_FIELD(arg0, u16 *, 0x1C) = (u16) M2C_FIELD(temp_r2, u16 *, 0x1C);
        M2C_FIELD(arg0, u16 *, 0x2A) = (u16) M2C_FIELD(temp_r2, u16 *, 0x2A);
        M2C_FIELD(arg0, u16 *, 2) = (u16) M2C_FIELD(temp_r2, u16 *, 2);
        M2C_FIELD(arg0, u16 *, 6) = (u16) M2C_FIELD(temp_r2, u16 *, 6);
        M2C_FIELD(arg0, s16 *, 0x2C) = (s16) (M2C_FIELD(temp_r2, u16 *, 6) - 1);
        sub_0805478C(arg0, M2C_FIELD(temp_r2, u8 *, 0x6F));
    }
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r0;
    if ((temp_r0 << 0x18) == 0) {
        sub_0803EE6C(arg0);
        return;
    }
    sub_08050404(arg0);
    *(s16 *)0x03004114 = sub_08037C98(arg0, 0);
    sub_0803A974(arg0);
}
