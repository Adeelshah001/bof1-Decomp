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

M2C_UNK sub_0803800C(void *, s32, s32);             /* extern */
M2C_UNK sub_0803A8EC(void *);                       /* extern */
M2C_UNK sub_080756DC(void *);                       /* extern */
M2C_UNK sub_08075738(void *, s32);                  /* extern */
M2C_UNK sub_0807B388(void *);                       /* extern */
M2C_UNK sub_0808591C(void *, s32);                  /* extern */

void sub_08079BB0(void *arg0) {
    s32 var_r3;
    s8 temp_r2;
    u8 temp_r0;
    u8 temp_r1;
    void *var_r0;
    void *var_r1;
    void *var_r2;

    if (!(M2C_FIELD(arg0, u8 *, 0xDC) & 0x40)) {
        sub_080756DC(arg0);
        var_r2 = (void *)0x03001870;
        var_r3 = 0;
        var_r1 = (void *)0x030018AA;
loop_2:
        if ((M2C_FIELD(var_r1, u8 *, 0) != 0) && (M2C_FIELD(var_r1, u8 *, 2) == 4) && (M2C_FIELD(var_r2, s32 *, 0x78) == arg0) && ((temp_r0 = M2C_FIELD(var_r1, u8 *, 1), (temp_r0 == 8)) || (temp_r0 == 0xA) || (temp_r0 == 0x10))) {
            var_r0 = var_r2;
        } else {
            var_r1 += 0xE0;
            var_r2 += 0xE0;
            var_r3 += 1;
            if (var_r3 > 0xC) {
                var_r0 = NULL;
            } else {
                goto loop_2;
            }
        }
        if (var_r0 == NULL) {
            M2C_FIELD(arg0, s8 *, 0xE3) = 0x14;
            sub_0808591C(arg0, 0x14);
        }
        sub_08075738(arg0, 0x12);
        return;
    }
    temp_r1 = M2C_FIELD(arg0, u8 *, 0xF1);
    if (!(temp_r1 & 0x10)) {
        M2C_FIELD(arg0, s8 *, 0x51) = 0x10;
        sub_0803800C(arg0, 4, 2);
        sub_0807B388(arg0);
        return;
    }
    if (0x20 & temp_r1) {
        sub_08075738(arg0, 0x32);
        return;
    }
    temp_r2 = temp_r1 & 0x40;
    if (temp_r2 == 0) {
        if (temp_r1 & 0x80) {
            M2C_FIELD(arg0, s8 *, 0x2C) = temp_r2;
        } else {
            M2C_FIELD(arg0, s8 *, 0x2C) = (s16) (M2C_FIELD(arg0, u16 *, 6) + 0x18);
        }
        if ((u32) (u16) (*(u16 *)0x03001864 - 0x10) > 1U) {
            sub_0803A8EC(arg0);
        }
    } else {
        sub_08075738(arg0, 0x30);
    }
}
