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

M2C_UNK sub_08099DA4(void *);                       /* extern */
M2C_UNK sub_0809A1B4(void *);                       /* extern */

void sub_08098FF0(void *arg0) {
    s32 var_r0;
    u16 var_r1;
    u8 temp_r0;
    u8 var_r1_2;
    void *temp_r1;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r0;
    if (temp_r0 & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x54) = 3U;
        var_r1 = M2C_FIELD(arg0, u16 *, 0x38);
        if (var_r1 != 0x160) {
            var_r1 += 0x60;
            if ((u32) var_r1 > 0x15FU) {
                var_r1 = 0x160;
            }
        }
        M2C_FIELD(arg0, u16 *, 0x38) = var_r1;
    }
    temp_r1 = M2C_FIELD(arg0, void **, 0x6C);
    if ((u32) M2C_FIELD(arg0, u8 *, 0x61) > 0xDU) {
        var_r0 = M2C_FIELD(arg0, u8 *, 6) + 0x10;
        var_r1_2 = M2C_FIELD(temp_r1, u8 *, 6);
    } else {
        var_r0 = M2C_FIELD(arg0, u8 *, 2) + 0x10;
        var_r1_2 = M2C_FIELD(temp_r1, u8 *, 2);
    }
    if (var_r0 < (s32) var_r1_2) {
        sub_08099DA4(arg0);
        return;
    }
    sub_0809A1B4(arg0);
}
