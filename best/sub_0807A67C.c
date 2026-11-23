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
M2C_UNK sub_0803800C(void *, s32, s32);             /* extern */
M2C_UNK sub_080835F8(void *, s32);                  /* extern */

void sub_0807A67C(void *arg0) {
    u8 temp_r6;
    void *temp_r0;

    temp_r6 = 0x80 & M2C_FIELD(arg0, u8 *, 0xE3);
    if (temp_r6 != 0) {
        sub_080379D4(0xD);
        M2C_FIELD(arg0, s8 *, 0x50) = 2;
        M2C_FIELD((arg0 + 0x50), s8 *, 4) = 0x10;
        M2C_FIELD(arg0, s8 *, 0x55) = 0;
        if (!(8 & M2C_FIELD((arg0 + 0x55), u8 *, 0x9B)) && !(4 & M2C_FIELD(arg0, u8 *, 0xDC))) {
            sub_0803800C(arg0, 0xE, 2);
        }
    } else {
        M2C_FIELD(arg0, u8 *, 0xE3) = 0x10U;
        sub_080835F8(arg0, 0x10);
        M2C_FIELD(arg0, s8 *, 0x50) = 2;
        temp_r0 = arg0 + 0x54;
        M2C_FIELD(arg0, s8 *, 0x54) = 0x10;
        M2C_FIELD(temp_r0, u8 *, 1) = temp_r6;
        if (!(8 & M2C_FIELD((temp_r0 + 1), u8 *, 0x9B)) && !(4 & M2C_FIELD(arg0, u8 *, 0xDC))) {
            sub_0803800C(arg0, 0xE, 2);
        }
    }
}
