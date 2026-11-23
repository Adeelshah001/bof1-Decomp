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

M2C_UNK sub_08001F80(s32, s32, s32);                /* extern */
M2C_UNK sub_0800312C(s32, s32);                     /* extern */
M2C_UNK sub_0803D3B8(u8);                           /* extern */
M2C_UNK sub_08059D68(u16);                          /* extern */
M2C_UNK sub_0805B180();                             /* extern */
M2C_UNK sub_0805B4CC();                             /* extern */

s32 sub_0805EEAC(void) {
    s32 var_r5;
    u16 temp_r1;
    u32 temp_r0;

    var_r5 = 0;
    if (!(0x8000 & M2C_FIELD((void *)0x030045B0, u16 *, 0x34))) {
        temp_r1 = M2C_FIELD((void *)0x030045B0, u16 *, 0x34);
        temp_r0 = M2C_FIELD((void *)0x0202DBD0, u32 *, 0x20);
        if (temp_r0 >= (u32) temp_r1) {
            M2C_FIELD((void *)0x0202DBD0, u32 *, 0x20) = (u32) (temp_r0 - temp_r1);
        } else {
            sub_0805B4CC();
            M2C_FIELD((void *)0x030045B0, u16 *, 0x38) = 0x871DU;
            var_r5 = 1;
        }
    }
    if ((var_r5 == 0) && !(0x80 & *(u8 *)0x030045E6)) {
        sub_0803D3B8(*(u8 *)0x030045E6);
    }
    if (var_r5 != 1) {
        sub_0805B4CC();
        sub_0800312C(0x10, 0xE);
        sub_08001F80(0, 0, 0);
    }
    M2C_FIELD((void *)0x03004620, u8 *, 3) = (u8) (M2C_FIELD((void *)0x03004620, u8 *, 3) + 2);
    M2C_FIELD((void *)0x03004760, u8 *, 0x1B) = (u8) (M2C_FIELD((void *)0x03004760, u8 *, 0x1B) + 1);
    sub_08059D68(M2C_FIELD((void *)0x030045B0, u16 *, 0x38));
    sub_0805B180();
    return 0;
}
