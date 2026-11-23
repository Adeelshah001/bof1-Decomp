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

M2C_UNK sub_08012744(s32, s16);                     /* extern */

void sub_080104AC(u16 arg0, u16 arg1) {
    void *temp_r0;

    sub_08012744(0x1F, (s16) arg1);
    temp_r0 = *(void **)0x03004154;
    M2C_FIELD(temp_r0, u16 *, 0xB4) = arg0;
    M2C_FIELD(temp_r0, u16 *, 0xB6) = arg1;
}
