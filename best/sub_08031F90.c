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

M2C_UNK sub_08037C98(void *, s32);                  /* extern */
M2C_UNK sub_0805561C(u8);                           /* extern */

void sub_08031F90(void *arg0) {
    u8 temp_r0;
    u8 temp_r5;
    void *temp_r0_2;

    sub_08037C98(arg0, 0);
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r0;
    temp_r5 = temp_r0;
    if (temp_r5 == 0) {
        temp_r0_2 = M2C_FIELD(arg0, void **, 0xA4);
        if (temp_r0_2 != NULL) {
            sub_0805561C(M2C_FIELD(temp_r0_2, u8 *, 0x5C));
        }
        M2C_FIELD(arg0, u8 *, 0x4D) = temp_r5;
        M2C_FIELD((arg0 + 0x4D), s16 *, 3) = (s16) temp_r5;
    }
}
