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

M2C_UNK sub_0803A8EC(void *);                       /* extern */
M2C_UNK sub_08077CC0(void *);                       /* extern */
M2C_UNK sub_08077D64(void *);                       /* extern */
M2C_UNK sub_0807B36C(void *);                       /* extern */
M2C_UNK sub_080839DC(void *);                       /* extern */
M2C_UNK sub_08083A4C();                             /* extern */

void sub_08077DD8(void *arg0) {
    u8 temp_r2;
    u8 temp_r3;

    temp_r2 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r2;
    temp_r3 = temp_r2 & 0x80;
    if (temp_r3 == 0) {
        if (temp_r2 & 1) {
            if (0x80 & M2C_FIELD(arg0, u8 *, 0xF1)) {
                M2C_FIELD(arg0, u8 *, 0x2C) = temp_r3;
            } else {
                M2C_FIELD(arg0, u8 *, 0x2C) = (s16) (M2C_FIELD(arg0, u16 *, 6) + 0x18);
            }
            if ((u32) (u16) (*(u16 *)0x03001864 - 0x10) > 1U) {
                sub_0803A8EC(arg0);
            }
        }
    } else {
        M2C_FIELD(arg0, s8 *, 0x50) = 6;
        if (!(8 & M2C_FIELD(arg0, u8 *, 0xF0))) {
            sub_0807B36C(arg0);
            sub_080839DC(arg0);
            sub_08083A4C();
            sub_08077D64(arg0);
            return;
        }
        sub_08077CC0(arg0);
    }
}
