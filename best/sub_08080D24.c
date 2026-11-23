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

M2C_UNK sub_08073594(u32, s32);                     /* extern */
M2C_UNK sub_080735A0(u32, s32);                     /* extern */

void sub_08080D24(void *arg0, u32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 var_r0;
    s32 var_r3;
    u16 temp_r1;
    u16 temp_r2;

    var_r0 = arg2;
    if (arg2 < 0) {
        var_r0 = arg2 + 7;
    }
    temp_r0 = var_r0 >> 3;
    M2C_FIELD(arg0, s8 *, 0x39) = (s8) temp_r0;
    M2C_FIELD((arg0 + 0x39), s8 *, 1) = (s8) (arg2 - (temp_r0 * 8));
    if ((arg1 >= 0x03003420U) && (arg1 < 0x03003F88U)) {
        sub_080735A0(arg1, arg2);
    } else {
        sub_08073594(arg1, arg2);
    }
    temp_r1 = M2C_FIELD(arg1, u16 *, 0xF4);
    if (temp_r1 != 0xFFFF) {
        temp_r2 = M2C_FIELD(arg1, u16 *, 0xF6);
        if ((s32) temp_r2 >= (s32) ((s32) temp_r1 >> 2)) {
            var_r3 = 0;
        } else {
            var_r3 = 3;
            if ((s32) temp_r2 >= (s32) ((s32) temp_r1 >> 3)) {
                var_r3 = 2;
            }
        }
        M2C_FIELD(arg1, u8 *, 0xF1) = (u8) ((0xFC & M2C_FIELD(arg1, u8 *, 0xF1)) | var_r3);
    }
}
