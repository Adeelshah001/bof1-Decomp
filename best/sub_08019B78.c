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

void sub_08019B78(u16 arg0) {
    u16 temp_r0;

    temp_r0 = arg0;
    *(s8 *)0x0300485A = (s8) temp_r0;
    *(s8 *)0x0300485B = (s8) (temp_r0 >> 8);
    *(u8 *)0x03002B68 |= 4;
    *(s16 *)0x03004114 = 0;
}
