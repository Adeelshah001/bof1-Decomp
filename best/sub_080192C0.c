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

u8 sub_08001770(s32);                               /* extern */
M2C_UNK sub_08003378(s32);                          /* extern */
s32 sub_08005090(s32, s32);                         /* extern */
M2C_UNK sub_08019908();                             /* extern */

void sub_080192C0(void) {
    s16 var_r0;
    u8 temp_r4;

    if (((sub_08005090(0x1DB8, 0xE78C) << 0x18) != 0) || (*(u8 *)0x03002B11 != 0) || ((sub_08001770(0xBE) << 0x18) != 0)) {
        var_r0 = 0;
        goto block_7;
    }
    temp_r4 = sub_08001770(0xAF);
    if (temp_r4 != 0) {
        sub_08019908();
        return;
    }
    sub_08003378(0x2C);
    *(s8 *)0x0300485C = 0x80;
    *(s8 *)0x0300485A = 0x15;
    *(u8 *)0x0300485B = temp_r4;
    *(u8 *)0x03002B68 |= 4;
    var_r0 = 1;
block_7:
    *(s16 *)0x03004114 = var_r0;
}
