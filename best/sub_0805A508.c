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

M2C_UNK sub_0805A110();                             /* extern */
M2C_UNK sub_0805A188(u8, void *);                   /* extern */
s32 sub_080A07AC(u8, s32);                          /* extern */

s32 sub_0805A508(void) {
    s32 temp_r4;
    s32 var_r0;
    u8 *temp_r0_2;
    u8 *temp_r0_3;
    u8 *temp_r0_4;
    u8 temp_r0;
    u8 temp_r1;
    u8 temp_r3;
    u8 var_r2;
    void *var_r1;

    sub_0805A110();
    temp_r3 = M2C_FIELD((void *)0x03004550, u8 *, 0x1D);
    if (2 & temp_r3) {
        temp_r0 = M2C_FIELD((void *)0x03004550, u8 *, 0x21) - 1;
        M2C_FIELD((void *)0x03004550, u8 *, 0x21) = temp_r0;
        if ((s32) (temp_r0 << 0x18) < 0) {
            goto block_2;
        }
        temp_r0_2 = M2C_FIELD((void *)0x03004550, u8 **, 0xC);
        var_r2 = *temp_r0_2;
        if (var_r2 != 0) {
            M2C_FIELD((void *)0x03004550, u8 **, 0xC) = (u8 *) (temp_r0_2 + 1);
            if (var_r2 == 3) {
                temp_r4 = M2C_FIELD((void *)0x03000AE0, s32 *, 0x18);
                *(u8 *)0x03000B08 = sub_080A07AC(*(u8 *)0x03000B08, temp_r4) + 1;
                temp_r1 = *(u8 *)0x03000B08 * temp_r4;
                *(u8 *)0x03000B08 = temp_r1;
                if (*M2C_FIELD((void *)0x03004550, u8 **, 0) != 0xEB) {
                    *(u8 *)0x03000B08 = temp_r1 + 1;
                }
            } else {
                var_r1 = (void *)0x03004550 + 0xC;
                goto block_13;
            }
        } else {
block_2:
            var_r0 = 0xFD;
            goto block_3;
        }
    } else if (1 & temp_r3) {
        temp_r0_3 = M2C_FIELD((void *)0x03004550, u8 **, 4);
        var_r2 = *temp_r0_3;
        if (var_r2 == 0) {
            var_r0 = 0xFE;
block_3:
            M2C_FIELD((void *)0x03004550, u8 *, 0x1D) = (u8) (var_r0 & temp_r3);
        } else {
            M2C_FIELD((void *)0x03004550, u8 **, 4) = (u8 *) (temp_r0_3 + 1);
            var_r1 = (void *)0x03004550 + 4;
block_13:
            sub_0805A188(var_r2, var_r1);
        }
    } else {
        temp_r0_4 = M2C_FIELD((void *)0x03004550, u8 **, 0);
        M2C_FIELD((void *)0x03004550, u8 **, 0) = (u8 *) (temp_r0_4 + 1);
        sub_0805A188(*temp_r0_4, (void *)0x03004550);
    }
    return 0;
}
