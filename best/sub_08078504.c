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

M2C_UNK sub_08077498(void *);                       /* extern */
M2C_UNK sub_08077518(void *);                       /* extern */
M2C_UNK sub_0807764C(void *);                       /* extern */
M2C_UNK sub_08077794(void *, s32);                  /* extern */
M2C_UNK sub_08077938(void *);                       /* extern */
M2C_UNK sub_08077998(void *);                       /* extern */
M2C_UNK sub_08078124(void *);                       /* extern */
M2C_UNK sub_08078420(void *);                       /* extern */

void sub_08078504(void *arg0) {
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x3C);
    switch (temp_r0) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        sub_08078124(arg0);
        return;
    case 5:                                         /* switch 1 */
        sub_08078420(arg0);
        return;
    case 6:                                         /* switch 1 */
        temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x50);
        switch (temp_r0_2) {                        /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            sub_08077938(arg0);
            return;
        case 2:                                     /* switch 2 */
            sub_08077998(arg0);
            return;
        }
        break;
    default:                                        /* switch 1 */
        temp_r0_3 = M2C_FIELD(arg0, u8 *, 0x50);
        switch (temp_r0_3) {                        /* switch 3; irregular */
        case 0:                                     /* switch 3 */
            sub_08077794(arg0, 2);
            return;
        case 2:                                     /* switch 3 */
            sub_08077498(arg0);
            return;
        case 4:                                     /* switch 3 */
            M2C_FIELD(arg0, u8 *, 0x50) = 6U;
            sub_08077518(arg0);
            return;
        case 6:                                     /* switch 3 */
            sub_0807764C(arg0);
            return;
        }
        break;
    }
}
