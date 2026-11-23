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
M2C_UNK sub_08037FC4(void *, s32);                  /* extern */
M2C_UNK sub_08038178(void *, s32);                  /* extern */
M2C_UNK sub_08038264();                             /* extern */
void *sub_0809568C(void *, s32);                    /* extern */
M2C_UNK sub_08095EFC(void *);                       /* extern */

void sub_08091EF0(void *arg0) {
    u8 temp_r0;

    sub_08038264();
    if (M2C_FIELD(arg0, u8 *, 0x54) & 1) {
        sub_08038178(arg0, M2C_FIELD(arg0, s32 *, 0x78));
        if ((M2C_FIELD(arg0, u8 *, 0x61) & 0xF0) != ((u16) M2C_FIELD(arg0, u16 *, 0x44) >> 8)) {
            sub_080379D4(0x24);
            M2C_FIELD(arg0, u8 *, 0x4C) = (u8) (M2C_FIELD(arg0, u8 *, 0x4C) + 1);
            sub_08037FC4(arg0, 0);
            sub_08095EFC(arg0);
            return;
        }
    }
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r0;
    if (temp_r0 & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x54) = 4U;
        M2C_FIELD(sub_0809568C(arg0, 0xC), s8 *, 0x54) = 6;
    }
}
