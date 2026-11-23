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

M2C_UNK sub_0800041C(u8);                           /* extern */
M2C_UNK sub_08002DB4();                             /* extern */

s32 sub_0805820C(s32 arg0) {
    s8 *var_r1;
    s8 temp_r1;
    s8 var_r0;
    u8 temp_r0;
    void *temp_r1_2;
    void *temp_r4;

    temp_r4 = (M2C_FIELD((void *)0x030016E0, u8 *, 1) * 0xC) + ((void *)0x030016E0 + 0xB);
    if (M2C_FIELD(temp_r4, s8 *, 1) == -1) {
        temp_r1 = M2C_FIELD(temp_r4, s8 *, 0);
        if (temp_r1 == 0) {
            *(s8 *)0x030023DC = temp_r1;
            var_r1 = (s8 *)0x030043DC;
            var_r0 = 1;
            goto block_6;
        }
    }
    if ((M2C_FIELD(temp_r4, s8 *, 1) == 1) && (M2C_FIELD(temp_r4, s8 *, 0) == 0x11)) {
        var_r1 = (s8 *)0x030023DC;
        var_r0 = 0;
block_6:
        *var_r1 = var_r0;
        return 0;
    }
    *(s16 *)0x03001644 = (s16) M2C_FIELD(temp_r4, s8 *, 0);
    if ((*(u8 *)0x030040EC != 0) && ((s8) *(u8 *)0x03004861 != 6)) {
        sub_08002DB4();
    }
    temp_r1_2 = (M2C_FIELD((void *)0x030016E0, u8 *, 1) * 0xC) + ((void *)0x030016E0 + 8);
    temp_r0 = M2C_FIELD(temp_r1_2, u8 *, 2);
    if (temp_r0 == 0) {
        M2C_FIELD(temp_r4, s8 *, 0) = (s8) ((u8) M2C_FIELD(temp_r4, s8 *, 1) + (u8) M2C_FIELD(temp_r4, s8 *, 0));
        sub_0800041C(M2C_FIELD(temp_r4, u8 *, 2));
    } else {
        M2C_FIELD(temp_r1_2, u8 *, 2) = (u8) (temp_r0 - 1);
    }
    return arg0;
}
