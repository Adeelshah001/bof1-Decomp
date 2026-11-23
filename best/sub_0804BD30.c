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

M2C_UNK sub_080379D4(s32);                          /* extern */
M2C_UNK sub_08037C98(void *, s32);                  /* extern */
M2C_UNK sub_0803A8EC(void *);                       /* extern */
M2C_UNK sub_0803A974(void *);                       /* extern */

s32 sub_0804BD30(void *arg0) {
    s32 var_r2;
    u16 temp_r0;

    var_r2 = 0;
    if (2 & M2C_FIELD(arg0, u8 *, 0x3A)) {
        M2C_FIELD(arg0, u16 *, 2) = (u16) (((u32) (M2C_FIELD(arg0, s32 *, 0x10) & 0xFFFFFF) >> 8) + M2C_FIELD(arg0, u16 *, 2));
        M2C_FIELD(arg0, u16 *, 6) = (u16) (((u32) (M2C_FIELD(arg0, s32 *, 0x14) & 0xFFFFFF) >> 8) + M2C_FIELD(arg0, u16 *, 6));
        sub_08037C98(arg0, 0);
        if (!(0x80 & M2C_FIELD(arg0, u8 *, 0x3B))) {
            temp_r0 = M2C_FIELD(arg0, u16 *, 0x24);
            if (temp_r0 != 8) {
                if ((s32) temp_r0 <= 8) {
                    if (temp_r0 != 2) {

                    } else {
                        goto block_7;
                    }
                } else if (temp_r0 == 0xE) {
                    goto block_7;
                }
            } else {
block_7:
                if ((((s8) *(u8 *)0x03004861 != 6) || (0xF & *(u8 *)0x03003FA8)) && (M2C_FIELD(arg0, u8 *, 0x3B) != 0x2F)) {
                    sub_080379D4(0x1D);
                }
                M2C_FIELD(arg0, u16 *, 0x24) = 0U;
            }
        }
        if ((u32) (u8) (M2C_FIELD(arg0, u8 *, 0x3B) - 0x24) <= 1U) {
            sub_0803A974(arg0);
        } else {
            sub_0803A8EC(arg0);
        }
        var_r2 = 1;
    }
    return var_r2;
}
