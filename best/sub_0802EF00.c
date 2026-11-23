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

M2C_UNK sub_08032AB0(u8);                           /* extern */

s32 sub_0802EF00(void *arg0) {
    u8 temp_r0;
    u8 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r0;
    if ((temp_r0 << 0x18) == 0) {
        M2C_FIELD(arg0, u8 *, 0x54) = 4U;
        temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x55) + 1;
        M2C_FIELD(arg0, u8 *, 0x55) = temp_r0_2;
        if (temp_r0_2 != 0x20) {
            sub_08032AB0(M2C_FIELD(arg0, u8 *, 0x55));
            *(s8 *)0x030043DC = 1;
        } else {
            M2C_FIELD(arg0, s8 *, 0x4D) = 4;
            M2C_FIELD(arg0, u8 *, 0x54) = 4U;
        }
    }
    return 0;
}
