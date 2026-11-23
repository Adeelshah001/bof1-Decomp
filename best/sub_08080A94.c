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

M2C_UNK sub_08071F60();                             /* extern */
M2C_UNK sub_08073594(void *, s32);                  /* extern */
M2C_UNK sub_080735A0(void *, s32);                  /* extern */

void sub_08080A94(void *arg0, void *arg1) {
    void *temp_r1;

    if (M2C_FIELD(arg1, u8 *, 0x4C) != 6) {
        M2C_FIELD(arg1, u8 *, 0x4C) = 6U;
    }
    temp_r1 = arg0 + 0x39;
    M2C_FIELD(arg0, s8 *, 0x39) = 0;
    M2C_FIELD(temp_r1, s8 *, 1) = 0;
    M2C_FIELD((temp_r1 + 1), s8 *, 1) = 0;
    M2C_FIELD(arg1, s8 *, 0x4D) = 0;
    M2C_FIELD((arg1 + 0x4D), s8 *, 3) = 0;
    M2C_FIELD(arg0, s16 *, 0x40) = 0;
    M2C_FIELD(arg1, s16 *, 0xF6) = 0;
    if (((u32) arg1 < 0x03003420U) || ((u32) arg1 >= 0x03003F88U)) {
        M2C_FIELD(arg1, s8 *, 0xF1) = 0x80;
    }
    if (((u32) arg1 >= 0x03003420U) && ((u32) arg1 < 0x03003F88U)) {
        sub_080735A0(arg1, -1);
    } else {
        sub_08073594(arg1, -1);
    }
    sub_08071F60();
}
