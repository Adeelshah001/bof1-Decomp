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

s32 sub_0805600C(s32);                              /* extern */
M2C_UNK sub_08056B9C(void *);                       /* extern */
M2C_UNK sub_0805DA14(void *);                       /* extern */

s32 sub_08056500(s32 arg0, void *arg1) {
    s32 temp_r1;
    s32 var_r0;
    u32 var_r1;
    u8 temp_r1_2;

    if ((M2C_FIELD(arg1, u8 *, 0x3A) != 0) && (0x70 & M2C_FIELD(arg1, u8 *, 0xF1))) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        M2C_FIELD(arg1, u8 *, 0xF1) = (u8) (0x8F & M2C_FIELD(arg1, u8 *, 0xF1));
        sub_0805DA14(arg1);
        M2C_FIELD(arg1, u16 *, 0xF6) = (u16) M2C_FIELD(arg1, u16 *, 0xF4);
        sub_08056B9C(arg1);
        return sub_0805600C(arg0);
    }
    var_r1 = 0;
    if (M2C_FIELD(arg1, u8 *, 0x3A) != 0) {
        temp_r1 = M2C_FIELD(arg1, u16 *, 0xF6) ^ M2C_FIELD(arg1, u16 *, 0xF4);
        var_r1 = (u32) ((0 - temp_r1) | temp_r1) >> 0x1F;
    }
    if (var_r1 != 0) {
        temp_r1_2 = M2C_FIELD(arg1, u8 *, 0xF1);
        if (0x80 & temp_r1_2) {
            return 0x80000044;
        }
        M2C_FIELD(arg1, u8 *, 0xF1) = (u8) (0x8F & temp_r1_2);
        sub_0805DA14(arg1);
        M2C_FIELD(arg1, u16 *, 0xF6) = (u16) M2C_FIELD(arg1, u16 *, 0xF4);
        sub_08056B9C(arg1);
        return sub_0805600C(arg0);
    }
    return 0x8000000D;
}
