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

M2C_UNK sub_080324E4(void *);                       /* extern */

void sub_0803DE7C(void *arg0) {
    s32 var_r0;
    s32 var_r0_2;
    u16 temp_r0;
    u16 temp_r1;

    temp_r1 = *(u16 *)0x03002484;
    if (temp_r1 != 0) {
        if (((s32) temp_r1 >= 0) && ((s32) temp_r1 <= 0x113) && ((s32) temp_r1 >= 0x111)) {
            if ((M2C_FIELD(arg0, u8 *, 0x3E) == 0xC) && (M2C_FIELD(arg0, u16 *, 0xF6) != 0)) {
                var_r0 = M2C_FIELD(arg0, u16 *, 0xF6) - 1;
                if (var_r0 < 1) {
                    var_r0 = 1;
                }
                M2C_FIELD(arg0, u16 *, 0xF6) = (u16) var_r0;
                goto block_16;
            }
            goto block_17;
        }
        sub_080324E4(arg0);
        return;
    }
    if (!(0x40 & *(u8 *)0x03002B68) && (M2C_FIELD(arg0, u8 *, 0x3E) == 0xD)) {
        temp_r0 = M2C_FIELD(arg0, u16 *, 0xF6);
        if (temp_r0 != 0) {
            var_r0_2 = temp_r0 - 1;
            if (var_r0_2 < 1) {
                var_r0_2 = 1;
            }
            M2C_FIELD(arg0, u16 *, 0xF6) = (u16) var_r0_2;
block_16:
            *(u8 *)0x03002B72 += 1;
        }
    }
block_17:
    sub_080324E4(arg0);
}
