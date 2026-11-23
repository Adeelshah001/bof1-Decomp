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

M2C_UNK sub_0805AE70(u32, u32, s32);                /* extern */
M2C_UNK sub_0806A428(void *, u16);                  /* extern */
M2C_UNK sub_0806A56C(void *, u16);                  /* extern */

void sub_0806A3A4(void *arg0, u16 arg1) {
    s32 var_r5;
    u16 temp_r2_2;
    u16 var_r3;
    u8 temp_r2;

    var_r3 = arg1;
    temp_r2 = *(u8 *)0x030045A0;
    *(u8 *)0x030045A0 = (s16) temp_r2;
    if (0x10 & temp_r2) {
        var_r5 = 0x100;
        goto block_4;
    }
    if (0x60 & temp_r2) {
        var_r5 = 0x200;
block_4:
        *(u8 *)0x030045A0 = (s16) (temp_r2 | var_r5);
    }
    temp_r2_2 = (u16) *(u8 *)0x030045A0;
    if (0xB8 & temp_r2_2) {
        if (0x80 & M2C_FIELD(arg0, u8 *, 0xF1)) {
            if (*(u8 *)0x0300457C == 0) {
                var_r3 -= 6;
            }
            sub_0805AE70(var_r3 >> 1, temp_r2_2 >> 8, 0x081507C6);
            return;
        }
        sub_0806A428(arg0, var_r3);
        return;
    }
    sub_0806A56C(arg0, var_r3);
}
