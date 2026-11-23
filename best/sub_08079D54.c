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
M2C_UNK sub_08075584(void *);                       /* extern */
M2C_UNK sub_080756DC(void *);                       /* extern */
M2C_UNK sub_08075738(void *, s32);                  /* extern */
M2C_UNK sub_0807B388(void *);                       /* extern */

void sub_08079D54(void *arg0) {
    s8 temp_r2;
    u8 temp_r1;

    if (!(M2C_FIELD(arg0, u8 *, 0xDC) & 0x40)) {
        sub_080756DC(arg0);
        sub_08075738(arg0, 0x16);
        return;
    }
    temp_r1 = M2C_FIELD(arg0, u8 *, 0xF1);
    if (!(0x20 & temp_r1)) {
        sub_08075584(arg0);
        M2C_FIELD(arg0, s8 *, 0x51) = 0x10;
        sub_0803800C(arg0, 4, 2);
        sub_0807B388(arg0);
        return;
    }
    if (!(temp_r1 & 0x40)) {
        sub_08075738(arg0, 0x34);
        return;
    }
    temp_r2 = 0x10 & temp_r1;
    if (temp_r2 != 0) {
        sub_08075738(arg0, 0x32);
        return;
    }
    if (temp_r1 & 0x80) {
        M2C_FIELD(arg0, s8 *, 0x2C) = temp_r2;
    } else {
        M2C_FIELD(arg0, s8 *, 0x2C) = (s16) (M2C_FIELD(arg0, u16 *, 6) + 0x18);
    }
    if ((u32) (u16) (*(u16 *)0x03001864 - 0x10) > 1U) {
        sub_0803A8EC(arg0);
    }
}
