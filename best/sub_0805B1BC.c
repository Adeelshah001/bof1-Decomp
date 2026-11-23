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

void sub_0805B1BC(void) {
    u16 temp_r0;
    u16 temp_r0_2;
    u16 temp_r0_3;
    u16 var_r0;

    temp_r0 = M2C_FIELD((void *)0x03000AE0, u16 *, 2);
    if (temp_r0 == 1) {
        temp_r0_2 = M2C_FIELD((void *)0x03000AE0, u16 *, 0) + 1;
        M2C_FIELD((void *)0x03000AE0, u16 *, 0) = temp_r0_2;
        if ((s16) temp_r0_2 == 6) {
            var_r0 = 3;
            goto block_6;
        }
    } else if (temp_r0 == 2) {
        temp_r0_3 = M2C_FIELD((void *)0x03000AE0, u16 *, 0) - 1;
        M2C_FIELD((void *)0x03000AE0, u16 *, 0) = temp_r0_3;
        if ((s32) (temp_r0_3 << 0x10) < 0) {
            var_r0 = 0;
block_6:
            M2C_FIELD((void *)0x03000AE0, u16 *, 2) = var_r0;
        }
    }
}
