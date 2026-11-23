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

void sub_08028140(void *arg0) {
    u16 temp_r0;
    u16 temp_r1;
    u16 var_r1;

    if ((M2C_FIELD((void *)0x030045B0, u8 *, 1) == 0x44) && ((((temp_r0 = M2C_FIELD(arg0, u16 *, 2), (temp_r0 == 0x1168)) || (var_r1 = M2C_FIELD(arg0, u16 *, 6), (temp_r0 == 0x11A8))) && (var_r1 = M2C_FIELD(arg0, u16 *, 6), ((u32) (u16) (var_r1 + 0xFFFFEF64) <= 0x2FU))) || (((temp_r1 = var_r1, (temp_r1 == 0x108C)) || (temp_r1 == 0x10CC)) && ((u32) (u16) (temp_r0 + 0xFFFFEE88) <= 0x2FU)))) {
        M2C_FIELD(arg0, u8 *, 0xB8) = (u8) (4 | M2C_FIELD(arg0, u8 *, 0xB8));
        M2C_FIELD(arg0, s8 *, 0xBE) = 0;
        *(s8 *)0x0300486F = 0xB;
        *(s8 *)0x03004870 = 0;
    }
}
