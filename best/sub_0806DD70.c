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

M2C_UNK sub_0806DDFC(void *, void *);               /* extern */
M2C_UNK sub_08074124();                             /* extern */
M2C_UNK sub_080741A8(void *);                       /* extern */
M2C_UNK sub_0807F9C0(void *, void *);               /* extern */

void sub_0806DD70(void *arg0, u8 arg1) {
    u8 temp_r1;
    void *temp_r4;

    temp_r1 = arg1;
    if ((u32) temp_r1 <= 3U) {
        sub_08074124();
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0) == 3) {
        M2C_FIELD(arg0, s8 *, 2) = 0xC;
        return;
    }
    temp_r4 = ((u8) (temp_r1 - 4) * 0x124) + 0x03003420;
    M2C_FIELD(arg0, void **, 0x4C) = temp_r4;
    if ((M2C_FIELD(temp_r4, u8 *, 0x3A) == 0) || (M2C_FIELD(temp_r4, u8 *, 0xF1) & 0x80) || (((M2C_FIELD(temp_r4, u8 *, 0xDD) << 8) | M2C_FIELD(temp_r4, u8 *, 0xDC)) & 0x240)) {
        sub_080741A8(arg0);
        return;
    }
    sub_0807F9C0(arg0, temp_r4);
    sub_0806DDFC(arg0, temp_r4);
}
