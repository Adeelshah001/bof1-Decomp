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
s32 sub_0807B2CC();                                 /* extern */
s8 sub_080936A0(void *);                            /* extern */
M2C_UNK sub_08095618(void *);                       /* extern */
M2C_UNK sub_08096CD4(void *);                       /* extern */
M2C_UNK sub_08098294(void *);                       /* extern */

void sub_080924D4(void *arg0) {
    s32 var_r2;
    s8 temp_r0;
    u16 *var_r1;
    u32 temp_r2_2;
    void *temp_r1;
    void *temp_r2;

    if ((sub_0807B2CC() << 0x10) != 0) {
        temp_r2 = M2C_FIELD(arg0, void **, 0x78);
        if (((u16) M2C_FIELD(arg0, u16 *, 0x48) >> 8) != 0) {
            var_r1 = (arg0 + 0x48) - 4;
            M2C_FIELD(temp_r2, u8 *, 6) = (u8) (((u16) *var_r1 >> 8) + M2C_FIELD(temp_r2, u8 *, 6));
        } else {
            var_r1 = arg0 + 0x44;
            M2C_FIELD(temp_r2, u8 *, 2) = (u8) (((u16) M2C_FIELD(arg0, u16 *, 0x44) >> 8) + M2C_FIELD(temp_r2, u8 *, 2));
        }
        temp_r2_2 = (u32) ((~((u16) *var_r1 >> 8) << 0x18) + 0x01000000) >> 0x18;
        *var_r1 = temp_r2_2 << 8;
        if (!(temp_r2_2 & 0x80)) {
            M2C_FIELD(arg0, u16 *, 0x48) = (u16) ((((u16) M2C_FIELD(arg0, u16 *, 0x48) >> 8) ^ 1) << 8);
        }
        var_r2 = 0x50;
        if (M2C_FIELD(arg0, u16 *, 0x2A) == 0x18E) {
            var_r2 = 0x70;
        }
        M2C_FIELD(arg0, s16 *, 0x2C) = (s16) (var_r2 + M2C_FIELD(arg0, u16 *, 6));
        sub_0803A8EC(arg0);
        return;
    }
    temp_r1 = M2C_FIELD(arg0, void **, 0x78);
    M2C_FIELD(temp_r1, u8 *, 2) = (u8) M2C_FIELD(temp_r1, u8 *, 0xE4);
    M2C_FIELD(temp_r1, u8 *, 6) = (u8) M2C_FIELD((temp_r1 + 0xE4), u8 *, 2);
    sub_08098294(arg0);
    M2C_FIELD(arg0, u8 *, 0x4C) = (u8) (M2C_FIELD(arg0, u8 *, 0x4C) + 1);
    temp_r0 = sub_080936A0(arg0);
    if (temp_r0 != 0) {
        sub_08096CD4(arg0);
        return;
    }
    *(s8 *)0x03004FAD = temp_r0;
    sub_08095618(arg0);
}
