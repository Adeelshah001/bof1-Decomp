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

void sub_080588F8(void *arg0) {
    void *temp_r3;

    temp_r3 = arg0 + 3;
    M2C_FIELD(temp_r3, s8 *, 1) = 1;
    M2C_FIELD(arg0, s8 *, 3) = 0;
    M2C_FIELD(temp_r3, s8 *, 2) = 1;
    M2C_FIELD(temp_r3, s8 *, 4) = 1;
    *(s8 *)0x030023DC = 1;
    if (M2C_FIELD(temp_r3, s8 *, 3) == 0x2A) {
        *(u16 *)0x03000AD2 = *(u16 *)0x0300168C;
        *(u16 *)0x0300168C = 0xDF;
        *(s16 *)0x03001644 = 0x10;
    }
}
