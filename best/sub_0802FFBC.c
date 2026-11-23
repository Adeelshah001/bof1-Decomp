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

M2C_UNK sub_08030960(u16);                          /* extern */
s32 sub_08032D50(u16);                              /* extern */
M2C_UNK sub_080379D4(s32);                          /* extern */
M2C_UNK sub_0805CE34(u16);                          /* extern */
u8 sub_0805DA60(u16);                               /* extern */

void sub_0802FFBC(void *arg0, u16 arg1) {
    s32 var_r2;
    u16 temp_r4;
    u8 temp_r0;

    temp_r4 = arg1;
    temp_r0 = sub_0805DA60(temp_r4);
    M2C_FIELD((void *)0x0200BA21, u8 *, 0) = temp_r0;
    M2C_FIELD((void *)0x0200BA21, s8 *, 1) = (s8) (temp_r0 >> 8);
    M2C_FIELD((void *)0x0200BA21, s8 *, 2) = (s8) (temp_r0 >> 0x10);
    M2C_FIELD((void *)0x0200BA21, s8 *, 3) = (s8) (temp_r0 >> 0x18);
    *(s8 *)0x0200BA20 = 0x88;
    var_r2 = 0x8734;
    if ((temp_r4 == 0x16E) || (temp_r4 == 0x157)) {
        var_r2 = 0x80BF;
    }
    M2C_FIELD(arg0, s32 *, 0x94) = var_r2;
    M2C_FIELD(arg0, s32 *, 0x90) = var_r2;
    *(s8 *)0x030023D0 = 2;
    if ((0x3000 & temp_r4) || ((u32) (0xFF & temp_r4) > 7U)) {
        sub_0805CE34(temp_r4);
        if ((sub_08032D50(temp_r4) << 0x18) != 0) {
            sub_08030960(temp_r4);
        }
        sub_080379D4(0xA);
        return;
    }
    if ((sub_08032D50(temp_r4) << 0x18) != 0) {
        sub_08030960(temp_r4);
    }
    sub_080379D4(0xA);
}
