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

void sub_080210B0(void) {
    u8 temp_r2;

    temp_r2 = M2C_FIELD(*(void **)0x03004154, u8 *, 0x3A);
    if (temp_r2 == 0) {
        *(s8 *)0x0300485A = 1;
        *(u8 *)0x0300485B = temp_r2;
    }
}
