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

M2C_UNK sub_080331A0(void *);                       /* extern */
M2C_UNK sub_0803324C(void *);                       /* extern */
M2C_UNK sub_08033D14(void *);                       /* extern */
M2C_UNK sub_08083B38(void *, s32);                  /* extern */

void sub_0806CB98(void) {
    s32 temp_r2;
    s32 var_r10;
    u8 temp_r0;
    u8 temp_r1;
    u8 var_r0;
    void *var_r5;
    void *var_r8;

    var_r5 = (void *)0x03002AB0;
    var_r10 = 7;
    var_r8 = (void *)0x03002AEA;
    do {
        if (M2C_FIELD(var_r8, u8 *, 0) != 0) {
            temp_r1 = 0xCF & M2C_FIELD(var_r5, u8 *, 0xF0);
            M2C_FIELD(var_r5, u8 *, 0xF0) = temp_r1;
            temp_r2 = 0xF0 & *(u8 *)0x0202DE88;
            if (temp_r2 != 0) {
                temp_r0 = M2C_FIELD(var_r8, u8 *, 2);
                switch (temp_r0) {                  /* irregular */
                case 5:
                    M2C_FIELD(var_r5, u8 *, 0xF0) = (u8) (temp_r1 | 0x20);
                    sub_0803324C(var_r5);
                    sub_08033D14(var_r5);
                    sub_080331A0(var_r5);
                    if (M2C_FIELD((void *)0x03004F30, u8 *, 0xA) != 0) {
                        sub_08083B38(var_r5, 0xF0 & *(u8 *)0x0202DE88);
                        M2C_FIELD((void *)0x03004F30, u8 *, 0xA) = 0U;
                    }
                    break;
                case 1:
                    if (temp_r2 != 0x20) {
                        var_r0 = temp_r1 | 0x10;
block_17:
                        M2C_FIELD(var_r5, u8 *, 0xF0) = var_r0;
                    }
                    break;
                case 3:
                    if (temp_r2 != 0x10) {
                        var_r0 = temp_r1 | 0x10;
                        goto block_17;
                    }
                    break;
                case 4:
                    if (temp_r2 != 0x30) {
                        var_r0 = temp_r1 | 0x10;
                        goto block_17;
                    }
                    break;
                }
            }
        }
        var_r8 += 0x124;
        var_r5 += 0x124;
        var_r10 -= 1;
    } while (var_r10 >= 0);
}
