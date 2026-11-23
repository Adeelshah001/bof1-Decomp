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

M2C_UNK sub_08003334();                             /* extern */
M2C_UNK sub_08003378(s32);                          /* extern */

void sub_08022CD8(void) {
    s32 var_r4;
    u16 temp_r0;
    u16 temp_r4;

    var_r4 = *(u8 *)0x03004871 | (*(u8 *)0x03004872 << 8);
    if (*(u8 *)0x03004870 == 0) {
        *(u8 *)0x03004871 = 0xE0;
        *(u8 *)0x03004872 = 1;
        var_r4 = 0x1E0;
        sub_08003378(0x28);
        *(u8 *)0x03004870 += 1;
    }
    temp_r0 = var_r4 - 1;
    temp_r4 = temp_r0;
    *(u8 *)0x03004871 = (u8) temp_r4;
    *(u8 *)0x03004872 = (u8) ((u32) (temp_r0 << 0x10) >> 0x18);
    if (temp_r4 == 0) {
        sub_08003334();
        *(u8 *)0x03002B68 &= 0xFB;
        *(s8 *)0x0300486F = (s8) temp_r4;
        *(u8 *)0x03004870 = (u8) temp_r4;
    }
}
