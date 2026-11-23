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

s32 sub_08003104();                                 /* extern */
u8 sub_08036C04(s32, u16, u16);                     /* extern */
M2C_UNK sub_0803AF58(s32, s32);                     /* extern */
M2C_UNK sub_080471BC(u8, M2C_UNK *, void *);        /* extern */
M2C_UNK sub_08047200(s32, u16, u16);                /* extern */

void sub_08047000(void) {
    M2C_UNK sp0;
    s32 var_r8;
    u32 temp_r4;
    u8 temp_r0;
    u8 var_r4;
    u8 var_r7;

    var_r8 = 1;
    temp_r4 = 0x3F & sub_08003104();
    if (temp_r4 == 0) {
        var_r8 = 0;
        sub_0803AF58(0x149, 0xFFFF);
        goto block_4;
    }
    if (temp_r4 > 0x30U) {
        sub_0803AF58(0x142, 0xFFFF);
block_4:
        var_r4 = (7 & sub_08003104()) * 4;
        if (var_r8 != 0) {
            var_r4 |= 3 & sub_08003104();
        }
        var_r7 = 0;
loop_7:
        sub_080471BC(var_r4, &sp0, &sp0 + 2);
        temp_r0 = sub_08036C04(0x030023E0, M2C_FIELD(&sp0, u16 *, 0), M2C_FIELD(&sp0, u16 *, 2));
        if (((temp_r0 != 6) && (temp_r0 != 0)) || (sub_08047200(var_r8, M2C_FIELD(&sp0, u16 *, 0), M2C_FIELD(&sp0, u16 *, 2)), (var_r8 != 0))) {
            var_r4 += 1;
            var_r7 += 1;
            if ((u32) var_r7 <= 3U) {
                goto loop_7;
            }
        }
    }
}
