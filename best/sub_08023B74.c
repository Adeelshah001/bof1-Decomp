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

M2C_UNK sub_080273F8(s32, s32);                     /* extern */

s32 sub_08023B74(s32 arg0, u16 arg1, u16 arg2) {
    s32 var_r1;
    u16 temp_r1;
    u16 temp_r2;

    temp_r1 = arg1;
    temp_r2 = arg2;
    switch (temp_r2) {                              /* switch 1; irregular */
    case 0x617C:                                    /* switch 1 */
        switch (temp_r1) {                          /* switch 2; irregular */
        case 0x1C68:                                /* switch 2 */
        case 0x1C78:                                /* switch 2 */
            var_r1 = 0;
block_30:
            sub_080273F8(arg0, var_r1);
            break;
        case 0x1D68:                                /* switch 2 */
        case 0x1D78:                                /* switch 2 */
            var_r1 = 1;
            goto block_30;
        case 0x1E68:                                /* switch 2 */
        case 0x1E78:                                /* switch 2 */
            var_r1 = 2;
            goto block_30;
        }
        break;
    case 0x627C:                                    /* switch 1 */
        switch (temp_r1) {                          /* switch 3; irregular */
        case 0x1C68:                                /* switch 3 */
        case 0x1C78:                                /* switch 3 */
            var_r1 = 3;
            goto block_30;
        case 0x1E68:                                /* switch 3 */
        case 0x1E78:                                /* switch 3 */
            var_r1 = 4;
            goto block_30;
        }
        break;
    case 0x637C:                                    /* switch 1 */
        switch (temp_r1) {                          /* switch 4; irregular */
        case 0x1C68:                                /* switch 4 */
        case 0x1C78:                                /* switch 4 */
            var_r1 = 5;
            goto block_30;
        case 0x1D68:                                /* switch 4 */
        case 0x1D78:                                /* switch 4 */
            var_r1 = 6;
            goto block_30;
        case 0x1E68:                                /* switch 4 */
        case 0x1E78:                                /* switch 4 */
            var_r1 = 7;
            goto block_30;
        }
        break;
    }
    return 0;
}
