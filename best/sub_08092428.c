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
s32 sub_0807B2CC(void *);                           /* extern */
M2C_UNK sub_08095E78(void *);                       /* extern */
M2C_UNK sub_08095ED8(void *);                       /* extern */
M2C_UNK sub_08096CBC(void *);                       /* extern */
M2C_UNK sub_08097040(void *, s32);                  /* extern */

void sub_08092428(void *arg0) {
    s32 var_r2;
    u8 temp_r0;
    u8 temp_r0_2;
    void *temp_r1;
    void *temp_r1_2;

    temp_r1 = M2C_FIELD(arg0, void **, 0x78);
    M2C_FIELD(temp_r1, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 0x55) + M2C_FIELD(temp_r1, u8 *, 2));
    M2C_FIELD(arg0, u8 *, 0x55) = (u8) ((u32) ((~M2C_FIELD(arg0, u8 *, 0x55) << 0x18) + 0x01000000) >> 0x18);
    if ((sub_0807B2CC(arg0) << 0x10) == 0) {
        temp_r0 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
        M2C_FIELD(arg0, u8 *, 0x54) = temp_r0;
        if (!(temp_r0 & 0x80)) {
            sub_080379D4(0x1B);
            temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x3B);
            if ((temp_r0_2 != 0x16) && (temp_r0_2 == 0x20)) {
                sub_08097040(arg0, 0x48);
                sub_08095ED8(arg0);
                return;
            }
            sub_08097040(arg0, 0x48);
            sub_08095E78(arg0);
            return;
        }
        temp_r1_2 = M2C_FIELD(arg0, void **, 0x78);
        M2C_FIELD(temp_r1_2, u8 *, 2) = (u8) M2C_FIELD(temp_r1_2, u8 *, 0xE4);
        sub_08096CBC(arg0);
        return;
    }
    var_r2 = 0x50;
    if (M2C_FIELD(arg0, u16 *, 0x2A) == 0x18E) {
        var_r2 = 0x70;
    }
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) (var_r2 + M2C_FIELD(arg0, u16 *, 6));
    sub_0803A8EC(arg0);
}
