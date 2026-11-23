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

M2C_UNK sub_080A0770(s32);                          /* extern */

void sub_08023DE4(void) {
    u16 *var_r1;
    u16 var_r0;

    var_r1 = (u16 *)0x080F90D8;
    var_r0 = *(u16 *)0x080F90D8;
    if (var_r0 != 0x8000) {
loop_2:
        if (var_r0 == *(u16 *)0x03002484) {
            sub_080A0770(M2C_FIELD(var_r1, s32 *, 4));
            return;
        }
        var_r1 += 8;
        var_r0 = *var_r1;
        if (var_r0 == 0x8000) {

        } else {
            goto loop_2;
        }
    }
}
