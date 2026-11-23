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

u8 sub_0805D8F4();                                  /* extern */
s32 sub_0805D910(u8, u16 *);                        /* extern */

s32 sub_0805CD90(u16 arg0, u8 *arg1) {
    u16 sp0;
    s32 var_r5;
    u16 temp_r3;
    u16 temp_r7;
    u8 temp_r0;

    temp_r7 = arg0;
    *arg1 = 0;
    temp_r0 = sub_0805D8F4();
    var_r5 = 0;
    if ((s32) (temp_r0 << 0x18) > 0) {
loop_2:
        if ((sub_0805D910(*arg1, &sp0) << 0x18) == 0) {
            temp_r3 = sp0;
            if (((temp_r7 & 0x307F) == (0x307F & temp_r3)) && !(temp_r7 & 0x3000) && ((u32) (0x7F & temp_r7) <= 0x1FU) && ((s32) ((0xF00 & temp_r3) + (temp_r7 & 0xF00)) <= 0x900)) {
                return 0;
            }
        }
        var_r5 += 1;
        *arg1 += 1;
        if (var_r5 >= (s32) (s8) temp_r0) {
            goto block_9;
        }
        goto loop_2;
    }
block_9:
    return 1;
}
