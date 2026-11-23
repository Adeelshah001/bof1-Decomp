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

void sub_08027B44(void *arg0, u16 arg2) {
    s8 var_r0;
    u16 temp_r2;

    temp_r2 = arg2;
    switch (temp_r2) {                              /* irregular */
    case 0xC0CC:
        var_r0 = 0x9E;
block_11:
        *(s8 *)0x03004872 = var_r0;
        M2C_FIELD(arg0, u8 *, 0xB8) = (u8) (0x44 | M2C_FIELD(arg0, u8 *, 0xB8));
        *(s8 *)0x0300486F = 6;
        *(s8 *)0x03004870 = 0;
        return;
    case 0xC27C:
        var_r0 = 0x96;
        goto block_11;
    case 0xC2AC:
        var_r0 = 0xC;
        goto block_11;
    case 0xC4FC:
        var_r0 = 2;
        goto block_11;
    }
}
