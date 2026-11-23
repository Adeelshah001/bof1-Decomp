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

M2C_UNK sub_08038278(void *);                       /* extern */
M2C_UNK sub_0803EF2C(void *);                       /* extern */
M2C_UNK sub_0807B248(void *);                       /* extern */

void sub_0807BEDC(void *arg0) {
    u16 temp_r0_3;
    u8 temp_r0;
    u8 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x54);
    if (temp_r0 != 0) {
        M2C_FIELD(arg0, u8 *, 0x54) = (u8) (temp_r0 - 1);
    }
    sub_08038278(arg0);
    if (0x80 & M2C_FIELD(arg0, u8 *, 6)) {
        temp_r0_2 = *(u8 *)0x03004FAF - 0x11;
        *(u8 *)0x03004FAF = temp_r0_2;
        if (temp_r0_2 & 0x80) {
            *(u8 *)0x03004FAF = 0;
        }
        M2C_FIELD(arg0, s8 *, 0xF0) = 0;
        if (*(u8 *)0x03004F9A != 0) {
            M2C_FIELD(arg0, s8 *, 0xF0) = 0x40;
        }
        sub_0803EF2C(arg0);
    }
    sub_0807B248(arg0);
    if ((u8) M2C_FIELD(arg0, u16 *, 0x20) == 1) {
        temp_r0_3 = M2C_FIELD(arg0, u16 *, 0x1E);
        if (temp_r0_3 != M2C_FIELD(arg0, u16 *, 0x22)) {
            M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (temp_r0_3 - 2);
        }
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) - 2);
    }
}
