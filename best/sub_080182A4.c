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

M2C_UNK sub_080017EC(s32);                          /* extern */
M2C_UNK sub_08019DA0();                             /* extern */
s32 sub_08019FE0(M2C_UNK, s8);                      /* extern */

void sub_080182A4(void) {
    s32 var_r0_4;
    u16 var_r0;
    u16 var_r0_2;
    u16 var_r0_3;
    u16 var_r0_5;

    if (*(u8 *)0x03002B04 != 0) {
        if (0x80 & *(u8 *)0x03002B05) {
            var_r0 = M2C_FIELD((void *)0x03002AB0, u16 *, 6) - 2;
        } else {
            var_r0 = M2C_FIELD((void *)0x03002AB0, u16 *, 6) + 2;
        }
        M2C_FIELD((void *)0x03002AB0, u16 *, 6) = var_r0;
        sub_08019FE0(0x03002AB0, M2C_FIELD((void *)0x03002AB0, s8 *, 0x54));
    }
    if (*(u8 *)0x03002C28 != 0) {
        if (0x80 & *(u8 *)0x03002C29) {
            var_r0_2 = M2C_FIELD((void *)0x03002BD4, u16 *, 6) - 2;
        } else {
            var_r0_2 = M2C_FIELD((void *)0x03002BD4, u16 *, 6) + 2;
        }
        M2C_FIELD((void *)0x03002BD4, u16 *, 6) = var_r0_2;
        sub_08019FE0(0x03002BD4, M2C_FIELD((void *)0x03002BD4, s8 *, 0x54));
    }
    if (*(u8 *)0x03002D4C != 0) {
        if (0x80 & *(u8 *)0x03002D4D) {
            var_r0_3 = M2C_FIELD((void *)0x03002CF8, u16 *, 6) - 2;
        } else {
            var_r0_3 = M2C_FIELD((void *)0x03002CF8, u16 *, 6) + 2;
        }
        M2C_FIELD((void *)0x03002CF8, u16 *, 6) = var_r0_3;
        sub_08019FE0(0x03002CF8, M2C_FIELD((void *)0x03002CF8, s8 *, 0x54));
    }
    if (*(u8 *)0x03002E70 == 0) {
        var_r0_4 = 0;
    } else {
        if (0x80 & *(u8 *)0x03002E71) {
            var_r0_5 = M2C_FIELD((void *)0x03002E1C, u16 *, 6) - 2;
        } else {
            var_r0_5 = M2C_FIELD((void *)0x03002E1C, u16 *, 6) + 2;
        }
        M2C_FIELD((void *)0x03002E1C, u16 *, 6) = var_r0_5;
        var_r0_4 = sub_08019FE0(0x03002E1C, M2C_FIELD((void *)0x03002E1C, s8 *, 0x54));
    }
    if ((var_r0_4 << 0x18) == 0) {
        sub_080017EC(0xBA);
        *(u8 *)0x03002B68 &= 0x7B;
        sub_08019DA0();
    }
}
