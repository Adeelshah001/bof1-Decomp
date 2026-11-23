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

void sub_080275BC(void) {
    u16 var_r1;

    var_r1 = *(u16 *)0x03004E0C + 0xFFFFF7C0;
    if ((u32) var_r1 <= 0x2D5FU) {
        *(s8 *)0x03004872 = 0;
        var_r1 = 0x2D60;
    }
    *(u16 *)0x03004E0C = var_r1;
}
