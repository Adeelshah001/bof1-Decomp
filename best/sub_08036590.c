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

s32 sub_08036590(u16 arg1, u16 arg2, void **arg3) {
    s32 sp0;
    s16 var_r0;
    s32 temp_r1;
    u16 temp_r3;
    u16 temp_r4;
    u16 var_r0_2;
    u32 var_r2;
    u8 temp_r0;
    void *temp_r1_2;

    temp_r3 = arg1;
    temp_r4 = arg2;
    sp0 = 1;
    *(s16 *)0x0300089C = 0;
    temp_r1 = *(u8 *)0x03003FA4 ^ 0xA;
    var_r2 = ((s32) ((0 - temp_r1) | temp_r1) >> 0x1F) & 8;
    if (var_r2 <= 9U) {
        do {
            temp_r1_2 = (var_r2 * 0x90) + 0x03002510;
            if (M2C_FIELD(temp_r1_2, u8 *, 0x3A) != 0) {
                temp_r0 = M2C_FIELD(temp_r1_2, u8 *, 0x3F);
                switch (temp_r0) {                  /* irregular */
                case 1:
                    if ((temp_r3 == M2C_FIELD(temp_r1_2, u16 *, 0x46)) && (temp_r4 == M2C_FIELD(temp_r1_2, u16 *, 0x4A))) {
                        *arg3 = temp_r1_2;
                        sp0 = 0;
                        *(s16 *)0x0300089C = 0x10;
                    }
                    break;
                case 2:
                    if ((temp_r3 == M2C_FIELD(temp_r1_2, u16 *, 0x46)) && (temp_r4 == M2C_FIELD(temp_r1_2, u16 *, 0x4A))) {
                        *arg3 = temp_r1_2;
                        if (M2C_FIELD(temp_r1_2, u16 *, 0x2A) == 0x78) {
                            *(u8 *)0x03003F98 = M2C_FIELD(temp_r1_2, u8 *, 0x3B);
                            var_r0 = 0x12;
                            goto block_20;
                        }
                        if (*(u8 *)0x03002AEE == 6) {
                            *(s16 *)0x0300089C = 0x10;
                        } else {
                            var_r0 = 0x11;
block_20:
                            *(s16 *)0x0300089C = var_r0;
                        }
                        sp0 = 0;
                    }
                    break;
                case 4:
                    var_r0_2 = M2C_FIELD(temp_r1_2, u16 *, 0x4A);
block_25:
                    if (temp_r4 == var_r0_2) {
block_26:
                        if ((temp_r3 == M2C_FIELD(temp_r1_2, u16 *, 0x46)) || (temp_r3 == (M2C_FIELD(temp_r1_2, u16 *, 0x46) + 0x10))) {
                            *arg3 = temp_r1_2;
                            sp0 = 0;
                            *(s16 *)0x0300089C = 0x10;
                        }
                    }
                    break;
                case 3:
                    if (temp_r4 != M2C_FIELD(temp_r1_2, u16 *, 0x4A)) {
                        var_r0_2 = M2C_FIELD(temp_r1_2, u16 *, 0x4A) - 0x10;
                        goto block_25;
                    }
                    goto block_26;
                }
            }
            var_r2 = (u32) (u8) (var_r2 + 1);
        } while (var_r2 <= 9U);
    }
    return sp0;
}
