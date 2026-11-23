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

M2C_UNK sub_08032A78(void *, s32);                  /* extern */
u8 sub_0803CEA0(u16, u8 *);                         /* extern */

s32 sub_0802F19C(void *arg0) {
    u8 sp0;
    u8 temp_r0;
    u8 temp_r1;
    u8 temp_r2;

    if (*(u8 *)0x030023DC != 1) {
        temp_r1 = sub_0803CEA0(*(u16 *)0x03002484, &sp0);
        temp_r2 = temp_r1;
        if (sp0 == 0) {
            temp_r0 = M2C_FIELD(arg0, u8 *, 0x51);
            if (temp_r0 != 0x22) {
                if (temp_r0 == 0x24) {
                    if (temp_r1 == 1) {
                        goto block_5;
                    }
                } else if (temp_r2 == 0) {
                    sub_08032A78(arg0, 0x801A);
                }
            } else {
block_5:
                sub_08032A78(arg0, 0x801A);
            }
        }
        M2C_FIELD(arg0, s8 *, 0x4C) = 2;
        M2C_FIELD(arg0, s8 *, 0x4D) = 0;
        M2C_FIELD((arg0 + 0x4D), s16 *, 3) = 0;
    }
    return 0;
}
