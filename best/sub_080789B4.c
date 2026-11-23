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
M2C_UNK sub_08083300(void *, s32);                  /* extern */

void sub_080789B4(void *arg0) {
    void *temp_r1;

    if (M2C_FIELD(arg0, u8 *, 0x50) == 0) {
        if ((8 & M2C_FIELD(arg0, u8 *, 0xF0)) && !(0xF0 & M2C_FIELD(arg0, u8 *, 0xE2))) {
            temp_r1 = M2C_FIELD((void *)0x03004EC0, void **, 4);
            if ((M2C_FIELD(temp_r1, u8 *, 0x3A) != 0) && (M2C_FIELD(temp_r1, u8 *, 0x3C) == 0xE)) {
                M2C_FIELD(temp_r1, s8 *, 0x4C) = 0xA;
            }
        }
        M2C_FIELD(arg0, u8 *, 0x50) = (u8) (M2C_FIELD(arg0, u8 *, 0x50) + 1);
        sub_08083300(arg0, 0x36);
        if (0x80 & M2C_FIELD(arg0, u8 *, 0xF1)) {
            M2C_FIELD(arg0, s8 *, 0x2C) = 0;
        } else {
            M2C_FIELD(arg0, s8 *, 0x2C) = (s16) (M2C_FIELD(arg0, u16 *, 6) + 0x18);
        }
        if ((u32) (u16) (*(u16 *)0x03001864 - 0x10) > 1U) {
            sub_0803A8EC(arg0);
        }
    }
}
