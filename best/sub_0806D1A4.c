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

M2C_UNK sub_08073E44(void *);                       /* extern */
M2C_UNK sub_0807F76C();                             /* extern */
M2C_UNK sub_080803A8();                             /* extern */
M2C_UNK sub_080803E8(void *);                       /* extern */
M2C_UNK sub_080A0A4C(void *, s32);                  /* extern */

void sub_0806D1A4(void *arg0) {
    u8 temp_r0;
    void *temp_r1;
    void *var_r2;

    M2C_FIELD(arg0, u8 *, 8) = 0U;
    var_r2 = (void *)0x03002AB0;
    if (0x80 & *(u8 *)0x03002BA1) {
loop_2:
        temp_r0 = M2C_FIELD(arg0, u8 *, 8) + 1;
        M2C_FIELD(arg0, u8 *, 8) = temp_r0;
        if (temp_r0 != M2C_FIELD(arg0, u8 *, 0x60)) {
            var_r2 += 0x124;
            if (!(0x80 & M2C_FIELD(var_r2, u8 *, 0xF1))) {
                goto block_4;
            }
            goto loop_2;
        }
        sub_08073E44(arg0);
        return;
    }
block_4:
    M2C_FIELD(arg0, s8 *, 0x5B) = 0;
    if (M2C_FIELD(arg0, u8 *, 0x62) == 0xFF) {
        M2C_FIELD(arg0, u8 *, 0x62) = 0U;
    } else {
        sub_080803E8(arg0);
        sub_080803A8();
    }
    sub_080A0A4C(arg0 + 0x68, 0x10);
    temp_r1 = arg0 + 0x64;
    M2C_FIELD(arg0, s8 *, 0x64) = 1;
    M2C_FIELD(temp_r1, s8 *, 1) = 2;
    M2C_FIELD((temp_r1 + 1), s8 *, 1) = 3;
    M2C_FIELD(arg0, s8 *, 0x67) = 4;
    sub_080A0A4C(arg0 + 1, 0x5C);
    M2C_FIELD(arg0, s8 *, 1) = 4;
    sub_0807F76C();
}
