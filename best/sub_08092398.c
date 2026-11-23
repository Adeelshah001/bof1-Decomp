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
M2C_UNK sub_0807B270(void *);                       /* extern */
M2C_UNK sub_08096CBC(void *);                       /* extern */

void sub_08092398(void *arg0) {
    s32 var_r2;
    u8 temp_r0;
    u8 temp_r1;
    u8 temp_r1_2;

    temp_r1 = M2C_FIELD(arg0, u8 *, 0x55);
    *(u8 *)0x030033D4 = (s16) (u8) (temp_r1 + *(u8 *)0x030033D4);
    *(u8 *)0x030040F4 = (s16) (u8) (temp_r1 + *(u8 *)0x030040F4);
    M2C_FIELD(arg0, u8 *, 0x55) = (u8) ((u32) ((~M2C_FIELD(arg0, u8 *, 0x55) << 0x18) + 0x01000000) >> 0x18);
    sub_0807B270(arg0);
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r0;
    temp_r1_2 = temp_r0;
    if (temp_r1_2 != 0) {
        var_r2 = 0x50;
        if (M2C_FIELD(arg0, u16 *, 0x2A) == 0x18E) {
            var_r2 = 0x70;
        }
        M2C_FIELD(arg0, s16 *, 0x2C) = (s16) (var_r2 + M2C_FIELD(arg0, u16 *, 6));
        sub_0803A8EC(arg0);
        return;
    }
    *(u8 *)0x030033D4 = (s16) temp_r1_2;
    *(s8 *)0x03003410 = 0;
    *(s8 *)0x0300178C = 0;
    sub_08096CBC(arg0);
}
