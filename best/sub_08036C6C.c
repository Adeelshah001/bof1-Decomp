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

s32 sub_08036C6C(s32 arg0, u16 arg1, u16 arg2) {
    s32 var_r2;
    u8 temp_r0;
    u8 var_r1;
    void *temp_r3;

    var_r2 = 0;
    *(s16 *)0x0300089C = 0;
    var_r1 = 0;
    temp_r0 = *(u8 *)0x03003FA4;
    if ((u32) temp_r0 > 0U) {
loop_2:
        temp_r3 = (var_r1 << 7) + 0x03003420;
        if ((M2C_FIELD(temp_r3, u8 *, 0x3A) != 0) && (M2C_FIELD(temp_r3, u16 *, 0x46) == arg1) && (M2C_FIELD(temp_r3, u16 *, 0x4A) == arg2)) {
            if (temp_r3 != arg0) {
                var_r2 = 0xFF;
            }
            *(s16 *)0x0300089C = 0xFFFF;
        } else {
            var_r1 += 1;
            if ((u32) var_r1 < (u32) temp_r0) {
                goto loop_2;
            }
        }
    }
    return var_r2;
}
