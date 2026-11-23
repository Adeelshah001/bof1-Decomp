/* machine draft (m2c) for agbcc -O2, tried by autopilot */
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

void *sub_080A3A38(M2C_UNK, s32);                   /* extern */

void sub_080A3CA0(M2C_UNK arg0, s32 arg1) {
    void *temp_r0;

    temp_r0 = sub_080A3A38(arg0, 1);
    M2C_FIELD(temp_r0, s32 *, 0x14) = arg1;
    M2C_FIELD(temp_r0, s32 *, 0x10) = 1;
}
