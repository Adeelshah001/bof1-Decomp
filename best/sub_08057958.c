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

void sub_08057958(void *arg0) {
    s8 var_r0;
    u8 temp_r0;
    void *temp_r3;

    temp_r3 = arg0 + 3;
    *(s16 *)0x0300168C = 0xFF;
    temp_r0 = *(u8 *)0x0202DE82;
    if (((u32) temp_r0 > 1U) && ((u32) temp_r0 <= 4U)) {
        var_r0 = 6;
    } else {
        var_r0 = 2;
    }
    *(s8 *)0x03004E9C = var_r0;
    *(u16 *)0x03001620 |= 0x40;
    *(u16 *)0x03001640 |= 0x40;
    *(u16 *)0x030016D0 |= 0x40;
    *(u16 *)0x03001678 |= 0x40;
    M2C_FIELD(arg0, s8 *, 3) = 0;
    M2C_FIELD(temp_r3, s8 *, 1) = 1;
    M2C_FIELD(temp_r3, s8 *, 2) = 2;
    M2C_FIELD(temp_r3, s8 *, 4) = 0x11;
    *(s8 *)0x03004E98 = 0;
    *(s16 *)0x030047FC = 0;
    *(s8 *)0x030023DC = 1;
}
