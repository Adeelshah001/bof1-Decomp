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

M2C_UNK sub_08054820(void *, u8);                   /* extern */

void sub_08009978(void) {
    void *temp_r0;

    *(s16 *)0x0300413C = 0;
    temp_r0 = *(void **)0x03002B44;
    M2C_FIELD(temp_r0, s8 *, 0x6F) = 0;
    sub_08054820(temp_r0, (u8) *(s16 *)0x0300413C);
}
