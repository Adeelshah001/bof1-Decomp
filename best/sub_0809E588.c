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

M2C_UNK _0809E53A();                                /* extern */
M2C_UNK sub_0809E52C();                             /* extern */

void sub_0809E588(void *arg1) {
    u8 *temp_r2;
    void *temp_r1;

    temp_r2 = M2C_FIELD(arg1, u8 **, 0x40);
    if (*temp_r2 == 0) {
        M2C_FIELD(arg1, u8 **, 0x40) = (u8 *) (temp_r2 + 1);
        _0809E53A();
        return;
    }
    M2C_FIELD(arg1, u8 *, 3) = (u8) (M2C_FIELD(arg1, u8 *, 3) + 1);
    temp_r1 = SECOND_REG(sub_0809E52C());
    if ((u32) M2C_ERROR(/* Read from unset register $r12 */) < (u32) M2C_ERROR(/* Read from unset register $r3 */)) {
        _0809E53A();
        return;
    }
    M2C_FIELD(temp_r1, s8 *, 3) = 0;
    M2C_FIELD(temp_r1, s32 *, 0x40) = (s32) (M2C_ERROR(/* Read from unset register $r2 */) + 5);
}
