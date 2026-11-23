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

M2C_UNK sub_08038128(void *, void *, s32, s32);     /* extern */
M2C_UNK sub_08038264();                             /* extern */
M2C_UNK sub_0809A3B8(void *);                       /* extern */
M2C_UNK sub_0809A3EC(void *);                       /* extern */

void sub_08099264(void *arg0) {
    u8 temp_r0;

    sub_08038264();
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r0;
    if (temp_r0 & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x54) = 3U;
        sub_08038128(arg0, M2C_FIELD(arg0, void **, 0x78), 0x10, 0x10);
        M2C_FIELD(arg0, s8 *, 0x55) = 0;
        if (!(M2C_FIELD(arg0, u8 *, 0x61) & 0xF0) || ((((u16) M2C_FIELD(arg0, u16 *, 0x44) >> 8) & 0xF0) && ((u32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), u8 *, 6) >= (u32) M2C_FIELD(arg0, u8 *, 6)))) {
            sub_0809A3B8(arg0);
            return;
        }
        M2C_FIELD(arg0, u8 *, 0x4C) = (u8) (M2C_FIELD(arg0, u8 *, 0x4C) + 1);
        M2C_FIELD(arg0, s8 *, 0x55) = 2;
        M2C_FIELD(arg0, u8 *, 0x61) = (u8) (((u16) M2C_FIELD(arg0, u16 *, 0x44) >> 8) - 6);
        sub_0809A3EC(arg0);
    }
}
