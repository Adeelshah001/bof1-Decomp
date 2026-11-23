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
M2C_UNK sub_0806DF40(void *);                       /* extern */
M2C_UNK sub_080741A8(void *);                       /* extern */

void sub_08074124(void *arg0, u8 arg1) {
    void *temp_r4;

    temp_r4 = (arg1 * 0x124) + 0x03002AB0;
    M2C_FIELD(arg0, void **, 0x4C) = temp_r4;
    if (M2C_FIELD(temp_r4, u8 *, 0xF0) & 0x10) {
        sub_080741A8(arg0);
        return;
    }
    if (!(M2C_FIELD(temp_r4, u8 *, 0xF1) & 0x80)) {
        if (M2C_FIELD(temp_r4, u8 *, 0xE0) == 0) {
            sub_0806DF40(temp_r4);
        }
        if (!(((M2C_FIELD(temp_r4, u8 *, 0xDD) << 8) | M2C_FIELD(temp_r4, u8 *, 0xDC)) & 0x240)) {
            sub_0806DDFC(arg0, temp_r4);
            return;
        }
        goto block_7;
    }
block_7:
    sub_080741A8(arg0);
}
