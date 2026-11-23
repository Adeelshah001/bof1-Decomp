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

M2C_UNK sub_0805DA14(void *);                       /* extern */
M2C_UNK sub_080839DC(void *);                       /* extern */
M2C_UNK sub_080A0A4C(void *, s32);                  /* extern */

void sub_08084644(void) {
    s32 var_r5;
    s32 var_r6;
    u8 temp_r1;
    u8 temp_r2;
    void *temp_r4;

    var_r6 = 7;
    var_r5 = 0x7FC;
    do {
        temp_r4 = var_r5 + 0x03002AB0;
        if (M2C_FIELD((void *)0x03004F30, u16 *, 0xE) & 0x8000) {
            M2C_FIELD(temp_r4, u8 *, 0xF0) = (u8) (0xEF & M2C_FIELD(temp_r4, u8 *, 0xF0));
        }
        temp_r1 = M2C_FIELD(temp_r4, u8 *, 0xF0);
        temp_r2 = 0x20 & temp_r1;
        if (temp_r2 != 0) {
            M2C_FIELD(temp_r4, u8 *, 0xE2) = (u8) ((0xF0 & M2C_FIELD(temp_r4, u8 *, 0xE2)) + 0x10);
        } else if (8 & temp_r1) {
            M2C_FIELD(temp_r4, u8 *, 0xF0) = (u8) (temp_r1 & 0xF7);
            M2C_FIELD(temp_r4, u8 *, 0x3D) = temp_r2;
            sub_080839DC(temp_r4);
        }
        sub_080A0A4C(temp_r4 + 0xDC, 4);
        sub_0805DA14(temp_r4);
        var_r5 += 0xFFFFFEDC;
        var_r6 -= 1;
    } while (var_r6 >= 0);
    M2C_FIELD((void *)0x03004F30, s8 *, 0xA) = 0;
}
