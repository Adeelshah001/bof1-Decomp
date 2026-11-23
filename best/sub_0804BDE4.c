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
M2C_UNK sub_0803A508(void *);                       /* extern */
M2C_UNK sub_0803A8EC(void *);                       /* extern */

s32 sub_0804BDE4(void *arg0) {
    s16 temp_r1;
    u16 temp_r0;
    void *temp_r2;

    if (2 & M2C_FIELD(arg0, u8 *, 0x3A)) {
        temp_r2 = arg0 + 0x84;
        M2C_FIELD(arg0, s32 *, 0x84) = (s32) (M2C_FIELD(arg0, s32 *, 0x84) + M2C_FIELD(arg0, s32 *, 0x10));
        M2C_FIELD(temp_r2, s32 *, 4) = (s32) (M2C_FIELD(temp_r2, s32 *, 4) + M2C_FIELD(arg0, s32 *, 0x14));
        if (M2C_FIELD(arg0, u8 *, 0xC8) == 0) {
            sub_08037C98(arg0, 0);
            if (!(0x80 & M2C_FIELD(arg0, u8 *, 0x3B))) {
                temp_r0 = M2C_FIELD(arg0, u16 *, 0x24);
                if (temp_r0 != 8) {
                    if ((s32) temp_r0 <= 8) {
                        if (temp_r0 != 2) {

                        } else {
                            goto block_8;
                        }
                    } else if (temp_r0 == 0xE) {
                        goto block_8;
                    }
                } else {
block_8:
                    if ((((s8) *(u8 *)0x03004861 != 6) || (0xF & *(u8 *)0x03003FA8)) && (M2C_FIELD(arg0, u8 *, 0x3B) != 0x2F)) {
                        sub_080379D4(0x1D);
                    }
                    M2C_FIELD(arg0, u16 *, 0x24) = 0U;
                }
            }
        }
        M2C_FIELD(arg0, s16 *, 2) = (s16) (M2C_FIELD((void *)0x030023E0, u16 *, 2) + M2C_FIELD(arg0, u16 *, 0x86));
        temp_r1 = M2C_FIELD(arg0, u16 *, 0x8A) + M2C_FIELD((void *)0x030023E0, u16 *, 6);
        M2C_FIELD(arg0, s16 *, 6) = temp_r1;
        M2C_FIELD(arg0, s16 *, 0x2C) = temp_r1;
        sub_0803A508(arg0);
        sub_0803A8EC(arg0);
        return 1;
    }
    return 0;
}
