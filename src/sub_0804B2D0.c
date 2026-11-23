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

void *sub_0803ED98();                               /* extern */

void sub_0804B2D0(void *arg0, u16 arg1, u16 arg2) {
    void *temp_r0;

    temp_r0 = sub_0803ED98();
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s8 *, 0x3A) = 1;
        M2C_FIELD(temp_r0, s8 *, 0x3C) = 0x1B;
        M2C_FIELD(arg0, u16 *, 2) = arg1;
        M2C_FIELD(arg0, u16 *, 6) = arg2;
    }
}
