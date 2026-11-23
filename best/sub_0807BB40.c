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

M2C_UNK sub_0807BBC4(void *);                       /* extern */
M2C_UNK sub_0807BC1C(void *);                       /* extern */
M2C_UNK sub_0807BC84(void *);                       /* extern */
M2C_UNK sub_0807CFF8(void *);                       /* extern */

void sub_0807BB40(void *arg0) {
    s16 *var_r1;
    s16 *var_r2;
    s32 var_r0;
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x4D);
    switch (temp_r0) {                              /* irregular */
    case 0:
        sub_0807BBC4(arg0);
        return;
    case 4:
        sub_0807CFF8(arg0);
        return;
    case 1:
        sub_0807BC1C(arg0);
        return;
    case 3:
        sub_0807BC84(arg0);
        return;
    default:
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), u8 *, 0x3A) == 0) {
            M2C_FIELD(arg0, s8 *, 6) = (s8) M2C_FIELD(arg0, u16 *, 0xE6);
            M2C_FIELD(arg0, s8 *, 0x55) = 7;
            M2C_FIELD(arg0, u8 *, 0x4D) = (u8) (M2C_FIELD(arg0, u8 *, 0x4D) + 1);
            var_r2 = (s16 *)0x020213A2;
            var_r1 = (s16 *)0x020211A2;
            var_r0 = 0xE;
            do {
                *var_r1 = 0;
                *var_r2 = 0;
                var_r2 += 2;
                var_r1 += 2;
                var_r0 -= 1;
            } while (var_r0 >= 0);
        }
        return;
    }
}
