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

M2C_UNK sub_080736A4(s32, s32, s32, u16);           /* extern */
M2C_UNK sub_08080A94(void *, void *);               /* extern */
M2C_UNK sub_08080B18(void *, void *);               /* extern */

void sub_08080A04(void *arg0, void *arg1) {
    s32 var_r6;
    u16 temp_r0;
    u16 temp_r0_2;
    u16 temp_r1;

    if (!(M2C_FIELD((void *)0x03004F30, u8 *, 0xD) & 0x80)) {
        if (!(M2C_FIELD(arg1, u8 *, 0xF1) & 4)) {
            sub_08080B18(arg0, arg1);
            return;
        }
        if (!(0x7F & M2C_FIELD(arg0, u8 *, 0x5C))) {
            sub_080736A4(M2C_FIELD(arg1, u16 *, 2) - M2C_FIELD((void *)0x030023E0, u16 *, 2), M2C_FIELD(arg1, u16 *, 6) - M2C_FIELD((void *)0x030023E0, u16 *, 6), 0, M2C_FIELD(arg0, u16 *, 0x40));
        }
        goto block_5;
    }
block_5:
    var_r6 = 0;
    temp_r1 = M2C_FIELD(arg1, u16 *, 0xF6);
    temp_r0 = M2C_FIELD(arg0, u16 *, 0x40);
    if ((u32) temp_r1 >= (u32) temp_r0) {
        var_r6 = 1;
    }
    temp_r0_2 = temp_r1 - temp_r0;
    M2C_FIELD(arg1, u16 *, 0xF6) = temp_r0_2;
    M2C_FIELD(arg0, u16 *, 0x40) = 0U;
    if (((temp_r0_2 << 0x10) == 0) || (var_r6 == 0)) {
        sub_08080A94(arg0, arg1);
    }
}
