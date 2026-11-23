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

M2C_UNK sub_0805D634(u8, s32);                      /* extern */
extern u8 sub_0814C2F6;

void sub_08067BC4(void) {
    u32 temp_r0_2;
    u32 temp_r0_3;
    u8 *temp_r0;
    u8 *var_r1;
    u8 temp_r2;

    temp_r2 = M2C_FIELD(M2C_FIELD((void *)0x03004760, void **, 0xC), u8 *, 8);
    if (1 & temp_r2) {
        var_r1 = (u8 *)0x0814C2E8;
    } else if (2 & temp_r2) {
        var_r1 = (u8 *)0x0814C2ED;
    } else if (temp_r2 & 4) {
        var_r1 = (u8 *)0x0814C2F2;
    } else {
        var_r1 = (u8 *)0x0814C2FC;
        if (temp_r2 & 8) {
            var_r1 = &sub_0814C2F6;
        }
    }
    M2C_FIELD((void *)0x0200BAA0, u8 *, 0) = (u8) *var_r1;
    temp_r0 = var_r1 + 1;
    M2C_FIELD((void *)0x0200BAA0, s8 *, 1) = (s8) temp_r0;
    temp_r0_2 = (u32) temp_r0 >> 8;
    M2C_FIELD((void *)0x0200BAA0, s8 *, 2) = (s8) temp_r0_2;
    temp_r0_3 = temp_r0_2 >> 8;
    M2C_FIELD((void *)0x0200BAA0, s8 *, 3) = (s8) temp_r0_3;
    M2C_FIELD((void *)0x0200BAA0, s8 *, 4) = (s8) (temp_r0_3 >> 8);
    sub_0805D634(M2C_FIELD(M2C_FIELD((void *)0x03004760, void **, 0xC), u8 *, 0xF), 0x0200BA20);
    sub_0805D634(M2C_FIELD(M2C_FIELD((void *)0x03004760, void **, 0xC), u8 *, 0xE), 0x0200BA60);
}
