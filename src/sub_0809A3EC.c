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
M2C_UNK sub_080992F0(void *, s32);                  /* extern */

void sub_0809A3EC(s32 arg0) {
    void *temp_r0;

    temp_r0 = sub_0803ED98();
    if (temp_r0 != NULL) {
        sub_080992F0(temp_r0, arg0);
        M2C_FIELD(temp_r0, s8 *, 0x3A) = 1;
        M2C_FIELD((temp_r0 + 0x3A), s8 *, 0x12) = 4;
    }
}
