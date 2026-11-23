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

M2C_UNK sub_0805B39C(s32);                          /* extern */
M2C_UNK sub_0805B3C4(s32, s32);                     /* extern */
s32 sub_080659B8(void *, s32);                      /* extern */
M2C_UNK sub_08065A6C(void *, s32);                  /* extern */
M2C_UNK sub_08065B34();                             /* extern */

s32 sub_08065BC8(void *arg0, s32 arg1, u16 arg2, u16 arg3) {
    s32 var_r4;
    s32 var_r5;
    u8 temp_r0;
    void *temp_r1;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x3C);
    switch (temp_r0) {                              /* switch 1; irregular */
    case 7:                                         /* switch 1 */
        switch (arg1) {                             /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            return sub_080659B8(arg0, 0);
        case 8:                                     /* switch 2 */
            sub_08065A6C(arg0, 8);
            /* fallthrough */
        default:                                    /* switch 2 */
            return 0;
        }
        break;
    case 1:                                         /* switch 1 */
    case 3:                                         /* switch 1 */
        sub_08065B34();
block_19:
        return 0;
    default:                                        /* switch 1 */
        if (arg1 == 0x14) {
            sub_08065B34();
            sub_0805B39C(3);
            var_r4 = 0;
            var_r5 = 0;
            do {
                temp_r1 = var_r5 + 0x03002AB0;
                if ((M2C_FIELD(temp_r1, u8 *, 0x3A) != 0) && !(0x40 & M2C_FIELD(temp_r1, u8 *, 0xF0))) {
                    sub_0805B3C4(3, var_r4);
                }
                var_r5 += 0x124;
                var_r4 += 1;
            } while (var_r4 <= 7);
            M2C_FIELD((void *)0x03004620, s8 *, 3) = 0xC;
        } else if (arg1 == 8) {
            sub_08065A6C(arg0, 8);
        } else {
            sub_08065B34();
        }
        goto block_19;
    }
}
