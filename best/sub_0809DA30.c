/* machine draft (m2c) for agbcc -O2, tried by autopilot */
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

void sub_0809DA30(void) {
    u16 temp_r0;

    temp_r0 = *(u16 *)0x03005000 - 1;
    *(u16 *)0x03005000 = temp_r0;
    if ((temp_r0 << 0x10) == 0) {
        M2C_FIELD((void *)0x03004410, u8 *, 0xF) = (u8) (M2C_FIELD((void *)0x03004410, u8 *, 0xF) + 1);
    }
}
