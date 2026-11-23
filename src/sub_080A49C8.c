/* machine draft (m2c) for agbcc -O2, tried by autopilot */
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

s32 sub_080A484C(s32);                              /* extern */

s32 sub_080A49C8(s32 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;

    *(s32 *)0x030051C0 = 0;
    temp_r0 = sub_080A484C(arg1);
    if (temp_r0 == -1) {
        temp_r0_2 = *(s32 *)0x030051C0;
        if (temp_r0_2 != 0) {
            *arg0 = temp_r0_2;
        }
    }
    return temp_r0;
}
