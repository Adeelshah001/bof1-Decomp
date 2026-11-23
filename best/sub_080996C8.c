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

M2C_UNK sub_080352D0(s32, s32, s32, u8);            /* extern */
M2C_UNK sub_08038178(void *, s32);                  /* extern */
M2C_UNK sub_08038264(void *);                       /* extern */
M2C_UNK sub_0803EE6C(void *);                       /* extern */
M2C_UNK sub_08099444(void *);                       /* extern */
M2C_UNK sub_0809A540(void *);                       /* extern */
M2C_UNK sub_0809A910(void *);                       /* extern */

void sub_080996C8(void *arg0) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x4C);
    switch (temp_r0) {                              /* irregular */
    case 0:
        sub_0809A910(arg0);
        return;
    case 2:
        sub_08099444(arg0);
        return;
    case 4:
        sub_08038264(arg0);
        sub_08038178(arg0, M2C_FIELD(arg0, s32 *, 0x78));
        if ((M2C_FIELD(arg0, u8 *, 0x61) & 0xF0) != ((u16) M2C_FIELD(arg0, u16 *, 0x44) >> 8)) {
            M2C_FIELD(arg0, s32 *, 0x78) = 0;
            sub_0803EE6C(arg0);
            M2C_FIELD(arg0, s8 *, 0x54) = 0;
            M2C_FIELD((arg0 + 0x54), s8 *, 1) = 0;
            return;
        }
        sub_0809A540(arg0);
        return;
    default:
        sub_080352D0(0x080A7EDC, 0x080A7C18, 0x8BB, M2C_FIELD(arg0, u8 *, 0x4C));
        return;
    }
}
