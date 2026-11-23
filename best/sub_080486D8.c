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
M2C_UNK sub_0803EE6C(void *);                       /* extern */

void sub_080486D8(void *arg0) {
    u16 temp_r0;
    u16 temp_r1;
    u16 temp_r1_2;
    u8 temp_r1_3;

    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + M2C_FIELD(arg0, s32 *, 0x10));
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) - M2C_FIELD(arg0, s32 *, 0x14));
    if ((*(s16 *)0x03001858 + M2C_FIELD((void *)0x03004830, u16 *, 0x10)) & 7) {
        sub_0803A8EC(arg0);
        return;
    }
    temp_r1 = M2C_FIELD(arg0, u16 *, 2);
    if ((((u32) temp_r1 >= (u32) M2C_FIELD((void *)0x030023E0, u16 *, 2)) && ((s32) (temp_r1 - M2C_FIELD((void *)0x030023E0, u16 *, 2)) > 0x13F)) || ((temp_r0 = M2C_FIELD((void *)0x030023E0, u16 *, 6), M2C_FIELD(arg0, u16 *, 0x2C) = temp_r0, temp_r1_2 = M2C_FIELD(arg0, u16 *, 6), ((u32) temp_r1_2 <= (u32) temp_r0)) && ((s32) (M2C_FIELD((void *)0x030023E0, u16 *, 6) - temp_r1_2) > 0x3F))) {
        temp_r1_3 = M2C_FIELD((void *)0x03004830, u8 *, 0x41) - 1;
        M2C_FIELD((void *)0x03004830, u8 *, 0x41) = temp_r1_3;
        if (M2C_FIELD(arg0, u8 *, 0x3B) == 0) {
            M2C_FIELD((void *)0x03004830, u8 *, 0x41) = (u8) (temp_r1_3 & 0x7F);
        }
        sub_0803EE6C(arg0);
        return;
    }
    sub_0803A8EC(arg0);
}
