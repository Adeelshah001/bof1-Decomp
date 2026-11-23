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

M2C_UNK sub_080743FC(s32, void *, void *);          /* extern */

void sub_0806DE8C(s32 arg0, void *arg1, s32 arg2) {
    void *temp_r3;
    void *var_r3;

    temp_r3 = (((u32) (arg2 << 0x18) >> 0x19) * 0x124) + 0x03003420;
    if (M2C_FIELD(temp_r3, u8 *, 0x3A) == 0) {
        M2C_FIELD(temp_r3, u8 *, 0xF0) = (u8) (0xBF & M2C_FIELD(temp_r3, u8 *, 0xF0));
        goto block_5;
    }
    if (((u32) M2C_FIELD(temp_r3, u8 *, 0xE0) > 0x17U) || !(M2C_FIELD(temp_r3, u8 *, 0xF1) & 0x80)) {
        sub_080743FC(arg0, temp_r3, arg1);
        return;
    }
block_5:
    var_r3 = (void *)0x03003420;
loop_7:
    if (M2C_FIELD(var_r3, u8 *, 0x3A) == 0) {
        M2C_FIELD(var_r3, u8 *, 0xF0) = (u8) (0xBF & M2C_FIELD(var_r3, u8 *, 0xF0));
block_6:
        var_r3 += 0x124;
        goto loop_7;
    }
    if (M2C_FIELD(var_r3, u8 *, 0xF1) & 0x80) {
        goto block_6;
    }
    M2C_FIELD(arg1, u8 *, 0xE2) = (u8) (M2C_FIELD(arg1, u8 *, 0xE2) | M2C_FIELD(var_r3, u8 *, 0x3B));
    sub_080743FC(arg0, var_r3, arg1);
}
