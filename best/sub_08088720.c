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

M2C_UNK sub_0807B248(void *);                       /* extern */
M2C_UNK sub_0807C484(void *);                       /* extern */

void sub_08088720(void *arg0) {
    s8 var_r1;

    if (!(4 & M2C_FIELD(arg0, u8 *, 0xF1)) && (M2C_FIELD(arg0, u8 *, 0xE0) == 0xA)) {
        var_r1 = 8;
        if (M2C_FIELD(arg0, u8 *, 0xE1) == 1) {
            var_r1 = 6;
        }
    } else {
        sub_0807C484(arg0);
        var_r1 = 4;
    }
    M2C_FIELD(arg0, s8 *, 0x4D) = var_r1;
    sub_0807B248(arg0);
}
