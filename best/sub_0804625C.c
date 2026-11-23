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
M2C_UNK sub_0803A8EC(void *);                       /* extern */
u8 sub_080A098C(u8, s32);                           /* extern */

void sub_0804625C(void *arg0) {
    u16 var_r0;
    u8 temp_r0;
    void *temp_r1;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x8C);
    switch (temp_r0) {                              /* irregular */
    case 1:
        M2C_FIELD(arg0, u16 *, 6) = (u16) (M2C_FIELD(arg0, u16 *, 6) + 1);
        M2C_FIELD(arg0, u8 *, 0x8C) = (u8) (M2C_FIELD(arg0, u8 *, 0x8C) + 1);
        break;
    case 2:
        M2C_FIELD(arg0, u16 *, 6) = (u16) (M2C_FIELD(arg0, u16 *, 6) - 1);
        M2C_FIELD(arg0, u8 *, 0x8C) = (u8) (M2C_FIELD(arg0, u8 *, 0x8C) + 1);
        sub_080379D4(0x12);
        break;
    default:
        M2C_FIELD(arg0, u8 *, 0x8C) = (u8) (temp_r0 + 1);
        M2C_FIELD(arg0, u8 *, 0x8C) = sub_080A098C(M2C_FIELD(arg0, u8 *, 0x8C), 6);
        break;
    case 0:
        if ((0xF & M2C_FIELD(arg0, u8 *, 0x3B)) == 3) {
            var_r0 = M2C_FIELD(arg0, u16 *, 2) - 1;
        } else {
            var_r0 = M2C_FIELD(arg0, u16 *, 2) + 1;
        }
        M2C_FIELD(arg0, u16 *, 2) = var_r0;
        temp_r1 = arg0 + 0x54;
        M2C_FIELD(arg0, u8 *, 0x54) = (u8) (M2C_FIELD(arg0, u8 *, 0x54) + 1);
        M2C_FIELD(temp_r1, u8 *, 0x38) = (u8) (M2C_FIELD(temp_r1, u8 *, 0x38) + 1);
        break;
    }
    sub_0803A8EC(arg0);
}
