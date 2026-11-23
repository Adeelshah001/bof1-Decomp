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

s32 sub_08001770(s32);                              /* extern */
M2C_UNK sub_08006FFC();                             /* extern */
M2C_UNK sub_0800B094(s32);                          /* extern */

void sub_08006F70(void) {
    s32 temp_r0;
    s32 temp_r0_2;
    u16 temp_r3;
    u32 var_r1;
    u32 var_r1_2;

    if ((sub_08001770(0x3B) << 0x18) != 0) {
        *(s16 *)0x03004114 = 0;
        return;
    }
    if (1 & *(u8 *)0x0300485D) {
        sub_08006FFC();
        return;
    }
    temp_r3 = M2C_FIELD((void *)0x03002AB0, u16 *, 2);
    var_r1 = 1;
    if (temp_r3 == 0x948) {
        temp_r0 = M2C_FIELD((void *)0x03002AB0, u16 *, 6) ^ 0x312C;
        var_r1 = (u32) ((0 - temp_r0) | temp_r0) >> 0x1F;
    }
    if (var_r1 != 0) {
        var_r1_2 = 1;
        if (temp_r3 == 0x948) {
            temp_r0_2 = M2C_FIELD((void *)0x03002AB0, u16 *, 6) ^ 0x313C;
            var_r1_2 = (u32) ((0 - temp_r0_2) | temp_r0_2) >> 0x1F;
        }
        if (var_r1_2 == 0) {
            goto block_10;
        }
        sub_08006FFC();
        return;
    }
block_10:
    sub_0800B094(1);
}
