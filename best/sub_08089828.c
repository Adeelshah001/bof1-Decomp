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

M2C_UNK sub_080898C0();                             /* extern */
M2C_UNK sub_08089CBC(void *);                       /* extern */
M2C_UNK sub_08089CC4(void *);                       /* extern */
M2C_UNK sub_08089CCC(void *);                       /* extern */
M2C_UNK sub_08089D08(void *);                       /* extern */
M2C_UNK sub_08089D3C(void *);                       /* extern */
M2C_UNK sub_08089D94(void *);                       /* extern */

void sub_08089828(void *arg0) {
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r1;
    u8 temp_r1_2;

    temp_r1 = M2C_FIELD(arg0, u8 *, 0x50);
    switch (temp_r1) {                              /* irregular */
    case 1:
        sub_080898C0();
        return;
    case 2:
        sub_08089CCC(arg0);
        return;
    case 3:
        sub_08089D08(arg0);
        return;
    case 4:
        sub_08089D3C(arg0);
        return;
    case 5:
        sub_08089D94(arg0);
        return;
    default:
        temp_r0 = M2C_FIELD(arg0, u8 *, 0x55) - 1;
        M2C_FIELD(arg0, u8 *, 0x55) = temp_r0;
        temp_r1_2 = temp_r0;
        if (!(0x80 & temp_r1_2)) {
            if (temp_r1_2 == 0) {
                temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
                M2C_FIELD(arg0, u8 *, 0x54) = temp_r0_2;
                if (temp_r0_2 == 0) {
                    M2C_FIELD(arg0, u8 *, 0x54) = 0xFU;
                    M2C_FIELD(arg0, u8 *, 0x50) = (u8) (M2C_FIELD(arg0, u8 *, 0x50) + 1);
                }
                sub_08089CC4(arg0);
                return;
            }
        } else {
            M2C_FIELD(arg0, u8 *, 0x55) = (u8) M2C_FIELD(arg0, u8 *, 0x54);
            sub_08089CBC(arg0);
            return;
        }
        break;
    }
}
