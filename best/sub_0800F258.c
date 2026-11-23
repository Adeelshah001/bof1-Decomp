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

M2C_UNK sub_08000248(s32);                          /* extern */
M2C_UNK sub_0800312C(s32, s32);                     /* extern */
M2C_UNK sub_080294A8(M2C_UNK);                      /* extern */
M2C_UNK sub_08029EF4(s32);                          /* extern */

void sub_0800F258(void) {
    u8 temp_r0;

    temp_r0 = *(u8 *)0x0300485C - 1;
    *(u8 *)0x0300485C = temp_r0;
    if ((temp_r0 << 0x18) == 0) {
        *(u8 *)0x03003F98 &= 0xDF;
        M2C_FIELD((void *)0x03002430, u16 *, 6) = (u16) M2C_FIELD((void *)0x030023E0, u16 *, 6);
        *(s32 *)0x03004190 = 0x02005810;
        M2C_FIELD((void *)0x03002430, s16 *, 0x38) = 0x3000;
        sub_080294A8(0x03002430);
        sub_08029EF4(*(s32 *)0x03004190);
        sub_08000248(1);
        *(s32 *)0x03004190 = 0x030041B0;
        M2C_FIELD((void *)0x03002430, s16 *, 0x38) = 0x1000;
        sub_0800312C(0x10, 8);
        *(u8 *)0x03002B68 &= 0xFB;
        *(u8 *)0x0300485B += 1;
    }
}
