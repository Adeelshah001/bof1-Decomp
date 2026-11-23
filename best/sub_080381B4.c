/* machine draft (m2c) for agbcc -mthumb-interwork -O2, tried by autopilot */
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

u8 sub_08037ED4(void *, u16, u16);                  /* extern */

u8 sub_080381B4(void *arg0, u16 arg1, u16 arg2) {
    u8 temp_r0;

    temp_r0 = sub_08037ED4(arg0, arg1, arg2);
    M2C_FIELD(arg0, u8 *, 0x61) = temp_r0;
    return temp_r0;
}
