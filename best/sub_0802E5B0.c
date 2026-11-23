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

M2C_UNK sub_0802E628(void *);                       /* extern */
M2C_UNK sub_08033B38(void *, u8);                   /* extern */
M2C_UNK sub_080379D4(s32);                          /* extern */

void sub_0802E5B0(void *arg0) {
    u8 temp_r0;
    u8 temp_r1;

    temp_r1 = (M2C_FIELD(arg0, u8 *, 0x3F) - 0xC) * 2;
    M2C_FIELD(arg0, u16 *, 2) = (u16) (M2C_FIELD(arg0, u16 *, 2) + M2C_FIELD(((temp_r1 * 4) + 0x080FA01C), u16 *, 2));
    M2C_FIELD(arg0, u16 *, 6) = (u16) (M2C_FIELD(arg0, u16 *, 6) + M2C_FIELD((((temp_r1 + 1) * 4) + 0x080FA01C), u16 *, 2));
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x55) - 1;
    M2C_FIELD(arg0, u8 *, 0x55) = temp_r0;
    if (temp_r0 & 0x80) {
        sub_0802E628(arg0);
        M2C_FIELD(arg0, u8 *, 0x61) = (u8) (M2C_FIELD(arg0, u8 *, 0x3F) - 0xC);
        sub_08033B38(arg0, M2C_FIELD(arg0, u8 *, 0x61));
        M2C_FIELD(arg0, s8 *, 0x54) = 0x1F;
        sub_080379D4(0x2B);
        M2C_FIELD(arg0, s8 *, 0x50) = 6;
    }
}
