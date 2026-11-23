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

void sub_08021388(void) {
    if (*(u8 *)0x030023DC != 1) {
        *(s16 *)0x03001670 = 0x100;
        *(s16 *)0x03001644 = 0;
        *(u8 *)0x030023DC = 0;
        *(s8 *)0x0300485C = 0xB4;
        *(u8 *)0x0300485B += 1;
    }
}
