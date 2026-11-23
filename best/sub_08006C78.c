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
M2C_UNK sub_08006BD4();                             /* extern */

void sub_08006C78(void) {
    s32 temp_r0;
    u32 var_r2;

    if ((sub_08001770(0x35) << 0x18) == 0) {
        var_r2 = 1;
        if (M2C_FIELD((void *)0x03002AB0, u16 *, 2) == 0x1198) {
            temp_r0 = M2C_FIELD((void *)0x03002AB0, u16 *, 6) ^ 0x4BDC;
            var_r2 = (u32) ((0 - temp_r0) | temp_r0) >> 0x1F;
        }
        if (var_r2 != 0) {
            goto block_4;
        }
        *(s8 *)0x0300485A = 0xB;
        *(s8 *)0x0300485B = (s8) var_r2;
        M2C_FIELD((void *)0x03002AB0, u8 *, 0xB8) = (u8) (4 | M2C_FIELD((void *)0x03002AB0, u8 *, 0xB8));
        M2C_FIELD((void *)0x03002AB0, s8 *, 0x4D) = (s8) var_r2;
        M2C_FIELD(((void *)0x03002AB0 + 0x4D), s8 *, 3) = (s8) var_r2;
        *(s16 *)0x03004114 = 1;
        return;
    }
block_4:
    sub_08006BD4();
}
