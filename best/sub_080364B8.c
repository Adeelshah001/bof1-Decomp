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

s32 sub_080364B8(u16 arg0, u16 arg1, u8 arg2) {
    s32 var_r12;
    s32 var_r8;
    u16 temp_r5;
    u16 temp_r6;
    u8 var_r2;
    void *temp_r3;
    void *temp_r3_2;

    temp_r6 = arg0;
    temp_r5 = arg1;
    var_r8 = 0;
    var_r12 = 0;
    *(s16 *)0x0300089C = 0;
    if (!(8 & *(u8 *)0x03002B68)) {
        var_r2 = 0;
loop_2:
        temp_r3 = (var_r2 * 0x124) + 0x03002AB0;
        if (M2C_FIELD(temp_r3, u8 *, 0x3A) != 0) {
            if ((M2C_FIELD(temp_r3, u16 *, 0x46) != temp_r6) || (M2C_FIELD(temp_r3, u16 *, 0x4A) != temp_r5)) {
                if (arg2 == 0) {
                    temp_r3_2 = (var_r2 * 0x124) + 0x03002AB0;
                    if ((((0x1FFF & M2C_FIELD(temp_r3_2, u16 *, 2)) | 8) == temp_r6) && (((0x1FFF & M2C_FIELD(temp_r3_2, u16 *, 6)) | 0xC) == temp_r5)) {
                        var_r12 = 1;
                    }
                }
                goto block_9;
            }
            goto block_10;
        }
block_9:
        if (var_r12 != 0) {
block_10:
            var_r8 = 0xFF;
            *(s16 *)0x0300089C = 0xFFFF;
        } else {
            var_r2 += 1;
            if ((u32) var_r2 <= 3U) {
                goto loop_2;
            }
        }
    }
    return var_r8;
}
