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

void *sub_0803F984(u8);                             /* extern */

void sub_0801DB78(u8 arg0) {
    void *temp_r0;

    temp_r0 = sub_0803F984(arg0);
    if ((temp_r0 != NULL) && (M2C_FIELD(temp_r0, u16 *, 0xF6) != 0)) {
        M2C_FIELD(temp_r0, u16 *, 0xF6) = 1U;
    }
}
